// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ParameterResetRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_RESET_REQUEST__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_RESET_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/parameter_reset_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ParameterResetRequest_reset_all
{
public:
  explicit Init_ParameterResetRequest_reset_all(::px4_msgs::msg::ParameterResetRequest & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ParameterResetRequest reset_all(::px4_msgs::msg::ParameterResetRequest::_reset_all_type arg)
  {
    msg_.reset_all = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ParameterResetRequest msg_;
};

class Init_ParameterResetRequest_parameter_index
{
public:
  explicit Init_ParameterResetRequest_parameter_index(::px4_msgs::msg::ParameterResetRequest & msg)
  : msg_(msg)
  {}
  Init_ParameterResetRequest_reset_all parameter_index(::px4_msgs::msg::ParameterResetRequest::_parameter_index_type arg)
  {
    msg_.parameter_index = std::move(arg);
    return Init_ParameterResetRequest_reset_all(msg_);
  }

private:
  ::px4_msgs::msg::ParameterResetRequest msg_;
};

class Init_ParameterResetRequest_timestamp
{
public:
  Init_ParameterResetRequest_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParameterResetRequest_parameter_index timestamp(::px4_msgs::msg::ParameterResetRequest::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ParameterResetRequest_parameter_index(msg_);
  }

private:
  ::px4_msgs::msg::ParameterResetRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ParameterResetRequest>()
{
  return px4_msgs::msg::builder::Init_ParameterResetRequest_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_RESET_REQUEST__BUILDER_HPP_
