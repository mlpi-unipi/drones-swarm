#include "StigmergyMap.hpp"

int main(int argc, char *argv[])
{
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);

	auto executor = rclcpp::executors::MultiThreadedExecutor{rclcpp::ExecutorOptions(), 16}; //< adjust the number of threads as needed or leave empty
	
	const auto stigmergy_map = std::make_shared<StigmergyMap>();
	executor.add_node(stigmergy_map);

	// use simulation time if possible (ros-gz clock is needed externally) 
	const auto use_sim_time = rclcpp::Parameter{"use_sim_time", true};
	
	// let the executor spin indefinitely
	executor.spin();

	rclcpp::shutdown();
	return 0;
}
