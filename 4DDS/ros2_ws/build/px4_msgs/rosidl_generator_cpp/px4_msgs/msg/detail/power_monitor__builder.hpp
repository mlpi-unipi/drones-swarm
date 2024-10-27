// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/PowerMonitor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POWER_MONITOR__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__POWER_MONITOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/power_monitor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerMonitor_al
{
public:
  explicit Init_PowerMonitor_al(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::PowerMonitor al(::px4_msgs::msg::PowerMonitor::_al_type arg)
  {
    msg_.al = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_me
{
public:
  explicit Init_PowerMonitor_me(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  Init_PowerMonitor_al me(::px4_msgs::msg::PowerMonitor::_me_type arg)
  {
    msg_.me = std::move(arg);
    return Init_PowerMonitor_al(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_rcal
{
public:
  explicit Init_PowerMonitor_rcal(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  Init_PowerMonitor_me rcal(::px4_msgs::msg::PowerMonitor::_rcal_type arg)
  {
    msg_.rcal = std::move(arg);
    return Init_PowerMonitor_me(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_rc
{
public:
  explicit Init_PowerMonitor_rc(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  Init_PowerMonitor_rcal rc(::px4_msgs::msg::PowerMonitor::_rc_type arg)
  {
    msg_.rc = std::move(arg);
    return Init_PowerMonitor_rcal(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_rp
{
public:
  explicit Init_PowerMonitor_rp(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  Init_PowerMonitor_rc rp(::px4_msgs::msg::PowerMonitor::_rp_type arg)
  {
    msg_.rp = std::move(arg);
    return Init_PowerMonitor_rc(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_rbv
{
public:
  explicit Init_PowerMonitor_rbv(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  Init_PowerMonitor_rp rbv(::px4_msgs::msg::PowerMonitor::_rbv_type arg)
  {
    msg_.rbv = std::move(arg);
    return Init_PowerMonitor_rp(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_rsv
{
public:
  explicit Init_PowerMonitor_rsv(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  Init_PowerMonitor_rbv rsv(::px4_msgs::msg::PowerMonitor::_rsv_type arg)
  {
    msg_.rsv = std::move(arg);
    return Init_PowerMonitor_rbv(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_rconf
{
public:
  explicit Init_PowerMonitor_rconf(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  Init_PowerMonitor_rsv rconf(::px4_msgs::msg::PowerMonitor::_rconf_type arg)
  {
    msg_.rconf = std::move(arg);
    return Init_PowerMonitor_rsv(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_power_w
{
public:
  explicit Init_PowerMonitor_power_w(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  Init_PowerMonitor_rconf power_w(::px4_msgs::msg::PowerMonitor::_power_w_type arg)
  {
    msg_.power_w = std::move(arg);
    return Init_PowerMonitor_rconf(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_current_a
{
public:
  explicit Init_PowerMonitor_current_a(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  Init_PowerMonitor_power_w current_a(::px4_msgs::msg::PowerMonitor::_current_a_type arg)
  {
    msg_.current_a = std::move(arg);
    return Init_PowerMonitor_power_w(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_voltage_v
{
public:
  explicit Init_PowerMonitor_voltage_v(::px4_msgs::msg::PowerMonitor & msg)
  : msg_(msg)
  {}
  Init_PowerMonitor_current_a voltage_v(::px4_msgs::msg::PowerMonitor::_voltage_v_type arg)
  {
    msg_.voltage_v = std::move(arg);
    return Init_PowerMonitor_current_a(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

class Init_PowerMonitor_timestamp
{
public:
  Init_PowerMonitor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerMonitor_voltage_v timestamp(::px4_msgs::msg::PowerMonitor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PowerMonitor_voltage_v(msg_);
  }

private:
  ::px4_msgs::msg::PowerMonitor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::PowerMonitor>()
{
  return px4_msgs::msg::builder::Init_PowerMonitor_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POWER_MONITOR__BUILDER_HPP_
