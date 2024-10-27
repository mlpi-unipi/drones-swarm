// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/WheelSlip.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__WHEEL_SLIP__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__WHEEL_SLIP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/wheel_slip__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelSlip_longitudinal_slip
{
public:
  explicit Init_WheelSlip_longitudinal_slip(::gazebo_msgs::msg::WheelSlip & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::WheelSlip longitudinal_slip(::gazebo_msgs::msg::WheelSlip::_longitudinal_slip_type arg)
  {
    msg_.longitudinal_slip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::WheelSlip msg_;
};

class Init_WheelSlip_lateral_slip
{
public:
  explicit Init_WheelSlip_lateral_slip(::gazebo_msgs::msg::WheelSlip & msg)
  : msg_(msg)
  {}
  Init_WheelSlip_longitudinal_slip lateral_slip(::gazebo_msgs::msg::WheelSlip::_lateral_slip_type arg)
  {
    msg_.lateral_slip = std::move(arg);
    return Init_WheelSlip_longitudinal_slip(msg_);
  }

private:
  ::gazebo_msgs::msg::WheelSlip msg_;
};

class Init_WheelSlip_name
{
public:
  Init_WheelSlip_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelSlip_lateral_slip name(::gazebo_msgs::msg::WheelSlip::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_WheelSlip_lateral_slip(msg_);
  }

private:
  ::gazebo_msgs::msg::WheelSlip msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::WheelSlip>()
{
  return gazebo_msgs::msg::builder::Init_WheelSlip_name();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__WHEEL_SLIP__BUILDER_HPP_
