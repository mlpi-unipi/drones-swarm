// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/InputRc.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INPUT_RC__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__INPUT_RC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/input_rc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_InputRc_rssi_dbm
{
public:
  explicit Init_InputRc_rssi_dbm(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::InputRc rssi_dbm(::px4_msgs::msg::InputRc::_rssi_dbm_type arg)
  {
    msg_.rssi_dbm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_link_quality
{
public:
  explicit Init_InputRc_link_quality(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_rssi_dbm link_quality(::px4_msgs::msg::InputRc::_link_quality_type arg)
  {
    msg_.link_quality = std::move(arg);
    return Init_InputRc_rssi_dbm(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_values
{
public:
  explicit Init_InputRc_values(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_link_quality values(::px4_msgs::msg::InputRc::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_InputRc_link_quality(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_input_source
{
public:
  explicit Init_InputRc_input_source(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_values input_source(::px4_msgs::msg::InputRc::_input_source_type arg)
  {
    msg_.input_source = std::move(arg);
    return Init_InputRc_values(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_rc_ppm_frame_length
{
public:
  explicit Init_InputRc_rc_ppm_frame_length(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_input_source rc_ppm_frame_length(::px4_msgs::msg::InputRc::_rc_ppm_frame_length_type arg)
  {
    msg_.rc_ppm_frame_length = std::move(arg);
    return Init_InputRc_input_source(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_rc_total_frame_count
{
public:
  explicit Init_InputRc_rc_total_frame_count(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_rc_ppm_frame_length rc_total_frame_count(::px4_msgs::msg::InputRc::_rc_total_frame_count_type arg)
  {
    msg_.rc_total_frame_count = std::move(arg);
    return Init_InputRc_rc_ppm_frame_length(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_rc_lost_frame_count
{
public:
  explicit Init_InputRc_rc_lost_frame_count(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_rc_total_frame_count rc_lost_frame_count(::px4_msgs::msg::InputRc::_rc_lost_frame_count_type arg)
  {
    msg_.rc_lost_frame_count = std::move(arg);
    return Init_InputRc_rc_total_frame_count(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_rc_lost
{
public:
  explicit Init_InputRc_rc_lost(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_rc_lost_frame_count rc_lost(::px4_msgs::msg::InputRc::_rc_lost_type arg)
  {
    msg_.rc_lost = std::move(arg);
    return Init_InputRc_rc_lost_frame_count(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_rc_failsafe
{
public:
  explicit Init_InputRc_rc_failsafe(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_rc_lost rc_failsafe(::px4_msgs::msg::InputRc::_rc_failsafe_type arg)
  {
    msg_.rc_failsafe = std::move(arg);
    return Init_InputRc_rc_lost(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_rssi
{
public:
  explicit Init_InputRc_rssi(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_rc_failsafe rssi(::px4_msgs::msg::InputRc::_rssi_type arg)
  {
    msg_.rssi = std::move(arg);
    return Init_InputRc_rc_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_channel_count
{
public:
  explicit Init_InputRc_channel_count(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_rssi channel_count(::px4_msgs::msg::InputRc::_channel_count_type arg)
  {
    msg_.channel_count = std::move(arg);
    return Init_InputRc_rssi(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_timestamp_last_signal
{
public:
  explicit Init_InputRc_timestamp_last_signal(::px4_msgs::msg::InputRc & msg)
  : msg_(msg)
  {}
  Init_InputRc_channel_count timestamp_last_signal(::px4_msgs::msg::InputRc::_timestamp_last_signal_type arg)
  {
    msg_.timestamp_last_signal = std::move(arg);
    return Init_InputRc_channel_count(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

class Init_InputRc_timestamp
{
public:
  Init_InputRc_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InputRc_timestamp_last_signal timestamp(::px4_msgs::msg::InputRc::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_InputRc_timestamp_last_signal(msg_);
  }

private:
  ::px4_msgs::msg::InputRc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::InputRc>()
{
  return px4_msgs::msg::builder::Init_InputRc_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__INPUT_RC__BUILDER_HPP_
