// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/OffboardControlMode.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/offboard_control_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_OffboardControlMode_direct_actuator
{
public:
  explicit Init_OffboardControlMode_direct_actuator(::px4_msgs::msg::OffboardControlMode & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::OffboardControlMode direct_actuator(::px4_msgs::msg::OffboardControlMode::_direct_actuator_type arg)
  {
    msg_.direct_actuator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::OffboardControlMode msg_;
};

class Init_OffboardControlMode_thrust_and_torque
{
public:
  explicit Init_OffboardControlMode_thrust_and_torque(::px4_msgs::msg::OffboardControlMode & msg)
  : msg_(msg)
  {}
  Init_OffboardControlMode_direct_actuator thrust_and_torque(::px4_msgs::msg::OffboardControlMode::_thrust_and_torque_type arg)
  {
    msg_.thrust_and_torque = std::move(arg);
    return Init_OffboardControlMode_direct_actuator(msg_);
  }

private:
  ::px4_msgs::msg::OffboardControlMode msg_;
};

class Init_OffboardControlMode_body_rate
{
public:
  explicit Init_OffboardControlMode_body_rate(::px4_msgs::msg::OffboardControlMode & msg)
  : msg_(msg)
  {}
  Init_OffboardControlMode_thrust_and_torque body_rate(::px4_msgs::msg::OffboardControlMode::_body_rate_type arg)
  {
    msg_.body_rate = std::move(arg);
    return Init_OffboardControlMode_thrust_and_torque(msg_);
  }

private:
  ::px4_msgs::msg::OffboardControlMode msg_;
};

class Init_OffboardControlMode_attitude
{
public:
  explicit Init_OffboardControlMode_attitude(::px4_msgs::msg::OffboardControlMode & msg)
  : msg_(msg)
  {}
  Init_OffboardControlMode_body_rate attitude(::px4_msgs::msg::OffboardControlMode::_attitude_type arg)
  {
    msg_.attitude = std::move(arg);
    return Init_OffboardControlMode_body_rate(msg_);
  }

private:
  ::px4_msgs::msg::OffboardControlMode msg_;
};

class Init_OffboardControlMode_acceleration
{
public:
  explicit Init_OffboardControlMode_acceleration(::px4_msgs::msg::OffboardControlMode & msg)
  : msg_(msg)
  {}
  Init_OffboardControlMode_attitude acceleration(::px4_msgs::msg::OffboardControlMode::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_OffboardControlMode_attitude(msg_);
  }

private:
  ::px4_msgs::msg::OffboardControlMode msg_;
};

class Init_OffboardControlMode_velocity
{
public:
  explicit Init_OffboardControlMode_velocity(::px4_msgs::msg::OffboardControlMode & msg)
  : msg_(msg)
  {}
  Init_OffboardControlMode_acceleration velocity(::px4_msgs::msg::OffboardControlMode::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_OffboardControlMode_acceleration(msg_);
  }

private:
  ::px4_msgs::msg::OffboardControlMode msg_;
};

class Init_OffboardControlMode_position
{
public:
  explicit Init_OffboardControlMode_position(::px4_msgs::msg::OffboardControlMode & msg)
  : msg_(msg)
  {}
  Init_OffboardControlMode_velocity position(::px4_msgs::msg::OffboardControlMode::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_OffboardControlMode_velocity(msg_);
  }

private:
  ::px4_msgs::msg::OffboardControlMode msg_;
};

class Init_OffboardControlMode_timestamp
{
public:
  Init_OffboardControlMode_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OffboardControlMode_position timestamp(::px4_msgs::msg::OffboardControlMode::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OffboardControlMode_position(msg_);
  }

private:
  ::px4_msgs::msg::OffboardControlMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::OffboardControlMode>()
{
  return px4_msgs::msg::builder::Init_OffboardControlMode_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__BUILDER_HPP_
