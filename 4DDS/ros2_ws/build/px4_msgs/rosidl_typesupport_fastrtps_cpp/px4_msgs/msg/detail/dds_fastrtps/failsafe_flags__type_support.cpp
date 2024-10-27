// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/FailsafeFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/failsafe_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/failsafe_flags__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::FailsafeFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: mode_req_angular_velocity
  cdr << ros_message.mode_req_angular_velocity;
  // Member: mode_req_attitude
  cdr << ros_message.mode_req_attitude;
  // Member: mode_req_local_alt
  cdr << ros_message.mode_req_local_alt;
  // Member: mode_req_local_position
  cdr << ros_message.mode_req_local_position;
  // Member: mode_req_local_position_relaxed
  cdr << ros_message.mode_req_local_position_relaxed;
  // Member: mode_req_global_position
  cdr << ros_message.mode_req_global_position;
  // Member: mode_req_mission
  cdr << ros_message.mode_req_mission;
  // Member: mode_req_offboard_signal
  cdr << ros_message.mode_req_offboard_signal;
  // Member: mode_req_home_position
  cdr << ros_message.mode_req_home_position;
  // Member: mode_req_wind_and_flight_time_compliance
  cdr << ros_message.mode_req_wind_and_flight_time_compliance;
  // Member: mode_req_prevent_arming
  cdr << ros_message.mode_req_prevent_arming;
  // Member: mode_req_manual_control
  cdr << ros_message.mode_req_manual_control;
  // Member: mode_req_other
  cdr << ros_message.mode_req_other;
  // Member: angular_velocity_invalid
  cdr << (ros_message.angular_velocity_invalid ? true : false);
  // Member: attitude_invalid
  cdr << (ros_message.attitude_invalid ? true : false);
  // Member: local_altitude_invalid
  cdr << (ros_message.local_altitude_invalid ? true : false);
  // Member: local_position_invalid
  cdr << (ros_message.local_position_invalid ? true : false);
  // Member: local_position_invalid_relaxed
  cdr << (ros_message.local_position_invalid_relaxed ? true : false);
  // Member: local_velocity_invalid
  cdr << (ros_message.local_velocity_invalid ? true : false);
  // Member: global_position_invalid
  cdr << (ros_message.global_position_invalid ? true : false);
  // Member: auto_mission_missing
  cdr << (ros_message.auto_mission_missing ? true : false);
  // Member: offboard_control_signal_lost
  cdr << (ros_message.offboard_control_signal_lost ? true : false);
  // Member: home_position_invalid
  cdr << (ros_message.home_position_invalid ? true : false);
  // Member: manual_control_signal_lost
  cdr << (ros_message.manual_control_signal_lost ? true : false);
  // Member: gcs_connection_lost
  cdr << (ros_message.gcs_connection_lost ? true : false);
  // Member: battery_warning
  cdr << ros_message.battery_warning;
  // Member: battery_low_remaining_time
  cdr << (ros_message.battery_low_remaining_time ? true : false);
  // Member: battery_unhealthy
  cdr << (ros_message.battery_unhealthy ? true : false);
  // Member: geofence_breached
  cdr << (ros_message.geofence_breached ? true : false);
  // Member: mission_failure
  cdr << (ros_message.mission_failure ? true : false);
  // Member: vtol_fixed_wing_system_failure
  cdr << (ros_message.vtol_fixed_wing_system_failure ? true : false);
  // Member: wind_limit_exceeded
  cdr << (ros_message.wind_limit_exceeded ? true : false);
  // Member: flight_time_limit_exceeded
  cdr << (ros_message.flight_time_limit_exceeded ? true : false);
  // Member: local_position_accuracy_low
  cdr << (ros_message.local_position_accuracy_low ? true : false);
  // Member: fd_critical_failure
  cdr << (ros_message.fd_critical_failure ? true : false);
  // Member: fd_esc_arming_failure
  cdr << (ros_message.fd_esc_arming_failure ? true : false);
  // Member: fd_imbalanced_prop
  cdr << (ros_message.fd_imbalanced_prop ? true : false);
  // Member: fd_motor_failure
  cdr << (ros_message.fd_motor_failure ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::FailsafeFlags & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: mode_req_angular_velocity
  cdr >> ros_message.mode_req_angular_velocity;

  // Member: mode_req_attitude
  cdr >> ros_message.mode_req_attitude;

  // Member: mode_req_local_alt
  cdr >> ros_message.mode_req_local_alt;

  // Member: mode_req_local_position
  cdr >> ros_message.mode_req_local_position;

  // Member: mode_req_local_position_relaxed
  cdr >> ros_message.mode_req_local_position_relaxed;

  // Member: mode_req_global_position
  cdr >> ros_message.mode_req_global_position;

  // Member: mode_req_mission
  cdr >> ros_message.mode_req_mission;

  // Member: mode_req_offboard_signal
  cdr >> ros_message.mode_req_offboard_signal;

  // Member: mode_req_home_position
  cdr >> ros_message.mode_req_home_position;

  // Member: mode_req_wind_and_flight_time_compliance
  cdr >> ros_message.mode_req_wind_and_flight_time_compliance;

  // Member: mode_req_prevent_arming
  cdr >> ros_message.mode_req_prevent_arming;

  // Member: mode_req_manual_control
  cdr >> ros_message.mode_req_manual_control;

  // Member: mode_req_other
  cdr >> ros_message.mode_req_other;

  // Member: angular_velocity_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.angular_velocity_invalid = tmp ? true : false;
  }

  // Member: attitude_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.attitude_invalid = tmp ? true : false;
  }

  // Member: local_altitude_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_altitude_invalid = tmp ? true : false;
  }

  // Member: local_position_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_position_invalid = tmp ? true : false;
  }

  // Member: local_position_invalid_relaxed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_position_invalid_relaxed = tmp ? true : false;
  }

  // Member: local_velocity_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_velocity_invalid = tmp ? true : false;
  }

  // Member: global_position_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.global_position_invalid = tmp ? true : false;
  }

  // Member: auto_mission_missing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.auto_mission_missing = tmp ? true : false;
  }

  // Member: offboard_control_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.offboard_control_signal_lost = tmp ? true : false;
  }

  // Member: home_position_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.home_position_invalid = tmp ? true : false;
  }

  // Member: manual_control_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.manual_control_signal_lost = tmp ? true : false;
  }

  // Member: gcs_connection_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gcs_connection_lost = tmp ? true : false;
  }

  // Member: battery_warning
  cdr >> ros_message.battery_warning;

  // Member: battery_low_remaining_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.battery_low_remaining_time = tmp ? true : false;
  }

  // Member: battery_unhealthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.battery_unhealthy = tmp ? true : false;
  }

  // Member: geofence_breached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.geofence_breached = tmp ? true : false;
  }

  // Member: mission_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mission_failure = tmp ? true : false;
  }

  // Member: vtol_fixed_wing_system_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vtol_fixed_wing_system_failure = tmp ? true : false;
  }

  // Member: wind_limit_exceeded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wind_limit_exceeded = tmp ? true : false;
  }

  // Member: flight_time_limit_exceeded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flight_time_limit_exceeded = tmp ? true : false;
  }

  // Member: local_position_accuracy_low
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_position_accuracy_low = tmp ? true : false;
  }

  // Member: fd_critical_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_critical_failure = tmp ? true : false;
  }

  // Member: fd_esc_arming_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_esc_arming_failure = tmp ? true : false;
  }

  // Member: fd_imbalanced_prop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_imbalanced_prop = tmp ? true : false;
  }

  // Member: fd_motor_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_motor_failure = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::FailsafeFlags & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_angular_velocity
  {
    size_t item_size = sizeof(ros_message.mode_req_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_attitude
  {
    size_t item_size = sizeof(ros_message.mode_req_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_local_alt
  {
    size_t item_size = sizeof(ros_message.mode_req_local_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_local_position
  {
    size_t item_size = sizeof(ros_message.mode_req_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_local_position_relaxed
  {
    size_t item_size = sizeof(ros_message.mode_req_local_position_relaxed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_global_position
  {
    size_t item_size = sizeof(ros_message.mode_req_global_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_mission
  {
    size_t item_size = sizeof(ros_message.mode_req_mission);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_offboard_signal
  {
    size_t item_size = sizeof(ros_message.mode_req_offboard_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_home_position
  {
    size_t item_size = sizeof(ros_message.mode_req_home_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_wind_and_flight_time_compliance
  {
    size_t item_size = sizeof(ros_message.mode_req_wind_and_flight_time_compliance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_prevent_arming
  {
    size_t item_size = sizeof(ros_message.mode_req_prevent_arming);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_manual_control
  {
    size_t item_size = sizeof(ros_message.mode_req_manual_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_other
  {
    size_t item_size = sizeof(ros_message.mode_req_other);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_velocity_invalid
  {
    size_t item_size = sizeof(ros_message.angular_velocity_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attitude_invalid
  {
    size_t item_size = sizeof(ros_message.attitude_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_altitude_invalid
  {
    size_t item_size = sizeof(ros_message.local_altitude_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_position_invalid
  {
    size_t item_size = sizeof(ros_message.local_position_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_position_invalid_relaxed
  {
    size_t item_size = sizeof(ros_message.local_position_invalid_relaxed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_velocity_invalid
  {
    size_t item_size = sizeof(ros_message.local_velocity_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: global_position_invalid
  {
    size_t item_size = sizeof(ros_message.global_position_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_mission_missing
  {
    size_t item_size = sizeof(ros_message.auto_mission_missing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offboard_control_signal_lost
  {
    size_t item_size = sizeof(ros_message.offboard_control_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: home_position_invalid
  {
    size_t item_size = sizeof(ros_message.home_position_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: manual_control_signal_lost
  {
    size_t item_size = sizeof(ros_message.manual_control_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gcs_connection_lost
  {
    size_t item_size = sizeof(ros_message.gcs_connection_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_warning
  {
    size_t item_size = sizeof(ros_message.battery_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_low_remaining_time
  {
    size_t item_size = sizeof(ros_message.battery_low_remaining_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_unhealthy
  {
    size_t item_size = sizeof(ros_message.battery_unhealthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: geofence_breached
  {
    size_t item_size = sizeof(ros_message.geofence_breached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mission_failure
  {
    size_t item_size = sizeof(ros_message.mission_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vtol_fixed_wing_system_failure
  {
    size_t item_size = sizeof(ros_message.vtol_fixed_wing_system_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wind_limit_exceeded
  {
    size_t item_size = sizeof(ros_message.wind_limit_exceeded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flight_time_limit_exceeded
  {
    size_t item_size = sizeof(ros_message.flight_time_limit_exceeded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_position_accuracy_low
  {
    size_t item_size = sizeof(ros_message.local_position_accuracy_low);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_critical_failure
  {
    size_t item_size = sizeof(ros_message.fd_critical_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_esc_arming_failure
  {
    size_t item_size = sizeof(ros_message.fd_esc_arming_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_imbalanced_prop
  {
    size_t item_size = sizeof(ros_message.fd_imbalanced_prop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_motor_failure
  {
    size_t item_size = sizeof(ros_message.fd_motor_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_FailsafeFlags(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mode_req_angular_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_local_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_local_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_local_position_relaxed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_global_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_mission
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_offboard_signal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_home_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_wind_and_flight_time_compliance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_prevent_arming
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_manual_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mode_req_other
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angular_velocity_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: attitude_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_altitude_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_position_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_position_invalid_relaxed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_velocity_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: global_position_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: auto_mission_missing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: offboard_control_signal_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: home_position_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: manual_control_signal_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gcs_connection_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_low_remaining_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_unhealthy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: geofence_breached
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mission_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vtol_fixed_wing_system_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wind_limit_exceeded
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flight_time_limit_exceeded
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_position_accuracy_low
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_critical_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_esc_arming_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_imbalanced_prop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_motor_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs::msg::FailsafeFlags;
    is_plain =
      (
      offsetof(DataType, fd_motor_failure) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FailsafeFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::FailsafeFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FailsafeFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::FailsafeFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FailsafeFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::FailsafeFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FailsafeFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FailsafeFlags(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FailsafeFlags__callbacks = {
  "px4_msgs::msg",
  "FailsafeFlags",
  _FailsafeFlags__cdr_serialize,
  _FailsafeFlags__cdr_deserialize,
  _FailsafeFlags__get_serialized_size,
  _FailsafeFlags__max_serialized_size
};

static rosidl_message_type_support_t _FailsafeFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FailsafeFlags__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::FailsafeFlags>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_FailsafeFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, FailsafeFlags)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_FailsafeFlags__handle;
}

#ifdef __cplusplus
}
#endif
