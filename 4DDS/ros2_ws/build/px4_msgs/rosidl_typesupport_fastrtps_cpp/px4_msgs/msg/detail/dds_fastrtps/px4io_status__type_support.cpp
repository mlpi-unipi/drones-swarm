// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/Px4ioStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/px4io_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/px4io_status__struct.hpp"

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
  const px4_msgs::msg::Px4ioStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: free_memory_bytes
  cdr << ros_message.free_memory_bytes;
  // Member: voltage_v
  cdr << ros_message.voltage_v;
  // Member: rssi_v
  cdr << ros_message.rssi_v;
  // Member: status_arm_sync
  cdr << (ros_message.status_arm_sync ? true : false);
  // Member: status_failsafe
  cdr << (ros_message.status_failsafe ? true : false);
  // Member: status_fmu_initialized
  cdr << (ros_message.status_fmu_initialized ? true : false);
  // Member: status_fmu_ok
  cdr << (ros_message.status_fmu_ok ? true : false);
  // Member: status_init_ok
  cdr << (ros_message.status_init_ok ? true : false);
  // Member: status_outputs_armed
  cdr << (ros_message.status_outputs_armed ? true : false);
  // Member: status_raw_pwm
  cdr << (ros_message.status_raw_pwm ? true : false);
  // Member: status_rc_ok
  cdr << (ros_message.status_rc_ok ? true : false);
  // Member: status_rc_dsm
  cdr << (ros_message.status_rc_dsm ? true : false);
  // Member: status_rc_ppm
  cdr << (ros_message.status_rc_ppm ? true : false);
  // Member: status_rc_sbus
  cdr << (ros_message.status_rc_sbus ? true : false);
  // Member: status_rc_st24
  cdr << (ros_message.status_rc_st24 ? true : false);
  // Member: status_rc_sumd
  cdr << (ros_message.status_rc_sumd ? true : false);
  // Member: status_safety_button_event
  cdr << (ros_message.status_safety_button_event ? true : false);
  // Member: alarm_pwm_error
  cdr << (ros_message.alarm_pwm_error ? true : false);
  // Member: alarm_rc_lost
  cdr << (ros_message.alarm_rc_lost ? true : false);
  // Member: arming_failsafe_custom
  cdr << (ros_message.arming_failsafe_custom ? true : false);
  // Member: arming_fmu_armed
  cdr << (ros_message.arming_fmu_armed ? true : false);
  // Member: arming_fmu_prearmed
  cdr << (ros_message.arming_fmu_prearmed ? true : false);
  // Member: arming_force_failsafe
  cdr << (ros_message.arming_force_failsafe ? true : false);
  // Member: arming_io_arm_ok
  cdr << (ros_message.arming_io_arm_ok ? true : false);
  // Member: arming_lockdown
  cdr << (ros_message.arming_lockdown ? true : false);
  // Member: arming_termination_failsafe
  cdr << (ros_message.arming_termination_failsafe ? true : false);
  // Member: pwm
  {
    cdr << ros_message.pwm;
  }
  // Member: pwm_disarmed
  {
    cdr << ros_message.pwm_disarmed;
  }
  // Member: pwm_failsafe
  {
    cdr << ros_message.pwm_failsafe;
  }
  // Member: pwm_rate_hz
  {
    cdr << ros_message.pwm_rate_hz;
  }
  // Member: raw_inputs
  {
    cdr << ros_message.raw_inputs;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::Px4ioStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: free_memory_bytes
  cdr >> ros_message.free_memory_bytes;

  // Member: voltage_v
  cdr >> ros_message.voltage_v;

  // Member: rssi_v
  cdr >> ros_message.rssi_v;

  // Member: status_arm_sync
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_arm_sync = tmp ? true : false;
  }

  // Member: status_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_failsafe = tmp ? true : false;
  }

  // Member: status_fmu_initialized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_fmu_initialized = tmp ? true : false;
  }

  // Member: status_fmu_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_fmu_ok = tmp ? true : false;
  }

  // Member: status_init_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_init_ok = tmp ? true : false;
  }

  // Member: status_outputs_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_outputs_armed = tmp ? true : false;
  }

  // Member: status_raw_pwm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_raw_pwm = tmp ? true : false;
  }

  // Member: status_rc_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_rc_ok = tmp ? true : false;
  }

  // Member: status_rc_dsm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_rc_dsm = tmp ? true : false;
  }

  // Member: status_rc_ppm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_rc_ppm = tmp ? true : false;
  }

  // Member: status_rc_sbus
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_rc_sbus = tmp ? true : false;
  }

  // Member: status_rc_st24
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_rc_st24 = tmp ? true : false;
  }

  // Member: status_rc_sumd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_rc_sumd = tmp ? true : false;
  }

  // Member: status_safety_button_event
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status_safety_button_event = tmp ? true : false;
  }

  // Member: alarm_pwm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.alarm_pwm_error = tmp ? true : false;
  }

  // Member: alarm_rc_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.alarm_rc_lost = tmp ? true : false;
  }

  // Member: arming_failsafe_custom
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arming_failsafe_custom = tmp ? true : false;
  }

  // Member: arming_fmu_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arming_fmu_armed = tmp ? true : false;
  }

  // Member: arming_fmu_prearmed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arming_fmu_prearmed = tmp ? true : false;
  }

  // Member: arming_force_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arming_force_failsafe = tmp ? true : false;
  }

  // Member: arming_io_arm_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arming_io_arm_ok = tmp ? true : false;
  }

  // Member: arming_lockdown
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arming_lockdown = tmp ? true : false;
  }

  // Member: arming_termination_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arming_termination_failsafe = tmp ? true : false;
  }

  // Member: pwm
  {
    cdr >> ros_message.pwm;
  }

  // Member: pwm_disarmed
  {
    cdr >> ros_message.pwm_disarmed;
  }

  // Member: pwm_failsafe
  {
    cdr >> ros_message.pwm_failsafe;
  }

  // Member: pwm_rate_hz
  {
    cdr >> ros_message.pwm_rate_hz;
  }

  // Member: raw_inputs
  {
    cdr >> ros_message.raw_inputs;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::Px4ioStatus & ros_message,
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
  // Member: free_memory_bytes
  {
    size_t item_size = sizeof(ros_message.free_memory_bytes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: voltage_v
  {
    size_t item_size = sizeof(ros_message.voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rssi_v
  {
    size_t item_size = sizeof(ros_message.rssi_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_arm_sync
  {
    size_t item_size = sizeof(ros_message.status_arm_sync);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_failsafe
  {
    size_t item_size = sizeof(ros_message.status_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_fmu_initialized
  {
    size_t item_size = sizeof(ros_message.status_fmu_initialized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_fmu_ok
  {
    size_t item_size = sizeof(ros_message.status_fmu_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_init_ok
  {
    size_t item_size = sizeof(ros_message.status_init_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_outputs_armed
  {
    size_t item_size = sizeof(ros_message.status_outputs_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_raw_pwm
  {
    size_t item_size = sizeof(ros_message.status_raw_pwm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_rc_ok
  {
    size_t item_size = sizeof(ros_message.status_rc_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_rc_dsm
  {
    size_t item_size = sizeof(ros_message.status_rc_dsm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_rc_ppm
  {
    size_t item_size = sizeof(ros_message.status_rc_ppm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_rc_sbus
  {
    size_t item_size = sizeof(ros_message.status_rc_sbus);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_rc_st24
  {
    size_t item_size = sizeof(ros_message.status_rc_st24);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_rc_sumd
  {
    size_t item_size = sizeof(ros_message.status_rc_sumd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status_safety_button_event
  {
    size_t item_size = sizeof(ros_message.status_safety_button_event);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alarm_pwm_error
  {
    size_t item_size = sizeof(ros_message.alarm_pwm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alarm_rc_lost
  {
    size_t item_size = sizeof(ros_message.alarm_rc_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arming_failsafe_custom
  {
    size_t item_size = sizeof(ros_message.arming_failsafe_custom);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arming_fmu_armed
  {
    size_t item_size = sizeof(ros_message.arming_fmu_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arming_fmu_prearmed
  {
    size_t item_size = sizeof(ros_message.arming_fmu_prearmed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arming_force_failsafe
  {
    size_t item_size = sizeof(ros_message.arming_force_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arming_io_arm_ok
  {
    size_t item_size = sizeof(ros_message.arming_io_arm_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arming_lockdown
  {
    size_t item_size = sizeof(ros_message.arming_lockdown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arming_termination_failsafe
  {
    size_t item_size = sizeof(ros_message.arming_termination_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwm
  {
    size_t array_size = 8;
    size_t item_size = sizeof(ros_message.pwm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwm_disarmed
  {
    size_t array_size = 8;
    size_t item_size = sizeof(ros_message.pwm_disarmed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwm_failsafe
  {
    size_t array_size = 8;
    size_t item_size = sizeof(ros_message.pwm_failsafe[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwm_rate_hz
  {
    size_t array_size = 8;
    size_t item_size = sizeof(ros_message.pwm_rate_hz[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: raw_inputs
  {
    size_t array_size = 18;
    size_t item_size = sizeof(ros_message.raw_inputs[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_Px4ioStatus(
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

  // Member: free_memory_bytes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: voltage_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rssi_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status_arm_sync
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_failsafe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_fmu_initialized
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_fmu_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_init_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_outputs_armed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_raw_pwm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_rc_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_rc_dsm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_rc_ppm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_rc_sbus
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_rc_st24
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_rc_sumd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status_safety_button_event
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alarm_pwm_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alarm_rc_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arming_failsafe_custom
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arming_fmu_armed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arming_fmu_prearmed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arming_force_failsafe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arming_io_arm_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arming_lockdown
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arming_termination_failsafe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pwm
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pwm_disarmed
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pwm_failsafe
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: pwm_rate_hz
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: raw_inputs
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
    using DataType = px4_msgs::msg::Px4ioStatus;
    is_plain =
      (
      offsetof(DataType, raw_inputs) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Px4ioStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::Px4ioStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Px4ioStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::Px4ioStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Px4ioStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::Px4ioStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Px4ioStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Px4ioStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Px4ioStatus__callbacks = {
  "px4_msgs::msg",
  "Px4ioStatus",
  _Px4ioStatus__cdr_serialize,
  _Px4ioStatus__cdr_deserialize,
  _Px4ioStatus__get_serialized_size,
  _Px4ioStatus__max_serialized_size
};

static rosidl_message_type_support_t _Px4ioStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Px4ioStatus__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::Px4ioStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_Px4ioStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, Px4ioStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_Px4ioStatus__handle;
}

#ifdef __cplusplus
}
#endif
