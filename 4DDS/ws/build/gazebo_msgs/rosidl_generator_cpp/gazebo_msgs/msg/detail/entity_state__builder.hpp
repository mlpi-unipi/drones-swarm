// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/EntityState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ENTITY_STATE__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__ENTITY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/entity_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_EntityState_reference_frame
{
public:
  explicit Init_EntityState_reference_frame(::gazebo_msgs::msg::EntityState & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::EntityState reference_frame(::gazebo_msgs::msg::EntityState::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::EntityState msg_;
};

class Init_EntityState_twist
{
public:
  explicit Init_EntityState_twist(::gazebo_msgs::msg::EntityState & msg)
  : msg_(msg)
  {}
  Init_EntityState_reference_frame twist(::gazebo_msgs::msg::EntityState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_EntityState_reference_frame(msg_);
  }

private:
  ::gazebo_msgs::msg::EntityState msg_;
};

class Init_EntityState_pose
{
public:
  explicit Init_EntityState_pose(::gazebo_msgs::msg::EntityState & msg)
  : msg_(msg)
  {}
  Init_EntityState_twist pose(::gazebo_msgs::msg::EntityState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_EntityState_twist(msg_);
  }

private:
  ::gazebo_msgs::msg::EntityState msg_;
};

class Init_EntityState_name
{
public:
  Init_EntityState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EntityState_pose name(::gazebo_msgs::msg::EntityState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_EntityState_pose(msg_);
  }

private:
  ::gazebo_msgs::msg::EntityState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::EntityState>()
{
  return gazebo_msgs::msg::builder::Init_EntityState_name();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__ENTITY_STATE__BUILDER_HPP_
