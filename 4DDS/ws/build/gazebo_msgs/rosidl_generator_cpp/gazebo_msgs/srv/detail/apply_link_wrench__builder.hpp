// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/ApplyLinkWrench.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__APPLY_LINK_WRENCH__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__APPLY_LINK_WRENCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/apply_link_wrench__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyLinkWrench_Request_duration
{
public:
  explicit Init_ApplyLinkWrench_Request_duration(::gazebo_msgs::srv::ApplyLinkWrench_Request & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::ApplyLinkWrench_Request duration(::gazebo_msgs::srv::ApplyLinkWrench_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyLinkWrench_Request msg_;
};

class Init_ApplyLinkWrench_Request_start_time
{
public:
  explicit Init_ApplyLinkWrench_Request_start_time(::gazebo_msgs::srv::ApplyLinkWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyLinkWrench_Request_duration start_time(::gazebo_msgs::srv::ApplyLinkWrench_Request::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_ApplyLinkWrench_Request_duration(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyLinkWrench_Request msg_;
};

class Init_ApplyLinkWrench_Request_wrench
{
public:
  explicit Init_ApplyLinkWrench_Request_wrench(::gazebo_msgs::srv::ApplyLinkWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyLinkWrench_Request_start_time wrench(::gazebo_msgs::srv::ApplyLinkWrench_Request::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return Init_ApplyLinkWrench_Request_start_time(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyLinkWrench_Request msg_;
};

class Init_ApplyLinkWrench_Request_reference_point
{
public:
  explicit Init_ApplyLinkWrench_Request_reference_point(::gazebo_msgs::srv::ApplyLinkWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyLinkWrench_Request_wrench reference_point(::gazebo_msgs::srv::ApplyLinkWrench_Request::_reference_point_type arg)
  {
    msg_.reference_point = std::move(arg);
    return Init_ApplyLinkWrench_Request_wrench(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyLinkWrench_Request msg_;
};

class Init_ApplyLinkWrench_Request_reference_frame
{
public:
  explicit Init_ApplyLinkWrench_Request_reference_frame(::gazebo_msgs::srv::ApplyLinkWrench_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyLinkWrench_Request_reference_point reference_frame(::gazebo_msgs::srv::ApplyLinkWrench_Request::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return Init_ApplyLinkWrench_Request_reference_point(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyLinkWrench_Request msg_;
};

class Init_ApplyLinkWrench_Request_link_name
{
public:
  Init_ApplyLinkWrench_Request_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyLinkWrench_Request_reference_frame link_name(::gazebo_msgs::srv::ApplyLinkWrench_Request::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_ApplyLinkWrench_Request_reference_frame(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyLinkWrench_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::ApplyLinkWrench_Request>()
{
  return gazebo_msgs::srv::builder::Init_ApplyLinkWrench_Request_link_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyLinkWrench_Response_status_message
{
public:
  explicit Init_ApplyLinkWrench_Response_status_message(::gazebo_msgs::srv::ApplyLinkWrench_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::ApplyLinkWrench_Response status_message(::gazebo_msgs::srv::ApplyLinkWrench_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyLinkWrench_Response msg_;
};

class Init_ApplyLinkWrench_Response_success
{
public:
  Init_ApplyLinkWrench_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyLinkWrench_Response_status_message success(::gazebo_msgs::srv::ApplyLinkWrench_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ApplyLinkWrench_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::ApplyLinkWrench_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::ApplyLinkWrench_Response>()
{
  return gazebo_msgs::srv::builder::Init_ApplyLinkWrench_Response_success();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__APPLY_LINK_WRENCH__BUILDER_HPP_
