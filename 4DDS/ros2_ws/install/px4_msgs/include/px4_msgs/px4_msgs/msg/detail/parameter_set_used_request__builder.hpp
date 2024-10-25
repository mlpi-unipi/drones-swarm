// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ParameterSetUsedRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_SET_USED_REQUEST__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_SET_USED_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/parameter_set_used_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ParameterSetUsedRequest_parameter_index
{
public:
  explicit Init_ParameterSetUsedRequest_parameter_index(::px4_msgs::msg::ParameterSetUsedRequest & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ParameterSetUsedRequest parameter_index(::px4_msgs::msg::ParameterSetUsedRequest::_parameter_index_type arg)
  {
    msg_.parameter_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ParameterSetUsedRequest msg_;
};

class Init_ParameterSetUsedRequest_timestamp
{
public:
  Init_ParameterSetUsedRequest_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParameterSetUsedRequest_parameter_index timestamp(::px4_msgs::msg::ParameterSetUsedRequest::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ParameterSetUsedRequest_parameter_index(msg_);
  }

private:
  ::px4_msgs::msg::ParameterSetUsedRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ParameterSetUsedRequest>()
{
  return px4_msgs::msg::builder::Init_ParameterSetUsedRequest_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_SET_USED_REQUEST__BUILDER_HPP_
