// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/LinkStates.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__LINK_STATES__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__LINK_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/link_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkStates_twist
{
public:
  explicit Init_LinkStates_twist(::gazebo_msgs::msg::LinkStates & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::LinkStates twist(::gazebo_msgs::msg::LinkStates::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::LinkStates msg_;
};

class Init_LinkStates_pose
{
public:
  explicit Init_LinkStates_pose(::gazebo_msgs::msg::LinkStates & msg)
  : msg_(msg)
  {}
  Init_LinkStates_twist pose(::gazebo_msgs::msg::LinkStates::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_LinkStates_twist(msg_);
  }

private:
  ::gazebo_msgs::msg::LinkStates msg_;
};

class Init_LinkStates_name
{
public:
  Init_LinkStates_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkStates_pose name(::gazebo_msgs::msg::LinkStates::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_LinkStates_pose(msg_);
  }

private:
  ::gazebo_msgs::msg::LinkStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::LinkStates>()
{
  return gazebo_msgs::msg::builder::Init_LinkStates_name();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__LINK_STATES__BUILDER_HPP_
