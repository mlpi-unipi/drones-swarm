// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorServos.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/actuator_servos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorServos_control
{
public:
  explicit Init_ActuatorServos_control(::px4_msgs::msg::ActuatorServos & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorServos control(::px4_msgs::msg::ActuatorServos::_control_type arg)
  {
    msg_.control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorServos msg_;
};

class Init_ActuatorServos_timestamp_sample
{
public:
  explicit Init_ActuatorServos_timestamp_sample(::px4_msgs::msg::ActuatorServos & msg)
  : msg_(msg)
  {}
  Init_ActuatorServos_control timestamp_sample(::px4_msgs::msg::ActuatorServos::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_ActuatorServos_control(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorServos msg_;
};

class Init_ActuatorServos_timestamp
{
public:
  Init_ActuatorServos_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorServos_timestamp_sample timestamp(::px4_msgs::msg::ActuatorServos::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorServos_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorServos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorServos>()
{
  return px4_msgs::msg::builder::Init_ActuatorServos_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS__BUILDER_HPP_
