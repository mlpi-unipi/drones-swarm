// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/world_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_WorldState_wrench
{
public:
  explicit Init_WorldState_wrench(::gazebo_msgs::msg::WorldState & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::WorldState wrench(::gazebo_msgs::msg::WorldState::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::WorldState msg_;
};

class Init_WorldState_twist
{
public:
  explicit Init_WorldState_twist(::gazebo_msgs::msg::WorldState & msg)
  : msg_(msg)
  {}
  Init_WorldState_wrench twist(::gazebo_msgs::msg::WorldState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_WorldState_wrench(msg_);
  }

private:
  ::gazebo_msgs::msg::WorldState msg_;
};

class Init_WorldState_pose
{
public:
  explicit Init_WorldState_pose(::gazebo_msgs::msg::WorldState & msg)
  : msg_(msg)
  {}
  Init_WorldState_twist pose(::gazebo_msgs::msg::WorldState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_WorldState_twist(msg_);
  }

private:
  ::gazebo_msgs::msg::WorldState msg_;
};

class Init_WorldState_name
{
public:
  explicit Init_WorldState_name(::gazebo_msgs::msg::WorldState & msg)
  : msg_(msg)
  {}
  Init_WorldState_pose name(::gazebo_msgs::msg::WorldState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_WorldState_pose(msg_);
  }

private:
  ::gazebo_msgs::msg::WorldState msg_;
};

class Init_WorldState_header
{
public:
  Init_WorldState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldState_name header(::gazebo_msgs::msg::WorldState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WorldState_name(msg_);
  }

private:
  ::gazebo_msgs::msg::WorldState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::WorldState>()
{
  return gazebo_msgs::msg::builder::Init_WorldState_header();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__BUILDER_HPP_
