// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ControlAllocatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/control_allocator_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlAllocatorStatus_handled_motor_failure_mask
{
public:
  explicit Init_ControlAllocatorStatus_handled_motor_failure_mask(::px4_msgs::msg::ControlAllocatorStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ControlAllocatorStatus handled_motor_failure_mask(::px4_msgs::msg::ControlAllocatorStatus::_handled_motor_failure_mask_type arg)
  {
    msg_.handled_motor_failure_mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ControlAllocatorStatus msg_;
};

class Init_ControlAllocatorStatus_actuator_saturation
{
public:
  explicit Init_ControlAllocatorStatus_actuator_saturation(::px4_msgs::msg::ControlAllocatorStatus & msg)
  : msg_(msg)
  {}
  Init_ControlAllocatorStatus_handled_motor_failure_mask actuator_saturation(::px4_msgs::msg::ControlAllocatorStatus::_actuator_saturation_type arg)
  {
    msg_.actuator_saturation = std::move(arg);
    return Init_ControlAllocatorStatus_handled_motor_failure_mask(msg_);
  }

private:
  ::px4_msgs::msg::ControlAllocatorStatus msg_;
};

class Init_ControlAllocatorStatus_unallocated_thrust
{
public:
  explicit Init_ControlAllocatorStatus_unallocated_thrust(::px4_msgs::msg::ControlAllocatorStatus & msg)
  : msg_(msg)
  {}
  Init_ControlAllocatorStatus_actuator_saturation unallocated_thrust(::px4_msgs::msg::ControlAllocatorStatus::_unallocated_thrust_type arg)
  {
    msg_.unallocated_thrust = std::move(arg);
    return Init_ControlAllocatorStatus_actuator_saturation(msg_);
  }

private:
  ::px4_msgs::msg::ControlAllocatorStatus msg_;
};

class Init_ControlAllocatorStatus_thrust_setpoint_achieved
{
public:
  explicit Init_ControlAllocatorStatus_thrust_setpoint_achieved(::px4_msgs::msg::ControlAllocatorStatus & msg)
  : msg_(msg)
  {}
  Init_ControlAllocatorStatus_unallocated_thrust thrust_setpoint_achieved(::px4_msgs::msg::ControlAllocatorStatus::_thrust_setpoint_achieved_type arg)
  {
    msg_.thrust_setpoint_achieved = std::move(arg);
    return Init_ControlAllocatorStatus_unallocated_thrust(msg_);
  }

private:
  ::px4_msgs::msg::ControlAllocatorStatus msg_;
};

class Init_ControlAllocatorStatus_unallocated_torque
{
public:
  explicit Init_ControlAllocatorStatus_unallocated_torque(::px4_msgs::msg::ControlAllocatorStatus & msg)
  : msg_(msg)
  {}
  Init_ControlAllocatorStatus_thrust_setpoint_achieved unallocated_torque(::px4_msgs::msg::ControlAllocatorStatus::_unallocated_torque_type arg)
  {
    msg_.unallocated_torque = std::move(arg);
    return Init_ControlAllocatorStatus_thrust_setpoint_achieved(msg_);
  }

private:
  ::px4_msgs::msg::ControlAllocatorStatus msg_;
};

class Init_ControlAllocatorStatus_torque_setpoint_achieved
{
public:
  explicit Init_ControlAllocatorStatus_torque_setpoint_achieved(::px4_msgs::msg::ControlAllocatorStatus & msg)
  : msg_(msg)
  {}
  Init_ControlAllocatorStatus_unallocated_torque torque_setpoint_achieved(::px4_msgs::msg::ControlAllocatorStatus::_torque_setpoint_achieved_type arg)
  {
    msg_.torque_setpoint_achieved = std::move(arg);
    return Init_ControlAllocatorStatus_unallocated_torque(msg_);
  }

private:
  ::px4_msgs::msg::ControlAllocatorStatus msg_;
};

class Init_ControlAllocatorStatus_timestamp
{
public:
  Init_ControlAllocatorStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlAllocatorStatus_torque_setpoint_achieved timestamp(::px4_msgs::msg::ControlAllocatorStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ControlAllocatorStatus_torque_setpoint_achieved(msg_);
  }

private:
  ::px4_msgs::msg::ControlAllocatorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ControlAllocatorStatus>()
{
  return px4_msgs::msg::builder::Init_ControlAllocatorStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__BUILDER_HPP_
