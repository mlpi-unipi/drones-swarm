// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/SetJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_PROPERTIES__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/set_joint_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointProperties_Request_ode_joint_config
{
public:
  explicit Init_SetJointProperties_Request_ode_joint_config(::gazebo_msgs::srv::SetJointProperties_Request & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SetJointProperties_Request ode_joint_config(::gazebo_msgs::srv::SetJointProperties_Request::_ode_joint_config_type arg)
  {
    msg_.ode_joint_config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointProperties_Request msg_;
};

class Init_SetJointProperties_Request_joint_name
{
public:
  Init_SetJointProperties_Request_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointProperties_Request_ode_joint_config joint_name(::gazebo_msgs::srv::SetJointProperties_Request::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return Init_SetJointProperties_Request_ode_joint_config(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointProperties_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetJointProperties_Request>()
{
  return gazebo_msgs::srv::builder::Init_SetJointProperties_Request_joint_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetJointProperties_Response_status_message
{
public:
  explicit Init_SetJointProperties_Response_status_message(::gazebo_msgs::srv::SetJointProperties_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SetJointProperties_Response status_message(::gazebo_msgs::srv::SetJointProperties_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointProperties_Response msg_;
};

class Init_SetJointProperties_Response_success
{
public:
  Init_SetJointProperties_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointProperties_Response_status_message success(::gazebo_msgs::srv::SetJointProperties_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetJointProperties_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::SetJointProperties_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetJointProperties_Response>()
{
  return gazebo_msgs::srv::builder::Init_SetJointProperties_Response_success();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_PROPERTIES__BUILDER_HPP_
