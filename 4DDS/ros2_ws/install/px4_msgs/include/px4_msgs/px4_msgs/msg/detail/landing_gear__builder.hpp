// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/LandingGear.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_GEAR__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__LANDING_GEAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/landing_gear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_LandingGear_landing_gear
{
public:
  explicit Init_LandingGear_landing_gear(::px4_msgs::msg::LandingGear & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::LandingGear landing_gear(::px4_msgs::msg::LandingGear::_landing_gear_type arg)
  {
    msg_.landing_gear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::LandingGear msg_;
};

class Init_LandingGear_timestamp
{
public:
  Init_LandingGear_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandingGear_landing_gear timestamp(::px4_msgs::msg::LandingGear::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LandingGear_landing_gear(msg_);
  }

private:
  ::px4_msgs::msg::LandingGear msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::LandingGear>()
{
  return px4_msgs::msg::builder::Init_LandingGear_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_GEAR__BUILDER_HPP_
