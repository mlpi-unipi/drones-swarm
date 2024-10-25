// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RegisterExtComponentReply.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/register_ext_component_reply__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RegisterExtComponentReply_mode_executor_id
{
public:
  explicit Init_RegisterExtComponentReply_mode_executor_id(::px4_msgs::msg::RegisterExtComponentReply & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RegisterExtComponentReply mode_executor_id(::px4_msgs::msg::RegisterExtComponentReply::_mode_executor_id_type arg)
  {
    msg_.mode_executor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentReply msg_;
};

class Init_RegisterExtComponentReply_mode_id
{
public:
  explicit Init_RegisterExtComponentReply_mode_id(::px4_msgs::msg::RegisterExtComponentReply & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentReply_mode_executor_id mode_id(::px4_msgs::msg::RegisterExtComponentReply::_mode_id_type arg)
  {
    msg_.mode_id = std::move(arg);
    return Init_RegisterExtComponentReply_mode_executor_id(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentReply msg_;
};

class Init_RegisterExtComponentReply_arming_check_id
{
public:
  explicit Init_RegisterExtComponentReply_arming_check_id(::px4_msgs::msg::RegisterExtComponentReply & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentReply_mode_id arming_check_id(::px4_msgs::msg::RegisterExtComponentReply::_arming_check_id_type arg)
  {
    msg_.arming_check_id = std::move(arg);
    return Init_RegisterExtComponentReply_mode_id(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentReply msg_;
};

class Init_RegisterExtComponentReply_success
{
public:
  explicit Init_RegisterExtComponentReply_success(::px4_msgs::msg::RegisterExtComponentReply & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentReply_arming_check_id success(::px4_msgs::msg::RegisterExtComponentReply::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RegisterExtComponentReply_arming_check_id(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentReply msg_;
};

class Init_RegisterExtComponentReply_px4_ros2_api_version
{
public:
  explicit Init_RegisterExtComponentReply_px4_ros2_api_version(::px4_msgs::msg::RegisterExtComponentReply & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentReply_success px4_ros2_api_version(::px4_msgs::msg::RegisterExtComponentReply::_px4_ros2_api_version_type arg)
  {
    msg_.px4_ros2_api_version = std::move(arg);
    return Init_RegisterExtComponentReply_success(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentReply msg_;
};

class Init_RegisterExtComponentReply_name
{
public:
  explicit Init_RegisterExtComponentReply_name(::px4_msgs::msg::RegisterExtComponentReply & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentReply_px4_ros2_api_version name(::px4_msgs::msg::RegisterExtComponentReply::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RegisterExtComponentReply_px4_ros2_api_version(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentReply msg_;
};

class Init_RegisterExtComponentReply_request_id
{
public:
  explicit Init_RegisterExtComponentReply_request_id(::px4_msgs::msg::RegisterExtComponentReply & msg)
  : msg_(msg)
  {}
  Init_RegisterExtComponentReply_name request_id(::px4_msgs::msg::RegisterExtComponentReply::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_RegisterExtComponentReply_name(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentReply msg_;
};

class Init_RegisterExtComponentReply_timestamp
{
public:
  Init_RegisterExtComponentReply_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterExtComponentReply_request_id timestamp(::px4_msgs::msg::RegisterExtComponentReply::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RegisterExtComponentReply_request_id(msg_);
  }

private:
  ::px4_msgs::msg::RegisterExtComponentReply msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RegisterExtComponentReply>()
{
  return px4_msgs::msg::builder::Init_RegisterExtComponentReply_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__BUILDER_HPP_
