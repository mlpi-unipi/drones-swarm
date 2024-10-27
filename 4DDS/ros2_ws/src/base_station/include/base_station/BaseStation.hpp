#pragma once

#include <rclcpp/rclcpp.hpp>
#include <vector>
#include <Eigen/Dense>

#include "fdds_messages/msg/geo_ping.hpp"
#include "fdds_messages/msg/flocking.hpp"
#include "parameters/Parameters.hpp"

namespace fdds
{
    class BaseStation : public rclcpp::Node
    {
    public:
        BaseStation(const int swarm_size, Parameters& options_) : Node("BaseStation"), swarmSize(swarm_size), options(options_)
        {
            initialize();
        }

        /// Deleting the default constructor
        BaseStation() = delete;
        
        /// Deleting the copy constructor.
        BaseStation(const BaseStation&) = delete;

        /// Deleting the copy assignment operator.
        BaseStation& operator=(const BaseStation&) = delete;

        /// Deleting the move constructor.
        BaseStation(BaseStation&&) = delete;

        /// Deleting the move assignment operator.
        BaseStation& operator=(BaseStation&&) = delete;

    private:

        /// The size of the swarm.
        const int swarmSize;

        Parameters& options;

        /// A vector to hold drones positions.
        std::vector<Eigen::Vector2d> swarmPositions;

        /// A vector to hold drones speeds.
        std::vector<Eigen::Vector2d> swarmSpeeds; 

        /// Subscription to GeoPing messages sent by each drone.
        rclcpp::Subscription<fdds_messages::msg::GeoPing>::SharedPtr geoPingsSubscription;

        /// Publisher of Flocking messages needed by drones for cohesion, alignment, separation with others.
        std::vector<rclcpp::Publisher<fdds_messages::msg::Flocking>::SharedPtr> flockingPublishers;


        /// @brief Initializes the data structures.
        void initialize();

        /// @brief Callback to handle incoming GeoPing messages. 
        void geoPingCallback(fdds_messages::msg::GeoPing::ConstSharedPtr msg);

        /// @brief Utility function to send FlockCenterOfMass messages.
        void advertiseFlocking(const int vehicle_id, const Eigen::Vector2d& cohesion, const Eigen::Vector2d& alignment, const Eigen::Vector2d& separation);
    };
};