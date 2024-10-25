// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/Px4ioStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/px4io_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/px4io_status__struct.h"
#include "px4_msgs/msg/detail/px4io_status__functions.h"
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


using _Px4ioStatus__ros_msg_type = px4_msgs__msg__Px4ioStatus;

static bool _Px4ioStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Px4ioStatus__ros_msg_type * ros_message = static_cast<const _Px4ioStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: free_memory_bytes
  {
    cdr << ros_message->free_memory_bytes;
  }

  // Field name: voltage_v
  {
    cdr << ros_message->voltage_v;
  }

  // Field name: rssi_v
  {
    cdr << ros_message->rssi_v;
  }

  // Field name: status_arm_sync
  {
    cdr << (ros_message->status_arm_sync ? true : false);
  }

  // Field name: status_failsafe
  {
    cdr << (ros_message->status_failsafe ? true : false);
  }

  // Field name: status_fmu_initialized
  {
    cdr << (ros_message->status_fmu_initialized ? true : false);
  }

  // Field name: status_fmu_ok
  {
    cdr << (ros_message->status_fmu_ok ? true : false);
  }

  // Field name: status_init_ok
  {
    cdr << (ros_message->status_init_ok ? true : false);
  }

  // Field name: status_outputs_armed
  {
    cdr << (ros_message->status_outputs_armed ? true : false);
  }

  // Field name: status_raw_pwm
  {
    cdr << (ros_message->status_raw_pwm ? true : false);
  }

  // Field name: status_rc_ok
  {
    cdr << (ros_message->status_rc_ok ? true : false);
  }

  // Field name: status_rc_dsm
  {
    cdr << (ros_message->status_rc_dsm ? true : false);
  }

  // Field name: status_rc_ppm
  {
    cdr << (ros_message->status_rc_ppm ? true : false);
  }

  // Field name: status_rc_sbus
  {
    cdr << (ros_message->status_rc_sbus ? true : false);
  }

  // Field name: status_rc_st24
  {
    cdr << (ros_message->status_rc_st24 ? true : false);
  }

  // Field name: status_rc_sumd
  {
    cdr << (ros_message->status_rc_sumd ? true : false);
  }

  // Field name: status_safety_button_event
  {
    cdr << (ros_message->status_safety_button_event ? true : false);
  }

  // Field name: alarm_pwm_error
  {
    cdr << (ros_message->alarm_pwm_error ? true : false);
  }

  // Field name: alarm_rc_lost
  {
    cdr << (ros_message->alarm_rc_lost ? true : false);
  }

  // Field name: arming_failsafe_custom
  {
    cdr << (ros_message->arming_failsafe_custom ? true : false);
  }

  // Field name: arming_fmu_armed
  {
    cdr << (ros_message->arming_fmu_armed ? true : false);
  }

  // Field name: arming_fmu_prearmed
  {
    cdr << (ros_message->arming_fmu_prearmed ? true : false);
  }

  // Field name: arming_force_failsafe
  {
    cdr << (ros_message->arming_force_failsafe ? true : false);
  }

  // Field name: arming_io_arm_ok
  {
    cdr << (ros_message->arming_io_arm_ok ? true : false);
  }

  // Field name: arming_lockdown
  {
    cdr << (ros_message->arming_lockdown ? true : false);
  }

  // Field name: arming_termination_failsafe
  {
    cdr << (ros_message->arming_termination_failsafe ? true : false);
  }

  // Field name: pwm
  {
    size_t size = 8;
    auto array_ptr = ros_message->pwm;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pwm_disarmed
  {
    size_t size = 8;
    auto array_ptr = ros_message->pwm_disarmed;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pwm_failsafe
  {
    size_t size = 8;
    auto array_ptr = ros_message->pwm_failsafe;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pwm_rate_hz
  {
    size_t size = 8;
    auto array_ptr = ros_message->pwm_rate_hz;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: raw_inputs
  {
    size_t size = 18;
    auto array_ptr = ros_message->raw_inputs;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Px4ioStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Px4ioStatus__ros_msg_type * ros_message = static_cast<_Px4ioStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: free_memory_bytes
  {
    cdr >> ros_message->free_memory_bytes;
  }

  // Field name: voltage_v
  {
    cdr >> ros_message->voltage_v;
  }

  // Field name: rssi_v
  {
    cdr >> ros_message->rssi_v;
  }

  // Field name: status_arm_sync
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_arm_sync = tmp ? true : false;
  }

  // Field name: status_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_failsafe = tmp ? true : false;
  }

  // Field name: status_fmu_initialized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_fmu_initialized = tmp ? true : false;
  }

  // Field name: status_fmu_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_fmu_ok = tmp ? true : false;
  }

  // Field name: status_init_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_init_ok = tmp ? true : false;
  }

  // Field name: status_outputs_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_outputs_armed = tmp ? true : false;
  }

  // Field name: status_raw_pwm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_raw_pwm = tmp ? true : false;
  }

  // Field name: status_rc_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_ok = tmp ? true : false;
  }

  // Field name: status_rc_dsm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_dsm = tmp ? true : false;
  }

  // Field name: status_rc_ppm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_ppm = tmp ? true : false;
  }

  // Field name: status_rc_sbus
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_sbus = tmp ? true : false;
  }

  // Field name: status_rc_st24
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_st24 = tmp ? true : false;
  }

  // Field name: status_rc_sumd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_rc_sumd = tmp ? true : false;
  }

  // Field name: status_safety_button_event
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status_safety_button_event = tmp ? true : false;
  }

  // Field name: alarm_pwm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alarm_pwm_error = tmp ? true : false;
  }

  // Field name: alarm_rc_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->alarm_rc_lost = tmp ? true : false;
  }

  // Field name: arming_failsafe_custom
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_failsafe_custom = tmp ? true : false;
  }

  // Field name: arming_fmu_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_fmu_armed = tmp ? true : false;
  }

  // Field name: arming_fmu_prearmed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_fmu_prearmed = tmp ? true : false;
  }

  // Field name: arming_force_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_force_failsafe = tmp ? true : false;
  }

  // Field name: arming_io_arm_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_io_arm_ok = tmp ? true : false;
  }

  // Field name: arming_lockdown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_lockdown = tmp ? true : false;
  }

  // Field name: arming_termination_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arming_termination_failsafe = tmp ? true : false;
  }

  // Field name: pwm
  {
    size_t size = 8;
    auto array_ptr = ros_message->pwm;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pwm_disarmed
  {
    size_t size = 8;
    auto array_ptr = ros_message->pwm_disarmed;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pwm_failsafe
  {
    size_t size = 8;
    auto array_ptr = ros_message->pwm_failsafe;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pwm_rate_hz
  {
    size_t size = 8;
    auto array_ptr = ros_message->pwm_rate_hz;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: raw_inputs
  {
    size_t size = 18;
    auto array_ptr = ros_message->raw_inputs;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__Px4ioStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Px4ioStatus__ros_msg_type * ros_message = static_cast<const _Px4ioStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name free_memory_bytes
  {
    size_t item_size = sizeof(ros_message->free_memory_bytes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name voltage_v
  {
    size_t item_size = sizeof(ros_message->voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rssi_v
  {
    size_t item_size = sizeof(ros_message->rssi_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_arm_sync
  {
    size_t item_size = sizeof(ros_message->status_arm_sync);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_failsafe
  {
    size_t item_size = sizeof(ros_message->status_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_fmu_initialized
  {
    size_t item_size = sizeof(ros_message->status_fmu_initialized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_fmu_ok
  {
    size_t item_size = sizeof(ros_message->status_fmu_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_init_ok
  {
    size_t item_size = sizeof(ros_message->status_init_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_outputs_armed
  {
    size_t item_size = sizeof(ros_message->status_outputs_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_raw_pwm
  {
    size_t item_size = sizeof(ros_message->status_raw_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_ok
  {
    size_t item_size = sizeof(ros_message->status_rc_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_dsm
  {
    size_t item_size = sizeof(ros_message->status_rc_dsm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_ppm
  {
    size_t item_size = sizeof(ros_message->status_rc_ppm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_sbus
  {
    size_t item_size = sizeof(ros_message->status_rc_sbus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_st24
  {
    size_t item_size = sizeof(ros_message->status_rc_st24);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_rc_sumd
  {
    size_t item_size = sizeof(ros_message->status_rc_sumd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_safety_button_event
  {
    size_t item_size = sizeof(ros_message->status_safety_button_event);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_pwm_error
  {
    size_t item_size = sizeof(ros_message->alarm_pwm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alarm_rc_lost
  {
    size_t item_size = sizeof(ros_message->alarm_rc_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_failsafe_custom
  {
    size_t item_size = sizeof(ros_message->arming_failsafe_custom);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_fmu_armed
  {
    size_t item_size = sizeof(ros_message->arming_fmu_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_fmu_prearmed
  {
    size_t item_size = sizeof(ros_message->arming_fmu_prearmed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_force_failsafe
  {
    size_t item_size = sizeof(ros_message->arming_force_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_io_arm_ok
  {
    size_t item_size = sizeof(ros_message->arming_io_arm_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_lockdown
  {
    size_t item_size = sizeof(ros_message->arming_lockdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_termination_failsafe
  {
    size_t item_size = sizeof(ros_message->arming_termination_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pwm
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->pwm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pwm_disarmed
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->pwm_disarmed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pwm_failsafe
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->pwm_failsafe;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pwm_rate_hz
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->pwm_rate_hz;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name raw_inputs
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->raw_inputs;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Px4ioStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__Px4ioStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__Px4ioStatus(
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
  // member: free_memory_bytes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: voltage_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rssi_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status_arm_sync
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_failsafe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_fmu_initialized
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_fmu_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_init_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_outputs_armed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_raw_pwm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_dsm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_ppm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_sbus
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_st24
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_rc_sumd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_safety_button_event
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_pwm_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alarm_rc_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_failsafe_custom
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_fmu_armed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_fmu_prearmed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_force_failsafe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_io_arm_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_lockdown
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arming_termination_failsafe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pwm
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pwm_disarmed
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pwm_failsafe
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: pwm_rate_hz
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: raw_inputs
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__Px4ioStatus;
    is_plain =
      (
      offsetof(DataType, raw_inputs) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Px4ioStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__Px4ioStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Px4ioStatus = {
  "px4_msgs::msg",
  "Px4ioStatus",
  _Px4ioStatus__cdr_serialize,
  _Px4ioStatus__cdr_deserialize,
  _Px4ioStatus__get_serialized_size,
  _Px4ioStatus__max_serialized_size
};

static rosidl_message_type_support_t _Px4ioStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Px4ioStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, Px4ioStatus)() {
  return &_Px4ioStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
