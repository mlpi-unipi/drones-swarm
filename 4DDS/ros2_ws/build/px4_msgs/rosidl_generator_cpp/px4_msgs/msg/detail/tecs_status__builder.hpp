// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TECS_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TECS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/tecs_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TecsStatus_underspeed_ratio
{
public:
  explicit Init_TecsStatus_underspeed_ratio(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TecsStatus underspeed_ratio(::px4_msgs::msg::TecsStatus::_underspeed_ratio_type arg)
  {
    msg_.underspeed_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_throttle_trim
{
public:
  explicit Init_TecsStatus_throttle_trim(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_underspeed_ratio throttle_trim(::px4_msgs::msg::TecsStatus::_throttle_trim_type arg)
  {
    msg_.throttle_trim = std::move(arg);
    return Init_TecsStatus_underspeed_ratio(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_pitch_sp_rad
{
public:
  explicit Init_TecsStatus_pitch_sp_rad(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_throttle_trim pitch_sp_rad(::px4_msgs::msg::TecsStatus::_pitch_sp_rad_type arg)
  {
    msg_.pitch_sp_rad = std::move(arg);
    return Init_TecsStatus_throttle_trim(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_throttle_sp
{
public:
  explicit Init_TecsStatus_throttle_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_pitch_sp_rad throttle_sp(::px4_msgs::msg::TecsStatus::_throttle_sp_type arg)
  {
    msg_.throttle_sp = std::move(arg);
    return Init_TecsStatus_pitch_sp_rad(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_pitch_integ
{
public:
  explicit Init_TecsStatus_pitch_integ(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_throttle_sp pitch_integ(::px4_msgs::msg::TecsStatus::_pitch_integ_type arg)
  {
    msg_.pitch_integ = std::move(arg);
    return Init_TecsStatus_throttle_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_throttle_integ
{
public:
  explicit Init_TecsStatus_throttle_integ(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_pitch_integ throttle_integ(::px4_msgs::msg::TecsStatus::_throttle_integ_type arg)
  {
    msg_.throttle_integ = std::move(arg);
    return Init_TecsStatus_pitch_integ(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_balance_rate
{
public:
  explicit Init_TecsStatus_total_energy_balance_rate(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_throttle_integ total_energy_balance_rate(::px4_msgs::msg::TecsStatus::_total_energy_balance_rate_type arg)
  {
    msg_.total_energy_balance_rate = std::move(arg);
    return Init_TecsStatus_throttle_integ(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_balance_rate_sp
{
public:
  explicit Init_TecsStatus_total_energy_balance_rate_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_balance_rate total_energy_balance_rate_sp(::px4_msgs::msg::TecsStatus::_total_energy_balance_rate_sp_type arg)
  {
    msg_.total_energy_balance_rate_sp = std::move(arg);
    return Init_TecsStatus_total_energy_balance_rate(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_rate
{
public:
  explicit Init_TecsStatus_total_energy_rate(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_balance_rate_sp total_energy_rate(::px4_msgs::msg::TecsStatus::_total_energy_rate_type arg)
  {
    msg_.total_energy_rate = std::move(arg);
    return Init_TecsStatus_total_energy_balance_rate_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_rate_sp
{
public:
  explicit Init_TecsStatus_total_energy_rate_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_rate total_energy_rate_sp(::px4_msgs::msg::TecsStatus::_total_energy_rate_sp_type arg)
  {
    msg_.total_energy_rate_sp = std::move(arg);
    return Init_TecsStatus_total_energy_rate(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_derivative_raw
{
public:
  explicit Init_TecsStatus_true_airspeed_derivative_raw(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_rate_sp true_airspeed_derivative_raw(::px4_msgs::msg::TecsStatus::_true_airspeed_derivative_raw_type arg)
  {
    msg_.true_airspeed_derivative_raw = std::move(arg);
    return Init_TecsStatus_total_energy_rate_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_derivative
{
public:
  explicit Init_TecsStatus_true_airspeed_derivative(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_derivative_raw true_airspeed_derivative(::px4_msgs::msg::TecsStatus::_true_airspeed_derivative_type arg)
  {
    msg_.true_airspeed_derivative = std::move(arg);
    return Init_TecsStatus_true_airspeed_derivative_raw(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_derivative_sp
{
public:
  explicit Init_TecsStatus_true_airspeed_derivative_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_derivative true_airspeed_derivative_sp(::px4_msgs::msg::TecsStatus::_true_airspeed_derivative_sp_type arg)
  {
    msg_.true_airspeed_derivative_sp = std::move(arg);
    return Init_TecsStatus_true_airspeed_derivative(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_filtered
{
public:
  explicit Init_TecsStatus_true_airspeed_filtered(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_derivative_sp true_airspeed_filtered(::px4_msgs::msg::TecsStatus::_true_airspeed_filtered_type arg)
  {
    msg_.true_airspeed_filtered = std::move(arg);
    return Init_TecsStatus_true_airspeed_derivative_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_sp
{
public:
  explicit Init_TecsStatus_true_airspeed_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_filtered true_airspeed_sp(::px4_msgs::msg::TecsStatus::_true_airspeed_sp_type arg)
  {
    msg_.true_airspeed_sp = std::move(arg);
    return Init_TecsStatus_true_airspeed_filtered(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_equivalent_airspeed_sp
{
public:
  explicit Init_TecsStatus_equivalent_airspeed_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_sp equivalent_airspeed_sp(::px4_msgs::msg::TecsStatus::_equivalent_airspeed_sp_type arg)
  {
    msg_.equivalent_airspeed_sp = std::move(arg);
    return Init_TecsStatus_true_airspeed_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_height_rate
{
public:
  explicit Init_TecsStatus_height_rate(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_equivalent_airspeed_sp height_rate(::px4_msgs::msg::TecsStatus::_height_rate_type arg)
  {
    msg_.height_rate = std::move(arg);
    return Init_TecsStatus_equivalent_airspeed_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_height_rate_setpoint
{
public:
  explicit Init_TecsStatus_height_rate_setpoint(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_height_rate height_rate_setpoint(::px4_msgs::msg::TecsStatus::_height_rate_setpoint_type arg)
  {
    msg_.height_rate_setpoint = std::move(arg);
    return Init_TecsStatus_height_rate(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_height_rate_direct
{
public:
  explicit Init_TecsStatus_height_rate_direct(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_height_rate_setpoint height_rate_direct(::px4_msgs::msg::TecsStatus::_height_rate_direct_type arg)
  {
    msg_.height_rate_direct = std::move(arg);
    return Init_TecsStatus_height_rate_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_height_rate_reference
{
public:
  explicit Init_TecsStatus_height_rate_reference(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_height_rate_direct height_rate_reference(::px4_msgs::msg::TecsStatus::_height_rate_reference_type arg)
  {
    msg_.height_rate_reference = std::move(arg);
    return Init_TecsStatus_height_rate_direct(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_altitude_reference
{
public:
  explicit Init_TecsStatus_altitude_reference(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_height_rate_reference altitude_reference(::px4_msgs::msg::TecsStatus::_altitude_reference_type arg)
  {
    msg_.altitude_reference = std::move(arg);
    return Init_TecsStatus_height_rate_reference(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_altitude_sp
{
public:
  explicit Init_TecsStatus_altitude_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_altitude_reference altitude_sp(::px4_msgs::msg::TecsStatus::_altitude_sp_type arg)
  {
    msg_.altitude_sp = std::move(arg);
    return Init_TecsStatus_altitude_reference(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_timestamp
{
public:
  Init_TecsStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TecsStatus_altitude_sp timestamp(::px4_msgs::msg::TecsStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TecsStatus_altitude_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TecsStatus>()
{
  return px4_msgs::msg::builder::Init_TecsStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TECS_STATUS__BUILDER_HPP_
