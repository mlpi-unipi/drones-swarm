#include "StigmergyMap.hpp"

void StigmergyMap::initialize()
{
    rclcpp::QoS qos_profile(10);
    qos_profile.best_effort();   //< never change this

    for (int i = 1; i < gradientPublishers.size() + 1; i++)
    {
        const std::string topic = "/px4_" + std::to_string(i) + "/stigmergy/in/pheromone_gradient";
        gradientPublishers[i] = create_publisher<stigmergy::msg::PheromoneGradient>(topic, qos_profile);
    }

    const auto release_pheromone_callback = std::bind(&StigmergyMap::releasePheromoneCallback, this, std::placeholders::_1);
    releasePheromoneSubscription = create_subscription<boids::msg::GeoPing>(
        "/stigmergy_map/release_pheromone",
        qos_profile,
        release_pheromone_callback
    );

    const auto request_gradient_callback = std::bind(&StigmergyMap::gradientRequestCallback, this, std::placeholders::_1);
    requestGradientSubscription = create_subscription<boids::msg::GeoPing>(
        "/stigmergy_map/request_gradient",
        qos_profile,
        request_gradient_callback
    );
}


void StigmergyMap::releasePheromoneCallback(boids::msg::GeoPing::ConstSharedPtr msg)
{
    const auto index = latLonToIndex(msg->latitude_m, msg->longitude_m);
    pheromoneMap(index.first, index.second) += 1;
    std::cout << pheromoneMap << std::endl << std::endl;
}

void StigmergyMap::gradientRequestCallback(boids::msg::GeoPing::ConstSharedPtr msg)
{
    
}

void sendGradient(const int vehicle_id)
{

}

std::pair<int, int> StigmergyMap::latLonToIndex(double latitude, double longitude)
{
    const int row = int((latitude - CENTRAL_LATITUDE) / GRID_RESOLUTION + (HEIGHT / 2));
    const int col = int((longitude - CENTRAL_LONGITUDE) / GRID_RESOLUTION + (WIDTH / 2));
    return std::make_pair(row, col);
}