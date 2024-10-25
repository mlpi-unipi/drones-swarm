#pragma once

#include <rclcpp/rclcpp.hpp>
#include <Eigen/Dense>
#include <array>
#include <chrono>

#include "stigmergy/msg/pheromone_gradient.hpp"
#include "stigmergy/msg/pheromone_release.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "std_msgs/msg/header.hpp"

constexpr int WIDTH = 25;
constexpr int HEIGHT = 25;
constexpr int SWARM_SIZE = 5;
constexpr double CENTRAL_LATITUDE = 5266410.500251;
constexpr double CENTRAL_LONGITUDE = 643936.654796;
constexpr double GRID_RESOLUTION = 2.0;

// Parametri per evaporazione e diffusione
constexpr float EVAPORATION_RATE = 0.95f;  // Evaporazione del 5% ad ogni intervallo
constexpr float DIFFUSION_RATE = 0.5f;     // Percentuale di feromone diffuso nelle celle adiacenti
constexpr std::chrono::milliseconds EVAPORATION_INTERVAL(1000);  // Intervallo di evaporazione in millisecondi

class StigmergyMap : public rclcpp::Node
{
public:
    StigmergyMap();

private:
    void initialize();

    // Callback per il rilascio del feromone
    void releasePheromoneCallback(const stigmergy::msg::PheromoneRelease::SharedPtr msg);

    // Callback per la richiesta del gradiente
    void gradientRequestCallback(const geometry_msgs::msg::Point::SharedPtr msg);

    // Funzione per inviare il gradiente al drone
    void sendGradient(const int vehicle_id, const Eigen::Vector2f& gradient);

    // Conversione da coordinate geografiche a indici di matrice
    std::pair<int, int> latLonToIndex(double latitude, double longitude);

    // Evaporazione dei feromoni
    void evaporatePheromones();

    // Rilascio del feromone con diffusione
    void releasePheromoneAt(int row, int col, float amount);

    // Publisher per il gradiente
    std::array<rclcpp::Publisher<stigmergy::msg::PheromoneGradient>::SharedPtr, SWARM_SIZE> gradientPublishers;

    // Subscriber per il rilascio del feromone
    rclcpp::Subscription<stigmergy::msg::PheromoneRelease>::SharedPtr releasePheromoneSubscription;

    // Subscriber per la richiesta del gradiente
    rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr requestGradientSubscription;

    // Mappa del feromone
    Eigen::MatrixXf pheromoneMap;

    // Timer per l'evaporazione dei feromoni
    rclcpp::TimerBase::SharedPtr evaporationTimer;
};
