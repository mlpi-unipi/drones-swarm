// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: armed_time
  {
    out << "armed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.armed_time, out);
    out << ", ";
  }

  // member: takeoff_time
  {
    out << "takeoff_time: ";
    rosidl_generator_traits::value_to_yaml(msg.takeoff_time, out);
    out << ", ";
  }

  // member: arming_state
  {
    out << "arming_state: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_state, out);
    out << ", ";
  }

  // member: latest_arming_reason
  {
    out << "latest_arming_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_arming_reason, out);
    out << ", ";
  }

  // member: latest_disarming_reason
  {
    out << "latest_disarming_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_disarming_reason, out);
    out << ", ";
  }

  // member: nav_state_timestamp
  {
    out << "nav_state_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state_timestamp, out);
    out << ", ";
  }

  // member: nav_state_user_intention
  {
    out << "nav_state_user_intention: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state_user_intention, out);
    out << ", ";
  }

  // member: nav_state
  {
    out << "nav_state: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state, out);
    out << ", ";
  }

  // member: executor_in_charge
  {
    out << "executor_in_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.executor_in_charge, out);
    out << ", ";
  }

  // member: valid_nav_states_mask
  {
    out << "valid_nav_states_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_nav_states_mask, out);
    out << ", ";
  }

  // member: can_set_nav_states_mask
  {
    out << "can_set_nav_states_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.can_set_nav_states_mask, out);
    out << ", ";
  }

  // member: failure_detector_status
  {
    out << "failure_detector_status: ";
    rosidl_generator_traits::value_to_yaml(msg.failure_detector_status, out);
    out << ", ";
  }

  // member: hil_state
  {
    out << "hil_state: ";
    rosidl_generator_traits::value_to_yaml(msg.hil_state, out);
    out << ", ";
  }

  // member: vehicle_type
  {
    out << "vehicle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_type, out);
    out << ", ";
  }

  // member: failsafe
  {
    out << "failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.failsafe, out);
    out << ", ";
  }

  // member: failsafe_and_user_took_over
  {
    out << "failsafe_and_user_took_over: ";
    rosidl_generator_traits::value_to_yaml(msg.failsafe_and_user_took_over, out);
    out << ", ";
  }

  // member: failsafe_defer_state
  {
    out << "failsafe_defer_state: ";
    rosidl_generator_traits::value_to_yaml(msg.failsafe_defer_state, out);
    out << ", ";
  }

  // member: gcs_connection_lost
  {
    out << "gcs_connection_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.gcs_connection_lost, out);
    out << ", ";
  }

  // member: gcs_connection_lost_counter
  {
    out << "gcs_connection_lost_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.gcs_connection_lost_counter, out);
    out << ", ";
  }

  // member: high_latency_data_link_lost
  {
    out << "high_latency_data_link_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.high_latency_data_link_lost, out);
    out << ", ";
  }

  // member: is_vtol
  {
    out << "is_vtol: ";
    rosidl_generator_traits::value_to_yaml(msg.is_vtol, out);
    out << ", ";
  }

  // member: is_vtol_tailsitter
  {
    out << "is_vtol_tailsitter: ";
    rosidl_generator_traits::value_to_yaml(msg.is_vtol_tailsitter, out);
    out << ", ";
  }

  // member: in_transition_mode
  {
    out << "in_transition_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.in_transition_mode, out);
    out << ", ";
  }

  // member: in_transition_to_fw
  {
    out << "in_transition_to_fw: ";
    rosidl_generator_traits::value_to_yaml(msg.in_transition_to_fw, out);
    out << ", ";
  }

  // member: system_type
  {
    out << "system_type: ";
    rosidl_generator_traits::value_to_yaml(msg.system_type, out);
    out << ", ";
  }

  // member: system_id
  {
    out << "system_id: ";
    rosidl_generator_traits::value_to_yaml(msg.system_id, out);
    out << ", ";
  }

  // member: component_id
  {
    out << "component_id: ";
    rosidl_generator_traits::value_to_yaml(msg.component_id, out);
    out << ", ";
  }

  // member: safety_button_available
  {
    out << "safety_button_available: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_button_available, out);
    out << ", ";
  }

  // member: safety_off
  {
    out << "safety_off: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_off, out);
    out << ", ";
  }

  // member: power_input_valid
  {
    out << "power_input_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.power_input_valid, out);
    out << ", ";
  }

  // member: usb_connected
  {
    out << "usb_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.usb_connected, out);
    out << ", ";
  }

  // member: open_drone_id_system_present
  {
    out << "open_drone_id_system_present: ";
    rosidl_generator_traits::value_to_yaml(msg.open_drone_id_system_present, out);
    out << ", ";
  }

  // member: open_drone_id_system_healthy
  {
    out << "open_drone_id_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.open_drone_id_system_healthy, out);
    out << ", ";
  }

  // member: parachute_system_present
  {
    out << "parachute_system_present: ";
    rosidl_generator_traits::value_to_yaml(msg.parachute_system_present, out);
    out << ", ";
  }

  // member: parachute_system_healthy
  {
    out << "parachute_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.parachute_system_healthy, out);
    out << ", ";
  }

  // member: avoidance_system_required
  {
    out << "avoidance_system_required: ";
    rosidl_generator_traits::value_to_yaml(msg.avoidance_system_required, out);
    out << ", ";
  }

  // member: avoidance_system_valid
  {
    out << "avoidance_system_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.avoidance_system_valid, out);
    out << ", ";
  }

  // member: rc_calibration_in_progress
  {
    out << "rc_calibration_in_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_calibration_in_progress, out);
    out << ", ";
  }

  // member: calibration_enabled
  {
    out << "calibration_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_enabled, out);
    out << ", ";
  }

  // member: pre_flight_checks_pass
  {
    out << "pre_flight_checks_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flight_checks_pass, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleStatus & msg,
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

  // member: armed_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.armed_time, out);
    out << "\n";
  }

  // member: takeoff_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "takeoff_time: ";
    rosidl_generator_traits::value_to_yaml(msg.takeoff_time, out);
    out << "\n";
  }

  // member: arming_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arming_state: ";
    rosidl_generator_traits::value_to_yaml(msg.arming_state, out);
    out << "\n";
  }

  // member: latest_arming_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_arming_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_arming_reason, out);
    out << "\n";
  }

  // member: latest_disarming_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_disarming_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_disarming_reason, out);
    out << "\n";
  }

  // member: nav_state_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state_timestamp, out);
    out << "\n";
  }

  // member: nav_state_user_intention
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state_user_intention: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state_user_intention, out);
    out << "\n";
  }

  // member: nav_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state, out);
    out << "\n";
  }

  // member: executor_in_charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "executor_in_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.executor_in_charge, out);
    out << "\n";
  }

  // member: valid_nav_states_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_nav_states_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_nav_states_mask, out);
    out << "\n";
  }

  // member: can_set_nav_states_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_set_nav_states_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.can_set_nav_states_mask, out);
    out << "\n";
  }

  // member: failure_detector_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failure_detector_status: ";
    rosidl_generator_traits::value_to_yaml(msg.failure_detector_status, out);
    out << "\n";
  }

  // member: hil_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hil_state: ";
    rosidl_generator_traits::value_to_yaml(msg.hil_state, out);
    out << "\n";
  }

  // member: vehicle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_type, out);
    out << "\n";
  }

  // member: failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.failsafe, out);
    out << "\n";
  }

  // member: failsafe_and_user_took_over
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failsafe_and_user_took_over: ";
    rosidl_generator_traits::value_to_yaml(msg.failsafe_and_user_took_over, out);
    out << "\n";
  }

  // member: failsafe_defer_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failsafe_defer_state: ";
    rosidl_generator_traits::value_to_yaml(msg.failsafe_defer_state, out);
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

  // member: gcs_connection_lost_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gcs_connection_lost_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.gcs_connection_lost_counter, out);
    out << "\n";
  }

  // member: high_latency_data_link_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_latency_data_link_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.high_latency_data_link_lost, out);
    out << "\n";
  }

  // member: is_vtol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_vtol: ";
    rosidl_generator_traits::value_to_yaml(msg.is_vtol, out);
    out << "\n";
  }

  // member: is_vtol_tailsitter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_vtol_tailsitter: ";
    rosidl_generator_traits::value_to_yaml(msg.is_vtol_tailsitter, out);
    out << "\n";
  }

  // member: in_transition_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_transition_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.in_transition_mode, out);
    out << "\n";
  }

  // member: in_transition_to_fw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_transition_to_fw: ";
    rosidl_generator_traits::value_to_yaml(msg.in_transition_to_fw, out);
    out << "\n";
  }

  // member: system_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_type: ";
    rosidl_generator_traits::value_to_yaml(msg.system_type, out);
    out << "\n";
  }

  // member: system_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_id: ";
    rosidl_generator_traits::value_to_yaml(msg.system_id, out);
    out << "\n";
  }

  // member: component_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component_id: ";
    rosidl_generator_traits::value_to_yaml(msg.component_id, out);
    out << "\n";
  }

  // member: safety_button_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_button_available: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_button_available, out);
    out << "\n";
  }

  // member: safety_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_off: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_off, out);
    out << "\n";
  }

  // member: power_input_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_input_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.power_input_valid, out);
    out << "\n";
  }

  // member: usb_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usb_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.usb_connected, out);
    out << "\n";
  }

  // member: open_drone_id_system_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open_drone_id_system_present: ";
    rosidl_generator_traits::value_to_yaml(msg.open_drone_id_system_present, out);
    out << "\n";
  }

  // member: open_drone_id_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open_drone_id_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.open_drone_id_system_healthy, out);
    out << "\n";
  }

  // member: parachute_system_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parachute_system_present: ";
    rosidl_generator_traits::value_to_yaml(msg.parachute_system_present, out);
    out << "\n";
  }

  // member: parachute_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parachute_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.parachute_system_healthy, out);
    out << "\n";
  }

  // member: avoidance_system_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoidance_system_required: ";
    rosidl_generator_traits::value_to_yaml(msg.avoidance_system_required, out);
    out << "\n";
  }

  // member: avoidance_system_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoidance_system_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.avoidance_system_valid, out);
    out << "\n";
  }

  // member: rc_calibration_in_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_calibration_in_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_calibration_in_progress, out);
    out << "\n";
  }

  // member: calibration_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_enabled, out);
    out << "\n";
  }

  // member: pre_flight_checks_pass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_flight_checks_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flight_checks_pass, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleStatus>()
{
  return "px4_msgs::msg::VehicleStatus";
}

template<>
inline const char * name<px4_msgs::msg::VehicleStatus>()
{
  return "px4_msgs/msg/VehicleStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
