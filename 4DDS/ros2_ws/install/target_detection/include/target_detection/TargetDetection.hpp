#pragma once

#include "parameters/Parameters.hpp"

#include <sensor_msgs/msg/compressed_image.hpp>
#include <rclcpp/rclcpp.hpp>
#include <opencv2/opencv.hpp>

namespace fdds
{
    class TargetDetection
    {
    public:
        TargetDetection(const std::string& topic, const fdds::Parameters& params, rclcpp::Node& father)
            : scanTopic{topic},
              parameters{params},
              fatherNode{father}
        {
            rclcpp::QoS qos_profile(10);
            qos_profile.best_effort();   //< never change this
            RCLCPP_INFO(father.get_logger(), "topic: %s", topic.c_str());
            const auto camera_callback = std::bind(&TargetDetection::cameraSubscriptionCallback, this, std::placeholders::_1);
            cameraSensorSubscription = fatherNode.create_subscription<sensor_msgs::msg::CompressedImage>(
                scanTopic,
                qos_profile,
                camera_callback
            );
        }

        int tick();

    private:
        const std::string scanTopic;
        const fdds::Parameters& parameters;
        rclcpp::Node& fatherNode;

        sensor_msgs::msg::CompressedImage::SharedPtr lastCameraData;
        rclcpp::Subscription<sensor_msgs::msg::CompressedImage>::SharedPtr cameraSensorSubscription;

        void cameraSubscriptionCallback(sensor_msgs::msg::CompressedImage::SharedPtr);
    };
};
