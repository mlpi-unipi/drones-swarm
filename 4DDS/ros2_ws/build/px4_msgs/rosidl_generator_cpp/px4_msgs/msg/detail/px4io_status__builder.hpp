// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Px4ioStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PX4IO_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PX4IO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/px4io_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Px4ioStatus_raw_inputs
{
public:
  explicit Init_Px4ioStatus_raw_inputs(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Px4ioStatus raw_inputs(::px4_msgs::msg::Px4ioStatus::_raw_inputs_type arg)
  {
    msg_.raw_inputs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_pwm_rate_hz
{
public:
  explicit Init_Px4ioStatus_pwm_rate_hz(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_raw_inputs pwm_rate_hz(::px4_msgs::msg::Px4ioStatus::_pwm_rate_hz_type arg)
  {
    msg_.pwm_rate_hz = std::move(arg);
    return Init_Px4ioStatus_raw_inputs(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_pwm_failsafe
{
public:
  explicit Init_Px4ioStatus_pwm_failsafe(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_pwm_rate_hz pwm_failsafe(::px4_msgs::msg::Px4ioStatus::_pwm_failsafe_type arg)
  {
    msg_.pwm_failsafe = std::move(arg);
    return Init_Px4ioStatus_pwm_rate_hz(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_pwm_disarmed
{
public:
  explicit Init_Px4ioStatus_pwm_disarmed(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_pwm_failsafe pwm_disarmed(::px4_msgs::msg::Px4ioStatus::_pwm_disarmed_type arg)
  {
    msg_.pwm_disarmed = std::move(arg);
    return Init_Px4ioStatus_pwm_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_pwm
{
public:
  explicit Init_Px4ioStatus_pwm(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_pwm_disarmed pwm(::px4_msgs::msg::Px4ioStatus::_pwm_type arg)
  {
    msg_.pwm = std::move(arg);
    return Init_Px4ioStatus_pwm_disarmed(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_arming_termination_failsafe
{
public:
  explicit Init_Px4ioStatus_arming_termination_failsafe(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_pwm arming_termination_failsafe(::px4_msgs::msg::Px4ioStatus::_arming_termination_failsafe_type arg)
  {
    msg_.arming_termination_failsafe = std::move(arg);
    return Init_Px4ioStatus_pwm(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_arming_lockdown
{
public:
  explicit Init_Px4ioStatus_arming_lockdown(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_arming_termination_failsafe arming_lockdown(::px4_msgs::msg::Px4ioStatus::_arming_lockdown_type arg)
  {
    msg_.arming_lockdown = std::move(arg);
    return Init_Px4ioStatus_arming_termination_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_arming_io_arm_ok
{
public:
  explicit Init_Px4ioStatus_arming_io_arm_ok(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_arming_lockdown arming_io_arm_ok(::px4_msgs::msg::Px4ioStatus::_arming_io_arm_ok_type arg)
  {
    msg_.arming_io_arm_ok = std::move(arg);
    return Init_Px4ioStatus_arming_lockdown(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_arming_force_failsafe
{
public:
  explicit Init_Px4ioStatus_arming_force_failsafe(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_arming_io_arm_ok arming_force_failsafe(::px4_msgs::msg::Px4ioStatus::_arming_force_failsafe_type arg)
  {
    msg_.arming_force_failsafe = std::move(arg);
    return Init_Px4ioStatus_arming_io_arm_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_arming_fmu_prearmed
{
public:
  explicit Init_Px4ioStatus_arming_fmu_prearmed(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_arming_force_failsafe arming_fmu_prearmed(::px4_msgs::msg::Px4ioStatus::_arming_fmu_prearmed_type arg)
  {
    msg_.arming_fmu_prearmed = std::move(arg);
    return Init_Px4ioStatus_arming_force_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_arming_fmu_armed
{
public:
  explicit Init_Px4ioStatus_arming_fmu_armed(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_arming_fmu_prearmed arming_fmu_armed(::px4_msgs::msg::Px4ioStatus::_arming_fmu_armed_type arg)
  {
    msg_.arming_fmu_armed = std::move(arg);
    return Init_Px4ioStatus_arming_fmu_prearmed(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_arming_failsafe_custom
{
public:
  explicit Init_Px4ioStatus_arming_failsafe_custom(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_arming_fmu_armed arming_failsafe_custom(::px4_msgs::msg::Px4ioStatus::_arming_failsafe_custom_type arg)
  {
    msg_.arming_failsafe_custom = std::move(arg);
    return Init_Px4ioStatus_arming_fmu_armed(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_alarm_rc_lost
{
public:
  explicit Init_Px4ioStatus_alarm_rc_lost(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_arming_failsafe_custom alarm_rc_lost(::px4_msgs::msg::Px4ioStatus::_alarm_rc_lost_type arg)
  {
    msg_.alarm_rc_lost = std::move(arg);
    return Init_Px4ioStatus_arming_failsafe_custom(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_alarm_pwm_error
{
public:
  explicit Init_Px4ioStatus_alarm_pwm_error(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_alarm_rc_lost alarm_pwm_error(::px4_msgs::msg::Px4ioStatus::_alarm_pwm_error_type arg)
  {
    msg_.alarm_pwm_error = std::move(arg);
    return Init_Px4ioStatus_alarm_rc_lost(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_safety_button_event
{
public:
  explicit Init_Px4ioStatus_status_safety_button_event(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_alarm_pwm_error status_safety_button_event(::px4_msgs::msg::Px4ioStatus::_status_safety_button_event_type arg)
  {
    msg_.status_safety_button_event = std::move(arg);
    return Init_Px4ioStatus_alarm_pwm_error(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_rc_sumd
{
public:
  explicit Init_Px4ioStatus_status_rc_sumd(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_safety_button_event status_rc_sumd(::px4_msgs::msg::Px4ioStatus::_status_rc_sumd_type arg)
  {
    msg_.status_rc_sumd = std::move(arg);
    return Init_Px4ioStatus_status_safety_button_event(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_rc_st24
{
public:
  explicit Init_Px4ioStatus_status_rc_st24(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_rc_sumd status_rc_st24(::px4_msgs::msg::Px4ioStatus::_status_rc_st24_type arg)
  {
    msg_.status_rc_st24 = std::move(arg);
    return Init_Px4ioStatus_status_rc_sumd(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_rc_sbus
{
public:
  explicit Init_Px4ioStatus_status_rc_sbus(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_rc_st24 status_rc_sbus(::px4_msgs::msg::Px4ioStatus::_status_rc_sbus_type arg)
  {
    msg_.status_rc_sbus = std::move(arg);
    return Init_Px4ioStatus_status_rc_st24(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_rc_ppm
{
public:
  explicit Init_Px4ioStatus_status_rc_ppm(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_rc_sbus status_rc_ppm(::px4_msgs::msg::Px4ioStatus::_status_rc_ppm_type arg)
  {
    msg_.status_rc_ppm = std::move(arg);
    return Init_Px4ioStatus_status_rc_sbus(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_rc_dsm
{
public:
  explicit Init_Px4ioStatus_status_rc_dsm(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_rc_ppm status_rc_dsm(::px4_msgs::msg::Px4ioStatus::_status_rc_dsm_type arg)
  {
    msg_.status_rc_dsm = std::move(arg);
    return Init_Px4ioStatus_status_rc_ppm(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_rc_ok
{
public:
  explicit Init_Px4ioStatus_status_rc_ok(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_rc_dsm status_rc_ok(::px4_msgs::msg::Px4ioStatus::_status_rc_ok_type arg)
  {
    msg_.status_rc_ok = std::move(arg);
    return Init_Px4ioStatus_status_rc_dsm(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_raw_pwm
{
public:
  explicit Init_Px4ioStatus_status_raw_pwm(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_rc_ok status_raw_pwm(::px4_msgs::msg::Px4ioStatus::_status_raw_pwm_type arg)
  {
    msg_.status_raw_pwm = std::move(arg);
    return Init_Px4ioStatus_status_rc_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_outputs_armed
{
public:
  explicit Init_Px4ioStatus_status_outputs_armed(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_raw_pwm status_outputs_armed(::px4_msgs::msg::Px4ioStatus::_status_outputs_armed_type arg)
  {
    msg_.status_outputs_armed = std::move(arg);
    return Init_Px4ioStatus_status_raw_pwm(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_init_ok
{
public:
  explicit Init_Px4ioStatus_status_init_ok(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_outputs_armed status_init_ok(::px4_msgs::msg::Px4ioStatus::_status_init_ok_type arg)
  {
    msg_.status_init_ok = std::move(arg);
    return Init_Px4ioStatus_status_outputs_armed(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_fmu_ok
{
public:
  explicit Init_Px4ioStatus_status_fmu_ok(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_init_ok status_fmu_ok(::px4_msgs::msg::Px4ioStatus::_status_fmu_ok_type arg)
  {
    msg_.status_fmu_ok = std::move(arg);
    return Init_Px4ioStatus_status_init_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_fmu_initialized
{
public:
  explicit Init_Px4ioStatus_status_fmu_initialized(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_fmu_ok status_fmu_initialized(::px4_msgs::msg::Px4ioStatus::_status_fmu_initialized_type arg)
  {
    msg_.status_fmu_initialized = std::move(arg);
    return Init_Px4ioStatus_status_fmu_ok(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_failsafe
{
public:
  explicit Init_Px4ioStatus_status_failsafe(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_fmu_initialized status_failsafe(::px4_msgs::msg::Px4ioStatus::_status_failsafe_type arg)
  {
    msg_.status_failsafe = std::move(arg);
    return Init_Px4ioStatus_status_fmu_initialized(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_status_arm_sync
{
public:
  explicit Init_Px4ioStatus_status_arm_sync(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_failsafe status_arm_sync(::px4_msgs::msg::Px4ioStatus::_status_arm_sync_type arg)
  {
    msg_.status_arm_sync = std::move(arg);
    return Init_Px4ioStatus_status_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_rssi_v
{
public:
  explicit Init_Px4ioStatus_rssi_v(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_status_arm_sync rssi_v(::px4_msgs::msg::Px4ioStatus::_rssi_v_type arg)
  {
    msg_.rssi_v = std::move(arg);
    return Init_Px4ioStatus_status_arm_sync(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_voltage_v
{
public:
  explicit Init_Px4ioStatus_voltage_v(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_rssi_v voltage_v(::px4_msgs::msg::Px4ioStatus::_voltage_v_type arg)
  {
    msg_.voltage_v = std::move(arg);
    return Init_Px4ioStatus_rssi_v(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_free_memory_bytes
{
public:
  explicit Init_Px4ioStatus_free_memory_bytes(::px4_msgs::msg::Px4ioStatus & msg)
  : msg_(msg)
  {}
  Init_Px4ioStatus_voltage_v free_memory_bytes(::px4_msgs::msg::Px4ioStatus::_free_memory_bytes_type arg)
  {
    msg_.free_memory_bytes = std::move(arg);
    return Init_Px4ioStatus_voltage_v(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

class Init_Px4ioStatus_timestamp
{
public:
  Init_Px4ioStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Px4ioStatus_free_memory_bytes timestamp(::px4_msgs::msg::Px4ioStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Px4ioStatus_free_memory_bytes(msg_);
  }

private:
  ::px4_msgs::msg::Px4ioStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Px4ioStatus>()
{
  return px4_msgs::msg::builder::Init_Px4ioStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PX4IO_STATUS__BUILDER_HPP_
