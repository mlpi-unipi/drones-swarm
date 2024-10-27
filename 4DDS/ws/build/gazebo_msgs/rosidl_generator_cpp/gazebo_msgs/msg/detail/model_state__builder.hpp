// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/ModelState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__MODEL_STATE__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__MODEL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/model_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_ModelState_reference_frame
{
public:
  explicit Init_ModelState_reference_frame(::gazebo_msgs::msg::ModelState & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::ModelState reference_frame(::gazebo_msgs::msg::ModelState::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::ModelState msg_;
};

class Init_ModelState_twist
{
public:
  explicit Init_ModelState_twist(::gazebo_msgs::msg::ModelState & msg)
  : msg_(msg)
  {}
  Init_ModelState_reference_frame twist(::gazebo_msgs::msg::ModelState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_ModelState_reference_frame(msg_);
  }

private:
  ::gazebo_msgs::msg::ModelState msg_;
};

class Init_ModelState_pose
{
public:
  explicit Init_ModelState_pose(::gazebo_msgs::msg::ModelState & msg)
  : msg_(msg)
  {}
  Init_ModelState_twist pose(::gazebo_msgs::msg::ModelState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ModelState_twist(msg_);
  }

private:
  ::gazebo_msgs::msg::ModelState msg_;
};

class Init_ModelState_model_name
{
public:
  Init_ModelState_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModelState_pose model_name(::gazebo_msgs::msg::ModelState::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_ModelState_pose(msg_);
  }

private:
  ::gazebo_msgs::msg::ModelState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::ModelState>()
{
  return gazebo_msgs::msg::builder::Init_ModelState_model_name();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__MODEL_STATE__BUILDER_HPP_
