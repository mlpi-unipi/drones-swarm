// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SystemPower.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/system_power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemPower_can1_gps1_5v_valid
{
public:
  explicit Init_SystemPower_can1_gps1_5v_valid(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SystemPower can1_gps1_5v_valid(::px4_msgs::msg::SystemPower::_can1_gps1_5v_valid_type arg)
  {
    msg_.can1_gps1_5v_valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_comp_5v_valid
{
public:
  explicit Init_SystemPower_comp_5v_valid(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  Init_SystemPower_can1_gps1_5v_valid comp_5v_valid(::px4_msgs::msg::SystemPower::_comp_5v_valid_type arg)
  {
    msg_.comp_5v_valid = std::move(arg);
    return Init_SystemPower_can1_gps1_5v_valid(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_hipower_5v_oc
{
public:
  explicit Init_SystemPower_hipower_5v_oc(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  Init_SystemPower_comp_5v_valid hipower_5v_oc(::px4_msgs::msg::SystemPower::_hipower_5v_oc_type arg)
  {
    msg_.hipower_5v_oc = std::move(arg);
    return Init_SystemPower_comp_5v_valid(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_periph_5v_oc
{
public:
  explicit Init_SystemPower_periph_5v_oc(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  Init_SystemPower_hipower_5v_oc periph_5v_oc(::px4_msgs::msg::SystemPower::_periph_5v_oc_type arg)
  {
    msg_.periph_5v_oc = std::move(arg);
    return Init_SystemPower_hipower_5v_oc(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_servo_valid
{
public:
  explicit Init_SystemPower_servo_valid(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  Init_SystemPower_periph_5v_oc servo_valid(::px4_msgs::msg::SystemPower::_servo_valid_type arg)
  {
    msg_.servo_valid = std::move(arg);
    return Init_SystemPower_periph_5v_oc(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_usb_valid
{
public:
  explicit Init_SystemPower_usb_valid(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  Init_SystemPower_servo_valid usb_valid(::px4_msgs::msg::SystemPower::_usb_valid_type arg)
  {
    msg_.usb_valid = std::move(arg);
    return Init_SystemPower_servo_valid(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_brick_valid
{
public:
  explicit Init_SystemPower_brick_valid(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  Init_SystemPower_usb_valid brick_valid(::px4_msgs::msg::SystemPower::_brick_valid_type arg)
  {
    msg_.brick_valid = std::move(arg);
    return Init_SystemPower_usb_valid(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_usb_connected
{
public:
  explicit Init_SystemPower_usb_connected(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  Init_SystemPower_brick_valid usb_connected(::px4_msgs::msg::SystemPower::_usb_connected_type arg)
  {
    msg_.usb_connected = std::move(arg);
    return Init_SystemPower_brick_valid(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_sensors3v3_valid
{
public:
  explicit Init_SystemPower_sensors3v3_valid(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  Init_SystemPower_usb_connected sensors3v3_valid(::px4_msgs::msg::SystemPower::_sensors3v3_valid_type arg)
  {
    msg_.sensors3v3_valid = std::move(arg);
    return Init_SystemPower_usb_connected(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_sensors3v3
{
public:
  explicit Init_SystemPower_sensors3v3(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  Init_SystemPower_sensors3v3_valid sensors3v3(::px4_msgs::msg::SystemPower::_sensors3v3_type arg)
  {
    msg_.sensors3v3 = std::move(arg);
    return Init_SystemPower_sensors3v3_valid(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_voltage5v_v
{
public:
  explicit Init_SystemPower_voltage5v_v(::px4_msgs::msg::SystemPower & msg)
  : msg_(msg)
  {}
  Init_SystemPower_sensors3v3 voltage5v_v(::px4_msgs::msg::SystemPower::_voltage5v_v_type arg)
  {
    msg_.voltage5v_v = std::move(arg);
    return Init_SystemPower_sensors3v3(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

class Init_SystemPower_timestamp
{
public:
  Init_SystemPower_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemPower_voltage5v_v timestamp(::px4_msgs::msg::SystemPower::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SystemPower_voltage5v_v(msg_);
  }

private:
  ::px4_msgs::msg::SystemPower msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SystemPower>()
{
  return px4_msgs::msg::builder::Init_SystemPower_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__BUILDER_HPP_
