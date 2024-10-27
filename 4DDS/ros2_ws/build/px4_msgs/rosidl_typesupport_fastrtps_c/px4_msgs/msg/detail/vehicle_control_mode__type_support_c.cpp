// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleControlMode.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_control_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_control_mode__struct.h"
#include "px4_msgs/msg/detail/vehicle_control_mode__functions.h"
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


using _VehicleControlMode__ros_msg_type = px4_msgs__msg__VehicleControlMode;

static bool _VehicleControlMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleControlMode__ros_msg_type * ros_message = static_cast<const _VehicleControlMode__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: flag_armed
  {
    cdr << (ros_message->flag_armed ? true : false);
  }

  // Field name: flag_multicopter_position_control_enabled
  {
    cdr << (ros_message->flag_multicopter_position_control_enabled ? true : false);
  }

  // Field name: flag_control_manual_enabled
  {
    cdr << (ros_message->flag_control_manual_enabled ? true : false);
  }

  // Field name: flag_control_auto_enabled
  {
    cdr << (ros_message->flag_control_auto_enabled ? true : false);
  }

  // Field name: flag_control_offboard_enabled
  {
    cdr << (ros_message->flag_control_offboard_enabled ? true : false);
  }

  // Field name: flag_control_position_enabled
  {
    cdr << (ros_message->flag_control_position_enabled ? true : false);
  }

  // Field name: flag_control_velocity_enabled
  {
    cdr << (ros_message->flag_control_velocity_enabled ? true : false);
  }

  // Field name: flag_control_altitude_enabled
  {
    cdr << (ros_message->flag_control_altitude_enabled ? true : false);
  }

  // Field name: flag_control_climb_rate_enabled
  {
    cdr << (ros_message->flag_control_climb_rate_enabled ? true : false);
  }

  // Field name: flag_control_acceleration_enabled
  {
    cdr << (ros_message->flag_control_acceleration_enabled ? true : false);
  }

  // Field name: flag_control_attitude_enabled
  {
    cdr << (ros_message->flag_control_attitude_enabled ? true : false);
  }

  // Field name: flag_control_rates_enabled
  {
    cdr << (ros_message->flag_control_rates_enabled ? true : false);
  }

  // Field name: flag_control_allocation_enabled
  {
    cdr << (ros_message->flag_control_allocation_enabled ? true : false);
  }

  // Field name: flag_control_termination_enabled
  {
    cdr << (ros_message->flag_control_termination_enabled ? true : false);
  }

  // Field name: source_id
  {
    cdr << ros_message->source_id;
  }

  return true;
}

static bool _VehicleControlMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleControlMode__ros_msg_type * ros_message = static_cast<_VehicleControlMode__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: flag_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_armed = tmp ? true : false;
  }

  // Field name: flag_multicopter_position_control_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_multicopter_position_control_enabled = tmp ? true : false;
  }

  // Field name: flag_control_manual_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_manual_enabled = tmp ? true : false;
  }

  // Field name: flag_control_auto_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_auto_enabled = tmp ? true : false;
  }

  // Field name: flag_control_offboard_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_offboard_enabled = tmp ? true : false;
  }

  // Field name: flag_control_position_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_position_enabled = tmp ? true : false;
  }

  // Field name: flag_control_velocity_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_velocity_enabled = tmp ? true : false;
  }

  // Field name: flag_control_altitude_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_altitude_enabled = tmp ? true : false;
  }

  // Field name: flag_control_climb_rate_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_climb_rate_enabled = tmp ? true : false;
  }

  // Field name: flag_control_acceleration_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_acceleration_enabled = tmp ? true : false;
  }

  // Field name: flag_control_attitude_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_attitude_enabled = tmp ? true : false;
  }

  // Field name: flag_control_rates_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_rates_enabled = tmp ? true : false;
  }

  // Field name: flag_control_allocation_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_allocation_enabled = tmp ? true : false;
  }

  // Field name: flag_control_termination_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_termination_enabled = tmp ? true : false;
  }

  // Field name: source_id
  {
    cdr >> ros_message->source_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleControlMode(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleControlMode__ros_msg_type * ros_message = static_cast<const _VehicleControlMode__ros_msg_type *>(untyped_ros_message);
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
  // field.name flag_armed
  {
    size_t item_size = sizeof(ros_message->flag_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_multicopter_position_control_enabled
  {
    size_t item_size = sizeof(ros_message->flag_multicopter_position_control_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_manual_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_manual_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_auto_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_auto_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_offboard_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_offboard_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_position_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_position_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_velocity_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_velocity_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_altitude_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_altitude_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_climb_rate_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_climb_rate_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_acceleration_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_acceleration_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_attitude_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_attitude_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_rates_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_rates_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_allocation_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_allocation_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_termination_enabled
  {
    size_t item_size = sizeof(ros_message->flag_control_termination_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name source_id
  {
    size_t item_size = sizeof(ros_message->source_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleControlMode__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleControlMode(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleControlMode(
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
  // member: flag_armed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_multicopter_position_control_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_manual_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_auto_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_offboard_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_position_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_velocity_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_altitude_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_climb_rate_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_acceleration_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_attitude_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_rates_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_allocation_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flag_control_termination_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: source_id
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
    using DataType = px4_msgs__msg__VehicleControlMode;
    is_plain =
      (
      offsetof(DataType, source_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleControlMode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__VehicleControlMode(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleControlMode = {
  "px4_msgs::msg",
  "VehicleControlMode",
  _VehicleControlMode__cdr_serialize,
  _VehicleControlMode__cdr_deserialize,
  _VehicleControlMode__get_serialized_size,
  _VehicleControlMode__max_serialized_size
};

static rosidl_message_type_support_t _VehicleControlMode__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleControlMode,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleControlMode)() {
  return &_VehicleControlMode__type_support;
}

#if defined(__cplusplus)
}
#endif
