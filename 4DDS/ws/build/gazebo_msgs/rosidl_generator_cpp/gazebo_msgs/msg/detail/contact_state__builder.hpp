// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/ContactState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/contact_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_ContactState_depths
{
public:
  explicit Init_ContactState_depths(::gazebo_msgs::msg::ContactState & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::ContactState depths(::gazebo_msgs::msg::ContactState::_depths_type arg)
  {
    msg_.depths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::ContactState msg_;
};

class Init_ContactState_contact_normals
{
public:
  explicit Init_ContactState_contact_normals(::gazebo_msgs::msg::ContactState & msg)
  : msg_(msg)
  {}
  Init_ContactState_depths contact_normals(::gazebo_msgs::msg::ContactState::_contact_normals_type arg)
  {
    msg_.contact_normals = std::move(arg);
    return Init_ContactState_depths(msg_);
  }

private:
  ::gazebo_msgs::msg::ContactState msg_;
};

class Init_ContactState_contact_positions
{
public:
  explicit Init_ContactState_contact_positions(::gazebo_msgs::msg::ContactState & msg)
  : msg_(msg)
  {}
  Init_ContactState_contact_normals contact_positions(::gazebo_msgs::msg::ContactState::_contact_positions_type arg)
  {
    msg_.contact_positions = std::move(arg);
    return Init_ContactState_contact_normals(msg_);
  }

private:
  ::gazebo_msgs::msg::ContactState msg_;
};

class Init_ContactState_total_wrench
{
public:
  explicit Init_ContactState_total_wrench(::gazebo_msgs::msg::ContactState & msg)
  : msg_(msg)
  {}
  Init_ContactState_contact_positions total_wrench(::gazebo_msgs::msg::ContactState::_total_wrench_type arg)
  {
    msg_.total_wrench = std::move(arg);
    return Init_ContactState_contact_positions(msg_);
  }

private:
  ::gazebo_msgs::msg::ContactState msg_;
};

class Init_ContactState_wrenches
{
public:
  explicit Init_ContactState_wrenches(::gazebo_msgs::msg::ContactState & msg)
  : msg_(msg)
  {}
  Init_ContactState_total_wrench wrenches(::gazebo_msgs::msg::ContactState::_wrenches_type arg)
  {
    msg_.wrenches = std::move(arg);
    return Init_ContactState_total_wrench(msg_);
  }

private:
  ::gazebo_msgs::msg::ContactState msg_;
};

class Init_ContactState_collision2_name
{
public:
  explicit Init_ContactState_collision2_name(::gazebo_msgs::msg::ContactState & msg)
  : msg_(msg)
  {}
  Init_ContactState_wrenches collision2_name(::gazebo_msgs::msg::ContactState::_collision2_name_type arg)
  {
    msg_.collision2_name = std::move(arg);
    return Init_ContactState_wrenches(msg_);
  }

private:
  ::gazebo_msgs::msg::ContactState msg_;
};

class Init_ContactState_collision1_name
{
public:
  explicit Init_ContactState_collision1_name(::gazebo_msgs::msg::ContactState & msg)
  : msg_(msg)
  {}
  Init_ContactState_collision2_name collision1_name(::gazebo_msgs::msg::ContactState::_collision1_name_type arg)
  {
    msg_.collision1_name = std::move(arg);
    return Init_ContactState_collision2_name(msg_);
  }

private:
  ::gazebo_msgs::msg::ContactState msg_;
};

class Init_ContactState_info
{
public:
  Init_ContactState_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactState_collision1_name info(::gazebo_msgs::msg::ContactState::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ContactState_collision1_name(msg_);
  }

private:
  ::gazebo_msgs::msg::ContactState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::ContactState>()
{
  return gazebo_msgs::msg::builder::Init_ContactState_info();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__BUILDER_HPP_
