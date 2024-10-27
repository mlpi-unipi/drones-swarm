// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/LandingGearWheel.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_GEAR_WHEEL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__LANDING_GEAR_WHEEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/landing_gear_wheel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_LandingGearWheel_normalized_wheel_setpoint
{
public:
  explicit Init_LandingGearWheel_normalized_wheel_setpoint(::px4_msgs::msg::LandingGearWheel & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::LandingGearWheel normalized_wheel_setpoint(::px4_msgs::msg::LandingGearWheel::_normalized_wheel_setpoint_type arg)
  {
    msg_.normalized_wheel_setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::LandingGearWheel msg_;
};

class Init_LandingGearWheel_timestamp
{
public:
  Init_LandingGearWheel_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandingGearWheel_normalized_wheel_setpoint timestamp(::px4_msgs::msg::LandingGearWheel::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LandingGearWheel_normalized_wheel_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::LandingGearWheel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::LandingGearWheel>()
{
  return px4_msgs::msg::builder::Init_LandingGearWheel_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_GEAR_WHEEL__BUILDER_HPP_
