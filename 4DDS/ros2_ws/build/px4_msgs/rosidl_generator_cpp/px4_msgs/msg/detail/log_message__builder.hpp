// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/LogMessage.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LOG_MESSAGE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__LOG_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/log_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_LogMessage_text
{
public:
  explicit Init_LogMessage_text(::px4_msgs::msg::LogMessage & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::LogMessage text(::px4_msgs::msg::LogMessage::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::LogMessage msg_;
};

class Init_LogMessage_severity
{
public:
  explicit Init_LogMessage_severity(::px4_msgs::msg::LogMessage & msg)
  : msg_(msg)
  {}
  Init_LogMessage_text severity(::px4_msgs::msg::LogMessage::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return Init_LogMessage_text(msg_);
  }

private:
  ::px4_msgs::msg::LogMessage msg_;
};

class Init_LogMessage_timestamp
{
public:
  Init_LogMessage_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogMessage_severity timestamp(::px4_msgs::msg::LogMessage::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LogMessage_severity(msg_);
  }

private:
  ::px4_msgs::msg::LogMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::LogMessage>()
{
  return px4_msgs::msg::builder::Init_LogMessage_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LOG_MESSAGE__BUILDER_HPP_
