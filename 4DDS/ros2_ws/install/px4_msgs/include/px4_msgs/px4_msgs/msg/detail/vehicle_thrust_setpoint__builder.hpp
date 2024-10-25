// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleThrustSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_THRUST_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_THRUST_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_thrust_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleThrustSetpoint_xyz
{
public:
  explicit Init_VehicleThrustSetpoint_xyz(::px4_msgs::msg::VehicleThrustSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleThrustSetpoint xyz(::px4_msgs::msg::VehicleThrustSetpoint::_xyz_type arg)
  {
    msg_.xyz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleThrustSetpoint msg_;
};

class Init_VehicleThrustSetpoint_timestamp_sample
{
public:
  explicit Init_VehicleThrustSetpoint_timestamp_sample(::px4_msgs::msg::VehicleThrustSetpoint & msg)
  : msg_(msg)
  {}
  Init_VehicleThrustSetpoint_xyz timestamp_sample(::px4_msgs::msg::VehicleThrustSetpoint::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleThrustSetpoint_xyz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleThrustSetpoint msg_;
};

class Init_VehicleThrustSetpoint_timestamp
{
public:
  Init_VehicleThrustSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleThrustSetpoint_timestamp_sample timestamp(::px4_msgs::msg::VehicleThrustSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleThrustSetpoint_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleThrustSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleThrustSetpoint>()
{
  return px4_msgs::msg::builder::Init_VehicleThrustSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_THRUST_SETPOINT__BUILDER_HPP_
