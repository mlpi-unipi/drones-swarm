// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/GetJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_JOINT_PROPERTIES__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_JOINT_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/get_joint_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointProperties_Request_joint_name
{
public:
  Init_GetJointProperties_Request_joint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gazebo_msgs::srv::GetJointProperties_Request joint_name(::gazebo_msgs::srv::GetJointProperties_Request::_joint_name_type arg)
  {
    msg_.joint_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetJointProperties_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetJointProperties_Request>()
{
  return gazebo_msgs::srv::builder::Init_GetJointProperties_Request_joint_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetJointProperties_Response_status_message
{
public:
  explicit Init_GetJointProperties_Response_status_message(::gazebo_msgs::srv::GetJointProperties_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetJointProperties_Response status_message(::gazebo_msgs::srv::GetJointProperties_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetJointProperties_Response msg_;
};

class Init_GetJointProperties_Response_success
{
public:
  explicit Init_GetJointProperties_Response_success(::gazebo_msgs::srv::GetJointProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointProperties_Response_status_message success(::gazebo_msgs::srv::GetJointProperties_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetJointProperties_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::GetJointProperties_Response msg_;
};

class Init_GetJointProperties_Response_rate
{
public:
  explicit Init_GetJointProperties_Response_rate(::gazebo_msgs::srv::GetJointProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointProperties_Response_success rate(::gazebo_msgs::srv::GetJointProperties_Response::_rate_type arg)
  {
    msg_.rate = std::move(arg);
    return Init_GetJointProperties_Response_success(msg_);
  }

private:
  ::gazebo_msgs::srv::GetJointProperties_Response msg_;
};

class Init_GetJointProperties_Response_position
{
public:
  explicit Init_GetJointProperties_Response_position(::gazebo_msgs::srv::GetJointProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointProperties_Response_rate position(::gazebo_msgs::srv::GetJointProperties_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GetJointProperties_Response_rate(msg_);
  }

private:
  ::gazebo_msgs::srv::GetJointProperties_Response msg_;
};

class Init_GetJointProperties_Response_damping
{
public:
  explicit Init_GetJointProperties_Response_damping(::gazebo_msgs::srv::GetJointProperties_Response & msg)
  : msg_(msg)
  {}
  Init_GetJointProperties_Response_position damping(::gazebo_msgs::srv::GetJointProperties_Response::_damping_type arg)
  {
    msg_.damping = std::move(arg);
    return Init_GetJointProperties_Response_position(msg_);
  }

private:
  ::gazebo_msgs::srv::GetJointProperties_Response msg_;
};

class Init_GetJointProperties_Response_type
{
public:
  Init_GetJointProperties_Response_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetJointProperties_Response_damping type(::gazebo_msgs::srv::GetJointProperties_Response::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GetJointProperties_Response_damping(msg_);
  }

private:
  ::gazebo_msgs::srv::GetJointProperties_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetJointProperties_Response>()
{
  return gazebo_msgs::srv::builder::Init_GetJointProperties_Response_type();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_JOINT_PROPERTIES__BUILDER_HPP_
