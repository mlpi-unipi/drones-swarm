#include "stigmergy/StigmergyMap.hpp"

int main(int argc, char *argv[])
{
    // Inizializza ROS2
    rclcpp::init(argc, argv);

    // Crea un executor multithread per gestire i callback
    auto executor = rclcpp::executors::MultiThreadedExecutor();

    // Crea un'istanza del nodo StigmergyMap
    auto stigmergy_map_node = std::make_shared<StigmergyMap>();

    // Aggiunge il nodo all'executor
    executor.add_node(stigmergy_map_node);

    // Avvia l'esecuzione
    executor.spin();

    // Shutdown di ROS2 al termine
    rclcpp::shutdown();
    return 0;
}
