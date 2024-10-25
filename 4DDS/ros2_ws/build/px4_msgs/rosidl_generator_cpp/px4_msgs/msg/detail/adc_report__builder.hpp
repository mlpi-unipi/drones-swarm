// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/AdcReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ADC_REPORT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ADC_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/adc_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_AdcReport_v_ref
{
public:
  explicit Init_AdcReport_v_ref(::px4_msgs::msg::AdcReport & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::AdcReport v_ref(::px4_msgs::msg::AdcReport::_v_ref_type arg)
  {
    msg_.v_ref = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::AdcReport msg_;
};

class Init_AdcReport_resolution
{
public:
  explicit Init_AdcReport_resolution(::px4_msgs::msg::AdcReport & msg)
  : msg_(msg)
  {}
  Init_AdcReport_v_ref resolution(::px4_msgs::msg::AdcReport::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_AdcReport_v_ref(msg_);
  }

private:
  ::px4_msgs::msg::AdcReport msg_;
};

class Init_AdcReport_raw_data
{
public:
  explicit Init_AdcReport_raw_data(::px4_msgs::msg::AdcReport & msg)
  : msg_(msg)
  {}
  Init_AdcReport_resolution raw_data(::px4_msgs::msg::AdcReport::_raw_data_type arg)
  {
    msg_.raw_data = std::move(arg);
    return Init_AdcReport_resolution(msg_);
  }

private:
  ::px4_msgs::msg::AdcReport msg_;
};

class Init_AdcReport_channel_id
{
public:
  explicit Init_AdcReport_channel_id(::px4_msgs::msg::AdcReport & msg)
  : msg_(msg)
  {}
  Init_AdcReport_raw_data channel_id(::px4_msgs::msg::AdcReport::_channel_id_type arg)
  {
    msg_.channel_id = std::move(arg);
    return Init_AdcReport_raw_data(msg_);
  }

private:
  ::px4_msgs::msg::AdcReport msg_;
};

class Init_AdcReport_device_id
{
public:
  explicit Init_AdcReport_device_id(::px4_msgs::msg::AdcReport & msg)
  : msg_(msg)
  {}
  Init_AdcReport_channel_id device_id(::px4_msgs::msg::AdcReport::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_AdcReport_channel_id(msg_);
  }

private:
  ::px4_msgs::msg::AdcReport msg_;
};

class Init_AdcReport_timestamp
{
public:
  Init_AdcReport_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdcReport_device_id timestamp(::px4_msgs::msg::AdcReport::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AdcReport_device_id(msg_);
  }

private:
  ::px4_msgs::msg::AdcReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::AdcReport>()
{
  return px4_msgs::msg::builder::Init_AdcReport_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ADC_REPORT__BUILDER_HPP_
