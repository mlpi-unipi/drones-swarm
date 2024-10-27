// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/GetModelState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_STATE__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/get_model_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetModelState_Request_relative_entity_name
{
public:
  explicit Init_GetModelState_Request_relative_entity_name(::gazebo_msgs::srv::GetModelState_Request & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetModelState_Request relative_entity_name(::gazebo_msgs::srv::GetModelState_Request::_relative_entity_name_type arg)
  {
    msg_.relative_entity_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelState_Request msg_;
};

class Init_GetModelState_Request_model_name
{
public:
  Init_GetModelState_Request_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetModelState_Request_relative_entity_name model_name(::gazebo_msgs::srv::GetModelState_Request::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_GetModelState_Request_relative_entity_name(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetModelState_Request>()
{
  return gazebo_msgs::srv::builder::Init_GetModelState_Request_model_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetModelState_Response_status_message
{
public:
  explicit Init_GetModelState_Response_status_message(::gazebo_msgs::srv::GetModelState_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetModelState_Response status_message(::gazebo_msgs::srv::GetModelState_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelState_Response msg_;
};

class Init_GetModelState_Response_success
{
public:
  explicit Init_GetModelState_Response_success(::gazebo_msgs::srv::GetModelState_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelState_Response_status_message success(::gazebo_msgs::srv::GetModelState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetModelState_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelState_Response msg_;
};

class Init_GetModelState_Response_twist
{
public:
  explicit Init_GetModelState_Response_twist(::gazebo_msgs::srv::GetModelState_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelState_Response_success twist(::gazebo_msgs::srv::GetModelState_Response::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_GetModelState_Response_success(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelState_Response msg_;
};

class Init_GetModelState_Response_pose
{
public:
  explicit Init_GetModelState_Response_pose(::gazebo_msgs::srv::GetModelState_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelState_Response_twist pose(::gazebo_msgs::srv::GetModelState_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_GetModelState_Response_twist(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelState_Response msg_;
};

class Init_GetModelState_Response_header
{
public:
  Init_GetModelState_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetModelState_Response_pose header(::gazebo_msgs::srv::GetModelState_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetModelState_Response_pose(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetModelState_Response>()
{
  return gazebo_msgs::srv::builder::Init_GetModelState_Response_header();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_STATE__BUILDER_HPP_
