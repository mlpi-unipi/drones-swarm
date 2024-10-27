// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TimesyncStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TIMESYNC_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TIMESYNC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/timesync_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TimesyncStatus_round_trip_time
{
public:
  explicit Init_TimesyncStatus_round_trip_time(::px4_msgs::msg::TimesyncStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TimesyncStatus round_trip_time(::px4_msgs::msg::TimesyncStatus::_round_trip_time_type arg)
  {
    msg_.round_trip_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TimesyncStatus msg_;
};

class Init_TimesyncStatus_estimated_offset
{
public:
  explicit Init_TimesyncStatus_estimated_offset(::px4_msgs::msg::TimesyncStatus & msg)
  : msg_(msg)
  {}
  Init_TimesyncStatus_round_trip_time estimated_offset(::px4_msgs::msg::TimesyncStatus::_estimated_offset_type arg)
  {
    msg_.estimated_offset = std::move(arg);
    return Init_TimesyncStatus_round_trip_time(msg_);
  }

private:
  ::px4_msgs::msg::TimesyncStatus msg_;
};

class Init_TimesyncStatus_observed_offset
{
public:
  explicit Init_TimesyncStatus_observed_offset(::px4_msgs::msg::TimesyncStatus & msg)
  : msg_(msg)
  {}
  Init_TimesyncStatus_estimated_offset observed_offset(::px4_msgs::msg::TimesyncStatus::_observed_offset_type arg)
  {
    msg_.observed_offset = std::move(arg);
    return Init_TimesyncStatus_estimated_offset(msg_);
  }

private:
  ::px4_msgs::msg::TimesyncStatus msg_;
};

class Init_TimesyncStatus_remote_timestamp
{
public:
  explicit Init_TimesyncStatus_remote_timestamp(::px4_msgs::msg::TimesyncStatus & msg)
  : msg_(msg)
  {}
  Init_TimesyncStatus_observed_offset remote_timestamp(::px4_msgs::msg::TimesyncStatus::_remote_timestamp_type arg)
  {
    msg_.remote_timestamp = std::move(arg);
    return Init_TimesyncStatus_observed_offset(msg_);
  }

private:
  ::px4_msgs::msg::TimesyncStatus msg_;
};

class Init_TimesyncStatus_source_protocol
{
public:
  explicit Init_TimesyncStatus_source_protocol(::px4_msgs::msg::TimesyncStatus & msg)
  : msg_(msg)
  {}
  Init_TimesyncStatus_remote_timestamp source_protocol(::px4_msgs::msg::TimesyncStatus::_source_protocol_type arg)
  {
    msg_.source_protocol = std::move(arg);
    return Init_TimesyncStatus_remote_timestamp(msg_);
  }

private:
  ::px4_msgs::msg::TimesyncStatus msg_;
};

class Init_TimesyncStatus_timestamp
{
public:
  Init_TimesyncStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimesyncStatus_source_protocol timestamp(::px4_msgs::msg::TimesyncStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TimesyncStatus_source_protocol(msg_);
  }

private:
  ::px4_msgs::msg::TimesyncStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TimesyncStatus>()
{
  return px4_msgs::msg::builder::Init_TimesyncStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TIMESYNC_STATUS__BUILDER_HPP_
