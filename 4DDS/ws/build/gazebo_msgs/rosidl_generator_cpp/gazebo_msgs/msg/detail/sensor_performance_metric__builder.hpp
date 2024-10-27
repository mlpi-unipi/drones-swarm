// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/sensor_performance_metric__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorPerformanceMetric_fps
{
public:
  explicit Init_SensorPerformanceMetric_fps(::gazebo_msgs::msg::SensorPerformanceMetric & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::SensorPerformanceMetric fps(::gazebo_msgs::msg::SensorPerformanceMetric::_fps_type arg)
  {
    msg_.fps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::SensorPerformanceMetric msg_;
};

class Init_SensorPerformanceMetric_real_update_rate
{
public:
  explicit Init_SensorPerformanceMetric_real_update_rate(::gazebo_msgs::msg::SensorPerformanceMetric & msg)
  : msg_(msg)
  {}
  Init_SensorPerformanceMetric_fps real_update_rate(::gazebo_msgs::msg::SensorPerformanceMetric::_real_update_rate_type arg)
  {
    msg_.real_update_rate = std::move(arg);
    return Init_SensorPerformanceMetric_fps(msg_);
  }

private:
  ::gazebo_msgs::msg::SensorPerformanceMetric msg_;
};

class Init_SensorPerformanceMetric_sim_update_rate
{
public:
  explicit Init_SensorPerformanceMetric_sim_update_rate(::gazebo_msgs::msg::SensorPerformanceMetric & msg)
  : msg_(msg)
  {}
  Init_SensorPerformanceMetric_real_update_rate sim_update_rate(::gazebo_msgs::msg::SensorPerformanceMetric::_sim_update_rate_type arg)
  {
    msg_.sim_update_rate = std::move(arg);
    return Init_SensorPerformanceMetric_real_update_rate(msg_);
  }

private:
  ::gazebo_msgs::msg::SensorPerformanceMetric msg_;
};

class Init_SensorPerformanceMetric_name
{
public:
  Init_SensorPerformanceMetric_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorPerformanceMetric_sim_update_rate name(::gazebo_msgs::msg::SensorPerformanceMetric::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SensorPerformanceMetric_sim_update_rate(msg_);
  }

private:
  ::gazebo_msgs::msg::SensorPerformanceMetric msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::SensorPerformanceMetric>()
{
  return gazebo_msgs::msg::builder::Init_SensorPerformanceMetric_name();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__BUILDER_HPP_
