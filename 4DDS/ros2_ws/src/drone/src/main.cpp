#include "drone/Drone.hpp"
#include "parameters/Parameters.hpp"

int main(int argc, char *argv[])
{
	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
	rclcpp::init(argc, argv);
	
	/// The swarm size. Retrieved from the first command line argument.
	int how_many = std::stoi(argv[1]);

	std::cout << "Spawning " << how_many << " nodes..." << std::endl;

    auto parameters = fdds::loadOptions(true);

	auto executor = rclcpp::executors::MultiThreadedExecutor{rclcpp::ExecutorOptions(), 16}; //< adjust the number of threads as needed or leave empty
	
	// the vector of nodes is needed to avoid automatic deallocation of nodes
	std::vector<std::shared_ptr<rclcpp::Node>> nodes;

	// use simulation time if possible (ros-gz clock is needed externally) 
	const auto use_sim_time = rclcpp::Parameter{"use_sim_time", true};
	
	// spawn 'how_many' UavNode and add to the nodes vector and executor
	for (int node_id = 1; node_id < how_many + 1; node_id++) 
	{
		const auto node = std::make_shared<fdds::Drone>(node_id, parameters);
		node->set_parameter(use_sim_time);

		node->vehicleType = argv[2]; //Setto il tipo del veicolo
		std::cout << "Tipo di veicolo: " <<node->vehicleType<< "\n";

		nodes.push_back(node);
		executor.add_node(node);
	}
	
	// let the executor spin indefinitely
	executor.spin();

	rclcpp::shutdown();
	return 0;
}
