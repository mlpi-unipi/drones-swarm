// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FailsafeFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/failsafe_flags__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FailsafeFlags & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: mode_req_angular_velocity
  {
    out << "mode_req_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_angular_velocity, out);
    out << ", ";
  }

  // member: mode_req_attitude
  {
    out << "mode_req_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_attitude, out);
    out << ", ";
  }

  // member: mode_req_local_alt
  {
    out << "mode_req_local_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_alt, out);
    out << ", ";
  }

  // member: mode_req_local_position
  {
    out << "mode_req_local_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_position, out);
    out << ", ";
  }

  // member: mode_req_local_position_relaxed
  {
    out << "mode_req_local_position_relaxed: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_position_relaxed, out);
    out << ", ";
  }

  // member: mode_req_global_position
  {
    out << "mode_req_global_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_global_position, out);
    out << ", ";
  }

  // member: mode_req_mission
  {
    out << "mode_req_mission: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_mission, out);
    out << ", ";
  }

  // member: mode_req_offboard_signal
  {
    out << "mode_req_offboard_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_offboard_signal, out);
    out << ", ";
  }

  // member: mode_req_home_position
  {
    out << "mode_req_home_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_home_position, out);
    out << ", ";
  }

  // member: mode_req_wind_and_flight_time_compliance
  {
    out << "mode_req_wind_and_flight_time_compliance: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_wind_and_flight_time_compliance, out);
    out << ", ";
  }

  // member: mode_req_prevent_arming
  {
    out << "mode_req_prevent_arming: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_prevent_arming, out);
    out << ", ";
  }

  // member: mode_req_manual_control
  {
    out << "mode_req_manual_control: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_manual_control, out);
    out << ", ";
  }

  // member: mode_req_other
  {
    out << "mode_req_other: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_other, out);
    out << ", ";
  }

  // member: angular_velocity_invalid
  {
    out << "angular_velocity_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity_invalid, out);
    out << ", ";
  }

  // member: attitude_invalid
  {
    out << "attitude_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude_invalid, out);
    out << ", ";
  }

  // member: local_altitude_invalid
  {
    out << "local_altitude_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_altitude_invalid, out);
    out << ", ";
  }

  // member: local_position_invalid
  {
    out << "local_position_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_position_invalid, out);
    out << ", ";
  }

  // member: local_position_invalid_relaxed
  {
    out << "local_position_invalid_relaxed: ";
    rosidl_generator_traits::value_to_yaml(msg.local_position_invalid_relaxed, out);
    out << ", ";
  }

  // member: local_velocity_invalid
  {
    out << "local_velocity_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_velocity_invalid, out);
    out << ", ";
  }

  // member: global_position_invalid
  {
    out << "global_position_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.global_position_invalid, out);
    out << ", ";
  }

  // member: auto_mission_missing
  {
    out << "auto_mission_missing: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_mission_missing, out);
    out << ", ";
  }

  // member: offboard_control_signal_lost
  {
    out << "offboard_control_signal_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.offboard_control_signal_lost, out);
    out << ", ";
  }

  // member: home_position_invalid
  {
    out << "home_position_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.home_position_invalid, out);
    out << ", ";
  }

  // member: manual_control_signal_lost
  {
    out << "manual_control_signal_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_control_signal_lost, out);
    out << ", ";
  }

  // member: gcs_connection_lost
  {
    out << "gcs_connection_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.gcs_connection_lost, out);
    out << ", ";
  }

  // member: battery_warning
  {
    out << "battery_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_warning, out);
    out << ", ";
  }

  // member: battery_low_remaining_time
  {
    out << "battery_low_remaining_time: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_low_remaining_time, out);
    out << ", ";
  }

  // member: battery_unhealthy
  {
    out << "battery_unhealthy: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_unhealthy, out);
    out << ", ";
  }

  // member: geofence_breached
  {
    out << "geofence_breached: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_breached, out);
    out << ", ";
  }

  // member: mission_failure
  {
    out << "mission_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_failure, out);
    out << ", ";
  }

  // member: vtol_fixed_wing_system_failure
  {
    out << "vtol_fixed_wing_system_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_fixed_wing_system_failure, out);
    out << ", ";
  }

  // member: wind_limit_exceeded
  {
    out << "wind_limit_exceeded: ";
    rosidl_generator_traits::value_to_yaml(msg.wind_limit_exceeded, out);
    out << ", ";
  }

  // member: flight_time_limit_exceeded
  {
    out << "flight_time_limit_exceeded: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_time_limit_exceeded, out);
    out << ", ";
  }

  // member: local_position_accuracy_low
  {
    out << "local_position_accuracy_low: ";
    rosidl_generator_traits::value_to_yaml(msg.local_position_accuracy_low, out);
    out << ", ";
  }

  // member: fd_critical_failure
  {
    out << "fd_critical_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.fd_critical_failure, out);
    out << ", ";
  }

  // member: fd_esc_arming_failure
  {
    out << "fd_esc_arming_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.fd_esc_arming_failure, out);
    out << ", ";
  }

  // member: fd_imbalanced_prop
  {
    out << "fd_imbalanced_prop: ";
    rosidl_generator_traits::value_to_yaml(msg.fd_imbalanced_prop, out);
    out << ", ";
  }

  // member: fd_motor_failure
  {
    out << "fd_motor_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.fd_motor_failure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FailsafeFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: mode_req_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_angular_velocity, out);
    out << "\n";
  }

  // member: mode_req_attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_attitude, out);
    out << "\n";
  }

  // member: mode_req_local_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_alt, out);
    out << "\n";
  }

  // member: mode_req_local_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_position, out);
    out << "\n";
  }

  // member: mode_req_local_position_relaxed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_position_relaxed: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_position_relaxed, out);
    out << "\n";
  }

  // member: mode_req_global_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_global_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_global_position, out);
    out << "\n";
  }

  // member: mode_req_mission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_mission: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_mission, out);
    out << "\n";
  }

  // member: mode_req_offboard_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_offboard_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_offboard_signal, out);
    out << "\n";
  }

  // member: mode_req_home_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_home_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_home_position, out);
    out << "\n";
  }

  // member: mode_req_wind_and_flight_time_compliance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_wind_and_flight_time_compliance: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_wind_and_flight_time_compliance, out);
    out << "\n";
  }

  // member: mode_req_prevent_arming
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_prevent_arming: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_prevent_arming, out);
    out << "\n";
  }

  // member: mode_req_manual_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_manual_control: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_manual_control, out);
    out << "\n";
  }

  // member: mode_req_other
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_other: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_other, out);
    out << "\n";
  }

  // member: angular_velocity_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity_invalid, out);
    out << "\n";
  }

  // member: attitude_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude_invalid, out);
    out << "\n";
  }

  // member: local_altitude_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_altitude_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_altitude_invalid, out);
    out << "\n";
  }

  // member: local_position_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_position_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_position_invalid, out);
    out << "\n";
  }

  // member: local_position_invalid_relaxed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_position_invalid_relaxed: ";
    rosidl_generator_traits::value_to_yaml(msg.local_position_invalid_relaxed, out);
    out << "\n";
  }

  // member: local_velocity_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_velocity_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_velocity_invalid, out);
    out << "\n";
  }

  // member: global_position_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_position_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.global_position_invalid, out);
    out << "\n";
  }

  // member: auto_mission_missing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_mission_missing: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_mission_missing, out);
    out << "\n";
  }

  // member: offboard_control_signal_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offboard_control_signal_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.offboard_control_signal_lost, out);
    out << "\n";
  }

  // member: home_position_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_position_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.home_position_invalid, out);
    out << "\n";
  }

  // member: manual_control_signal_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_control_signal_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_control_signal_lost, out);
    out << "\n";
  }

  // member: gcs_connection_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gcs_connection_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.gcs_connection_lost, out);
    out << "\n";
  }

  // member: battery_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_warning, out);
    out << "\n";
  }

  // member: battery_low_remaining_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_low_remaining_time: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_low_remaining_time, out);
    out << "\n";
  }

  // member: battery_unhealthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_unhealthy: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_unhealthy, out);
    out << "\n";
  }

  // member: geofence_breached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geofence_breached: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_breached, out);
    out << "\n";
  }

  // member: mission_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_failure, out);
    out << "\n";
  }

  // member: vtol_fixed_wing_system_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vtol_fixed_wing_system_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_fixed_wing_system_failure, out);
    out << "\n";
  }

  // member: wind_limit_exceeded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wind_limit_exceeded: ";
    rosidl_generator_traits::value_to_yaml(msg.wind_limit_exceeded, out);
    out << "\n";
  }

  // member: flight_time_limit_exceeded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_time_limit_exceeded: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_time_limit_exceeded, out);
    out << "\n";
  }

  // member: local_position_accuracy_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_position_accuracy_low: ";
    rosidl_generator_traits::value_to_yaml(msg.local_position_accuracy_low, out);
    out << "\n";
  }

  // member: fd_critical_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_critical_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.fd_critical_failure, out);
    out << "\n";
  }

  // member: fd_esc_arming_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_esc_arming_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.fd_esc_arming_failure, out);
    out << "\n";
  }

  // member: fd_imbalanced_prop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_imbalanced_prop: ";
    rosidl_generator_traits::value_to_yaml(msg.fd_imbalanced_prop, out);
    out << "\n";
  }

  // member: fd_motor_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fd_motor_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.fd_motor_failure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FailsafeFlags & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::FailsafeFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::FailsafeFlags & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::FailsafeFlags>()
{
  return "px4_msgs::msg::FailsafeFlags";
}

template<>
inline const char * name<px4_msgs::msg::FailsafeFlags>()
{
  return "px4_msgs/msg/FailsafeFlags";
}

template<>
struct has_fixed_size<px4_msgs::msg::FailsafeFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FailsafeFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FailsafeFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__TRAITS_HPP_
