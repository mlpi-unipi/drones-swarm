// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/DebugKeyValue.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEBUG_KEY_VALUE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__DEBUG_KEY_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/debug_key_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_DebugKeyValue_value
{
public:
  explicit Init_DebugKeyValue_value(::px4_msgs::msg::DebugKeyValue & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::DebugKeyValue value(::px4_msgs::msg::DebugKeyValue::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::DebugKeyValue msg_;
};

class Init_DebugKeyValue_key
{
public:
  explicit Init_DebugKeyValue_key(::px4_msgs::msg::DebugKeyValue & msg)
  : msg_(msg)
  {}
  Init_DebugKeyValue_value key(::px4_msgs::msg::DebugKeyValue::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_DebugKeyValue_value(msg_);
  }

private:
  ::px4_msgs::msg::DebugKeyValue msg_;
};

class Init_DebugKeyValue_timestamp
{
public:
  Init_DebugKeyValue_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugKeyValue_key timestamp(::px4_msgs::msg::DebugKeyValue::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DebugKeyValue_key(msg_);
  }

private:
  ::px4_msgs::msg::DebugKeyValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::DebugKeyValue>()
{
  return px4_msgs::msg::builder::Init_DebugKeyValue_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DEBUG_KEY_VALUE__BUILDER_HPP_
