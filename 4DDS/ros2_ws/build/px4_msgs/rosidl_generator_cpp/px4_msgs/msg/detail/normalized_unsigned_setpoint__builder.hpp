// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/NormalizedUnsignedSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NORMALIZED_UNSIGNED_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__NORMALIZED_UNSIGNED_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/normalized_unsigned_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_NormalizedUnsignedSetpoint_normalized_setpoint
{
public:
  explicit Init_NormalizedUnsignedSetpoint_normalized_setpoint(::px4_msgs::msg::NormalizedUnsignedSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::NormalizedUnsignedSetpoint normalized_setpoint(::px4_msgs::msg::NormalizedUnsignedSetpoint::_normalized_setpoint_type arg)
  {
    msg_.normalized_setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::NormalizedUnsignedSetpoint msg_;
};

class Init_NormalizedUnsignedSetpoint_timestamp
{
public:
  Init_NormalizedUnsignedSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NormalizedUnsignedSetpoint_normalized_setpoint timestamp(::px4_msgs::msg::NormalizedUnsignedSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NormalizedUnsignedSetpoint_normalized_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::NormalizedUnsignedSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::NormalizedUnsignedSetpoint>()
{
  return px4_msgs::msg::builder::Init_NormalizedUnsignedSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__NORMALIZED_UNSIGNED_SETPOINT__BUILDER_HPP_
