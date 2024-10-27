// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/register_ext_component_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RegisterExtComponentRequest_activate_mode_immediately
{
public:
  explicit Init_RegisterExtComponentRequest_activate_mode_immediately(::px4_msgs::msg::RegisterExtComponentRequest & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RegisterExtComponentRequest activate_mode_immediately(::px4_msgs::msg::RegisterExtComponentRequest::_activate_mode_immediately_type arg)
  {
    msg_.activate_mode_immediately = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentRequest msg_;
};

class Init_RegisterExtComponentRequest_replace_internal_mode
{
public:
  explicit Init_RegisterExtComponentRequest_replace_internal_mode(::px4_msgs::msg::RegisterExtComponentRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentRequest_activate_mode_immediately replace_internal_mode(::px4_msgs::msg::RegisterExtComponentRequest::_replace_internal_mode_type arg)
  {
    msg_.replace_internal_mode = std::move(arg);
    return Init_RegisterExtComponentRequest_activate_mode_immediately(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentRequest msg_;
};

class Init_RegisterExtComponentRequest_enable_replace_internal_mode
{
public:
  explicit Init_RegisterExtComponentRequest_enable_replace_internal_mode(::px4_msgs::msg::RegisterExtComponentRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentRequest_replace_internal_mode enable_replace_internal_mode(::px4_msgs::msg::RegisterExtComponentRequest::_enable_replace_internal_mode_type arg)
  {
    msg_.enable_replace_internal_mode = std::move(arg);
    return Init_RegisterExtComponentRequest_replace_internal_mode(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentRequest msg_;
};

class Init_RegisterExtComponentRequest_register_mode_executor
{
public:
  explicit Init_RegisterExtComponentRequest_register_mode_executor(::px4_msgs::msg::RegisterExtComponentRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentRequest_enable_replace_internal_mode register_mode_executor(::px4_msgs::msg::RegisterExtComponentRequest::_register_mode_executor_type arg)
  {
    msg_.register_mode_executor = std::move(arg);
    return Init_RegisterExtComponentRequest_enable_replace_internal_mode(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentRequest msg_;
};

class Init_RegisterExtComponentRequest_register_mode
{
public:
  explicit Init_RegisterExtComponentRequest_register_mode(::px4_msgs::msg::RegisterExtComponentRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentRequest_register_mode_executor register_mode(::px4_msgs::msg::RegisterExtComponentRequest::_register_mode_type arg)
  {
    msg_.register_mode = std::move(arg);
    return Init_RegisterExtComponentRequest_register_mode_executor(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentRequest msg_;
};

class Init_RegisterExtComponentRequest_register_arming_check
{
public:
  explicit Init_RegisterExtComponentRequest_register_arming_check(::px4_msgs::msg::RegisterExtComponentRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentRequest_register_mode register_arming_check(::px4_msgs::msg::RegisterExtComponentRequest::_register_arming_check_type arg)
  {
    msg_.register_arming_check = std::move(arg);
    return Init_RegisterExtComponentRequest_register_mode(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentRequest msg_;
};

class Init_RegisterExtComponentRequest_px4_ros2_api_version
{
public:
  explicit Init_RegisterExtComponentRequest_px4_ros2_api_version(::px4_msgs::msg::RegisterExtComponentRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentRequest_register_arming_check px4_ros2_api_version(::px4_msgs::msg::RegisterExtComponentRequest::_px4_ros2_api_version_type arg)
  {
    msg_.px4_ros2_api_version = std::move(arg);
    return Init_RegisterExtComponentRequest_register_arming_check(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentRequest msg_;
};

class Init_RegisterExtComponentRequest_name
{
public:
  explicit Init_RegisterExtComponentRequest_name(::px4_msgs::msg::RegisterExtComponentRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentRequest_px4_ros2_api_version name(::px4_msgs::msg::RegisterExtComponentRequest::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RegisterExtComponentRequest_px4_ros2_api_version(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentRequest msg_;
};

class Init_RegisterExtComponentRequest_request_id
{
public:
  explicit Init_RegisterExtComponentRequest_request_id(::px4_msgs::msg::RegisterExtComponentRequest & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentRequest_name request_id(::px4_msgs::msg::RegisterExtComponentRequest::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_RegisterExtComponentRequest_name(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentRequest msg_;
};

class Init_RegisterExtComponentRequest_timestamp
{
public:
  Init_RegisterExtComponentRequest_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterExtComponentRequest_request_id timestamp(::px4_msgs::msg::RegisterExtComponentRequest::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RegisterExtComponentRequest_request_id(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RegisterExtComponentRequest>()
{
  return px4_msgs::msg::builder::Init_RegisterExtComponentRequest_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__BUILDER_HPP_
