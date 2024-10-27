// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/GetLinkState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_LINK_STATE__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_LINK_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/get_link_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLinkState_Request_reference_frame
{
public:
  explicit Init_GetLinkState_Request_reference_frame(::gazebo_msgs::srv::GetLinkState_Request & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetLinkState_Request reference_frame(::gazebo_msgs::srv::GetLinkState_Request::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkState_Request msg_;
};

class Init_GetLinkState_Request_link_name
{
public:
  Init_GetLinkState_Request_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLinkState_Request_reference_frame link_name(::gazebo_msgs::srv::GetLinkState_Request::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_GetLinkState_Request_reference_frame(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetLinkState_Request>()
{
  return gazebo_msgs::srv::builder::Init_GetLinkState_Request_link_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLinkState_Response_status_message
{
public:
  explicit Init_GetLinkState_Response_status_message(::gazebo_msgs::srv::GetLinkState_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetLinkState_Response status_message(::gazebo_msgs::srv::GetLinkState_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkState_Response msg_;
};

class Init_GetLinkState_Response_success
{
public:
  explicit Init_GetLinkState_Response_success(::gazebo_msgs::srv::GetLinkState_Response & msg)
  : msg_(msg)
  {}
  Init_GetLinkState_Response_status_message success(::gazebo_msgs::srv::GetLinkState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetLinkState_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkState_Response msg_;
};

class Init_GetLinkState_Response_link_state
{
public:
  Init_GetLinkState_Response_link_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLinkState_Response_success link_state(::gazebo_msgs::srv::GetLinkState_Response::_link_state_type arg)
  {
    msg_.link_state = std::move(arg);
    return Init_GetLinkState_Response_success(msg_);
  }

private:
  ::gazebo_msgs::srv::GetLinkState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetLinkState_Response>()
{
  return gazebo_msgs::srv::builder::Init_GetLinkState_Response_link_state();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_LINK_STATE__BUILDER_HPP_
