// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/QshellReq.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__QSHELL_REQ__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__QSHELL_REQ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/qshell_req__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_QshellReq_request_sequence
{
public:
  explicit Init_QshellReq_request_sequence(::px4_msgs::msg::QshellReq & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::QshellReq request_sequence(::px4_msgs::msg::QshellReq::_request_sequence_type arg)
  {
    msg_.request_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::QshellReq msg_;
};

class Init_QshellReq_strlen
{
public:
  explicit Init_QshellReq_strlen(::px4_msgs::msg::QshellReq & msg)
  : msg_(msg)
  {}
  Init_QshellReq_request_sequence strlen(::px4_msgs::msg::QshellReq::_strlen_type arg)
  {
    msg_.strlen = std::move(arg);
    return Init_QshellReq_request_sequence(msg_);
  }

private:
  ::px4_msgs::msg::QshellReq msg_;
};

class Init_QshellReq_cmd
{
public:
  explicit Init_QshellReq_cmd(::px4_msgs::msg::QshellReq & msg)
  : msg_(msg)
  {}
  Init_QshellReq_strlen cmd(::px4_msgs::msg::QshellReq::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_QshellReq_strlen(msg_);
  }

private:
  ::px4_msgs::msg::QshellReq msg_;
};

class Init_QshellReq_timestamp
{
public:
  Init_QshellReq_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QshellReq_cmd timestamp(::px4_msgs::msg::QshellReq::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_QshellReq_cmd(msg_);
  }

private:
  ::px4_msgs::msg::QshellReq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::QshellReq>()
{
  return px4_msgs::msg::builder::Init_QshellReq_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__QSHELL_REQ__BUILDER_HPP_
