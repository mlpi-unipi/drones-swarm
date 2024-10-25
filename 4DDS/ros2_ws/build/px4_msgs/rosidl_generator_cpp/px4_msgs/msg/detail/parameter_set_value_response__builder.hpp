// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ParameterSetValueResponse.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_RESPONSE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/parameter_set_value_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ParameterSetValueResponse_parameter_index
{
public:
  explicit Init_ParameterSetValueResponse_parameter_index(::px4_msgs::msg::ParameterSetValueResponse & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ParameterSetValueResponse parameter_index(::px4_msgs::msg::ParameterSetValueResponse::_parameter_index_type arg)
  {
    msg_.parameter_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ParameterSetValueResponse msg_;
};

class Init_ParameterSetValueResponse_request_timestamp
{
public:
  explicit Init_ParameterSetValueResponse_request_timestamp(::px4_msgs::msg::ParameterSetValueResponse & msg)
  : msg_(msg)
  {}
  Init_ParameterSetValueResponse_parameter_index request_timestamp(::px4_msgs::msg::ParameterSetValueResponse::_request_timestamp_type arg)
  {
    msg_.request_timestamp = std::move(arg);
    return Init_ParameterSetValueResponse_parameter_index(msg_);
  }

private:
  ::px4_msgs::msg::ParameterSetValueResponse msg_;
};

class Init_ParameterSetValueResponse_timestamp
{
public:
  Init_ParameterSetValueResponse_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParameterSetValueResponse_request_timestamp timestamp(::px4_msgs::msg::ParameterSetValueResponse::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ParameterSetValueResponse_request_timestamp(msg_);
  }

private:
  ::px4_msgs::msg::ParameterSetValueResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ParameterSetValueResponse>()
{
  return px4_msgs::msg::builder::Init_ParameterSetValueResponse_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_RESPONSE__BUILDER_HPP_
