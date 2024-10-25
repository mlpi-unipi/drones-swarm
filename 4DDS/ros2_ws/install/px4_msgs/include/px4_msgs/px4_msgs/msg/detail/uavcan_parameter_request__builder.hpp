// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/UavcanParameterRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/uavcan_parameter_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_UavcanParameterRequest_real_value
{
public:
  explicit Init_UavcanParameterRequest_real_value(::px4_msgs::msg::UavcanParameterRequest & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::UavcanParameterRequest real_value(::px4_msgs::msg::UavcanParameterRequest::_real_value_type arg)
  {
    msg_.real_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterRequest msg_;
};

class Init_UavcanParameterRequest_int_value
{
public:
  explicit Init_UavcanParameterRequest_int_value(::px4_msgs::msg::UavcanParameterRequest & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterRequest_real_value int_value(::px4_msgs::msg::UavcanParameterRequest::_int_value_type arg)
  {
    msg_.int_value = std::move(arg);
    return Init_UavcanParameterRequest_real_value(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterRequest msg_;
};

class Init_UavcanParameterRequest_param_type
{
public:
  explicit Init_UavcanParameterRequest_param_type(::px4_msgs::msg::UavcanParameterRequest & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterRequest_int_value param_type(::px4_msgs::msg::UavcanParameterRequest::_param_type_type arg)
  {
    msg_.param_type = std::move(arg);
    return Init_UavcanParameterRequest_int_value(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterRequest msg_;
};

class Init_UavcanParameterRequest_param_index
{
public:
  explicit Init_UavcanParameterRequest_param_index(::px4_msgs::msg::UavcanParameterRequest & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterRequest_param_type param_index(::px4_msgs::msg::UavcanParameterRequest::_param_index_type arg)
  {
    msg_.param_index = std::move(arg);
    return Init_UavcanParameterRequest_param_type(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterRequest msg_;
};

class Init_UavcanParameterRequest_param_id
{
public:
  explicit Init_UavcanParameterRequest_param_id(::px4_msgs::msg::UavcanParameterRequest & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterRequest_param_index param_id(::px4_msgs::msg::UavcanParameterRequest::_param_id_type arg)
  {
    msg_.param_id = std::move(arg);
    return Init_UavcanParameterRequest_param_index(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterRequest msg_;
};

class Init_UavcanParameterRequest_node_id
{
public:
  explicit Init_UavcanParameterRequest_node_id(::px4_msgs::msg::UavcanParameterRequest & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterRequest_param_id node_id(::px4_msgs::msg::UavcanParameterRequest::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_UavcanParameterRequest_param_id(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterRequest msg_;
};

class Init_UavcanParameterRequest_message_type
{
public:
  explicit Init_UavcanParameterRequest_message_type(::px4_msgs::msg::UavcanParameterRequest & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterRequest_node_id message_type(::px4_msgs::msg::UavcanParameterRequest::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_UavcanParameterRequest_node_id(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterRequest msg_;
};

class Init_UavcanParameterRequest_timestamp
{
public:
  Init_UavcanParameterRequest_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavcanParameterRequest_message_type timestamp(::px4_msgs::msg::UavcanParameterRequest::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_UavcanParameterRequest_message_type(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::UavcanParameterRequest>()
{
  return px4_msgs::msg::builder::Init_UavcanParameterRequest_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__BUILDER_HPP_
