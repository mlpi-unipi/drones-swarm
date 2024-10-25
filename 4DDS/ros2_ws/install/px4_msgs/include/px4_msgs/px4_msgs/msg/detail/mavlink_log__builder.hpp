// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/MavlinkLog.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAVLINK_LOG__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MAVLINK_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/mavlink_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_MavlinkLog_severity
{
public:
  explicit Init_MavlinkLog_severity(::px4_msgs::msg::MavlinkLog & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::MavlinkLog severity(::px4_msgs::msg::MavlinkLog::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::MavlinkLog msg_;
};

class Init_MavlinkLog_text
{
public:
  explicit Init_MavlinkLog_text(::px4_msgs::msg::MavlinkLog & msg)
  : msg_(msg)
  {}
  Init_MavlinkLog_severity text(::px4_msgs::msg::MavlinkLog::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_MavlinkLog_severity(msg_);
  }

private:
  ::px4_msgs::msg::MavlinkLog msg_;
};

class Init_MavlinkLog_timestamp
{
public:
  Init_MavlinkLog_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MavlinkLog_text timestamp(::px4_msgs::msg::MavlinkLog::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MavlinkLog_text(msg_);
  }

private:
  ::px4_msgs::msg::MavlinkLog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::MavlinkLog>()
{
  return px4_msgs::msg::builder::Init_MavlinkLog_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MAVLINK_LOG__BUILDER_HPP_
