// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/UavcanParameterValue.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_VALUE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/uavcan_parameter_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_UavcanParameterValue_real_value
{
public:
  explicit Init_UavcanParameterValue_real_value(::px4_msgs::msg::UavcanParameterValue & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::UavcanParameterValue real_value(::px4_msgs::msg::UavcanParameterValue::_real_value_type arg)
  {
    msg_.real_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterValue msg_;
};

class Init_UavcanParameterValue_int_value
{
public:
  explicit Init_UavcanParameterValue_int_value(::px4_msgs::msg::UavcanParameterValue & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterValue_real_value int_value(::px4_msgs::msg::UavcanParameterValue::_int_value_type arg)
  {
    msg_.int_value = std::move(arg);
    return Init_UavcanParameterValue_real_value(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterValue msg_;
};

class Init_UavcanParameterValue_param_type
{
public:
  explicit Init_UavcanParameterValue_param_type(::px4_msgs::msg::UavcanParameterValue & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterValue_int_value param_type(::px4_msgs::msg::UavcanParameterValue::_param_type_type arg)
  {
    msg_.param_type = std::move(arg);
    return Init_UavcanParameterValue_int_value(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterValue msg_;
};

class Init_UavcanParameterValue_param_count
{
public:
  explicit Init_UavcanParameterValue_param_count(::px4_msgs::msg::UavcanParameterValue & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterValue_param_type param_count(::px4_msgs::msg::UavcanParameterValue::_param_count_type arg)
  {
    msg_.param_count = std::move(arg);
    return Init_UavcanParameterValue_param_type(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterValue msg_;
};

class Init_UavcanParameterValue_param_index
{
public:
  explicit Init_UavcanParameterValue_param_index(::px4_msgs::msg::UavcanParameterValue & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterValue_param_count param_index(::px4_msgs::msg::UavcanParameterValue::_param_index_type arg)
  {
    msg_.param_index = std::move(arg);
    return Init_UavcanParameterValue_param_count(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterValue msg_;
};

class Init_UavcanParameterValue_param_id
{
public:
  explicit Init_UavcanParameterValue_param_id(::px4_msgs::msg::UavcanParameterValue & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterValue_param_index param_id(::px4_msgs::msg::UavcanParameterValue::_param_id_type arg)
  {
    msg_.param_id = std::move(arg);
    return Init_UavcanParameterValue_param_index(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterValue msg_;
};

class Init_UavcanParameterValue_node_id
{
public:
  explicit Init_UavcanParameterValue_node_id(::px4_msgs::msg::UavcanParameterValue & msg)
  : msg_(msg)
  {}
  Init_UavcanParameterValue_param_id node_id(::px4_msgs::msg::UavcanParameterValue::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_UavcanParameterValue_param_id(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterValue msg_;
};

class Init_UavcanParameterValue_timestamp
{
public:
  Init_UavcanParameterValue_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavcanParameterValue_node_id timestamp(::px4_msgs::msg::UavcanParameterValue::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_UavcanParameterValue_node_id(msg_);
  }

private:
  ::px4_msgs::msg::UavcanParameterValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::UavcanParameterValue>()
{
  return px4_msgs::msg::builder::Init_UavcanParameterValue_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_VALUE__BUILDER_HPP_
