// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleAttitudeSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_attitude_setpoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_attitude_setpoint__struct.h"
#include "px4_msgs/msg/detail/vehicle_attitude_setpoint__functions.h"
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


using _VehicleAttitudeSetpoint__ros_msg_type = px4_msgs__msg__VehicleAttitudeSetpoint;

static bool _VehicleAttitudeSetpoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleAttitudeSetpoint__ros_msg_type * ros_message = static_cast<const _VehicleAttitudeSetpoint__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: roll_body
  {
    cdr << ros_message->roll_body;
  }

  // Field name: pitch_body
  {
    cdr << ros_message->pitch_body;
  }

  // Field name: yaw_body
  {
    cdr << ros_message->yaw_body;
  }

  // Field name: yaw_sp_move_rate
  {
    cdr << ros_message->yaw_sp_move_rate;
  }

  // Field name: q_d
  {
    size_t size = 4;
    auto array_ptr = ros_message->q_d;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: thrust_body
  {
    size_t size = 3;
    auto array_ptr = ros_message->thrust_body;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: reset_integral
  {
    cdr << (ros_message->reset_integral ? true : false);
  }

  // Field name: fw_control_yaw_wheel
  {
    cdr << (ros_message->fw_control_yaw_wheel ? true : false);
  }

  return true;
}

static bool _VehicleAttitudeSetpoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleAttitudeSetpoint__ros_msg_type * ros_message = static_cast<_VehicleAttitudeSetpoint__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: roll_body
  {
    cdr >> ros_message->roll_body;
  }

  // Field name: pitch_body
  {
    cdr >> ros_message->pitch_body;
  }

  // Field name: yaw_body
  {
    cdr >> ros_message->yaw_body;
  }

  // Field name: yaw_sp_move_rate
  {
    cdr >> ros_message->yaw_sp_move_rate;
  }

  // Field name: q_d
  {
    size_t size = 4;
    auto array_ptr = ros_message->q_d;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: thrust_body
  {
    size_t size = 3;
    auto array_ptr = ros_message->thrust_body;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: reset_integral
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_integral = tmp ? true : false;
  }

  // Field name: fw_control_yaw_wheel
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fw_control_yaw_wheel = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleAttitudeSetpoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleAttitudeSetpoint__ros_msg_type * ros_message = static_cast<const _VehicleAttitudeSetpoint__ros_msg_type *>(untyped_ros_message);
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
  // field.name roll_body
  {
    size_t item_size = sizeof(ros_message->roll_body);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_body
  {
    size_t item_size = sizeof(ros_message->pitch_body);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_body
  {
    size_t item_size = sizeof(ros_message->yaw_body);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_sp_move_rate
  {
    size_t item_size = sizeof(ros_message->yaw_sp_move_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q_d
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->q_d;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thrust_body
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->thrust_body;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_integral
  {
    size_t item_size = sizeof(ros_message->reset_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fw_control_yaw_wheel
  {
    size_t item_size = sizeof(ros_message->fw_control_yaw_wheel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleAttitudeSetpoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleAttitudeSetpoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleAttitudeSetpoint(
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
  // member: roll_body
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_body
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_body
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_sp_move_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: q_d
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: thrust_body
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reset_integral
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fw_control_yaw_wheel
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
    using DataType = px4_msgs__msg__VehicleAttitudeSetpoint;
    is_plain =
      (
      offsetof(DataType, fw_control_yaw_wheel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleAttitudeSetpoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__VehicleAttitudeSetpoint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleAttitudeSetpoint = {
  "px4_msgs::msg",
  "VehicleAttitudeSetpoint",
  _VehicleAttitudeSetpoint__cdr_serialize,
  _VehicleAttitudeSetpoint__cdr_deserialize,
  _VehicleAttitudeSetpoint__get_serialized_size,
  _VehicleAttitudeSetpoint__max_serialized_size
};

static rosidl_message_type_support_t _VehicleAttitudeSetpoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleAttitudeSetpoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleAttitudeSetpoint)() {
  return &_VehicleAttitudeSetpoint__type_support;
}

#if defined(__cplusplus)
}
#endif
