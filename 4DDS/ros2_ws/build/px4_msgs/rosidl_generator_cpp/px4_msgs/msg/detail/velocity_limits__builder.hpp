// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VelocityLimits.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VELOCITY_LIMITS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VELOCITY_LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/velocity_limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VelocityLimits_yaw_rate
{
public:
  explicit Init_VelocityLimits_yaw_rate(::px4_msgs::msg::VelocityLimits & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VelocityLimits yaw_rate(::px4_msgs::msg::VelocityLimits::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VelocityLimits msg_;
};

class Init_VelocityLimits_vertical_velocity
{
public:
  explicit Init_VelocityLimits_vertical_velocity(::px4_msgs::msg::VelocityLimits & msg)
  : msg_(msg)
  {}
  Init_VelocityLimits_yaw_rate vertical_velocity(::px4_msgs::msg::VelocityLimits::_vertical_velocity_type arg)
  {
    msg_.vertical_velocity = std::move(arg);
    return Init_VelocityLimits_yaw_rate(msg_);
  }

private:
  ::px4_msgs::msg::VelocityLimits msg_;
};

class Init_VelocityLimits_horizontal_velocity
{
public:
  explicit Init_VelocityLimits_horizontal_velocity(::px4_msgs::msg::VelocityLimits & msg)
  : msg_(msg)
  {}
  Init_VelocityLimits_vertical_velocity horizontal_velocity(::px4_msgs::msg::VelocityLimits::_horizontal_velocity_type arg)
  {
    msg_.horizontal_velocity = std::move(arg);
    return Init_VelocityLimits_vertical_velocity(msg_);
  }

private:
  ::px4_msgs::msg::VelocityLimits msg_;
};

class Init_VelocityLimits_timestamp
{
public:
  Init_VelocityLimits_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityLimits_horizontal_velocity timestamp(::px4_msgs::msg::VelocityLimits::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VelocityLimits_horizontal_velocity(msg_);
  }

private:
  ::px4_msgs::msg::VelocityLimits msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VelocityLimits>()
{
  return px4_msgs::msg::builder::Init_VelocityLimits_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VELOCITY_LIMITS__BUILDER_HPP_
