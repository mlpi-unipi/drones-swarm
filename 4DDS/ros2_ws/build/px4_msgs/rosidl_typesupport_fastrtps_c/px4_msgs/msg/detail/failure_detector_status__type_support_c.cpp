// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/FailureDetectorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/failure_detector_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/failure_detector_status__struct.h"
#include "px4_msgs/msg/detail/failure_detector_status__functions.h"
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


using _FailureDetectorStatus__ros_msg_type = px4_msgs__msg__FailureDetectorStatus;

static bool _FailureDetectorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FailureDetectorStatus__ros_msg_type * ros_message = static_cast<const _FailureDetectorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: fd_roll
  {
    cdr << (ros_message->fd_roll ? true : false);
  }

  // Field name: fd_pitch
  {
    cdr << (ros_message->fd_pitch ? true : false);
  }

  // Field name: fd_alt
  {
    cdr << (ros_message->fd_alt ? true : false);
  }

  // Field name: fd_ext
  {
    cdr << (ros_message->fd_ext ? true : false);
  }

  // Field name: fd_arm_escs
  {
    cdr << (ros_message->fd_arm_escs ? true : false);
  }

  // Field name: fd_battery
  {
    cdr << (ros_message->fd_battery ? true : false);
  }

  // Field name: fd_imbalanced_prop
  {
    cdr << (ros_message->fd_imbalanced_prop ? true : false);
  }

  // Field name: fd_motor
  {
    cdr << (ros_message->fd_motor ? true : false);
  }

  // Field name: imbalanced_prop_metric
  {
    cdr << ros_message->imbalanced_prop_metric;
  }

  // Field name: motor_failure_mask
  {
    cdr << ros_message->motor_failure_mask;
  }

  return true;
}

static bool _FailureDetectorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FailureDetectorStatus__ros_msg_type * ros_message = static_cast<_FailureDetectorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: fd_roll
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_roll = tmp ? true : false;
  }

  // Field name: fd_pitch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_pitch = tmp ? true : false;
  }

  // Field name: fd_alt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_alt = tmp ? true : false;
  }

  // Field name: fd_ext
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_ext = tmp ? true : false;
  }

  // Field name: fd_arm_escs
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_arm_escs = tmp ? true : false;
  }

  // Field name: fd_battery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_battery = tmp ? true : false;
  }

  // Field name: fd_imbalanced_prop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_imbalanced_prop = tmp ? true : false;
  }

  // Field name: fd_motor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fd_motor = tmp ? true : false;
  }

  // Field name: imbalanced_prop_metric
  {
    cdr >> ros_message->imbalanced_prop_metric;
  }

  // Field name: motor_failure_mask
  {
    cdr >> ros_message->motor_failure_mask;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__FailureDetectorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FailureDetectorStatus__ros_msg_type * ros_message = static_cast<const _FailureDetectorStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name fd_roll
  {
    size_t item_size = sizeof(ros_message->fd_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_pitch
  {
    size_t item_size = sizeof(ros_message->fd_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_alt
  {
    size_t item_size = sizeof(ros_message->fd_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_ext
  {
    size_t item_size = sizeof(ros_message->fd_ext);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_arm_escs
  {
    size_t item_size = sizeof(ros_message->fd_arm_escs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_battery
  {
    size_t item_size = sizeof(ros_message->fd_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_imbalanced_prop
  {
    size_t item_size = sizeof(ros_message->fd_imbalanced_prop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fd_motor
  {
    size_t item_size = sizeof(ros_message->fd_motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imbalanced_prop_metric
  {
    size_t item_size = sizeof(ros_message->imbalanced_prop_metric);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_failure_mask
  {
    size_t item_size = sizeof(ros_message->motor_failure_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FailureDetectorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__FailureDetectorStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__FailureDetectorStatus(
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
  // member: fd_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fd_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fd_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fd_ext
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fd_arm_escs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fd_battery
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
  // member: fd_motor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: imbalanced_prop_metric
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_failure_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__FailureDetectorStatus;
    is_plain =
      (
      offsetof(DataType, motor_failure_mask) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FailureDetectorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__FailureDetectorStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FailureDetectorStatus = {
  "px4_msgs::msg",
  "FailureDetectorStatus",
  _FailureDetectorStatus__cdr_serialize,
  _FailureDetectorStatus__cdr_deserialize,
  _FailureDetectorStatus__get_serialized_size,
  _FailureDetectorStatus__max_serialized_size
};

static rosidl_message_type_support_t _FailureDetectorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FailureDetectorStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, FailureDetectorStatus)() {
  return &_FailureDetectorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
