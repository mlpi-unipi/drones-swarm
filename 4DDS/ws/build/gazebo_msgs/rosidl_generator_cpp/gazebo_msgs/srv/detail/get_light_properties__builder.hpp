// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/GetLightProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_LIGHT_PROPERTIES__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_LIGHT_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/get_light_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLightProperties_Request_light_name
{
public:
  Init_GetLightProperties_Request_light_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gazebo_msgs::srv::GetLightProperties_Request light_name(::gazebo_msgs::srv::GetLightProperties_Request::_light_name_type arg)
  {
    msg_.light_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLightProperties_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetLightProperties_Request>()
{
  return gazebo_msgs::srv::builder::Init_GetLightProperties_Request_light_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLightProperties_Response_status_message
{
public:
  explicit Init_GetLightProperties_Response_status_message(::gazebo_msgs::srv::GetLightProperties_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetLightProperties_Response status_message(::gazebo_msgs::srv::GetLightProperties_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLightProperties_Response msg_;
};

class Init_GetLightProperties_Response_success
{
public:
  explicit Init_GetLightProperties_Response_success(::gazebo_msgs::srv::GetLightProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLightProperties_Response_status_message success(::gazebo_msgs::srv::GetLightProperties_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetLightProperties_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLightProperties_Response msg_;
};

class Init_GetLightProperties_Response_attenuation_quadratic
{
public:
  explicit Init_GetLightProperties_Response_attenuation_quadratic(::gazebo_msgs::srv::GetLightProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLightProperties_Response_success attenuation_quadratic(::gazebo_msgs::srv::GetLightProperties_Response::_attenuation_quadratic_type arg)
  {
    msg_.attenuation_quadratic = std::move(arg);
    return Init_GetLightProperties_Response_success(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLightProperties_Response msg_;
};

class Init_GetLightProperties_Response_attenuation_linear
{
public:
  explicit Init_GetLightProperties_Response_attenuation_linear(::gazebo_msgs::srv::GetLightProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLightProperties_Response_attenuation_quadratic attenuation_linear(::gazebo_msgs::srv::GetLightProperties_Response::_attenuation_linear_type arg)
  {
    msg_.attenuation_linear = std::move(arg);
    return Init_GetLightProperties_Response_attenuation_quadratic(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLightProperties_Response msg_;
};

class Init_GetLightProperties_Response_attenuation_constant
{
public:
  explicit Init_GetLightProperties_Response_attenuation_constant(::gazebo_msgs::srv::GetLightProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetLightProperties_Response_attenuation_linear attenuation_constant(::gazebo_msgs::srv::GetLightProperties_Response::_attenuation_constant_type arg)
  {
    msg_.attenuation_constant = std::move(arg);
    return Init_GetLightProperties_Response_attenuation_linear(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLightProperties_Response msg_;
};

class Init_GetLightProperties_Response_diffuse
{
public:
  Init_GetLightProperties_Response_diffuse()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLightProperties_Response_attenuation_constant diffuse(::gazebo_msgs::srv::GetLightProperties_Response::_diffuse_type arg)
  {
    msg_.diffuse = std::move(arg);
    return Init_GetLightProperties_Response_attenuation_constant(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLightProperties_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetLightProperties_Response>()
{
  return gazebo_msgs::srv::builder::Init_GetLightProperties_Response_diffuse();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_LIGHT_PROPERTIES__BUILDER_HPP_
