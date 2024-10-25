// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FailsafeFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/failsafe_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FailsafeFlags_fd_motor_failure
{
public:
  explicit Init_FailsafeFlags_fd_motor_failure(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FailsafeFlags fd_motor_failure(::px4_msgs::msg::FailsafeFlags::_fd_motor_failure_type arg)
  {
    msg_.fd_motor_failure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_fd_imbalanced_prop
{
public:
  explicit Init_FailsafeFlags_fd_imbalanced_prop(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_fd_motor_failure fd_imbalanced_prop(::px4_msgs::msg::FailsafeFlags::_fd_imbalanced_prop_type arg)
  {
    msg_.fd_imbalanced_prop = std::move(arg);
    return Init_FailsafeFlags_fd_motor_failure(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_fd_esc_arming_failure
{
public:
  explicit Init_FailsafeFlags_fd_esc_arming_failure(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_fd_imbalanced_prop fd_esc_arming_failure(::px4_msgs::msg::FailsafeFlags::_fd_esc_arming_failure_type arg)
  {
    msg_.fd_esc_arming_failure = std::move(arg);
    return Init_FailsafeFlags_fd_imbalanced_prop(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_fd_critical_failure
{
public:
  explicit Init_FailsafeFlags_fd_critical_failure(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_fd_esc_arming_failure fd_critical_failure(::px4_msgs::msg::FailsafeFlags::_fd_critical_failure_type arg)
  {
    msg_.fd_critical_failure = std::move(arg);
    return Init_FailsafeFlags_fd_esc_arming_failure(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_local_position_accuracy_low
{
public:
  explicit Init_FailsafeFlags_local_position_accuracy_low(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_fd_critical_failure local_position_accuracy_low(::px4_msgs::msg::FailsafeFlags::_local_position_accuracy_low_type arg)
  {
    msg_.local_position_accuracy_low = std::move(arg);
    return Init_FailsafeFlags_fd_critical_failure(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_flight_time_limit_exceeded
{
public:
  explicit Init_FailsafeFlags_flight_time_limit_exceeded(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_local_position_accuracy_low flight_time_limit_exceeded(::px4_msgs::msg::FailsafeFlags::_flight_time_limit_exceeded_type arg)
  {
    msg_.flight_time_limit_exceeded = std::move(arg);
    return Init_FailsafeFlags_local_position_accuracy_low(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_wind_limit_exceeded
{
public:
  explicit Init_FailsafeFlags_wind_limit_exceeded(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_flight_time_limit_exceeded wind_limit_exceeded(::px4_msgs::msg::FailsafeFlags::_wind_limit_exceeded_type arg)
  {
    msg_.wind_limit_exceeded = std::move(arg);
    return Init_FailsafeFlags_flight_time_limit_exceeded(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_vtol_fixed_wing_system_failure
{
public:
  explicit Init_FailsafeFlags_vtol_fixed_wing_system_failure(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_wind_limit_exceeded vtol_fixed_wing_system_failure(::px4_msgs::msg::FailsafeFlags::_vtol_fixed_wing_system_failure_type arg)
  {
    msg_.vtol_fixed_wing_system_failure = std::move(arg);
    return Init_FailsafeFlags_wind_limit_exceeded(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mission_failure
{
public:
  explicit Init_FailsafeFlags_mission_failure(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_vtol_fixed_wing_system_failure mission_failure(::px4_msgs::msg::FailsafeFlags::_mission_failure_type arg)
  {
    msg_.mission_failure = std::move(arg);
    return Init_FailsafeFlags_vtol_fixed_wing_system_failure(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_geofence_breached
{
public:
  explicit Init_FailsafeFlags_geofence_breached(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mission_failure geofence_breached(::px4_msgs::msg::FailsafeFlags::_geofence_breached_type arg)
  {
    msg_.geofence_breached = std::move(arg);
    return Init_FailsafeFlags_mission_failure(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_battery_unhealthy
{
public:
  explicit Init_FailsafeFlags_battery_unhealthy(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_geofence_breached battery_unhealthy(::px4_msgs::msg::FailsafeFlags::_battery_unhealthy_type arg)
  {
    msg_.battery_unhealthy = std::move(arg);
    return Init_FailsafeFlags_geofence_breached(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_battery_low_remaining_time
{
public:
  explicit Init_FailsafeFlags_battery_low_remaining_time(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_battery_unhealthy battery_low_remaining_time(::px4_msgs::msg::FailsafeFlags::_battery_low_remaining_time_type arg)
  {
    msg_.battery_low_remaining_time = std::move(arg);
    return Init_FailsafeFlags_battery_unhealthy(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_battery_warning
{
public:
  explicit Init_FailsafeFlags_battery_warning(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_battery_low_remaining_time battery_warning(::px4_msgs::msg::FailsafeFlags::_battery_warning_type arg)
  {
    msg_.battery_warning = std::move(arg);
    return Init_FailsafeFlags_battery_low_remaining_time(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_gcs_connection_lost
{
public:
  explicit Init_FailsafeFlags_gcs_connection_lost(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_battery_warning gcs_connection_lost(::px4_msgs::msg::FailsafeFlags::_gcs_connection_lost_type arg)
  {
    msg_.gcs_connection_lost = std::move(arg);
    return Init_FailsafeFlags_battery_warning(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_manual_control_signal_lost
{
public:
  explicit Init_FailsafeFlags_manual_control_signal_lost(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_gcs_connection_lost manual_control_signal_lost(::px4_msgs::msg::FailsafeFlags::_manual_control_signal_lost_type arg)
  {
    msg_.manual_control_signal_lost = std::move(arg);
    return Init_FailsafeFlags_gcs_connection_lost(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_home_position_invalid
{
public:
  explicit Init_FailsafeFlags_home_position_invalid(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_manual_control_signal_lost home_position_invalid(::px4_msgs::msg::FailsafeFlags::_home_position_invalid_type arg)
  {
    msg_.home_position_invalid = std::move(arg);
    return Init_FailsafeFlags_manual_control_signal_lost(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_offboard_control_signal_lost
{
public:
  explicit Init_FailsafeFlags_offboard_control_signal_lost(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_home_position_invalid offboard_control_signal_lost(::px4_msgs::msg::FailsafeFlags::_offboard_control_signal_lost_type arg)
  {
    msg_.offboard_control_signal_lost = std::move(arg);
    return Init_FailsafeFlags_home_position_invalid(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_auto_mission_missing
{
public:
  explicit Init_FailsafeFlags_auto_mission_missing(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_offboard_control_signal_lost auto_mission_missing(::px4_msgs::msg::FailsafeFlags::_auto_mission_missing_type arg)
  {
    msg_.auto_mission_missing = std::move(arg);
    return Init_FailsafeFlags_offboard_control_signal_lost(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_global_position_invalid
{
public:
  explicit Init_FailsafeFlags_global_position_invalid(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_auto_mission_missing global_position_invalid(::px4_msgs::msg::FailsafeFlags::_global_position_invalid_type arg)
  {
    msg_.global_position_invalid = std::move(arg);
    return Init_FailsafeFlags_auto_mission_missing(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_local_velocity_invalid
{
public:
  explicit Init_FailsafeFlags_local_velocity_invalid(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_global_position_invalid local_velocity_invalid(::px4_msgs::msg::FailsafeFlags::_local_velocity_invalid_type arg)
  {
    msg_.local_velocity_invalid = std::move(arg);
    return Init_FailsafeFlags_global_position_invalid(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_local_position_invalid_relaxed
{
public:
  explicit Init_FailsafeFlags_local_position_invalid_relaxed(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_local_velocity_invalid local_position_invalid_relaxed(::px4_msgs::msg::FailsafeFlags::_local_position_invalid_relaxed_type arg)
  {
    msg_.local_position_invalid_relaxed = std::move(arg);
    return Init_FailsafeFlags_local_velocity_invalid(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_local_position_invalid
{
public:
  explicit Init_FailsafeFlags_local_position_invalid(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_local_position_invalid_relaxed local_position_invalid(::px4_msgs::msg::FailsafeFlags::_local_position_invalid_type arg)
  {
    msg_.local_position_invalid = std::move(arg);
    return Init_FailsafeFlags_local_position_invalid_relaxed(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_local_altitude_invalid
{
public:
  explicit Init_FailsafeFlags_local_altitude_invalid(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_local_position_invalid local_altitude_invalid(::px4_msgs::msg::FailsafeFlags::_local_altitude_invalid_type arg)
  {
    msg_.local_altitude_invalid = std::move(arg);
    return Init_FailsafeFlags_local_position_invalid(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_attitude_invalid
{
public:
  explicit Init_FailsafeFlags_attitude_invalid(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_local_altitude_invalid attitude_invalid(::px4_msgs::msg::FailsafeFlags::_attitude_invalid_type arg)
  {
    msg_.attitude_invalid = std::move(arg);
    return Init_FailsafeFlags_local_altitude_invalid(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_angular_velocity_invalid
{
public:
  explicit Init_FailsafeFlags_angular_velocity_invalid(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_attitude_invalid angular_velocity_invalid(::px4_msgs::msg::FailsafeFlags::_angular_velocity_invalid_type arg)
  {
    msg_.angular_velocity_invalid = std::move(arg);
    return Init_FailsafeFlags_attitude_invalid(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_other
{
public:
  explicit Init_FailsafeFlags_mode_req_other(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_angular_velocity_invalid mode_req_other(::px4_msgs::msg::FailsafeFlags::_mode_req_other_type arg)
  {
    msg_.mode_req_other = std::move(arg);
    return Init_FailsafeFlags_angular_velocity_invalid(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_manual_control
{
public:
  explicit Init_FailsafeFlags_mode_req_manual_control(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_other mode_req_manual_control(::px4_msgs::msg::FailsafeFlags::_mode_req_manual_control_type arg)
  {
    msg_.mode_req_manual_control = std::move(arg);
    return Init_FailsafeFlags_mode_req_other(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_prevent_arming
{
public:
  explicit Init_FailsafeFlags_mode_req_prevent_arming(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_manual_control mode_req_prevent_arming(::px4_msgs::msg::FailsafeFlags::_mode_req_prevent_arming_type arg)
  {
    msg_.mode_req_prevent_arming = std::move(arg);
    return Init_FailsafeFlags_mode_req_manual_control(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_wind_and_flight_time_compliance
{
public:
  explicit Init_FailsafeFlags_mode_req_wind_and_flight_time_compliance(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_prevent_arming mode_req_wind_and_flight_time_compliance(::px4_msgs::msg::FailsafeFlags::_mode_req_wind_and_flight_time_compliance_type arg)
  {
    msg_.mode_req_wind_and_flight_time_compliance = std::move(arg);
    return Init_FailsafeFlags_mode_req_prevent_arming(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_home_position
{
public:
  explicit Init_FailsafeFlags_mode_req_home_position(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_wind_and_flight_time_compliance mode_req_home_position(::px4_msgs::msg::FailsafeFlags::_mode_req_home_position_type arg)
  {
    msg_.mode_req_home_position = std::move(arg);
    return Init_FailsafeFlags_mode_req_wind_and_flight_time_compliance(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_offboard_signal
{
public:
  explicit Init_FailsafeFlags_mode_req_offboard_signal(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_home_position mode_req_offboard_signal(::px4_msgs::msg::FailsafeFlags::_mode_req_offboard_signal_type arg)
  {
    msg_.mode_req_offboard_signal = std::move(arg);
    return Init_FailsafeFlags_mode_req_home_position(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_mission
{
public:
  explicit Init_FailsafeFlags_mode_req_mission(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_offboard_signal mode_req_mission(::px4_msgs::msg::FailsafeFlags::_mode_req_mission_type arg)
  {
    msg_.mode_req_mission = std::move(arg);
    return Init_FailsafeFlags_mode_req_offboard_signal(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_global_position
{
public:
  explicit Init_FailsafeFlags_mode_req_global_position(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_mission mode_req_global_position(::px4_msgs::msg::FailsafeFlags::_mode_req_global_position_type arg)
  {
    msg_.mode_req_global_position = std::move(arg);
    return Init_FailsafeFlags_mode_req_mission(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_local_position_relaxed
{
public:
  explicit Init_FailsafeFlags_mode_req_local_position_relaxed(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_global_position mode_req_local_position_relaxed(::px4_msgs::msg::FailsafeFlags::_mode_req_local_position_relaxed_type arg)
  {
    msg_.mode_req_local_position_relaxed = std::move(arg);
    return Init_FailsafeFlags_mode_req_global_position(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_local_position
{
public:
  explicit Init_FailsafeFlags_mode_req_local_position(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_local_position_relaxed mode_req_local_position(::px4_msgs::msg::FailsafeFlags::_mode_req_local_position_type arg)
  {
    msg_.mode_req_local_position = std::move(arg);
    return Init_FailsafeFlags_mode_req_local_position_relaxed(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_local_alt
{
public:
  explicit Init_FailsafeFlags_mode_req_local_alt(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_local_position mode_req_local_alt(::px4_msgs::msg::FailsafeFlags::_mode_req_local_alt_type arg)
  {
    msg_.mode_req_local_alt = std::move(arg);
    return Init_FailsafeFlags_mode_req_local_position(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_attitude
{
public:
  explicit Init_FailsafeFlags_mode_req_attitude(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_local_alt mode_req_attitude(::px4_msgs::msg::FailsafeFlags::_mode_req_attitude_type arg)
  {
    msg_.mode_req_attitude = std::move(arg);
    return Init_FailsafeFlags_mode_req_local_alt(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_mode_req_angular_velocity
{
public:
  explicit Init_FailsafeFlags_mode_req_angular_velocity(::px4_msgs::msg::FailsafeFlags & msg)
  : msg_(msg)
  {}
  Init_FailsafeFlags_mode_req_attitude mode_req_angular_velocity(::px4_msgs::msg::FailsafeFlags::_mode_req_angular_velocity_type arg)
  {
    msg_.mode_req_angular_velocity = std::move(arg);
    return Init_FailsafeFlags_mode_req_attitude(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

class Init_FailsafeFlags_timestamp
{
public:
  Init_FailsafeFlags_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FailsafeFlags_mode_req_angular_velocity timestamp(::px4_msgs::msg::FailsafeFlags::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FailsafeFlags_mode_req_angular_velocity(msg_);
  }

private:
  ::px4_msgs::msg::FailsafeFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FailsafeFlags>()
{
  return px4_msgs::msg::builder::Init_FailsafeFlags_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__BUILDER_HPP_
