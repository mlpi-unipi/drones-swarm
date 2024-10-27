#pragma once

#include "parameters/Parameters.hpp"

#include <sensor_msgs/msg/laser_scan.hpp>
#include <rclcpp/rclcpp.hpp>
#include <Eigen/Dense>

namespace fdds
{
    class ObstacleAvoidance
    {
    public:
        ObstacleAvoidance(const std::string& topic, const fdds::Parameters& params, rclcpp::Node& father)
            : scanTopic{topic},
              parameters{params},
              fatherNode{father}
        {
            rclcpp::QoS qos_profile(10);
            qos_profile.best_effort();   //< never change this
            RCLCPP_INFO(father.get_logger(), "topic: %s", topic.c_str());
            const auto distance_sensor_callback = std::bind(&ObstacleAvoidance::scannerSubscriptionCallback, this, std::placeholders::_1);
            distanceSensorSubscription = fatherNode.create_subscription<sensor_msgs::msg::LaserScan>(
                scanTopic,
                qos_profile,
                distance_sensor_callback
            );
        }

        Eigen::Vector2f tick();
        

    private:
        const std::string scanTopic;
        const fdds::Parameters& parameters;
        rclcpp::Node& fatherNode;

        sensor_msgs::msg::LaserScan::SharedPtr lastScan;
        rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr distanceSensorSubscription;

        Eigen::Vector2f vectorFieldHistogram();
        Eigen::Vector2f virtualForce();

        void scannerSubscriptionCallback(sensor_msgs::msg::LaserScan::SharedPtr);
    };
};
