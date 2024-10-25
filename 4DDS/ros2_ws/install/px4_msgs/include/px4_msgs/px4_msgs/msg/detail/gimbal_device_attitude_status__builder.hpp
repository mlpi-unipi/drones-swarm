// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GimbalDeviceAttitudeStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_ATTITUDE_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_ATTITUDE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/gimbal_device_attitude_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalDeviceAttitudeStatus_received_from_mavlink
{
public:
  explicit Init_GimbalDeviceAttitudeStatus_received_from_mavlink(::px4_msgs::msg::GimbalDeviceAttitudeStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus received_from_mavlink(::px4_msgs::msg::GimbalDeviceAttitudeStatus::_received_from_mavlink_type arg)
  {
    msg_.received_from_mavlink = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus msg_;
};

class Init_GimbalDeviceAttitudeStatus_failure_flags
{
public:
  explicit Init_GimbalDeviceAttitudeStatus_failure_flags(::px4_msgs::msg::GimbalDeviceAttitudeStatus & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceAttitudeStatus_received_from_mavlink failure_flags(::px4_msgs::msg::GimbalDeviceAttitudeStatus::_failure_flags_type arg)
  {
    msg_.failure_flags = std::move(arg);
    return Init_GimbalDeviceAttitudeStatus_received_from_mavlink(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus msg_;
};

class Init_GimbalDeviceAttitudeStatus_angular_velocity_z
{
public:
  explicit Init_GimbalDeviceAttitudeStatus_angular_velocity_z(::px4_msgs::msg::GimbalDeviceAttitudeStatus & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceAttitudeStatus_failure_flags angular_velocity_z(::px4_msgs::msg::GimbalDeviceAttitudeStatus::_angular_velocity_z_type arg)
  {
    msg_.angular_velocity_z = std::move(arg);
    return Init_GimbalDeviceAttitudeStatus_failure_flags(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus msg_;
};

class Init_GimbalDeviceAttitudeStatus_angular_velocity_y
{
public:
  explicit Init_GimbalDeviceAttitudeStatus_angular_velocity_y(::px4_msgs::msg::GimbalDeviceAttitudeStatus & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceAttitudeStatus_angular_velocity_z angular_velocity_y(::px4_msgs::msg::GimbalDeviceAttitudeStatus::_angular_velocity_y_type arg)
  {
    msg_.angular_velocity_y = std::move(arg);
    return Init_GimbalDeviceAttitudeStatus_angular_velocity_z(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus msg_;
};

class Init_GimbalDeviceAttitudeStatus_angular_velocity_x
{
public:
  explicit Init_GimbalDeviceAttitudeStatus_angular_velocity_x(::px4_msgs::msg::GimbalDeviceAttitudeStatus & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceAttitudeStatus_angular_velocity_y angular_velocity_x(::px4_msgs::msg::GimbalDeviceAttitudeStatus::_angular_velocity_x_type arg)
  {
    msg_.angular_velocity_x = std::move(arg);
    return Init_GimbalDeviceAttitudeStatus_angular_velocity_y(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus msg_;
};

class Init_GimbalDeviceAttitudeStatus_q
{
public:
  explicit Init_GimbalDeviceAttitudeStatus_q(::px4_msgs::msg::GimbalDeviceAttitudeStatus & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceAttitudeStatus_angular_velocity_x q(::px4_msgs::msg::GimbalDeviceAttitudeStatus::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_GimbalDeviceAttitudeStatus_angular_velocity_x(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus msg_;
};

class Init_GimbalDeviceAttitudeStatus_device_flags
{
public:
  explicit Init_GimbalDeviceAttitudeStatus_device_flags(::px4_msgs::msg::GimbalDeviceAttitudeStatus & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceAttitudeStatus_q device_flags(::px4_msgs::msg::GimbalDeviceAttitudeStatus::_device_flags_type arg)
  {
    msg_.device_flags = std::move(arg);
    return Init_GimbalDeviceAttitudeStatus_q(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus msg_;
};

class Init_GimbalDeviceAttitudeStatus_target_component
{
public:
  explicit Init_GimbalDeviceAttitudeStatus_target_component(::px4_msgs::msg::GimbalDeviceAttitudeStatus & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceAttitudeStatus_device_flags target_component(::px4_msgs::msg::GimbalDeviceAttitudeStatus::_target_component_type arg)
  {
    msg_.target_component = std::move(arg);
    return Init_GimbalDeviceAttitudeStatus_device_flags(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus msg_;
};

class Init_GimbalDeviceAttitudeStatus_target_system
{
public:
  explicit Init_GimbalDeviceAttitudeStatus_target_system(::px4_msgs::msg::GimbalDeviceAttitudeStatus & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceAttitudeStatus_target_component target_system(::px4_msgs::msg::GimbalDeviceAttitudeStatus::_target_system_type arg)
  {
    msg_.target_system = std::move(arg);
    return Init_GimbalDeviceAttitudeStatus_target_component(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus msg_;
};

class Init_GimbalDeviceAttitudeStatus_timestamp
{
public:
  Init_GimbalDeviceAttitudeStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalDeviceAttitudeStatus_target_system timestamp(::px4_msgs::msg::GimbalDeviceAttitudeStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GimbalDeviceAttitudeStatus_target_system(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceAttitudeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GimbalDeviceAttitudeStatus>()
{
  return px4_msgs::msg::builder::Init_GimbalDeviceAttitudeStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_ATTITUDE_STATUS__BUILDER_HPP_
