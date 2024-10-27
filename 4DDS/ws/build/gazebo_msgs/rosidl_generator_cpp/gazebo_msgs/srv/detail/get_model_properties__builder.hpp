// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/GetModelProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/get_model_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetModelProperties_Request_model_name
{
public:
  Init_GetModelProperties_Request_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gazebo_msgs::srv::GetModelProperties_Request model_name(::gazebo_msgs::srv::GetModelProperties_Request::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelProperties_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetModelProperties_Request>()
{
  return gazebo_msgs::srv::builder::Init_GetModelProperties_Request_model_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetModelProperties_Response_status_message
{
public:
  explicit Init_GetModelProperties_Response_status_message(::gazebo_msgs::srv::GetModelProperties_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetModelProperties_Response status_message(::gazebo_msgs::srv::GetModelProperties_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelProperties_Response msg_;
};

class Init_GetModelProperties_Response_success
{
public:
  explicit Init_GetModelProperties_Response_success(::gazebo_msgs::srv::GetModelProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelProperties_Response_status_message success(::gazebo_msgs::srv::GetModelProperties_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetModelProperties_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelProperties_Response msg_;
};

class Init_GetModelProperties_Response_is_static
{
public:
  explicit Init_GetModelProperties_Response_is_static(::gazebo_msgs::srv::GetModelProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelProperties_Response_success is_static(::gazebo_msgs::srv::GetModelProperties_Response::_is_static_type arg)
  {
    msg_.is_static = std::move(arg);
    return Init_GetModelProperties_Response_success(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelProperties_Response msg_;
};

class Init_GetModelProperties_Response_child_model_names
{
public:
  explicit Init_GetModelProperties_Response_child_model_names(::gazebo_msgs::srv::GetModelProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelProperties_Response_is_static child_model_names(::gazebo_msgs::srv::GetModelProperties_Response::_child_model_names_type arg)
  {
    msg_.child_model_names = std::move(arg);
    return Init_GetModelProperties_Response_is_static(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelProperties_Response msg_;
};

class Init_GetModelProperties_Response_joint_names
{
public:
  explicit Init_GetModelProperties_Response_joint_names(::gazebo_msgs::srv::GetModelProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelProperties_Response_child_model_names joint_names(::gazebo_msgs::srv::GetModelProperties_Response::_joint_names_type arg)
  {
    msg_.joint_names = std::move(arg);
    return Init_GetModelProperties_Response_child_model_names(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelProperties_Response msg_;
};

class Init_GetModelProperties_Response_geom_names
{
public:
  explicit Init_GetModelProperties_Response_geom_names(::gazebo_msgs::srv::GetModelProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelProperties_Response_joint_names geom_names(::gazebo_msgs::srv::GetModelProperties_Response::_geom_names_type arg)
  {
    msg_.geom_names = std::move(arg);
    return Init_GetModelProperties_Response_joint_names(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelProperties_Response msg_;
};

class Init_GetModelProperties_Response_body_names
{
public:
  explicit Init_GetModelProperties_Response_body_names(::gazebo_msgs::srv::GetModelProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelProperties_Response_geom_names body_names(::gazebo_msgs::srv::GetModelProperties_Response::_body_names_type arg)
  {
    msg_.body_names = std::move(arg);
    return Init_GetModelProperties_Response_geom_names(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelProperties_Response msg_;
};

class Init_GetModelProperties_Response_canonical_body_name
{
public:
  explicit Init_GetModelProperties_Response_canonical_body_name(::gazebo_msgs::srv::GetModelProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelProperties_Response_body_names canonical_body_name(::gazebo_msgs::srv::GetModelProperties_Response::_canonical_body_name_type arg)
  {
    msg_.canonical_body_name = std::move(arg);
    return Init_GetModelProperties_Response_body_names(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelProperties_Response msg_;
};

class Init_GetModelProperties_Response_parent_model_name
{
public:
  Init_GetModelProperties_Response_parent_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetModelProperties_Response_canonical_body_name parent_model_name(::gazebo_msgs::srv::GetModelProperties_Response::_parent_model_name_type arg)
  {
    msg_.parent_model_name = std::move(arg);
    return Init_GetModelProperties_Response_canonical_body_name(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelProperties_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetModelProperties_Response>()
{
  return gazebo_msgs::srv::builder::Init_GetModelProperties_Response_parent_model_name();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__BUILDER_HPP_
