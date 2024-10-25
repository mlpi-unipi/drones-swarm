// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ConfigOverrides.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/config_overrides__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ConfigOverrides_source_id
{
public:
  explicit Init_ConfigOverrides_source_id(::px4_msgs::msg::ConfigOverrides & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ConfigOverrides source_id(::px4_msgs::msg::ConfigOverrides::_source_id_type arg)
  {
    msg_.source_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ConfigOverrides msg_;
};

class Init_ConfigOverrides_source_type
{
public:
  explicit Init_ConfigOverrides_source_type(::px4_msgs::msg::ConfigOverrides & msg)
  : msg_(msg)
  {}
  Init_ConfigOverrides_source_id source_type(::px4_msgs::msg::ConfigOverrides::_source_type_type arg)
  {
    msg_.source_type = std::move(arg);
    return Init_ConfigOverrides_source_id(msg_);
  }

private:
  ::px4_msgs::msg::ConfigOverrides msg_;
};

class Init_ConfigOverrides_defer_failsafes_timeout_s
{
public:
  explicit Init_ConfigOverrides_defer_failsafes_timeout_s(::px4_msgs::msg::ConfigOverrides & msg)
  : msg_(msg)
  {}
  Init_ConfigOverrides_source_type defer_failsafes_timeout_s(::px4_msgs::msg::ConfigOverrides::_defer_failsafes_timeout_s_type arg)
  {
    msg_.defer_failsafes_timeout_s = std::move(arg);
    return Init_ConfigOverrides_source_type(msg_);
  }

private:
  ::px4_msgs::msg::ConfigOverrides msg_;
};

class Init_ConfigOverrides_defer_failsafes
{
public:
  explicit Init_ConfigOverrides_defer_failsafes(::px4_msgs::msg::ConfigOverrides & msg)
  : msg_(msg)
  {}
  Init_ConfigOverrides_defer_failsafes_timeout_s defer_failsafes(::px4_msgs::msg::ConfigOverrides::_defer_failsafes_type arg)
  {
    msg_.defer_failsafes = std::move(arg);
    return Init_ConfigOverrides_defer_failsafes_timeout_s(msg_);
  }

private:
  ::px4_msgs::msg::ConfigOverrides msg_;
};

class Init_ConfigOverrides_disable_auto_disarm
{
public:
  explicit Init_ConfigOverrides_disable_auto_disarm(::px4_msgs::msg::ConfigOverrides & msg)
  : msg_(msg)
  {}
  Init_ConfigOverrides_defer_failsafes disable_auto_disarm(::px4_msgs::msg::ConfigOverrides::_disable_auto_disarm_type arg)
  {
    msg_.disable_auto_disarm = std::move(arg);
    return Init_ConfigOverrides_defer_failsafes(msg_);
  }

private:
  ::px4_msgs::msg::ConfigOverrides msg_;
};

class Init_ConfigOverrides_timestamp
{
public:
  Init_ConfigOverrides_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigOverrides_disable_auto_disarm timestamp(::px4_msgs::msg::ConfigOverrides::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ConfigOverrides_disable_auto_disarm(msg_);
  }

private:
  ::px4_msgs::msg::ConfigOverrides msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ConfigOverrides>()
{
  return px4_msgs::msg::builder::Init_ConfigOverrides_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__BUILDER_HPP_
