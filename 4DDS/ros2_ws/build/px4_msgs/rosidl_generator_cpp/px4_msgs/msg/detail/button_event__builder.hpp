// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ButtonEvent.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BUTTON_EVENT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__BUTTON_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/button_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ButtonEvent_triggered
{
public:
  explicit Init_ButtonEvent_triggered(::px4_msgs::msg::ButtonEvent & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ButtonEvent triggered(::px4_msgs::msg::ButtonEvent::_triggered_type arg)
  {
    msg_.triggered = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ButtonEvent msg_;
};

class Init_ButtonEvent_timestamp
{
public:
  Init_ButtonEvent_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ButtonEvent_triggered timestamp(::px4_msgs::msg::ButtonEvent::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ButtonEvent_triggered(msg_);
  }

private:
  ::px4_msgs::msg::ButtonEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ButtonEvent>()
{
  return px4_msgs::msg::builder::Init_ButtonEvent_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__BUTTON_EVENT__BUILDER_HPP_
