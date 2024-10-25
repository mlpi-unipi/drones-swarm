// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Cpuload.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CPULOAD__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__CPULOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/cpuload__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Cpuload_ram_usage
{
public:
  explicit Init_Cpuload_ram_usage(::px4_msgs::msg::Cpuload & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Cpuload ram_usage(::px4_msgs::msg::Cpuload::_ram_usage_type arg)
  {
    msg_.ram_usage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Cpuload msg_;
};

class Init_Cpuload_load
{
public:
  explicit Init_Cpuload_load(::px4_msgs::msg::Cpuload & msg)
  : msg_(msg)
  {}
  Init_Cpuload_ram_usage load(::px4_msgs::msg::Cpuload::_load_type arg)
  {
    msg_.load = std::move(arg);
    return Init_Cpuload_ram_usage(msg_);
  }

private:
  ::px4_msgs::msg::Cpuload msg_;
};

class Init_Cpuload_timestamp
{
public:
  Init_Cpuload_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cpuload_load timestamp(::px4_msgs::msg::Cpuload::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Cpuload_load(msg_);
  }

private:
  ::px4_msgs::msg::Cpuload msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Cpuload>()
{
  return px4_msgs::msg::builder::Init_Cpuload_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CPULOAD__BUILDER_HPP_
