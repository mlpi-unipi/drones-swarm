// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/PwmInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PWM_INPUT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PWM_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/pwm_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_PwmInput_period
{
public:
  explicit Init_PwmInput_period(::px4_msgs::msg::PwmInput & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::PwmInput period(::px4_msgs::msg::PwmInput::_period_type arg)
  {
    msg_.period = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::PwmInput msg_;
};

class Init_PwmInput_pulse_width
{
public:
  explicit Init_PwmInput_pulse_width(::px4_msgs::msg::PwmInput & msg)
  : msg_(msg)
  {}
  Init_PwmInput_period pulse_width(::px4_msgs::msg::PwmInput::_pulse_width_type arg)
  {
    msg_.pulse_width = std::move(arg);
    return Init_PwmInput_period(msg_);
  }

private:
  ::px4_msgs::msg::PwmInput msg_;
};

class Init_PwmInput_error_count
{
public:
  explicit Init_PwmInput_error_count(::px4_msgs::msg::PwmInput & msg)
  : msg_(msg)
  {}
  Init_PwmInput_pulse_width error_count(::px4_msgs::msg::PwmInput::_error_count_type arg)
  {
    msg_.error_count = std::move(arg);
    return Init_PwmInput_pulse_width(msg_);
  }

private:
  ::px4_msgs::msg::PwmInput msg_;
};

class Init_PwmInput_timestamp
{
public:
  Init_PwmInput_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PwmInput_error_count timestamp(::px4_msgs::msg::PwmInput::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PwmInput_error_count(msg_);
  }

private:
  ::px4_msgs::msg::PwmInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::PwmInput>()
{
  return px4_msgs::msg::builder::Init_PwmInput_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PWM_INPUT__BUILDER_HPP_
