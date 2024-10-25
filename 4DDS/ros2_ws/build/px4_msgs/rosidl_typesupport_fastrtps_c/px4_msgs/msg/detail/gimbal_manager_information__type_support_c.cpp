// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/GimbalManagerInformation.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/gimbal_manager_information__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/gimbal_manager_information__struct.h"
#include "px4_msgs/msg/detail/gimbal_manager_information__functions.h"
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


using _GimbalManagerInformation__ros_msg_type = px4_msgs__msg__GimbalManagerInformation;

static bool _GimbalManagerInformation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GimbalManagerInformation__ros_msg_type * ros_message = static_cast<const _GimbalManagerInformation__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: cap_flags
  {
    cdr << ros_message->cap_flags;
  }

  // Field name: gimbal_device_id
  {
    cdr << ros_message->gimbal_device_id;
  }

  // Field name: roll_min
  {
    cdr << ros_message->roll_min;
  }

  // Field name: roll_max
  {
    cdr << ros_message->roll_max;
  }

  // Field name: pitch_min
  {
    cdr << ros_message->pitch_min;
  }

  // Field name: pitch_max
  {
    cdr << ros_message->pitch_max;
  }

  // Field name: yaw_min
  {
    cdr << ros_message->yaw_min;
  }

  // Field name: yaw_max
  {
    cdr << ros_message->yaw_max;
  }

  return true;
}

static bool _GimbalManagerInformation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GimbalManagerInformation__ros_msg_type * ros_message = static_cast<_GimbalManagerInformation__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: cap_flags
  {
    cdr >> ros_message->cap_flags;
  }

  // Field name: gimbal_device_id
  {
    cdr >> ros_message->gimbal_device_id;
  }

  // Field name: roll_min
  {
    cdr >> ros_message->roll_min;
  }

  // Field name: roll_max
  {
    cdr >> ros_message->roll_max;
  }

  // Field name: pitch_min
  {
    cdr >> ros_message->pitch_min;
  }

  // Field name: pitch_max
  {
    cdr >> ros_message->pitch_max;
  }

  // Field name: yaw_min
  {
    cdr >> ros_message->yaw_min;
  }

  // Field name: yaw_max
  {
    cdr >> ros_message->yaw_max;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__GimbalManagerInformation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GimbalManagerInformation__ros_msg_type * ros_message = static_cast<const _GimbalManagerInformation__ros_msg_type *>(untyped_ros_message);
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
  // field.name cap_flags
  {
    size_t item_size = sizeof(ros_message->cap_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gimbal_device_id
  {
    size_t item_size = sizeof(ros_message->gimbal_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_min
  {
    size_t item_size = sizeof(ros_message->roll_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_max
  {
    size_t item_size = sizeof(ros_message->roll_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_min
  {
    size_t item_size = sizeof(ros_message->pitch_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_max
  {
    size_t item_size = sizeof(ros_message->pitch_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_min
  {
    size_t item_size = sizeof(ros_message->yaw_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_max
  {
    size_t item_size = sizeof(ros_message->yaw_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GimbalManagerInformation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__GimbalManagerInformation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__GimbalManagerInformation(
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
  // member: cap_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gimbal_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: roll_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__GimbalManagerInformation;
    is_plain =
      (
      offsetof(DataType, yaw_max) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GimbalManagerInformation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__GimbalManagerInformation(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GimbalManagerInformation = {
  "px4_msgs::msg",
  "GimbalManagerInformation",
  _GimbalManagerInformation__cdr_serialize,
  _GimbalManagerInformation__cdr_deserialize,
  _GimbalManagerInformation__get_serialized_size,
  _GimbalManagerInformation__max_serialized_size
};

static rosidl_message_type_support_t _GimbalManagerInformation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GimbalManagerInformation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, GimbalManagerInformation)() {
  return &_GimbalManagerInformation__type_support;
}

#if defined(__cplusplus)
}
#endif
