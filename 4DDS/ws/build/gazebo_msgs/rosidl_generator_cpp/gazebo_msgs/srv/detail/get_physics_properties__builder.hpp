// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/GetPhysicsProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/get_physics_properties__struct.hpp"
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
auto build<::gazebo_msgs::srv::GetPhysicsProperties_Request>()
{
  return ::gazebo_msgs::srv::GetPhysicsProperties_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPhysicsProperties_Response_status_message
{
public:
  explicit Init_GetPhysicsProperties_Response_status_message(::gazebo_msgs::srv::GetPhysicsProperties_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetPhysicsProperties_Response status_message(::gazebo_msgs::srv::GetPhysicsProperties_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetPhysicsProperties_Response msg_;
};

class Init_GetPhysicsProperties_Response_success
{
public:
  explicit Init_GetPhysicsProperties_Response_success(::gazebo_msgs::srv::GetPhysicsProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetPhysicsProperties_Response_status_message success(::gazebo_msgs::srv::GetPhysicsProperties_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetPhysicsProperties_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::GetPhysicsProperties_Response msg_;
};

class Init_GetPhysicsProperties_Response_ode_config
{
public:
  explicit Init_GetPhysicsProperties_Response_ode_config(::gazebo_msgs::srv::GetPhysicsProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetPhysicsProperties_Response_success ode_config(::gazebo_msgs::srv::GetPhysicsProperties_Response::_ode_config_type arg)
  {
    msg_.ode_config = std::move(arg);
    return Init_GetPhysicsProperties_Response_success(msg_);
  }

private:
  ::gazebo_msgs::srv::GetPhysicsProperties_Response msg_;
};

class Init_GetPhysicsProperties_Response_gravity
{
public:
  explicit Init_GetPhysicsProperties_Response_gravity(::gazebo_msgs::srv::GetPhysicsProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetPhysicsProperties_Response_ode_config gravity(::gazebo_msgs::srv::GetPhysicsProperties_Response::_gravity_type arg)
  {
    msg_.gravity = std::move(arg);
    return Init_GetPhysicsProperties_Response_ode_config(msg_);
  }

private:
  ::gazebo_msgs::srv::GetPhysicsProperties_Response msg_;
};

class Init_GetPhysicsProperties_Response_max_update_rate
{
public:
  explicit Init_GetPhysicsProperties_Response_max_update_rate(::gazebo_msgs::srv::GetPhysicsProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetPhysicsProperties_Response_gravity max_update_rate(::gazebo_msgs::srv::GetPhysicsProperties_Response::_max_update_rate_type arg)
  {
    msg_.max_update_rate = std::move(arg);
    return Init_GetPhysicsProperties_Response_gravity(msg_);
  }

private:
  ::gazebo_msgs::srv::GetPhysicsProperties_Response msg_;
};

class Init_GetPhysicsProperties_Response_pause
{
public:
  explicit Init_GetPhysicsProperties_Response_pause(::gazebo_msgs::srv::GetPhysicsProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetPhysicsProperties_Response_max_update_rate pause(::gazebo_msgs::srv::GetPhysicsProperties_Response::_pause_type arg)
  {
    msg_.pause = std::move(arg);
    return Init_GetPhysicsProperties_Response_max_update_rate(msg_);
  }

private:
  ::gazebo_msgs::srv::GetPhysicsProperties_Response msg_;
};

class Init_GetPhysicsProperties_Response_time_step
{
public:
  Init_GetPhysicsProperties_Response_time_step()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPhysicsProperties_Response_pause time_step(::gazebo_msgs::srv::GetPhysicsProperties_Response::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return Init_GetPhysicsProperties_Response_pause(msg_);
  }

private:
  ::gazebo_msgs::srv::GetPhysicsProperties_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetPhysicsProperties_Response>()
{
  return gazebo_msgs::srv::builder::Init_GetPhysicsProperties_Response_time_step();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__BUILDER_HPP_
