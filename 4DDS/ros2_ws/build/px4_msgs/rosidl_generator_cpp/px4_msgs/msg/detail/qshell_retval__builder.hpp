// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/QshellRetval.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/qshell_retval__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_QshellRetval_return_sequence
{
public:
  explicit Init_QshellRetval_return_sequence(::px4_msgs::msg::QshellRetval & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::QshellRetval return_sequence(::px4_msgs::msg::QshellRetval::_return_sequence_type arg)
  {
    msg_.return_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::QshellRetval msg_;
};

class Init_QshellRetval_return_value
{
public:
  explicit Init_QshellRetval_return_value(::px4_msgs::msg::QshellRetval & msg)
  : msg_(msg)
  {}
  Init_QshellRetval_return_sequence return_value(::px4_msgs::msg::QshellRetval::_return_value_type arg)
  {
    msg_.return_value = std::move(arg);
    return Init_QshellRetval_return_sequence(msg_);
  }

private:
  ::px4_msgs::msg::QshellRetval msg_;
};

class Init_QshellRetval_timestamp
{
public:
  Init_QshellRetval_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QshellRetval_return_value timestamp(::px4_msgs::msg::QshellRetval::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_QshellRetval_return_value(msg_);
  }

private:
  ::px4_msgs::msg::QshellRetval msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::QshellRetval>()
{
  return px4_msgs::msg::builder::Init_QshellRetval_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__BUILDER_HPP_
