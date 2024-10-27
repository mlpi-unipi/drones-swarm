// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/FailsafeFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/failsafe_flags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/failsafe_flags__struct.h"
#include "px4_msgs/msg/detail/failsafe_flags__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _FailsafeFlags__ros_msg_type = px4_msgs__msg__FailsafeFlags;

static bool _FailsafeFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FailsafeFlags__ros_msg_type * ros_message = static_cast<const _FailsafeFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: mode_req_angular_velocity
  {
    cdr << ros_message->mode_req_angular_velocity;
  }

  // Field name: mode_req_attitude
  {
    cdr << ros_message->mode_req_attitude;
  }

  // Field name: mode_req_local_alt
  {
    cdr << ros_message->mode_req_local_alt;
  }

  // Field name: mode_req_local_position
  {
    cdr << ros_message->mode_req_local_position;
  }

  // Field name: mode_req_local_position_relaxed
  {
    cdr << ros_message->mode_req_local_position_relaxed;
  }

  // Field name: mode_req_global_position
  {
    cdr << ros_message->mode_req_global_position;
  }

  // Field name: mode_req_mission
  {
    cdr << ros_message->mode_req_mission;
  }

  // Field name: mode_req_offboard_signal
  {
    cdr << ros_message->mode_req_offboard_signal;
  }

  // Field name: mode_req_home_position
  {
    cdr << ros_message->mode_req_home_position;
  }

  // Field name: mode_req_wind_and_flight_time_compliance
  {
    cdr << ros_message->mode_req_wind_and_flight_time_compliance;
  }

  // Field name: mode_req_prevent_arming
  {
    cdr << ros_message->mode_req_prevent_arming;
  }

  // Field name: mode_req_manual_control
  {
    cdr << ros_message->mode_req_manual_control;
  }

  // Field name: mode_req_other
  {
    cdr << ros_message->mode_req_other;
  }

  // Field name: angular_velocity_invalid
  {
    cdr << (ros_message->angular_velocity_invalid ? true : false);
  }

  // Field name: attitude_invalid
  {
    cdr << (ros_message->attitude_invalid ? true : false);
  }

  // Field name: local_altitude_invalid
  {
    cdr << (ros_message->local_altitude_invalid ? true : false);
  }

  // Field name: local_position_invalid
  {
    cdr << (ros_message->local_position_invalid ? true : false);
  }

  // Field name: local_position_invalid_relaxed
  {
    cdr << (ros_message->local_position_invalid_relaxed ? true : false);
  }

  // Field name: local_velocity_invalid
  {
    cdr << (ros_message->local_velocity_invalid ? true : false);
  }

  // Field name: global_position_invalid
  {
    cdr << (ros_message->global_position_invalid ? true : false);
  }

  // Field name: auto_mission_missing
  {
    cdr << (ros_message->auto_mission_missing ? true : false);
  }

  // Field name: offboard_control_signal_lost
  {
    cdr << (ros_message->offboard_control_signal_lost ? true : false);
  }

  // Field name: home_position_invalid
  {
    cdr << (ros_message->home_position_invalid ? true : false);
  }

  // Field name: manual_control_signal_lost
  {
    cdr << (ros_message->manual_control_signal_lost ? true : false);
  }

  // Field name: gcs_connection_lost
  {
    cdr << (ros_message->gcs_connection_lost ? true : false);
  }

  // Field name: battery_warning
  {
    cdr << ros_message->battery_warning;
  }

  // Field name: battery_low_remaining_time
  {
    cdr << (ros_message->battery_low_remaining_time ? true : false);
  }

  // Field name: battery_unhealthy
  {
    cdr << (ros_message->battery_unhealthy ? true : false);
  }

  // Field name: geofence_breached
  {
    cdr << (ros_message->geofence_breached ? true : false);
  }

  // Field name: mission_failure
  {
    cdr << (ros_message->mission_failure ? true : false);
  }

  // Field name: vtol_fixed_wing_system_failure
  {
    cdr << (ros_message->vtol_fixed_wing_system_failure ? true : false);
  }

  // Field name: wind_limit_exceeded
  {
    cdr << (ros_message->wind_limit_exceeded ? true : false);
  }

  // Field name: flight_time_limit_exceeded
  {
    cdr << (ros_message->flight_time_limit_exceeded ? true : false);
  }

  // Field name: local_position_accuracy_low
  {
    cdr << (ros_message->local_position_accuracy_low ? true : false);
  }

  // Field name: fd_critical_failure
  {
    cdr << (ros_message->fd_critical_failure ? true : false);
  }

  // Field name: fd_esc_arming_failure
  {
    cdr << (ros_message->fd_esc_arming_failure ? true : false);
  }

  // Field name: fd_imbalanced_prop
  {
    cdr << (ros_message->fd_imbalanced_prop ? true : false);
  }

  // Field name: fd_motor_failure
  {
    cdr << (ros_message->fd_motor_failure ? true : false);
  }

  return true;
}

static bool _FailsafeFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FailsafeFlags__ros_msg_type * ros_message = static_cast<_FailsafeFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: mode_req_angular_velocity
  {
    cdr >> ros_message->mode_req_angular_velocity;
  }

  // Field name: mode_req_attitude
  {
    cdr >> ros_message->mode_req_attitude;
  }

  // Field name: mode_req_local_alt
  {
    cdr >> ros_message->mode_req_local_alt;
  }

  // Field name: mode_req_local_position
  {
    cdr >> ros_message->mode_req_local_position;
  }

  // Field name: mode_req_local_position_relaxed
  {
    cdr >> ros_message->mode_req_local_position_relaxed;
  }

  // Field name: mode_req_global_position
  {
    cdr >> ros_message->mode_req_global_position;
  }

  // Field name: mode_req_mission
  {
    cdr >> ros_message->mode_req_mission;
  }

  // Field name: mode_req_offboard_signal
  {
    cdr >> ros_message->mode_req_offboard_signal;
  }

  // Field name: mode_req_home_position
  {
    cdr >> ros_message->mode_req_home_position;
  }

  // Field name: mode_req_wind_and_flight_time_compliance
  {
    cdr >> ros_message->mode_req_wind_and_flight_time_compliance;
  }

  // Field name: mode_req_prevent_arming
  {
    cdr >> ros_message->mode_req_prevent_arming;
  }

  // Field name: mode_req_manual_control
  {
    cdr >> ros_message->mode_req_manual_control;
  }

  // Field name: mode_req_other
  {
    cdr >> ros_message->mode_req_other;
  }

  // Field name: angular_velocity_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->angular_velocity_invalid = tmp ? true : false;
  }

  // Field name: attitude_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->attitude_invalid = tmp ? true : false;
  }

  // Field name: local_altitude_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_altitude_invalid = tmp ? true : false;
  }

  // Field name: local_position_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_position_invalid = tmp ? true : false;
  }

  // Field name: local_position_invalid_relaxed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_position_invalid_relaxed = tmp ? true : false;
  }

  // Field name: local_velocity_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_velocity_invalid = tmp ? true : false;
  }

  // Field name: global_position_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->global_position_invalid = tmp ? true : false;
  }

  // Field name: auto_mission_missing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_mission_missing = tmp ? true : false;
  }

  // Field name: offboard_control_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->offboard_control_signal_lost = tmp ? true : false;
  }

  // Field name: home_position_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->home_position_invalid = tmp ? true : false;
  }

  // Field name: manual_control_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->manual_control_signal_lost = tmp ? true : false;
  }

  // Field name: gcs_connection_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gcs_connection_lost = tmp ? true : false;
  }

  // Field name: battery_warning
  {
    cdr >> ros_message->battery_warning;
  }

  // Field name: battery_low_remaining_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->battery_low_remaining_time = tmp ? true : false;
  }

  // Field name: battery_unhealthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->battery_unhealthy = tmp ? true : false;
  }

  // Field name: geofence_breached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->geofence_breached = tmp ? true : false;
  }

  // Field name: mission_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mission_failure = tmp ? true : false;
  }

  // Field name: vtol_fixed_wing_system_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vtol_fixed_wing_system_failure = tmp ? true : false;
  }

  // Field name: wind_limit_exceeded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wind_limit_exceeded = tmp ? true : false;
  }

  // Field name: flight_time_limit_exceeded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flight_time_limit_exceeded = tmp ? true : false;
  }

  // Field name: local_position_accuracy_low
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_position_accuracy_low = tmp ? true : false;
  }

  // Field name: fd_critical_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_critical_failure = tmp ? true : false;
  }

  // Field name: fd_esc_arming_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_esc_arming_failure = tmp ? true : false;
  }

  // Field name: fd_imbalanced_prop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_imbalanced_prop = tmp ? true : false;
  }

  // Field name: fd_motor_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_motor_failure = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__FailsafeFlags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FailsafeFlags__ros_msg_type * ros_message = static_cast<const _FailsafeFlags__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_angular_velocity
  {
    size_t item_size = sizeof(ros_message->mode_req_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_attitude
  {
    size_t item_size = sizeof(ros_message->mode_req_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_local_alt
  {
    size_t item_size = sizeof(ros_message->mode_req_local_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_local_position
  {
    size_t item_size = sizeof(ros_message->mode_req_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_local_position_relaxed
  {
    size_t item_size = sizeof(ros_message->mode_req_local_position_relaxed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_global_position
  {
    size_t item_size = sizeof(ros_message->mode_req_global_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_mission
  {
    size_t item_size = sizeof(ros_message->mode_req_mission);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_offboard_signal
  {
    size_t item_size = sizeof(ros_message->mode_req_offboard_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_home_position
  {
    size_t item_size = sizeof(ros_message->mode_req_home_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_wind_and_flight_time_compliance
  {
    size_t item_size = sizeof(ros_message->mode_req_wind_and_flight_time_compliance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_prevent_arming
  {
    size_t item_size = sizeof(ros_message->mode_req_prevent_arming);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_manual_control
  {
    size_t item_size = sizeof(ros_message->mode_req_manual_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_other
  {
    size_t item_size = sizeof(ros_message->mode_req_other);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_velocity_invalid
  {
    size_t item_size = sizeof(ros_message->angular_velocity_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attitude_invalid
  {
    size_t item_size = sizeof(ros_message->attitude_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_altitude_invalid
  {
    size_t item_size = sizeof(ros_message->local_altitude_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_position_invalid
  {
    size_t item_size = sizeof(ros_message->local_position_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_position_invalid_relaxed
  {
    size_t item_size = sizeof(ros_message->local_position_invalid_relaxed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_velocity_invalid
  {
    size_t item_size = sizeof(ros_message->local_velocity_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_position_invalid
  {
    size_t item_size = sizeof(ros_message->global_position_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_mission_missing
  {
    size_t item_size = sizeof(ros_message->auto_mission_missing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offboard_control_signal_lost
  {
    size_t item_size = sizeof(ros_message->offboard_control_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name home_position_invalid
  {
    size_t item_size = sizeof(ros_message->home_position_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name manual_control_signal_lost
  {
    size_t item_size = sizeof(ros_message->manual_control_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gcs_connection_lost
  {
    size_t item_size = sizeof(ros_message->gcs_connection_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_warning
  {
    size_t item_size = sizeof(ros_message->battery_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_low_remaining_time
  {
    size_t item_size = sizeof(ros_message->battery_low_remaining_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_unhealthy
  {
    size_t item_size = sizeof(ros_message->battery_unhealthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name geofence_breached
  {
    size_t item_size = sizeof(ros_message->geofence_breached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mission_failure
  {
    size_t item_size = sizeof(ros_message->mission_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vtol_fixed_wing_system_failure
  {
    size_t item_size = sizeof(ros_message->vtol_fixed_wing_system_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wind_limit_exceeded
  {
    size_t item_size = sizeof(ros_message->wind_limit_exceeded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flight_time_limit_exceeded
  {
    size_t item_size = sizeof(ros_message->flight_time_limit_exceeded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_position_accuracy_low
  {
    size_t item_size = sizeof(ros_message->local_position_accuracy_low);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_critical_failure
  {
    size_t item_size = sizeof(ros_message->fd_critical_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_esc_arming_failure
  {
    size_t item_size = sizeof(ros_message->fd_esc_arming_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_imbalanced_prop
  {
    size_t item_size = sizeof(ros_message->fd_imbalanced_prop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_motor_failure
  {
    size_t item_size = sizeof(ros_message->fd_motor_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FailsafeFlags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__FailsafeFlags(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__FailsafeFlags(
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

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mode_req_angular_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_local_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_local_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_local_position_relaxed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_global_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_mission
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_offboard_signal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_home_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_wind_and_flight_time_compliance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_prevent_arming
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_manual_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mode_req_other
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angular_velocity_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attitude_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_altitude_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_position_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_position_invalid_relaxed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_velocity_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: global_position_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_mission_missing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: offboard_control_signal_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: home_position_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: manual_control_signal_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gcs_connection_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_low_remaining_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_unhealthy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: geofence_breached
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mission_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vtol_fixed_wing_system_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wind_limit_exceeded
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flight_time_limit_exceeded
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_position_accuracy_low
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fd_critical_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fd_esc_arming_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fd_imbalanced_prop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fd_motor_failure
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
    using DataType = px4_msgs__msg__FailsafeFlags;
    is_plain =
      (
      offsetof(DataType, fd_motor_failure) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FailsafeFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__FailsafeFlags(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FailsafeFlags = {
  "px4_msgs::msg",
  "FailsafeFlags",
  _FailsafeFlags__cdr_serialize,
  _FailsafeFlags__cdr_deserialize,
  _FailsafeFlags__get_serialized_size,
  _FailsafeFlags__max_serialized_size
};

static rosidl_message_type_support_t _FailsafeFlags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FailsafeFlags,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, FailsafeFlags)() {
  return &_FailsafeFlags__type_support;
}

#if defined(__cplusplus)
}
#endif
