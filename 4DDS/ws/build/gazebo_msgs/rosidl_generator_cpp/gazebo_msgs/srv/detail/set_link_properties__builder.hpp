// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/SetLinkProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_LINK_PROPERTIES__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_LINK_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/set_link_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLinkProperties_Request_izz
{
public:
  explicit Init_SetLinkProperties_Request_izz(::gazebo_msgs::srv::SetLinkProperties_Request & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SetLinkProperties_Request izz(::gazebo_msgs::srv::SetLinkProperties_Request::_izz_type arg)
  {
    msg_.izz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Request msg_;
};

class Init_SetLinkProperties_Request_iyz
{
public:
  explicit Init_SetLinkProperties_Request_iyz(::gazebo_msgs::srv::SetLinkProperties_Request & msg)
  : msg_(msg)
  {}
  Init_SetLinkProperties_Request_izz iyz(::gazebo_msgs::srv::SetLinkProperties_Request::_iyz_type arg)
  {
    msg_.iyz = std::move(arg);
    return Init_SetLinkProperties_Request_izz(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Request msg_;
};

class Init_SetLinkProperties_Request_iyy
{
public:
  explicit Init_SetLinkProperties_Request_iyy(::gazebo_msgs::srv::SetLinkProperties_Request & msg)
  : msg_(msg)
  {}
  Init_SetLinkProperties_Request_iyz iyy(::gazebo_msgs::srv::SetLinkProperties_Request::_iyy_type arg)
  {
    msg_.iyy = std::move(arg);
    return Init_SetLinkProperties_Request_iyz(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Request msg_;
};

class Init_SetLinkProperties_Request_ixz
{
public:
  explicit Init_SetLinkProperties_Request_ixz(::gazebo_msgs::srv::SetLinkProperties_Request & msg)
  : msg_(msg)
  {}
  Init_SetLinkProperties_Request_iyy ixz(::gazebo_msgs::srv::SetLinkProperties_Request::_ixz_type arg)
  {
    msg_.ixz = std::move(arg);
    return Init_SetLinkProperties_Request_iyy(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Request msg_;
};

class Init_SetLinkProperties_Request_ixy
{
public:
  explicit Init_SetLinkProperties_Request_ixy(::gazebo_msgs::srv::SetLinkProperties_Request & msg)
  : msg_(msg)
  {}
  Init_SetLinkProperties_Request_ixz ixy(::gazebo_msgs::srv::SetLinkProperties_Request::_ixy_type arg)
  {
    msg_.ixy = std::move(arg);
    return Init_SetLinkProperties_Request_ixz(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Request msg_;
};

class Init_SetLinkProperties_Request_ixx
{
public:
  explicit Init_SetLinkProperties_Request_ixx(::gazebo_msgs::srv::SetLinkProperties_Request & msg)
  : msg_(msg)
  {}
  Init_SetLinkProperties_Request_ixy ixx(::gazebo_msgs::srv::SetLinkProperties_Request::_ixx_type arg)
  {
    msg_.ixx = std::move(arg);
    return Init_SetLinkProperties_Request_ixy(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Request msg_;
};

class Init_SetLinkProperties_Request_mass
{
public:
  explicit Init_SetLinkProperties_Request_mass(::gazebo_msgs::srv::SetLinkProperties_Request & msg)
  : msg_(msg)
  {}
  Init_SetLinkProperties_Request_ixx mass(::gazebo_msgs::srv::SetLinkProperties_Request::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_SetLinkProperties_Request_ixx(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Request msg_;
};

class Init_SetLinkProperties_Request_gravity_mode
{
public:
  explicit Init_SetLinkProperties_Request_gravity_mode(::gazebo_msgs::srv::SetLinkProperties_Request & msg)
  : msg_(msg)
  {}
  Init_SetLinkProperties_Request_mass gravity_mode(::gazebo_msgs::srv::SetLinkProperties_Request::_gravity_mode_type arg)
  {
    msg_.gravity_mode = std::move(arg);
    return Init_SetLinkProperties_Request_mass(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Request msg_;
};

class Init_SetLinkProperties_Request_com
{
public:
  explicit Init_SetLinkProperties_Request_com(::gazebo_msgs::srv::SetLinkProperties_Request & msg)
  : msg_(msg)
  {}
  Init_SetLinkProperties_Request_gravity_mode com(::gazebo_msgs::srv::SetLinkProperties_Request::_com_type arg)
  {
    msg_.com = std::move(arg);
    return Init_SetLinkProperties_Request_gravity_mode(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Request msg_;
};

class Init_SetLinkProperties_Request_link_name
{
public:
  Init_SetLinkProperties_Request_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLinkProperties_Request_com link_name(::gazebo_msgs::srv::SetLinkProperties_Request::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_SetLinkProperties_Request_com(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetLinkProperties_Request>()
{
  return gazebo_msgs::srv::builder::Init_SetLinkProperties_Request_link_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLinkProperties_Response_status_message
{
public:
  explicit Init_SetLinkProperties_Response_status_message(::gazebo_msgs::srv::SetLinkProperties_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SetLinkProperties_Response status_message(::gazebo_msgs::srv::SetLinkProperties_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Response msg_;
};

class Init_SetLinkProperties_Response_success
{
public:
  Init_SetLinkProperties_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLinkProperties_Response_status_message success(::gazebo_msgs::srv::SetLinkProperties_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetLinkProperties_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::SetLinkProperties_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SetLinkProperties_Response>()
{
  return gazebo_msgs::srv::builder::Init_SetLinkProperties_Response_success();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_LINK_PROPERTIES__BUILDER_HPP_
