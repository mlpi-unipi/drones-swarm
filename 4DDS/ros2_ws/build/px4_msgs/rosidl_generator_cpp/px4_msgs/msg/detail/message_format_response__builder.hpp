// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/MessageFormatResponse.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_RESPONSE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/message_format_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_MessageFormatResponse_message_hash
{
public:
  explicit Init_MessageFormatResponse_message_hash(::px4_msgs::msg::MessageFormatResponse & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::MessageFormatResponse message_hash(::px4_msgs::msg::MessageFormatResponse::_message_hash_type arg)
  {
    msg_.message_hash = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::MessageFormatResponse msg_;
};

class Init_MessageFormatResponse_success
{
public:
  explicit Init_MessageFormatResponse_success(::px4_msgs::msg::MessageFormatResponse & msg)
  : msg_(msg)
  {}
  Init_MessageFormatResponse_message_hash success(::px4_msgs::msg::MessageFormatResponse::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MessageFormatResponse_message_hash(msg_);
  }

private:
  ::px4_msgs::msg::MessageFormatResponse msg_;
};

class Init_MessageFormatResponse_topic_name
{
public:
  explicit Init_MessageFormatResponse_topic_name(::px4_msgs::msg::MessageFormatResponse & msg)
  : msg_(msg)
  {}
  Init_MessageFormatResponse_success topic_name(::px4_msgs::msg::MessageFormatResponse::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return Init_MessageFormatResponse_success(msg_);
  }

private:
  ::px4_msgs::msg::MessageFormatResponse msg_;
};

class Init_MessageFormatResponse_protocol_version
{
public:
  explicit Init_MessageFormatResponse_protocol_version(::px4_msgs::msg::MessageFormatResponse & msg)
  : msg_(msg)
  {}
  Init_MessageFormatResponse_topic_name protocol_version(::px4_msgs::msg::MessageFormatResponse::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_MessageFormatResponse_topic_name(msg_);
  }

private:
  ::px4_msgs::msg::MessageFormatResponse msg_;
};

class Init_MessageFormatResponse_timestamp
{
public:
  Init_MessageFormatResponse_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MessageFormatResponse_protocol_version timestamp(::px4_msgs::msg::MessageFormatResponse::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MessageFormatResponse_protocol_version(msg_);
  }

private:
  ::px4_msgs::msg::MessageFormatResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::MessageFormatResponse>()
{
  return px4_msgs::msg::builder::Init_MessageFormatResponse_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MESSAGE_FORMAT_RESPONSE__BUILDER_HPP_
