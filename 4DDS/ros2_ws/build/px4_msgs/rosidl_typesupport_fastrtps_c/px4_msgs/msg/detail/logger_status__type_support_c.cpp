// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/LoggerStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/logger_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/logger_status__struct.h"
#include "px4_msgs/msg/detail/logger_status__functions.h"
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


using _LoggerStatus__ros_msg_type = px4_msgs__msg__LoggerStatus;

static bool _LoggerStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LoggerStatus__ros_msg_type * ros_message = static_cast<const _LoggerStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: backend
  {
    cdr << ros_message->backend;
  }

  // Field name: total_written_kb
  {
    cdr << ros_message->total_written_kb;
  }

  // Field name: write_rate_kb_s
  {
    cdr << ros_message->write_rate_kb_s;
  }

  // Field name: dropouts
  {
    cdr << ros_message->dropouts;
  }

  // Field name: message_gaps
  {
    cdr << ros_message->message_gaps;
  }

  // Field name: buffer_used_bytes
  {
    cdr << ros_message->buffer_used_bytes;
  }

  // Field name: buffer_size_bytes
  {
    cdr << ros_message->buffer_size_bytes;
  }

  // Field name: num_messages
  {
    cdr << ros_message->num_messages;
  }

  return true;
}

static bool _LoggerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LoggerStatus__ros_msg_type * ros_message = static_cast<_LoggerStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: backend
  {
    cdr >> ros_message->backend;
  }

  // Field name: total_written_kb
  {
    cdr >> ros_message->total_written_kb;
  }

  // Field name: write_rate_kb_s
  {
    cdr >> ros_message->write_rate_kb_s;
  }

  // Field name: dropouts
  {
    cdr >> ros_message->dropouts;
  }

  // Field name: message_gaps
  {
    cdr >> ros_message->message_gaps;
  }

  // Field name: buffer_used_bytes
  {
    cdr >> ros_message->buffer_used_bytes;
  }

  // Field name: buffer_size_bytes
  {
    cdr >> ros_message->buffer_size_bytes;
  }

  // Field name: num_messages
  {
    cdr >> ros_message->num_messages;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__LoggerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoggerStatus__ros_msg_type * ros_message = static_cast<const _LoggerStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name backend
  {
    size_t item_size = sizeof(ros_message->backend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_written_kb
  {
    size_t item_size = sizeof(ros_message->total_written_kb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name write_rate_kb_s
  {
    size_t item_size = sizeof(ros_message->write_rate_kb_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dropouts
  {
    size_t item_size = sizeof(ros_message->dropouts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message_gaps
  {
    size_t item_size = sizeof(ros_message->message_gaps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name buffer_used_bytes
  {
    size_t item_size = sizeof(ros_message->buffer_used_bytes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name buffer_size_bytes
  {
    size_t item_size = sizeof(ros_message->buffer_size_bytes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_messages
  {
    size_t item_size = sizeof(ros_message->num_messages);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LoggerStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__LoggerStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__LoggerStatus(
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
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: backend
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: total_written_kb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: write_rate_kb_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dropouts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: message_gaps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: buffer_used_bytes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: buffer_size_bytes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_messages
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
    using DataType = px4_msgs__msg__LoggerStatus;
    is_plain =
      (
      offsetof(DataType, num_messages) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LoggerStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__LoggerStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoggerStatus = {
  "px4_msgs::msg",
  "LoggerStatus",
  _LoggerStatus__cdr_serialize,
  _LoggerStatus__cdr_deserialize,
  _LoggerStatus__get_serialized_size,
  _LoggerStatus__max_serialized_size
};

static rosidl_message_type_support_t _LoggerStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoggerStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, LoggerStatus)() {
  return &_LoggerStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
