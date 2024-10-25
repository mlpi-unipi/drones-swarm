// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Ping.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PING__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/ping__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Ping_component_id
{
public:
  explicit Init_Ping_component_id(::px4_msgs::msg::Ping & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Ping component_id(::px4_msgs::msg::Ping::_component_id_type arg)
  {
    msg_.component_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Ping msg_;
};

class Init_Ping_system_id
{
public:
  explicit Init_Ping_system_id(::px4_msgs::msg::Ping & msg)
  : msg_(msg)
  {}
  Init_Ping_component_id system_id(::px4_msgs::msg::Ping::_system_id_type arg)
  {
    msg_.system_id = std::move(arg);
    return Init_Ping_component_id(msg_);
  }

private:
  ::px4_msgs::msg::Ping msg_;
};

class Init_Ping_rtt_ms
{
public:
  explicit Init_Ping_rtt_ms(::px4_msgs::msg::Ping & msg)
  : msg_(msg)
  {}
  Init_Ping_system_id rtt_ms(::px4_msgs::msg::Ping::_rtt_ms_type arg)
  {
    msg_.rtt_ms = std::move(arg);
    return Init_Ping_system_id(msg_);
  }

private:
  ::px4_msgs::msg::Ping msg_;
};

class Init_Ping_dropped_packets
{
public:
  explicit Init_Ping_dropped_packets(::px4_msgs::msg::Ping & msg)
  : msg_(msg)
  {}
  Init_Ping_rtt_ms dropped_packets(::px4_msgs::msg::Ping::_dropped_packets_type arg)
  {
    msg_.dropped_packets = std::move(arg);
    return Init_Ping_rtt_ms(msg_);
  }

private:
  ::px4_msgs::msg::Ping msg_;
};

class Init_Ping_ping_sequence
{
public:
  explicit Init_Ping_ping_sequence(::px4_msgs::msg::Ping & msg)
  : msg_(msg)
  {}
  Init_Ping_dropped_packets ping_sequence(::px4_msgs::msg::Ping::_ping_sequence_type arg)
  {
    msg_.ping_sequence = std::move(arg);
    return Init_Ping_dropped_packets(msg_);
  }

private:
  ::px4_msgs::msg::Ping msg_;
};

class Init_Ping_ping_time
{
public:
  explicit Init_Ping_ping_time(::px4_msgs::msg::Ping & msg)
  : msg_(msg)
  {}
  Init_Ping_ping_sequence ping_time(::px4_msgs::msg::Ping::_ping_time_type arg)
  {
    msg_.ping_time = std::move(arg);
    return Init_Ping_ping_sequence(msg_);
  }

private:
  ::px4_msgs::msg::Ping msg_;
};

class Init_Ping_timestamp
{
public:
  Init_Ping_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ping_ping_time timestamp(::px4_msgs::msg::Ping::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Ping_ping_time(msg_);
  }

private:
  ::px4_msgs::msg::Ping msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Ping>()
{
  return px4_msgs::msg::builder::Init_Ping_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PING__BUILDER_HPP_
