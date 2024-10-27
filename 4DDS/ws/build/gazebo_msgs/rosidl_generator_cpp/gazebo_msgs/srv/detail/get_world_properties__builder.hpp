// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/GetWorldProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_WORLD_PROPERTIES__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_WORLD_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/get_world_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetWorldProperties_Request>()
{
  return ::gazebo_msgs::srv::GetWorldProperties_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetWorldProperties_Response_status_message
{
public:
  explicit Init_GetWorldProperties_Response_status_message(::gazebo_msgs::srv::GetWorldProperties_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetWorldProperties_Response status_message(::gazebo_msgs::srv::GetWorldProperties_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetWorldProperties_Response msg_;
};

class Init_GetWorldProperties_Response_success
{
public:
  explicit Init_GetWorldProperties_Response_success(::gazebo_msgs::srv::GetWorldProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetWorldProperties_Response_status_message success(::gazebo_msgs::srv::GetWorldProperties_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetWorldProperties_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::GetWorldProperties_Response msg_;
};

class Init_GetWorldProperties_Response_rendering_enabled
{
public:
  explicit Init_GetWorldProperties_Response_rendering_enabled(::gazebo_msgs::srv::GetWorldProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetWorldProperties_Response_success rendering_enabled(::gazebo_msgs::srv::GetWorldProperties_Response::_rendering_enabled_type arg)
  {
    msg_.rendering_enabled = std::move(arg);
    return Init_GetWorldProperties_Response_success(msg_);
  }

private:
  ::gazebo_msgs::srv::GetWorldProperties_Response msg_;
};

class Init_GetWorldProperties_Response_model_names
{
public:
  explicit Init_GetWorldProperties_Response_model_names(::gazebo_msgs::srv::GetWorldProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetWorldProperties_Response_rendering_enabled model_names(::gazebo_msgs::srv::GetWorldProperties_Response::_model_names_type arg)
  {
    msg_.model_names = std::move(arg);
    return Init_GetWorldProperties_Response_rendering_enabled(msg_);
  }

private:
  ::gazebo_msgs::srv::GetWorldProperties_Response msg_;
};

class Init_GetWorldProperties_Response_sim_time
{
public:
  Init_GetWorldProperties_Response_sim_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetWorldProperties_Response_model_names sim_time(::gazebo_msgs::srv::GetWorldProperties_Response::_sim_time_type arg)
  {
    msg_.sim_time = std::move(arg);
    return Init_GetWorldProperties_Response_model_names(msg_);
  }

private:
  ::gazebo_msgs::srv::GetWorldProperties_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetWorldProperties_Response>()
{
  return gazebo_msgs::srv::builder::Init_GetWorldProperties_Response_sim_time();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_WORLD_PROPERTIES__BUILDER_HPP_
