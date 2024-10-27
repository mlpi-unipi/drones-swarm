// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/MessageFormatRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/message_format_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_MessageFormatRequest_topic_name
{
public:
  explicit Init_MessageFormatRequest_topic_name(::px4_msgs::msg::MessageFormatRequest & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::MessageFormatRequest topic_name(::px4_msgs::msg::MessageFormatRequest::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::MessageFormatRequest msg_;
};

class Init_MessageFormatRequest_protocol_version
{
public:
  explicit Init_MessageFormatRequest_protocol_version(::px4_msgs::msg::MessageFormatRequest & msg)
  : msg_(msg)
  {}
  Init_MessageFormatRequest_topic_name protocol_version(::px4_msgs::msg::MessageFormatRequest::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_MessageFormatRequest_topic_name(msg_);
  }

private:
  ::px4_msgs::msg::MessageFormatRequest msg_;
};

class Init_MessageFormatRequest_timestamp
{
public:
  Init_MessageFormatRequest_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MessageFormatRequest_protocol_version timestamp(::px4_msgs::msg::MessageFormatRequest::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MessageFormatRequest_protocol_version(msg_);
  }

private:
  ::px4_msgs::msg::MessageFormatRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::MessageFormatRequest>()
{
  return px4_msgs::msg::builder::Init_MessageFormatRequest_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_REQUEST__BUILDER_HPP_
