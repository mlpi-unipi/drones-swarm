// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/MavlinkTunnel.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAVLINK_TUNNEL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MAVLINK_TUNNEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/mavlink_tunnel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_MavlinkTunnel_payload
{
public:
  explicit Init_MavlinkTunnel_payload(::px4_msgs::msg::MavlinkTunnel & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::MavlinkTunnel payload(::px4_msgs::msg::MavlinkTunnel::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::MavlinkTunnel msg_;
};

class Init_MavlinkTunnel_payload_length
{
public:
  explicit Init_MavlinkTunnel_payload_length(::px4_msgs::msg::MavlinkTunnel & msg)
  : msg_(msg)
  {}
  Init_MavlinkTunnel_payload payload_length(::px4_msgs::msg::MavlinkTunnel::_payload_length_type arg)
  {
    msg_.payload_length = std::move(arg);
    return Init_MavlinkTunnel_payload(msg_);
  }

private:
  ::px4_msgs::msg::MavlinkTunnel msg_;
};

class Init_MavlinkTunnel_target_component
{
public:
  explicit Init_MavlinkTunnel_target_component(::px4_msgs::msg::MavlinkTunnel & msg)
  : msg_(msg)
  {}
  Init_MavlinkTunnel_payload_length target_component(::px4_msgs::msg::MavlinkTunnel::_target_component_type arg)
  {
    msg_.target_component = std::move(arg);
    return Init_MavlinkTunnel_payload_length(msg_);
  }

private:
  ::px4_msgs::msg::MavlinkTunnel msg_;
};

class Init_MavlinkTunnel_target_system
{
public:
  explicit Init_MavlinkTunnel_target_system(::px4_msgs::msg::MavlinkTunnel & msg)
  : msg_(msg)
  {}
  Init_MavlinkTunnel_target_component target_system(::px4_msgs::msg::MavlinkTunnel::_target_system_type arg)
  {
    msg_.target_system = std::move(arg);
    return Init_MavlinkTunnel_target_component(msg_);
  }

private:
  ::px4_msgs::msg::MavlinkTunnel msg_;
};

class Init_MavlinkTunnel_payload_type
{
public:
  explicit Init_MavlinkTunnel_payload_type(::px4_msgs::msg::MavlinkTunnel & msg)
  : msg_(msg)
  {}
  Init_MavlinkTunnel_target_system payload_type(::px4_msgs::msg::MavlinkTunnel::_payload_type_type arg)
  {
    msg_.payload_type = std::move(arg);
    return Init_MavlinkTunnel_target_system(msg_);
  }

private:
  ::px4_msgs::msg::MavlinkTunnel msg_;
};

class Init_MavlinkTunnel_timestamp
{
public:
  Init_MavlinkTunnel_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MavlinkTunnel_payload_type timestamp(::px4_msgs::msg::MavlinkTunnel::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MavlinkTunnel_payload_type(msg_);
  }

private:
  ::px4_msgs::msg::MavlinkTunnel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::MavlinkTunnel>()
{
  return px4_msgs::msg::builder::Init_MavlinkTunnel_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MAVLINK_TUNNEL__BUILDER_HPP_
