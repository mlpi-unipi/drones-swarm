// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/ModelStates.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__MODEL_STATES__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__MODEL_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/model_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_ModelStates_twist
{
public:
  explicit Init_ModelStates_twist(::gazebo_msgs::msg::ModelStates & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::ModelStates twist(::gazebo_msgs::msg::ModelStates::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::ModelStates msg_;
};

class Init_ModelStates_pose
{
public:
  explicit Init_ModelStates_pose(::gazebo_msgs::msg::ModelStates & msg)
  : msg_(msg)
  {}
  Init_ModelStates_twist pose(::gazebo_msgs::msg::ModelStates::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ModelStates_twist(msg_);
  }

private:
  ::gazebo_msgs::msg::ModelStates msg_;
};

class Init_ModelStates_name
{
public:
  Init_ModelStates_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModelStates_pose name(::gazebo_msgs::msg::ModelStates::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ModelStates_pose(msg_);
  }

private:
  ::gazebo_msgs::msg::ModelStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::ModelStates>()
{
  return gazebo_msgs::msg::builder::Init_ModelStates_name();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__MODEL_STATES__BUILDER_HPP_
