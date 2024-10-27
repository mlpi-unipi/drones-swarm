// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/GetLinkProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_LINK_PROPERTIES__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_LINK_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/get_link_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLinkProperties_Request_link_name
{
public:
  Init_GetLinkProperties_Request_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gazebo_msgs::srv::GetLinkProperties_Request link_name(::gazebo_msgs::srv::GetLinkProperties_Request::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetLinkProperties_Request>()
{
  return gazebo_msgs::srv::builder::Init_GetLinkProperties_Request_link_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLinkProperties_Response_status_message
{
public:
  explicit Init_GetLinkProperties_Response_status_message(::gazebo_msgs::srv::GetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetLinkProperties_Response status_message(::gazebo_msgs::srv::GetLinkProperties_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

class Init_GetLinkProperties_Response_success
{
public:
  explicit Init_GetLinkProperties_Response_success(::gazebo_msgs::srv::GetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLinkProperties_Response_status_message success(::gazebo_msgs::srv::GetLinkProperties_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetLinkProperties_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

class Init_GetLinkProperties_Response_izz
{
public:
  explicit Init_GetLinkProperties_Response_izz(::gazebo_msgs::srv::GetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLinkProperties_Response_success izz(::gazebo_msgs::srv::GetLinkProperties_Response::_izz_type arg)
  {
    msg_.izz = std::move(arg);
    return Init_GetLinkProperties_Response_success(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

class Init_GetLinkProperties_Response_iyz
{
public:
  explicit Init_GetLinkProperties_Response_iyz(::gazebo_msgs::srv::GetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLinkProperties_Response_izz iyz(::gazebo_msgs::srv::GetLinkProperties_Response::_iyz_type arg)
  {
    msg_.iyz = std::move(arg);
    return Init_GetLinkProperties_Response_izz(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

class Init_GetLinkProperties_Response_iyy
{
public:
  explicit Init_GetLinkProperties_Response_iyy(::gazebo_msgs::srv::GetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLinkProperties_Response_iyz iyy(::gazebo_msgs::srv::GetLinkProperties_Response::_iyy_type arg)
  {
    msg_.iyy = std::move(arg);
    return Init_GetLinkProperties_Response_iyz(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

class Init_GetLinkProperties_Response_ixz
{
public:
  explicit Init_GetLinkProperties_Response_ixz(::gazebo_msgs::srv::GetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLinkProperties_Response_iyy ixz(::gazebo_msgs::srv::GetLinkProperties_Response::_ixz_type arg)
  {
    msg_.ixz = std::move(arg);
    return Init_GetLinkProperties_Response_iyy(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

class Init_GetLinkProperties_Response_ixy
{
public:
  explicit Init_GetLinkProperties_Response_ixy(::gazebo_msgs::srv::GetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLinkProperties_Response_ixz ixy(::gazebo_msgs::srv::GetLinkProperties_Response::_ixy_type arg)
  {
    msg_.ixy = std::move(arg);
    return Init_GetLinkProperties_Response_ixz(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

class Init_GetLinkProperties_Response_ixx
{
public:
  explicit Init_GetLinkProperties_Response_ixx(::gazebo_msgs::srv::GetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLinkProperties_Response_ixy ixx(::gazebo_msgs::srv::GetLinkProperties_Response::_ixx_type arg)
  {
    msg_.ixx = std::move(arg);
    return Init_GetLinkProperties_Response_ixy(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

class Init_GetLinkProperties_Response_mass
{
public:
  explicit Init_GetLinkProperties_Response_mass(::gazebo_msgs::srv::GetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLinkProperties_Response_ixx mass(::gazebo_msgs::srv::GetLinkProperties_Response::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_GetLinkProperties_Response_ixx(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

class Init_GetLinkProperties_Response_gravity_mode
{
public:
  explicit Init_GetLinkProperties_Response_gravity_mode(::gazebo_msgs::srv::GetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLinkProperties_Response_mass gravity_mode(::gazebo_msgs::srv::GetLinkProperties_Response::_gravity_mode_type arg)
  {
    msg_.gravity_mode = std::move(arg);
    return Init_GetLinkProperties_Response_mass(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

class Init_GetLinkProperties_Response_com
{
public:
  Init_GetLinkProperties_Response_com()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLinkProperties_Response_gravity_mode com(::gazebo_msgs::srv::GetLinkProperties_Response::_com_type arg)
  {
    msg_.com = std::move(arg);
    return Init_GetLinkProperties_Response_gravity_mode(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkProperties_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetLinkProperties_Response>()
{
  return gazebo_msgs::srv::builder::Init_GetLinkProperties_Response_com();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_LINK_PROPERTIES__BUILDER_HPP_
