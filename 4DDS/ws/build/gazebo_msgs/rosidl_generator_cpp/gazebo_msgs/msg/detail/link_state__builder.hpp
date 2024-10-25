// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/LinkState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__LINK_STATE__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__LINK_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/link_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkState_reference_frame
{
public:
  explicit Init_LinkState_reference_frame(::gazebo_msgs::msg::LinkState & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::LinkState reference_frame(::gazebo_msgs::msg::LinkState::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::LinkState msg_;
};

class Init_LinkState_twist
{
public:
  explicit Init_LinkState_twist(::gazebo_msgs::msg::LinkState & msg)
  : msg_(msg)
  {}
  Init_LinkState_reference_frame twist(::gazebo_msgs::msg::LinkState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_LinkState_reference_frame(msg_);
  }

private:
  ::gazebo_msgs::msg::LinkState msg_;
};

class Init_LinkState_pose
{
public:
  explicit Init_LinkState_pose(::gazebo_msgs::msg::LinkState & msg)
  : msg_(msg)
  {}
  Init_LinkState_twist pose(::gazebo_msgs::msg::LinkState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_LinkState_twist(msg_);
  }

private:
  ::gazebo_msgs::msg::LinkState msg_;
};

class Init_LinkState_link_name
{
public:
  Init_LinkState_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkState_pose link_name(::gazebo_msgs::msg::LinkState::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_LinkState_pose(msg_);
  }

private:
  ::gazebo_msgs::msg::LinkState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::LinkState>()
{
  return gazebo_msgs::msg::builder::Init_LinkState_link_name();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__LINK_STATE__BUILDER_HPP_
