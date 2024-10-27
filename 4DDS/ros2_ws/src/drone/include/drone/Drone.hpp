#pragma once 

#include <Eigen/Dense>
#include <rclcpp/rclcpp.hpp>
#include <px4_msgs/msg/sensor_gps.hpp>
#include <px4_msgs/srv/vehicle_command.hpp>
#include <px4_msgs/msg/vehicle_local_position.hpp>
#include <px4_msgs/msg/offboard_control_mode.hpp>
#include <px4_msgs/msg/trajectory_setpoint.hpp>

#include "parameters/Parameters.hpp"
#include "obstacle_avoidance/ObstacleAvoidance.hpp"
#include "target_detection/TargetDetection.hpp"
#include "fdds_messages/msg/geo_ping.hpp"
#include "fdds_messages/msg/flocking.hpp"
#include "drone/geo.hpp"

using namespace std::chrono_literals;

namespace fdds
{
    /// A simple enumerator to keep track of the current state of the vehicle.
    enum class VehicleState
    {
        Init,
        OffboardRequested,
        WaitForStableOffboard,
        ArmRequested,
        Armed
    };


    /// A ROS2 Node associated to a single UAV vehicle.
    class Drone : public rclcpp::Node
    {
    public:

        /// @brief Builds a ROS2 node associated to a single vehicle.
        /// @param id The id of the vehicle that will be associated to this node.
        /// @param options_ Options for flocking and controller.
        /// @returns An initialized instance of a Drone ROS2 Node.
        Drone(const int id,
                const Parameters& options_) : Node("UAV_" + std::to_string(id)),              
                                        vehicleId(id),                                  
                                        vehicleNamespace("/px4_" + std::to_string(id)), 
                                        options(options_),                              
                                        obstacleAvoidanceModule{vehicleNamespace + "_rplidar/out", options_, *this},
                                        targetDetectionModule{vehicleNamespace + "_camera/camera/image_raw/compressed", options_, *this}
        {
            if (id > 255 || id < 1)
            {
                RCLCPP_ERROR_STREAM(get_logger(), "Invalid ID: " << id);
                return;
            }
            initialize(); 
        }
        
        /// Deleting the default constructor, since a vehicle id is always needed.
        Drone() = delete;
        
        /// Deleting the copy constructor.
        Drone(const Drone&) = delete;

        /// Deleting the copy assignment operator.
        Drone& operator=(const Drone&) = delete;

        /// Deleting the move constructor.
        Drone(Drone&&) = delete;

        /// Deleting the move assignment operator.
        Drone& operator=(Drone&&) = delete;

        /// The type of this vehicle
        std::string vehicleType;

    private:

        /// The ID of the vehicle associated to this node. Must be between 1 and 255 (both included).
        const uint8_t vehicleId;
        
        /// The namespace of this vehicle in ROS2 topics.
        std::string vehicleNamespace;

        const Parameters& options;

        fdds::ObstacleAvoidance obstacleAvoidanceModule;
        fdds::TargetDetection targetDetectionModule;

        

        bool takeoff{false};

        /// Target system of certain messages. 0 is broadcast but usually the messages are 
        /// published on a namespace containing only the target vehicle. 
        static constexpr uint8_t target_system_ = 0;

        /// Parts of the messages we don't really care about.
        static constexpr uint8_t target_component_ = 1;
        static constexpr uint8_t source_system_ = 255;
        static constexpr uint8_t source_component_ = 0;
        static constexpr uint8_t confirmation_ = 1;
        static constexpr bool from_external_ = true;

        /// Defines the number of parameters in a px4_msgs::msg::VehicleCommand message.
        static constexpr size_t COMMAND_PARAMS_LENGTH = 7;

        Eigen::Vector2d latLonDegrees = Eigen::Vector2d::Zero();

        Eigen::Vector2d latLonMetres = Eigen::Vector2d::Zero();

        Eigen::Vector2d homeLatLonDegrees = Eigen::Vector2d::Zero();

        /// Current absolute altitude in metres.
        double absAltitudeMetres = 0.0f;

        /// Absolute altitude of spawn.
        double homeAbsAltitudeMetres = 0.0f;

        // Current NE position according to odometry estimation of PX4 Extended Kalman Filter.
        Eigen::Vector2d odometryPositionMetres = Eigen::Vector2d::Zero();

        /// Current Down position with respect to vehicle home.
        double odometryZDownMetres = 0.0f;

        /// Current Down velocity.
        double velocityZDown = 0.0f;

        /// Current yaw in radians with respect to the global NED frame.
        double yawRadians = 0.0f;

        /// Vector to follow for cohesion.
        Eigen::Vector2d cohesion = Eigen::Vector2d::Zero();
        
        // Vector to follow for alignment.
        Eigen::Vector2d alignment = Eigen::Vector2d::Zero();
        
        // Vector to follow for separation.
        Eigen::Vector2d separation = Eigen::Vector2d::Zero();

        /// Current speed of the vehicle in NED coordinates.
        Eigen::Vector2d currentSpeed = Eigen::Vector2d::Zero();

        /// Current state of the vehicle.
        VehicleState vehicleState;

        /// Result of the last service call.
        uint8_t serviceResult = 0;

        /// Whether the last service call has failed or not.
        bool serviceDone = false;

        /// How many times the controller logic has already been executed.
        uint64_t cycles = 0;

        /// Subscriber for GPS position.
        rclcpp::Subscription<px4_msgs::msg::SensorGps>::SharedPtr vehicleGlobalPositionSubscription;
        
        /// Subscriber for vehicle local position in global-local NED frame with origin at home latitude/longitude.
        rclcpp::Subscription<px4_msgs::msg::VehicleLocalPosition>::SharedPtr vehicleLocalPositionSubscription;

        /// Subscriber for center of mass of this node neighbors.
        //rclcpp::Subscription<boids::msg::FlockCenterOfMass>::SharedPtr flockCenterOfMassSubscription;
        rclcpp::Subscription<fdds_messages::msg::Flocking>::SharedPtr flockingSubscription;

        /// Publisher of vehicle commands.
        rclcpp::Publisher<px4_msgs::msg::VehicleCommand>::SharedPtr vehicleCommandPublisher;

        /// Publisher of trajectory setpoints (NED global-local coordinates, same as vehicle odometry).
        rclcpp::Publisher<px4_msgs::msg::TrajectorySetpoint>::SharedPtr vehicleTrajectoryPublisher;

        /// Publisher of offboard control heartbeats.
        rclcpp::Publisher<px4_msgs::msg::OffboardControlMode>::SharedPtr heartbeatsPublisher;

        /// Publisher of geographical pings to be sent to the master of the swarm.
        rclcpp::Publisher<fdds_messages::msg::GeoPing>::SharedPtr geoPingPublisher;

        rclcpp::Publisher<fdds_messages::msg::GeoPing>::SharedPtr targetPositionPublisher;

        /// Client of VehicleCommand service.
        rclcpp::Client<px4_msgs::srv::VehicleCommand>::SharedPtr vehicleCommandClient;

        rclcpp::Subscription<sensor_msgs::msg::CompressedImage>::SharedPtr vehicleCameraSubscription;

        /// Timer to execute in loop the controller logic.
        rclcpp::TimerBase::SharedPtr controllerLoopTimer;

        rclcpp::TimerBase::SharedPtr detectionTimer;


        /// @brief Initializes the data structures of the node and starts the controller loop.
        void initialize();

        /// @brief Takes care of arming and taking the UAV to the desired height.
        void bootstrap();

        /// @brief Contains the main logic for the flocking behavior.
        void flockingLogic();

        /// @brief Sends a heartbeat to the vehicle to signal that offboard control is needed.
        void heartbeat();

        /// @brief Asks the vehicle to switch to offboard control mode.
        void requestOffboardControl();

        /// @brief Asks the vehicle to switch to armed.
        void requestArm();

        void detectTargets();

        /// @brief Asks the vehicle to takeoff at the current position.
        void requestTakeoff(float value);

        /// @brief Requests a generic command and binds a callback to retrieve the result asynchronously.
        void requestCommand(const uint32_t command, const std::array<float, COMMAND_PARAMS_LENGTH>& params);

        /// @brief Asks the vehicle to reach a certain coordinates in its global-local NED frame.
        void sendGoto(const Eigen::Vector2d& location, float value);

        /// @brief Sets the velocity of the vehicle.
        void sendVelocity(const Eigen::Vector2d& velocity, float value);

        /// @brief Sends a GeoPing to the swarm master node.
        void sendGeoPing();

        /// @brief Checks if there is an obstacle.
        inline bool obstaclePresent();

        /// @brief Callback to handle incoming GPS data.
        void gpsSubscriptionCallback(px4_msgs::msg::SensorGps::ConstSharedPtr msg);

        /// @brief Callback to handle incoming odometry data.        
        void localPositionSubscriptionCallback(px4_msgs::msg::VehicleLocalPosition::ConstSharedPtr msg);
        
        /// @brief Callback to handle incoming LiDAR data.
        void rpLidarSubscriptionCallback(sensor_msgs::msg::LaserScan::ConstSharedPtr msg);

        void publishTargetPosition();

        void flockingSubscriptionCallback(fdds_messages::msg::Flocking::ConstSharedPtr msg);
        
        /// @brief Callback to handle incoming info about the status of the last sent VehicleCommand.
        void commandResponseCallback(std::shared_future<px4_msgs::srv::VehicleCommand::Response::SharedPtr> future);
    };
};