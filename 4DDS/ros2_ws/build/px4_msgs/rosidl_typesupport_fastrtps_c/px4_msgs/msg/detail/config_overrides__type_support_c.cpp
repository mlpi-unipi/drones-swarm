// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/ConfigOverrides.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/config_overrides__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/config_overrides__struct.h"
#include "px4_msgs/msg/detail/config_overrides__functions.h"
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


using _ConfigOverrides__ros_msg_type = px4_msgs__msg__ConfigOverrides;

static bool _ConfigOverrides__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfigOverrides__ros_msg_type * ros_message = static_cast<const _ConfigOverrides__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: disable_auto_disarm
  {
    cdr << (ros_message->disable_auto_disarm ? true : false);
  }

  // Field name: defer_failsafes
  {
    cdr << (ros_message->defer_failsafes ? true : false);
  }

  // Field name: defer_failsafes_timeout_s
  {
    cdr << ros_message->defer_failsafes_timeout_s;
  }

  // Field name: source_type
  {
    cdr << ros_message->source_type;
  }

  // Field name: source_id
  {
    cdr << ros_message->source_id;
  }

  return true;
}

static bool _ConfigOverrides__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfigOverrides__ros_msg_type * ros_message = static_cast<_ConfigOverrides__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: disable_auto_disarm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disable_auto_disarm = tmp ? true : false;
  }

  // Field name: defer_failsafes
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->defer_failsafes = tmp ? true : false;
  }

  // Field name: defer_failsafes_timeout_s
  {
    cdr >> ros_message->defer_failsafes_timeout_s;
  }

  // Field name: source_type
  {
    cdr >> ros_message->source_type;
  }

  // Field name: source_id
  {
    cdr >> ros_message->source_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__ConfigOverrides(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfigOverrides__ros_msg_type * ros_message = static_cast<const _ConfigOverrides__ros_msg_type *>(untyped_ros_message);
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
  // field.name disable_auto_disarm
  {
    size_t item_size = sizeof(ros_message->disable_auto_disarm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name defer_failsafes
  {
    size_t item_size = sizeof(ros_message->defer_failsafes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name defer_failsafes_timeout_s
  {
    size_t item_size = sizeof(ros_message->defer_failsafes_timeout_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name source_type
  {
    size_t item_size = sizeof(ros_message->source_type);
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

static uint32_t _ConfigOverrides__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__ConfigOverrides(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__ConfigOverrides(
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
  // member: disable_auto_disarm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: defer_failsafes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: defer_failsafes_timeout_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: source_type
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
    using DataType = px4_msgs__msg__ConfigOverrides;
    is_plain =
      (
      offsetof(DataType, source_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ConfigOverrides__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__ConfigOverrides(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ConfigOverrides = {
  "px4_msgs::msg",
  "ConfigOverrides",
  _ConfigOverrides__cdr_serialize,
  _ConfigOverrides__cdr_deserialize,
  _ConfigOverrides__get_serialized_size,
  _ConfigOverrides__max_serialized_size
};

static rosidl_message_type_support_t _ConfigOverrides__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfigOverrides,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, ConfigOverrides)() {
  return &_ConfigOverrides__type_support;
}

#if defined(__cplusplus)
}
#endif
