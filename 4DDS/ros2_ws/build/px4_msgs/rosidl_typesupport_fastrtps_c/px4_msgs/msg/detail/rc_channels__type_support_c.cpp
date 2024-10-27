// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/RcChannels.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rc_channels__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/rc_channels__struct.h"
#include "px4_msgs/msg/detail/rc_channels__functions.h"
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


using _RcChannels__ros_msg_type = px4_msgs__msg__RcChannels;

static bool _RcChannels__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RcChannels__ros_msg_type * ros_message = static_cast<const _RcChannels__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_last_valid
  {
    cdr << ros_message->timestamp_last_valid;
  }

  // Field name: channels
  {
    size_t size = 18;
    auto array_ptr = ros_message->channels;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: channel_count
  {
    cdr << ros_message->channel_count;
  }

  // Field name: function
  {
    size_t size = 28;
    auto array_ptr = ros_message->function;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rssi
  {
    cdr << ros_message->rssi;
  }

  // Field name: signal_lost
  {
    cdr << (ros_message->signal_lost ? true : false);
  }

  // Field name: frame_drop_count
  {
    cdr << ros_message->frame_drop_count;
  }

  return true;
}

static bool _RcChannels__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RcChannels__ros_msg_type * ros_message = static_cast<_RcChannels__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_last_valid
  {
    cdr >> ros_message->timestamp_last_valid;
  }

  // Field name: channels
  {
    size_t size = 18;
    auto array_ptr = ros_message->channels;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: channel_count
  {
    cdr >> ros_message->channel_count;
  }

  // Field name: function
  {
    size_t size = 28;
    auto array_ptr = ros_message->function;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rssi
  {
    cdr >> ros_message->rssi;
  }

  // Field name: signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->signal_lost = tmp ? true : false;
  }

  // Field name: frame_drop_count
  {
    cdr >> ros_message->frame_drop_count;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__RcChannels(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RcChannels__ros_msg_type * ros_message = static_cast<const _RcChannels__ros_msg_type *>(untyped_ros_message);
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
  // field.name timestamp_last_valid
  {
    size_t item_size = sizeof(ros_message->timestamp_last_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name channels
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->channels;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name channel_count
  {
    size_t item_size = sizeof(ros_message->channel_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name function
  {
    size_t array_size = 28;
    auto array_ptr = ros_message->function;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rssi
  {
    size_t item_size = sizeof(ros_message->rssi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_lost
  {
    size_t item_size = sizeof(ros_message->signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frame_drop_count
  {
    size_t item_size = sizeof(ros_message->frame_drop_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RcChannels__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__RcChannels(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__RcChannels(
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
  // member: timestamp_last_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: channels
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: channel_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: function
  {
    size_t array_size = 28;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rssi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: frame_drop_count
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
    using DataType = px4_msgs__msg__RcChannels;
    is_plain =
      (
      offsetof(DataType, frame_drop_count) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RcChannels__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__RcChannels(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RcChannels = {
  "px4_msgs::msg",
  "RcChannels",
  _RcChannels__cdr_serialize,
  _RcChannels__cdr_deserialize,
  _RcChannels__get_serialized_size,
  _RcChannels__max_serialized_size
};

static rosidl_message_type_support_t _RcChannels__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RcChannels,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, RcChannels)() {
  return &_RcChannels__type_support;
}

#if defined(__cplusplus)
}
#endif
