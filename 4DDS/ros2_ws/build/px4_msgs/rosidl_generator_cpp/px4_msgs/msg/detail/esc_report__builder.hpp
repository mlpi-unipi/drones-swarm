// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EscReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_REPORT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESC_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/esc_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EscReport_esc_power
{
public:
  explicit Init_EscReport_esc_power(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EscReport esc_power(::px4_msgs::msg::EscReport::_esc_power_type arg)
  {
    msg_.esc_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_failures
{
public:
  explicit Init_EscReport_failures(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  Init_EscReport_esc_power failures(::px4_msgs::msg::EscReport::_failures_type arg)
  {
    msg_.failures = std::move(arg);
    return Init_EscReport_esc_power(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_actuator_function
{
public:
  explicit Init_EscReport_actuator_function(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  Init_EscReport_failures actuator_function(::px4_msgs::msg::EscReport::_actuator_function_type arg)
  {
    msg_.actuator_function = std::move(arg);
    return Init_EscReport_failures(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_esc_state
{
public:
  explicit Init_EscReport_esc_state(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  Init_EscReport_actuator_function esc_state(::px4_msgs::msg::EscReport::_esc_state_type arg)
  {
    msg_.esc_state = std::move(arg);
    return Init_EscReport_actuator_function(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_esc_cmdcount
{
public:
  explicit Init_EscReport_esc_cmdcount(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  Init_EscReport_esc_state esc_cmdcount(::px4_msgs::msg::EscReport::_esc_cmdcount_type arg)
  {
    msg_.esc_cmdcount = std::move(arg);
    return Init_EscReport_esc_state(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_esc_address
{
public:
  explicit Init_EscReport_esc_address(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  Init_EscReport_esc_cmdcount esc_address(::px4_msgs::msg::EscReport::_esc_address_type arg)
  {
    msg_.esc_address = std::move(arg);
    return Init_EscReport_esc_cmdcount(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_esc_temperature
{
public:
  explicit Init_EscReport_esc_temperature(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  Init_EscReport_esc_address esc_temperature(::px4_msgs::msg::EscReport::_esc_temperature_type arg)
  {
    msg_.esc_temperature = std::move(arg);
    return Init_EscReport_esc_address(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_esc_current
{
public:
  explicit Init_EscReport_esc_current(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  Init_EscReport_esc_temperature esc_current(::px4_msgs::msg::EscReport::_esc_current_type arg)
  {
    msg_.esc_current = std::move(arg);
    return Init_EscReport_esc_temperature(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_esc_voltage
{
public:
  explicit Init_EscReport_esc_voltage(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  Init_EscReport_esc_current esc_voltage(::px4_msgs::msg::EscReport::_esc_voltage_type arg)
  {
    msg_.esc_voltage = std::move(arg);
    return Init_EscReport_esc_current(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_esc_rpm
{
public:
  explicit Init_EscReport_esc_rpm(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  Init_EscReport_esc_voltage esc_rpm(::px4_msgs::msg::EscReport::_esc_rpm_type arg)
  {
    msg_.esc_rpm = std::move(arg);
    return Init_EscReport_esc_voltage(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_esc_errorcount
{
public:
  explicit Init_EscReport_esc_errorcount(::px4_msgs::msg::EscReport & msg)
  : msg_(msg)
  {}
  Init_EscReport_esc_rpm esc_errorcount(::px4_msgs::msg::EscReport::_esc_errorcount_type arg)
  {
    msg_.esc_errorcount = std::move(arg);
    return Init_EscReport_esc_rpm(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

class Init_EscReport_timestamp
{
public:
  Init_EscReport_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EscReport_esc_errorcount timestamp(::px4_msgs::msg::EscReport::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EscReport_esc_errorcount(msg_);
  }

private:
  ::px4_msgs::msg::EscReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EscReport>()
{
  return px4_msgs::msg::builder::Init_EscReport_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESC_REPORT__BUILDER_HPP_
