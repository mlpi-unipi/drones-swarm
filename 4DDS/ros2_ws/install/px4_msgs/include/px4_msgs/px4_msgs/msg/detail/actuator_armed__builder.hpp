// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorArmed.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_ARMED__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_ARMED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/actuator_armed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorArmed_in_esc_calibration_mode
{
public:
  explicit Init_ActuatorArmed_in_esc_calibration_mode(::px4_msgs::msg::ActuatorArmed & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorArmed in_esc_calibration_mode(::px4_msgs::msg::ActuatorArmed::_in_esc_calibration_mode_type arg)
  {
    msg_.in_esc_calibration_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorArmed msg_;
};

class Init_ActuatorArmed_force_failsafe
{
public:
  explicit Init_ActuatorArmed_force_failsafe(::px4_msgs::msg::ActuatorArmed & msg)
  : msg_(msg)
  {}
  Init_ActuatorArmed_in_esc_calibration_mode force_failsafe(::px4_msgs::msg::ActuatorArmed::_force_failsafe_type arg)
  {
    msg_.force_failsafe = std::move(arg);
    return Init_ActuatorArmed_in_esc_calibration_mode(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorArmed msg_;
};

class Init_ActuatorArmed_manual_lockdown
{
public:
  explicit Init_ActuatorArmed_manual_lockdown(::px4_msgs::msg::ActuatorArmed & msg)
  : msg_(msg)
  {}
  Init_ActuatorArmed_force_failsafe manual_lockdown(::px4_msgs::msg::ActuatorArmed::_manual_lockdown_type arg)
  {
    msg_.manual_lockdown = std::move(arg);
    return Init_ActuatorArmed_force_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorArmed msg_;
};

class Init_ActuatorArmed_lockdown
{
public:
  explicit Init_ActuatorArmed_lockdown(::px4_msgs::msg::ActuatorArmed & msg)
  : msg_(msg)
  {}
  Init_ActuatorArmed_manual_lockdown lockdown(::px4_msgs::msg::ActuatorArmed::_lockdown_type arg)
  {
    msg_.lockdown = std::move(arg);
    return Init_ActuatorArmed_manual_lockdown(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorArmed msg_;
};

class Init_ActuatorArmed_ready_to_arm
{
public:
  explicit Init_ActuatorArmed_ready_to_arm(::px4_msgs::msg::ActuatorArmed & msg)
  : msg_(msg)
  {}
  Init_ActuatorArmed_lockdown ready_to_arm(::px4_msgs::msg::ActuatorArmed::_ready_to_arm_type arg)
  {
    msg_.ready_to_arm = std::move(arg);
    return Init_ActuatorArmed_lockdown(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorArmed msg_;
};

class Init_ActuatorArmed_prearmed
{
public:
  explicit Init_ActuatorArmed_prearmed(::px4_msgs::msg::ActuatorArmed & msg)
  : msg_(msg)
  {}
  Init_ActuatorArmed_ready_to_arm prearmed(::px4_msgs::msg::ActuatorArmed::_prearmed_type arg)
  {
    msg_.prearmed = std::move(arg);
    return Init_ActuatorArmed_ready_to_arm(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorArmed msg_;
};

class Init_ActuatorArmed_armed
{
public:
  explicit Init_ActuatorArmed_armed(::px4_msgs::msg::ActuatorArmed & msg)
  : msg_(msg)
  {}
  Init_ActuatorArmed_prearmed armed(::px4_msgs::msg::ActuatorArmed::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_ActuatorArmed_prearmed(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorArmed msg_;
};

class Init_ActuatorArmed_timestamp
{
public:
  Init_ActuatorArmed_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorArmed_armed timestamp(::px4_msgs::msg::ActuatorArmed::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorArmed_armed(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorArmed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorArmed>()
{
  return px4_msgs::msg::builder::Init_ActuatorArmed_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_ARMED__BUILDER_HPP_
