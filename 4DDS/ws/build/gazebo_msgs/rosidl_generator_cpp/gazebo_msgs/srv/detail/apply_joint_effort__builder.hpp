// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/ApplyJointEffort.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__APPLY_JOINT_EFFORT__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__APPLY_JOINT_EFFORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/apply_joint_effort__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyJointEffort_Request_duration
{
public:
  explicit Init_ApplyJointEffort_Request_duration(::gazebo_msgs::srv::ApplyJointEffort_Request & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::ApplyJointEffort_Request duration(::gazebo_msgs::srv::ApplyJointEffort_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyJointEffort_Request msg_;
};

class Init_ApplyJointEffort_Request_start_time
{
public:
  explicit Init_ApplyJointEffort_Request_start_time(::gazebo_msgs::srv::ApplyJointEffort_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyJointEffort_Request_duration start_time(::gazebo_msgs::srv::ApplyJointEffort_Request::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_ApplyJointEffort_Request_duration(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyJointEffort_Request msg_;
};

class Init_ApplyJointEffort_Request_effort
{
public:
  explicit Init_ApplyJointEffort_Request_effort(::gazebo_msgs::srv::ApplyJointEffort_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyJointEffort_Request_start_time effort(::gazebo_msgs::srv::ApplyJointEffort_Request::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return Init_ApplyJointEffort_Request_start_time(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyJointEffort_Request msg_;
};

class Init_ApplyJointEffort_Request_joint_name
{
public:
  Init_ApplyJointEffort_Request_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyJointEffort_Request_effort joint_name(::gazebo_msgs::srv::ApplyJointEffort_Request::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_ApplyJointEffort_Request_effort(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyJointEffort_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::ApplyJointEffort_Request>()
{
  return gazebo_msgs::srv::builder::Init_ApplyJointEffort_Request_joint_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyJointEffort_Response_status_message
{
public:
  explicit Init_ApplyJointEffort_Response_status_message(::gazebo_msgs::srv::ApplyJointEffort_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::ApplyJointEffort_Response status_message(::gazebo_msgs::srv::ApplyJointEffort_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyJointEffort_Response msg_;
};

class Init_ApplyJointEffort_Response_success
{
public:
  Init_ApplyJointEffort_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyJointEffort_Response_status_message success(::gazebo_msgs::srv::ApplyJointEffort_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ApplyJointEffort_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyJointEffort_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::ApplyJointEffort_Response>()
{
  return gazebo_msgs::srv::builder::Init_ApplyJointEffort_Response_success();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__APPLY_JOINT_EFFORT__BUILDER_HPP_
