// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/PerformanceMetrics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/performance_metrics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_PerformanceMetrics_sensors
{
public:
  explicit Init_PerformanceMetrics_sensors(::gazebo_msgs::msg::PerformanceMetrics & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::PerformanceMetrics sensors(::gazebo_msgs::msg::PerformanceMetrics::_sensors_type arg)
  {
    msg_.sensors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::PerformanceMetrics msg_;
};

class Init_PerformanceMetrics_real_time_factor
{
public:
  explicit Init_PerformanceMetrics_real_time_factor(::gazebo_msgs::msg::PerformanceMetrics & msg)
  : msg_(msg)
  {}
  Init_PerformanceMetrics_sensors real_time_factor(::gazebo_msgs::msg::PerformanceMetrics::_real_time_factor_type arg)
  {
    msg_.real_time_factor = std::move(arg);
    return Init_PerformanceMetrics_sensors(msg_);
  }

private:
  ::gazebo_msgs::msg::PerformanceMetrics msg_;
};

class Init_PerformanceMetrics_header
{
public:
  Init_PerformanceMetrics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerformanceMetrics_real_time_factor header(::gazebo_msgs::msg::PerformanceMetrics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PerformanceMetrics_real_time_factor(msg_);
  }

private:
  ::gazebo_msgs::msg::PerformanceMetrics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::PerformanceMetrics>()
{
  return gazebo_msgs::msg::builder::Init_PerformanceMetrics_header();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__BUILDER_HPP_
