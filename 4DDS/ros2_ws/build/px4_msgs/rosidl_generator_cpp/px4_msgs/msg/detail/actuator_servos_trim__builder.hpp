// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorServosTrim.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS_TRIM__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS_TRIM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/actuator_servos_trim__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorServosTrim_trim
{
public:
  explicit Init_ActuatorServosTrim_trim(::px4_msgs::msg::ActuatorServosTrim & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorServosTrim trim(::px4_msgs::msg::ActuatorServosTrim::_trim_type arg)
  {
    msg_.trim = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorServosTrim msg_;
};

class Init_ActuatorServosTrim_timestamp
{
public:
  Init_ActuatorServosTrim_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorServosTrim_trim timestamp(::px4_msgs::msg::ActuatorServosTrim::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorServosTrim_trim(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorServosTrim msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorServosTrim>()
{
  return px4_msgs::msg::builder::Init_ActuatorServosTrim_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS_TRIM__BUILDER_HPP_
