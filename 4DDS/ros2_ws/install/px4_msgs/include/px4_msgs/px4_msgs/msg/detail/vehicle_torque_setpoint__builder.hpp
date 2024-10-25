// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleTorqueSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_TORQUE_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_TORQUE_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_torque_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleTorqueSetpoint_xyz
{
public:
  explicit Init_VehicleTorqueSetpoint_xyz(::px4_msgs::msg::VehicleTorqueSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleTorqueSetpoint xyz(::px4_msgs::msg::VehicleTorqueSetpoint::_xyz_type arg)
  {
    msg_.xyz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleTorqueSetpoint msg_;
};

class Init_VehicleTorqueSetpoint_timestamp_sample
{
public:
  explicit Init_VehicleTorqueSetpoint_timestamp_sample(::px4_msgs::msg::VehicleTorqueSetpoint & msg)
  : msg_(msg)
  {}
  Init_VehicleTorqueSetpoint_xyz timestamp_sample(::px4_msgs::msg::VehicleTorqueSetpoint::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleTorqueSetpoint_xyz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleTorqueSetpoint msg_;
};

class Init_VehicleTorqueSetpoint_timestamp
{
public:
  Init_VehicleTorqueSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleTorqueSetpoint_timestamp_sample timestamp(::px4_msgs::msg::VehicleTorqueSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleTorqueSetpoint_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleTorqueSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleTorqueSetpoint>()
{
  return px4_msgs::msg::builder::Init_VehicleTorqueSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_TORQUE_SETPOINT__BUILDER_HPP_
