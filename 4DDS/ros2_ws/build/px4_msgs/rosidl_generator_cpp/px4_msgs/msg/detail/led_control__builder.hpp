// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/LedControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LED_CONTROL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__LED_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/led_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_LedControl_priority
{
public:
  explicit Init_LedControl_priority(::px4_msgs::msg::LedControl & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::LedControl priority(::px4_msgs::msg::LedControl::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::LedControl msg_;
};

class Init_LedControl_num_blinks
{
public:
  explicit Init_LedControl_num_blinks(::px4_msgs::msg::LedControl & msg)
  : msg_(msg)
  {}
  Init_LedControl_priority num_blinks(::px4_msgs::msg::LedControl::_num_blinks_type arg)
  {
    msg_.num_blinks = std::move(arg);
    return Init_LedControl_priority(msg_);
  }

private:
  ::px4_msgs::msg::LedControl msg_;
};

class Init_LedControl_mode
{
public:
  explicit Init_LedControl_mode(::px4_msgs::msg::LedControl & msg)
  : msg_(msg)
  {}
  Init_LedControl_num_blinks mode(::px4_msgs::msg::LedControl::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_LedControl_num_blinks(msg_);
  }

private:
  ::px4_msgs::msg::LedControl msg_;
};

class Init_LedControl_color
{
public:
  explicit Init_LedControl_color(::px4_msgs::msg::LedControl & msg)
  : msg_(msg)
  {}
  Init_LedControl_mode color(::px4_msgs::msg::LedControl::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_LedControl_mode(msg_);
  }

private:
  ::px4_msgs::msg::LedControl msg_;
};

class Init_LedControl_led_mask
{
public:
  explicit Init_LedControl_led_mask(::px4_msgs::msg::LedControl & msg)
  : msg_(msg)
  {}
  Init_LedControl_color led_mask(::px4_msgs::msg::LedControl::_led_mask_type arg)
  {
    msg_.led_mask = std::move(arg);
    return Init_LedControl_color(msg_);
  }

private:
  ::px4_msgs::msg::LedControl msg_;
};

class Init_LedControl_timestamp
{
public:
  Init_LedControl_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedControl_led_mask timestamp(::px4_msgs::msg::LedControl::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LedControl_led_mask(msg_);
  }

private:
  ::px4_msgs::msg::LedControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::LedControl>()
{
  return px4_msgs::msg::builder::Init_LedControl_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LED_CONTROL__BUILDER_HPP_
