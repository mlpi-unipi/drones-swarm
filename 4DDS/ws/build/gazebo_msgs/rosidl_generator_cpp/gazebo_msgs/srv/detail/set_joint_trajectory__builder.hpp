// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/SetJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/set_joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointTrajectory_Request_disable_physics_updates
{
public:
  explicit Init_SetJointTrajectory_Request_disable_physics_updates(::gazebo_msgs::srv::SetJointTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SetJointTrajectory_Request disable_physics_updates(::gazebo_msgs::srv::SetJointTrajectory_Request::_disable_physics_updates_type arg)
  {
    msg_.disable_physics_updates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointTrajectory_Request msg_;
};

class Init_SetJointTrajectory_Request_set_model_pose
{
public:
  explicit Init_SetJointTrajectory_Request_set_model_pose(::gazebo_msgs::srv::SetJointTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointTrajectory_Request_disable_physics_updates set_model_pose(::gazebo_msgs::srv::SetJointTrajectory_Request::_set_model_pose_type arg)
  {
    msg_.set_model_pose = std::move(arg);
    return Init_SetJointTrajectory_Request_disable_physics_updates(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointTrajectory_Request msg_;
};

class Init_SetJointTrajectory_Request_model_pose
{
public:
  explicit Init_SetJointTrajectory_Request_model_pose(::gazebo_msgs::srv::SetJointTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointTrajectory_Request_set_model_pose model_pose(::gazebo_msgs::srv::SetJointTrajectory_Request::_model_pose_type arg)
  {
    msg_.model_pose = std::move(arg);
    return Init_SetJointTrajectory_Request_set_model_pose(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointTrajectory_Request msg_;
};

class Init_SetJointTrajectory_Request_joint_trajectory
{
public:
  explicit Init_SetJointTrajectory_Request_joint_trajectory(::gazebo_msgs::srv::SetJointTrajectory_Request & msg)
  : msg_(msg)
  {}
  Init_SetJointTrajectory_Request_model_pose joint_trajectory(::gazebo_msgs::srv::SetJointTrajectory_Request::_joint_trajectory_type arg)
  {
    msg_.joint_trajectory = std::move(arg);
    return Init_SetJointTrajectory_Request_model_pose(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointTrajectory_Request msg_;
};

class Init_SetJointTrajectory_Request_model_name
{
public:
  Init_SetJointTrajectory_Request_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointTrajectory_Request_joint_trajectory model_name(::gazebo_msgs::srv::SetJointTrajectory_Request::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_SetJointTrajectory_Request_joint_trajectory(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetJointTrajectory_Request>()
{
  return gazebo_msgs::srv::builder::Init_SetJointTrajectory_Request_model_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointTrajectory_Response_status_message
{
public:
  explicit Init_SetJointTrajectory_Response_status_message(::gazebo_msgs::srv::SetJointTrajectory_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SetJointTrajectory_Response status_message(::gazebo_msgs::srv::SetJointTrajectory_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointTrajectory_Response msg_;
};

class Init_SetJointTrajectory_Response_success
{
public:
  Init_SetJointTrajectory_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointTrajectory_Response_status_message success(::gazebo_msgs::srv::SetJointTrajectory_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetJointTrajectory_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetJointTrajectory_Response>()
{
  return gazebo_msgs::srv::builder::Init_SetJointTrajectory_Response_success();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__BUILDER_HPP_
