// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/UlogStream.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ULOG_STREAM__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ULOG_STREAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/ulog_stream__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_UlogStream_data
{
public:
  explicit Init_UlogStream_data(::px4_msgs::msg::UlogStream & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::UlogStream data(::px4_msgs::msg::UlogStream::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::UlogStream msg_;
};

class Init_UlogStream_flags
{
public:
  explicit Init_UlogStream_flags(::px4_msgs::msg::UlogStream & msg)
  : msg_(msg)
  {}
  Init_UlogStream_data flags(::px4_msgs::msg::UlogStream::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_UlogStream_data(msg_);
  }

private:
  ::px4_msgs::msg::UlogStream msg_;
};

class Init_UlogStream_msg_sequence
{
public:
  explicit Init_UlogStream_msg_sequence(::px4_msgs::msg::UlogStream & msg)
  : msg_(msg)
  {}
  Init_UlogStream_flags msg_sequence(::px4_msgs::msg::UlogStream::_msg_sequence_type arg)
  {
    msg_.msg_sequence = std::move(arg);
    return Init_UlogStream_flags(msg_);
  }

private:
  ::px4_msgs::msg::UlogStream msg_;
};

class Init_UlogStream_first_message_offset
{
public:
  explicit Init_UlogStream_first_message_offset(::px4_msgs::msg::UlogStream & msg)
  : msg_(msg)
  {}
  Init_UlogStream_msg_sequence first_message_offset(::px4_msgs::msg::UlogStream::_first_message_offset_type arg)
  {
    msg_.first_message_offset = std::move(arg);
    return Init_UlogStream_msg_sequence(msg_);
  }

private:
  ::px4_msgs::msg::UlogStream msg_;
};

class Init_UlogStream_length
{
public:
  explicit Init_UlogStream_length(::px4_msgs::msg::UlogStream & msg)
  : msg_(msg)
  {}
  Init_UlogStream_first_message_offset length(::px4_msgs::msg::UlogStream::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_UlogStream_first_message_offset(msg_);
  }

private:
  ::px4_msgs::msg::UlogStream msg_;
};

class Init_UlogStream_timestamp
{
public:
  Init_UlogStream_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UlogStream_length timestamp(::px4_msgs::msg::UlogStream::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_UlogStream_length(msg_);
  }

private:
  ::px4_msgs::msg::UlogStream msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::UlogStream>()
{
  return px4_msgs::msg::builder::Init_UlogStream_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ULOG_STREAM__BUILDER_HPP_
