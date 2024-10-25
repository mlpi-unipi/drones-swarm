// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GpsDump.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GPS_DUMP__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GPS_DUMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/gps_dump__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GpsDump_data
{
public:
  explicit Init_GpsDump_data(::px4_msgs::msg::GpsDump & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GpsDump data(::px4_msgs::msg::GpsDump::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GpsDump msg_;
};

class Init_GpsDump_len
{
public:
  explicit Init_GpsDump_len(::px4_msgs::msg::GpsDump & msg)
  : msg_(msg)
  {}
  Init_GpsDump_data len(::px4_msgs::msg::GpsDump::_len_type arg)
  {
    msg_.len = std::move(arg);
    return Init_GpsDump_data(msg_);
  }

private:
  ::px4_msgs::msg::GpsDump msg_;
};

class Init_GpsDump_instance
{
public:
  explicit Init_GpsDump_instance(::px4_msgs::msg::GpsDump & msg)
  : msg_(msg)
  {}
  Init_GpsDump_len instance(::px4_msgs::msg::GpsDump::_instance_type arg)
  {
    msg_.instance = std::move(arg);
    return Init_GpsDump_len(msg_);
  }

private:
  ::px4_msgs::msg::GpsDump msg_;
};

class Init_GpsDump_timestamp
{
public:
  Init_GpsDump_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsDump_instance timestamp(::px4_msgs::msg::GpsDump::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GpsDump_instance(msg_);
  }

private:
  ::px4_msgs::msg::GpsDump msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GpsDump>()
{
  return px4_msgs::msg::builder::Init_GpsDump_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GPS_DUMP__BUILDER_HPP_
