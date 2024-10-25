// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/SetModelConfiguration.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_CONFIGURATION__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/set_model_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetModelConfiguration_Request_joint_positions
{
public:
  explicit Init_SetModelConfiguration_Request_joint_positions(::gazebo_msgs::srv::SetModelConfiguration_Request & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SetModelConfiguration_Request joint_positions(::gazebo_msgs::srv::SetModelConfiguration_Request::_joint_positions_type arg)
  {
    msg_.joint_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetModelConfiguration_Request msg_;
};

class Init_SetModelConfiguration_Request_joint_names
{
public:
  explicit Init_SetModelConfiguration_Request_joint_names(::gazebo_msgs::srv::SetModelConfiguration_Request & msg)
  : msg_(msg)
  {}
  Init_SetModelConfiguration_Request_joint_positions joint_names(::gazebo_msgs::srv::SetModelConfiguration_Request::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_SetModelConfiguration_Request_joint_positions(msg_);
  }

private:
  ::gazebo_msgs::srv::SetModelConfiguration_Request msg_;
};

class Init_SetModelConfiguration_Request_urdf_param_name
{
public:
  explicit Init_SetModelConfiguration_Request_urdf_param_name(::gazebo_msgs::srv::SetModelConfiguration_Request & msg)
  : msg_(msg)
  {}
  Init_SetModelConfiguration_Request_joint_names urdf_param_name(::gazebo_msgs::srv::SetModelConfiguration_Request::_urdf_param_name_type arg)
  {
    msg_.urdf_param_name = std::move(arg);
    return Init_SetModelConfiguration_Request_joint_names(msg_);
  }

private:
  ::gazebo_msgs::srv::SetModelConfiguration_Request msg_;
};

class Init_SetModelConfiguration_Request_model_name
{
public:
  Init_SetModelConfiguration_Request_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetModelConfiguration_Request_urdf_param_name model_name(::gazebo_msgs::srv::SetModelConfiguration_Request::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_SetModelConfiguration_Request_urdf_param_name(msg_);
  }

private:
  ::gazebo_msgs::srv::SetModelConfiguration_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetModelConfiguration_Request>()
{
  return gazebo_msgs::srv::builder::Init_SetModelConfiguration_Request_model_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetModelConfiguration_Response_status_message
{
public:
  explicit Init_SetModelConfiguration_Response_status_message(::gazebo_msgs::srv::SetModelConfiguration_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SetModelConfiguration_Response status_message(::gazebo_msgs::srv::SetModelConfiguration_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetModelConfiguration_Response msg_;
};

class Init_SetModelConfiguration_Response_success
{
public:
  Init_SetModelConfiguration_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetModelConfiguration_Response_status_message success(::gazebo_msgs::srv::SetModelConfiguration_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetModelConfiguration_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::SetModelConfiguration_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetModelConfiguration_Response>()
{
  return gazebo_msgs::srv::builder::Init_SetModelConfiguration_Response_success();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_CONFIGURATION__BUILDER_HPP_
