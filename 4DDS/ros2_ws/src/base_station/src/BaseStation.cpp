#include "base_station/BaseStation.hpp"

using namespace std::chrono_literals;

/**
 * @brief Initializes the subscriber of GeoPing messages and the vector of publishers of FlockCenterOfMass messages.
*/
void fdds::BaseStation::initialize()
{
    const auto geo_pings_topic = "/swarm/geopings";
    const auto neighbors_subtopic = "/flocking";

    rclcpp::QoS qos_profile(10);
    qos_profile.best_effort();

    for (int i = 0; i < swarmSize; i++)
    {
        swarmPositions.push_back(Eigen::Vector2d{0.0, 0.0});
        swarmSpeeds.push_back(Eigen::Vector2d{0.0, 0.0});
        const std::string px4_namespace = "/px4_" + std::to_string(i + 1) + neighbors_subtopic;
        flockingPublishers.push_back(create_publisher<fdds_messages::msg::Flocking>(px4_namespace, qos_profile));
    }

    const auto geo_ping_callback = std::bind(&BaseStation::geoPingCallback, this, std::placeholders::_1);
    geoPingsSubscription = create_subscription<fdds_messages::msg::GeoPing>(geo_pings_topic, qos_profile, geo_ping_callback);

    RCLCPP_INFO(get_logger(), "Ready");
}


/**
 * @brief Handles a single incoming GeoPing message.
 * 
 * @details A GeoPing message contains the vehicle ID and its current GPS position in metres.
 * The BaseStation will update the position of the drone in the swarmPositions vector and then
 * will advertise the center of mass of the drone neighbors using a FlockCenterOfMass message.
 * 
 * @param msg An incoming GeoPing message.
*/
void fdds::BaseStation::geoPingCallback(fdds_messages::msg::GeoPing::ConstSharedPtr msg)
{
    Eigen::Vector2d drone_position{msg->latitude_m, msg->longitude_m};
    Eigen::Vector2d drone_speed{msg->speed_north_m_s, msg->speed_east_m_s};
    swarmPositions[msg->vehicle_id - 1] = drone_position;
    swarmSpeeds[msg->vehicle_id - 1] = drone_speed;

    int num_cohesion = 0;
    Eigen::Vector2d cohesion = Eigen::Vector2d::Zero();

    int num_alignment = 0;
    Eigen::Vector2d alignment = Eigen::Vector2d::Zero();

    int num_separation = 0;
    Eigen::Vector2d separation = Eigen::Vector2d::Zero();

    for (int i = 0; i < swarmSize; i++)
    {
        const auto& drone_i_position = swarmPositions[i];
        const auto& drone_i_speed = swarmSpeeds[i];

        const auto distance = (drone_i_position - drone_position).norm();

        if (distance < options.avoidanceRadius && i != msg->vehicle_id - 1)
        {
            separation += (options.avoidanceRadius - distance)*(drone_position - drone_i_position).normalized();
            num_separation++;
        }

        else if (distance < options.cohesionRadius)
        {
            cohesion += drone_i_position;
            num_cohesion++;
        }

        if (distance < options.alignmentRadius)
        {
            alignment += drone_i_speed;
            num_alignment++;
        }
    }

    if (num_cohesion != 0) 
    {
        cohesion /= num_cohesion;
        cohesion -= drone_position;
    }

    if (num_alignment != 0)
    {
        alignment /= num_alignment;
    }

    if (num_separation != 0)
        separation /= num_separation;
    
    advertiseFlocking(msg->vehicle_id, cohesion, alignment, separation);
}


/**
 * @brief Sends a Flocking message.
 * 
 * @details Only a single vehicle will receive the message, since it is published in a /px4_X
 * namespace where X is the ID of the vehicle.
*/
void fdds::BaseStation::advertiseFlocking(const int vehicle_id, const Eigen::Vector2d& cohesion, const Eigen::Vector2d& alignment, const Eigen::Vector2d& separation)
{
    fdds_messages::msg::Flocking msg;
    msg.cohesion_x = cohesion(0);
    msg.cohesion_y = cohesion(1);
    msg.alignment_x = alignment(0);
    msg.alignment_y = alignment(1);
    msg.separation_x = separation(0);
    msg.separation_y = separation(1);
    flockingPublishers[vehicle_id - 1]->publish(msg);
}

int main(int argc, char ** argv)
{
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	
	/// The swarm size. Retrieved from the first command line argument.
	int how_many = std::stoi(argv[1]);

    auto options = fdds::loadOptions(false);

	auto executor = rclcpp::executors::MultiThreadedExecutor{rclcpp::ExecutorOptions(), 16}; //< adjust the number of threads as needed or leave empty

	// spawns one BaseStation instance, passing the swarm size, then adds it to the nodes vector and executor
	const auto base_station = std::make_shared<fdds::BaseStation>(how_many, options);
	// use simulation time if possible (ros-gz clock is needed externally) 
	const auto use_sim_time = rclcpp::Parameter{"use_sim_time", true};
    base_station->set_parameter(use_sim_time);

    executor.add_node(base_station);
	
	// let the executor spin indefinitely
	executor.spin();

	rclcpp::shutdown();
	return 0;
}
