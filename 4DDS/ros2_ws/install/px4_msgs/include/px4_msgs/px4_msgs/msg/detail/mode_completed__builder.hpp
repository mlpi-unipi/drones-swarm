// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ModeCompleted.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MODE_COMPLETED__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MODE_COMPLETED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/mode_completed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ModeCompleted_nav_state
{
public:
  explicit Init_ModeCompleted_nav_state(::px4_msgs::msg::ModeCompleted & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ModeCompleted nav_state(::px4_msgs::msg::ModeCompleted::_nav_state_type arg)
  {
    msg_.nav_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ModeCompleted msg_;
};

class Init_ModeCompleted_result
{
public:
  explicit Init_ModeCompleted_result(::px4_msgs::msg::ModeCompleted & msg)
  : msg_(msg)
  {}
  Init_ModeCompleted_nav_state result(::px4_msgs::msg::ModeCompleted::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_ModeCompleted_nav_state(msg_);
  }

private:
  ::px4_msgs::msg::ModeCompleted msg_;
};

class Init_ModeCompleted_timestamp
{
public:
  Init_ModeCompleted_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModeCompleted_result timestamp(::px4_msgs::msg::ModeCompleted::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ModeCompleted_result(msg_);
  }

private:
  ::px4_msgs::msg::ModeCompleted msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ModeCompleted>()
{
  return px4_msgs::msg::builder::Init_ModeCompleted_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MODE_COMPLETED__BUILDER_HPP_
