#pragma once

#include <rclcpp/rclcpp.hpp>
#include <eigen3/Eigen/Dense>
#include <boids/msg/geo_ping.hpp>
#include <stigmergy/msg/pheromone_gradient.hpp>
#include <array>

constexpr int WIDTH = 25;
constexpr int HEIGHT = 25;
constexpr int SWARM_SIZE = 5;
constexpr double CENTRAL_LATITUDE = 5266410.500251;
constexpr double CENTRAL_LONGITUDE = 643936.654796;
constexpr double GRID_RESOLUTION = 2.0;

class StigmergyMap : public rclcpp::Node 
{

public:
    StigmergyMap() : Node("StigmergyMap")
    {
        initialize();
    }

private:

    std::array<rclcpp::Publisher<stigmergy::msg::PheromoneGradient>::SharedPtr, SWARM_SIZE> gradientPublishers;

    rclcpp::Subscription<boids::msg::GeoPing>::SharedPtr releasePheromoneSubscription;

    rclcpp::Subscription<boids::msg::GeoPing>::SharedPtr requestGradientSubscription;

    Eigen::Matrix<uint8_t, WIDTH, HEIGHT> pheromoneMap;
    
    /// @brief Initializes the data structures.
    void initialize();

    std::pair<int, int> latLonToIndex(double latitude, double longitude);

    void releasePheromoneCallback(boids::msg::GeoPing::ConstSharedPtr msg);

    void gradientRequestCallback(boids::msg::GeoPing::ConstSharedPtr msg);

    void sendGradient(const int vehicle_id);
};