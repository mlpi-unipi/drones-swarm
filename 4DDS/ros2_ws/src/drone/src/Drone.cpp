#include "drone/Drone.hpp"

/**
 * @brief Initializes the data structures of the node and starts the controller loop.
 * 
 * @details Creates all the subscriptions, publishers and clients and starts the main controller loop.
 * This method will wait (and possibly hang) if the VehicleCommand client is not ready for service.
*/
void fdds::Drone::initialize()
{
    RCLCPP_INFO(get_logger(), "Woke up, init started");
    rclcpp::QoS qos_profile(10);
    qos_profile.best_effort();   //< never change this
    
    const auto gps_callback = std::bind(&Drone::gpsSubscriptionCallback, this, std::placeholders::_1);
    vehicleGlobalPositionSubscription = create_subscription<px4_msgs::msg::SensorGps>(
        vehicleNamespace + "/fmu/out/vehicle_gps_position",
        qos_profile,
        gps_callback
    );

    const auto local_position_callback = std::bind(&Drone::localPositionSubscriptionCallback, this, std::placeholders::_1);
    vehicleLocalPositionSubscription = create_subscription<px4_msgs::msg::VehicleLocalPosition>(
        vehicleNamespace + "/fmu/out/vehicle_local_position",
        qos_profile,
        local_position_callback
    );
    
    const auto flocking_callback = std::bind(&Drone::flockingSubscriptionCallback, this, std::placeholders::_1);
    flockingSubscription = create_subscription<fdds_messages::msg::Flocking>(
            vehicleNamespace + "/flocking",
            qos_profile,
            flocking_callback
    ); 

    vehicleCommandPublisher = create_publisher<px4_msgs::msg::VehicleCommand>(
        vehicleNamespace + "/fmu/in/vehicle_command", 
        qos_profile
    );

    vehicleTrajectoryPublisher = create_publisher<px4_msgs::msg::TrajectorySetpoint>(
        vehicleNamespace + "/fmu/in/trajectory_setpoint",
        qos_profile
    );

    heartbeatsPublisher = create_publisher<px4_msgs::msg::OffboardControlMode>(
        vehicleNamespace + "/fmu/in/offboard_control_mode",
        qos_profile
    );

    geoPingPublisher = create_publisher<fdds_messages::msg::GeoPing>(
        "/swarm/geopings",
        qos_profile
    );

    targetPositionPublisher = create_publisher<fdds_messages::msg::GeoPing>(
        "/target_position",
        qos_profile
    );

    vehicleCommandClient = create_client<px4_msgs::srv::VehicleCommand>(vehicleNamespace + "/fmu/vehicle_command");

    RCLCPP_INFO(get_logger(), "Waiting for command service");
    while (!vehicleCommandClient->wait_for_service(1s)) 
    {
        if (!rclcpp::ok()) 
        {
            RCLCPP_ERROR(get_logger(), "Interrupted while waiting for the service. Exiting.");
            return;
        }

        RCLCPP_INFO(get_logger(), "Service not available, waiting again...");
    }

    vehicleState = VehicleState::Init;
    controllerLoopTimer = create_wall_timer(std::chrono::milliseconds(options.controllerTimerMs), std::bind(&Drone::bootstrap, this));
    detectionTimer = create_wall_timer(750ms, std::bind(&Drone::detectTargets, this));
}


/**
 * @brief Enters offboard mode, arms the vehicle, then proceeds to execute the logic for flocking.
 * 
 * @details This is the callback of the controllerLoopTimer, so it will be executed every 100ms. 
*/
void fdds::Drone::bootstrap()
{
    cycles++;
    heartbeat();
    if (cycles < 5) //at the beginning send a bunch of heartbeats and trajectory setpoints (PX4 seems to want this before entering offboard)
    {
        sendGoto(Eigen::Vector2d{});
        return;
    }
    
    switch (vehicleState)
	{
        case VehicleState::Init:
            RCLCPP_INFO(get_logger(), "Requesting switch to offboard mode");
	        requestOffboardControl();
            vehicleState = VehicleState::OffboardRequested;
            break;
        
        case VehicleState::OffboardRequested:
            if(serviceDone && serviceResult == 0)
            {
                cycles = 5;
                RCLCPP_INFO(get_logger(), "Entered offboard mode");
                vehicleState = VehicleState::WaitForStableOffboard;				
            }
            else
            {
                RCLCPP_ERROR(get_logger(), "Failed to enter onboard mode, retrying");
                vehicleState = VehicleState::Init;
                serviceDone = false;
                serviceResult = 0;
            }
            break;

        case VehicleState::WaitForStableOffboard :
            if (cycles > 25) //< wait some time before requesting to arm
            {
                RCLCPP_INFO(get_logger(), "Requesting arm");
	            requestArm();
                vehicleState = VehicleState::ArmRequested;
            }
            break;

        case VehicleState::ArmRequested :
            if(serviceDone && serviceResult == 0)
            {
                RCLCPP_INFO(get_logger(), "vehicle is armed");
                vehicleState = VehicleState::Armed;
            } 
            else
            {
                RCLCPP_ERROR(get_logger(), "Failed to arm, retrying");
                vehicleState = VehicleState::ArmRequested;
                serviceDone = false;
                serviceResult = 0;
                requestArm();
            }
            break;

        case VehicleState::Armed:
            flockingLogic();
            break;
	}
}


void fdds::Drone::detectTargets()
{
    if (targetDetectionModule.tick() > 0)
    {
        publishTargetPosition();
    } 
}


/**
 * @brief Logic of flocking behavior.
 * 
 * @details First, the vehicle sends a GeoPing message to the BaseStation node. The message contains the vehicle GPS position and is needed
 * by the BaseStation to update its map of the swarm. After taking care of takeoff, the logic checks if there is an obstacle. Avoiding
 * obstacles currently has precedence over cohesion and alignment behavior, so if there is an obstacle at range less than the safety
 * distance the drone will only move to reach a safe state away from the obstacle. If there is not an obstacle, then the vehicle will
 * use the data sent by the BaseStation about the center of mass of its neighbors, and adjust its position (if needed) to move towards
 * the center of mass of its neighbors, fulfilling the cohesive behavior. The center of mass is currently already computed by the BaseStation 
 * and sent in the FlockCenterOfMass message, but for more complex behavior we could introduce a new message containing the list vehicles 
 * positions in the vicinity of this drone.
*/
void fdds::Drone::flockingLogic()
{    
    heartbeat();
    
    if (-odometryZDownMetres < -options.desiredRelativeAltitude - 0.5) 
    {
        requestTakeoff();  //chiede al dorne di alzarsi 
        sendGeoPing();
        takeoff = false;
        return;
    }
    else
        takeoff = true;
    
    Eigen::Vector2d velocity = Eigen::Vector2d::Zero();

    Eigen::Rotation2Df rotation_matrix{yawRadians};
    Eigen::Vector2f avoidanceForce{rotation_matrix*obstacleAvoidanceModule.tick()};

    Eigen::Vector2d force{avoidanceForce(0), avoidanceForce(1)};

    velocity -= force*options.avoidanceFactor;
    
    velocity += options.cohesionFactor*cohesion;

    velocity += options.alignmentFactor*alignment;

    velocity += options.avoidanceFactor*separation;

    currentSpeed = velocity;
    
    // check max speed constraint
    double currentNorm = currentSpeed.norm();
    if (currentNorm > options.maxSpeed) 
    {
        double scale = options.maxSpeed / currentNorm;
        currentSpeed *= scale;
    }

    sendVelocity(currentSpeed);

    sendGeoPing();
}


void fdds::Drone::publishTargetPosition()
{
    fdds_messages::msg::GeoPing msg;
    msg.latitude_m = latLonMetres(0);
    msg.longitude_m = latLonMetres(1);
    msg.vehicle_id = vehicleId;
    msg.speed_north_m_s = currentSpeed(0);
    msg.speed_east_m_s = currentSpeed(1);
    targetPositionPublisher->publish(msg);
}


/**
 * @brief Send a heartbeat to the drone, to communicate that offboard control is needed.
 * 
 * @details Heartbeats should be paired with TrajectorySetPoint messages. Also, heartbeats
 * should be sent at least with a frequency of 2Hz.
*/
void fdds::Drone::heartbeat()
{
    px4_msgs::msg::OffboardControlMode msg;
    msg.position = true;
    msg.acceleration = false;
    msg.velocity = true;
    msg.attitude = true;
    msg.body_rate = false;
    msg.direct_actuator = false;
    msg.thrust_and_torque = false;
    msg.timestamp = get_clock()->now().nanoseconds() / 1000;
    heartbeatsPublisher->publish(msg);
}
 

/**
 * @brief Asks the vehicle to reach a certain coordinate in its global-local NED frame.
 * 
 * @details This does not command velocity.
*/
void fdds::Drone::sendGoto(const Eigen::Vector2d& location)
{
    px4_msgs::msg::TrajectorySetpoint msg;
    msg.position = std::array<float, 3>{float(location(0)), float(location(1)), float(options.  )};
    msg.timestamp = get_clock()->now().nanoseconds() / 1000;
    vehicleTrajectoryPublisher->publish(msg);
}


/**
 * @brief Asks the vehicle to reach a certain NE velocity in its global-local NED frame.
 * 
 * @details D (Down) velocity control is left to PX4.
*/
void fdds::Drone::sendVelocity(const Eigen::Vector2d& velocity)
{
    px4_msgs::msg::TrajectorySetpoint msg;
    msg.position = std::array<float, 3>{NAN, NAN, float(options.desiredRelativeAltitude)};
    msg.velocity = std::array<float, 3>{float(velocity(0)), float(velocity(1)), NAN};
    msg.timestamp = get_clock()->now().nanoseconds() / 1000;
    vehicleTrajectoryPublisher->publish(msg);
}


/**
 * @brief Sends a GeoPing message to the BaseStation. 
*/
void fdds::Drone::sendGeoPing()
{
    fdds_messages::msg::GeoPing msg;
    msg.latitude_m = latLonMetres(0);
    msg.longitude_m = latLonMetres(1);
    msg.vehicle_id = vehicleId;
    msg.speed_north_m_s = currentSpeed(0);
    msg.speed_east_m_s = currentSpeed(1);
    geoPingPublisher->publish(msg);
}


void fdds::Drone::flockingSubscriptionCallback(fdds_messages::msg::Flocking::ConstSharedPtr msg)
{
    cohesion = Eigen::Vector2d{msg->cohesion_x, msg->cohesion_y};
    alignment = Eigen::Vector2d{msg->alignment_x, msg->alignment_y};
    separation = Eigen::Vector2d{msg->separation_x, msg->separation_y};
}

/**
 * @brief Updates the current latitude and longitude, both in degrees and metres.
*/
void fdds::Drone::gpsSubscriptionCallback(px4_msgs::msg::SensorGps::ConstSharedPtr msg)
{
    latLonDegrees = {msg->latitude_deg, msg->longitude_deg};
    latLonMetres = {geo::latitudeDegToMetres(msg->latitude_deg), geo::longitudeDegToMetres(msg->latitude_deg, msg->longitude_deg)};
    absAltitudeMetres = msg->altitude_msl_m;
}


/**
 * @brief Updates the current position in the global-local NED frame.
 * 
 * @details The D (Down) velocity and home GPS position are currently unneeded but are still updated just in case.
*/
void fdds::Drone::localPositionSubscriptionCallback(px4_msgs::msg::VehicleLocalPosition::ConstSharedPtr msg)
{
    yawRadians = msg->heading;
    odometryPositionMetres = {msg->x, msg->y};
    odometryZDownMetres = msg->z;
    velocityZDown = msg->vz;
    homeLatLonDegrees = {msg->ref_lat, msg->ref_lon};
    homeAbsAltitudeMetres = msg->ref_alt;
}


/**
 * @brief Sends a TrajectorySetpoint message asking to reposition at the current position of the global-local NED frame, at desiredRelAltitudeMetres.
*/
void fdds::Drone::requestTakeoff()
{
    sendGoto(odometryPositionMetres);
}


/**
 * @brief Requests the vehicle to arm (needed before takeoff).
*/
void fdds::Drone::requestArm()
{
    static constexpr std::array<float, COMMAND_PARAMS_LENGTH> params{1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    requestCommand(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_COMPONENT_ARM_DISARM, params);
}


/**
 * @brief Requests the vehicle to enter offboard control mode.
*/ 
void fdds::Drone::requestOffboardControl()
{
    static constexpr std::array<float, COMMAND_PARAMS_LENGTH> params{1.0, 6.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    requestCommand(px4_msgs::msg::VehicleCommand::VEHICLE_CMD_DO_SET_MODE, params);
}


/**
 * @brief Requests the vehicle to perform a certain action, and asynchronously checks whether the vehicle accepted or rejected the command.
*/
void fdds::Drone::requestCommand(const uint32_t command, const std::array<float, 7>& params)
{
    size_t param_index = 0;

    auto request = std::make_shared<px4_msgs::srv::VehicleCommand::Request>();
    px4_msgs::msg::VehicleCommand msg;

    msg.timestamp = get_clock()->now().nanoseconds() / 1000;

    msg.command = command;

    msg.param1 = params[param_index++];
    msg.param2 = params[param_index++];
    msg.param3 = params[param_index++];
    msg.param4 = params[param_index++];
    msg.param5 = params[param_index++];
    msg.param6 = params[param_index++];
    msg.param7 = params[param_index++];

    msg.confirmation = confirmation_;
    msg.source_system = source_system_;
    msg.target_system = 0;
    msg.source_component = source_component_;
    msg.target_component = target_component_;
    msg.from_external = from_external_;
    request->request = msg;

    serviceDone = false;
	auto result = vehicleCommandClient->async_send_request(request, std::bind(&Drone::commandResponseCallback, this, std::placeholders::_1));
	RCLCPP_INFO(get_logger(), "Command send");
}


/**
 * @brief Updates the result of the last command sent to the vehicle.
 * 
 * @details This is useful to understand if the vehicle is currently refusing to be armed, if it refuses to enter offboard control, etc.
*/
void fdds::Drone::commandResponseCallback(std::shared_future<px4_msgs::srv::VehicleCommand::Response::SharedPtr> future) 
{
    const auto status = future.wait_for(100ms);
    if (status == std::future_status::ready) 
    {
	    auto reply = future.get()->reply;
	    serviceResult = reply.result;
        switch (serviceResult)
        {
            case reply.VEHICLE_CMD_RESULT_ACCEPTED:
                RCLCPP_INFO(get_logger(), "command accepted");
                break;
            case reply.VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED:
                RCLCPP_WARN(get_logger(), "command temporarily rejected");
                break;
            case reply.VEHICLE_CMD_RESULT_DENIED:
                RCLCPP_WARN(get_logger(), "command denied");
                break;
            case reply.VEHICLE_CMD_RESULT_UNSUPPORTED:
                RCLCPP_WARN(get_logger(), "command unsupported");
                break;
            case reply.VEHICLE_CMD_RESULT_FAILED:
                RCLCPP_WARN(get_logger(), "command failed");
                break;
            case reply.VEHICLE_CMD_RESULT_IN_PROGRESS:
                RCLCPP_WARN(get_logger(), "command in progress");
                break;
            case reply.VEHICLE_CMD_RESULT_CANCELLED:
                RCLCPP_WARN(get_logger(), "command cancelled");
                break;
            default:
                RCLCPP_WARN(get_logger(), "command reply unknown");
                break;
        }

        serviceDone = true;
    } 
    
    else 
    {
      RCLCPP_INFO(get_logger(), "Service In-Progress...");
    }
}