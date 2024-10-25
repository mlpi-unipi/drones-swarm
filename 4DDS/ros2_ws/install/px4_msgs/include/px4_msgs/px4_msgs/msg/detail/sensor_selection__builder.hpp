// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorSelection.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_SELECTION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_SELECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_selection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorSelection_gyro_device_id
{
public:
  explicit Init_SensorSelection_gyro_device_id(::px4_msgs::msg::SensorSelection & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorSelection gyro_device_id(::px4_msgs::msg::SensorSelection::_gyro_device_id_type arg)
  {
    msg_.gyro_device_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorSelection msg_;
};

class Init_SensorSelection_accel_device_id
{
public:
  explicit Init_SensorSelection_accel_device_id(::px4_msgs::msg::SensorSelection & msg)
  : msg_(msg)
  {}
  Init_SensorSelection_gyro_device_id accel_device_id(::px4_msgs::msg::SensorSelection::_accel_device_id_type arg)
  {
    msg_.accel_device_id = std::move(arg);
    return Init_SensorSelection_gyro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorSelection msg_;
};

class Init_SensorSelection_timestamp
{
public:
  Init_SensorSelection_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorSelection_accel_device_id timestamp(::px4_msgs::msg::SensorSelection::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorSelection_accel_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorSelection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorSelection>()
{
  return px4_msgs::msg::builder::Init_SensorSelection_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_SELECTION__BUILDER_HPP_
