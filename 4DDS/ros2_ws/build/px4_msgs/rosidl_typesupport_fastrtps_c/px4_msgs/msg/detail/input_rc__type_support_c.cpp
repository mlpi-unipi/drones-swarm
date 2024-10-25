// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/InputRc.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/input_rc__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/input_rc__struct.h"
#include "px4_msgs/msg/detail/input_rc__functions.h"
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


using _InputRc__ros_msg_type = px4_msgs__msg__InputRc;

static bool _InputRc__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InputRc__ros_msg_type * ros_message = static_cast<const _InputRc__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_last_signal
  {
    cdr << ros_message->timestamp_last_signal;
  }

  // Field name: channel_count
  {
    cdr << ros_message->channel_count;
  }

  // Field name: rssi
  {
    cdr << ros_message->rssi;
  }

  // Field name: rc_failsafe
  {
    cdr << (ros_message->rc_failsafe ? true : false);
  }

  // Field name: rc_lost
  {
    cdr << (ros_message->rc_lost ? true : false);
  }

  // Field name: rc_lost_frame_count
  {
    cdr << ros_message->rc_lost_frame_count;
  }

  // Field name: rc_total_frame_count
  {
    cdr << ros_message->rc_total_frame_count;
  }

  // Field name: rc_ppm_frame_length
  {
    cdr << ros_message->rc_ppm_frame_length;
  }

  // Field name: input_source
  {
    cdr << ros_message->input_source;
  }

  // Field name: values
  {
    size_t size = 18;
    auto array_ptr = ros_message->values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: link_quality
  {
    cdr << ros_message->link_quality;
  }

  // Field name: rssi_dbm
  {
    cdr << ros_message->rssi_dbm;
  }

  return true;
}

static bool _InputRc__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InputRc__ros_msg_type * ros_message = static_cast<_InputRc__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_last_signal
  {
    cdr >> ros_message->timestamp_last_signal;
  }

  // Field name: channel_count
  {
    cdr >> ros_message->channel_count;
  }

  // Field name: rssi
  {
    cdr >> ros_message->rssi;
  }

  // Field name: rc_failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_failsafe = tmp ? true : false;
  }

  // Field name: rc_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_lost = tmp ? true : false;
  }

  // Field name: rc_lost_frame_count
  {
    cdr >> ros_message->rc_lost_frame_count;
  }

  // Field name: rc_total_frame_count
  {
    cdr >> ros_message->rc_total_frame_count;
  }

  // Field name: rc_ppm_frame_length
  {
    cdr >> ros_message->rc_ppm_frame_length;
  }

  // Field name: input_source
  {
    cdr >> ros_message->input_source;
  }

  // Field name: values
  {
    size_t size = 18;
    auto array_ptr = ros_message->values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: link_quality
  {
    cdr >> ros_message->link_quality;
  }

  // Field name: rssi_dbm
  {
    cdr >> ros_message->rssi_dbm;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__InputRc(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InputRc__ros_msg_type * ros_message = static_cast<const _InputRc__ros_msg_type *>(untyped_ros_message);
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
  // field.name timestamp_last_signal
  {
    size_t item_size = sizeof(ros_message->timestamp_last_signal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name channel_count
  {
    size_t item_size = sizeof(ros_message->channel_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rssi
  {
    size_t item_size = sizeof(ros_message->rssi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_failsafe
  {
    size_t item_size = sizeof(ros_message->rc_failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_lost
  {
    size_t item_size = sizeof(ros_message->rc_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_lost_frame_count
  {
    size_t item_size = sizeof(ros_message->rc_lost_frame_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_total_frame_count
  {
    size_t item_size = sizeof(ros_message->rc_total_frame_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_ppm_frame_length
  {
    size_t item_size = sizeof(ros_message->rc_ppm_frame_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_source
  {
    size_t item_size = sizeof(ros_message->input_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name values
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_quality
  {
    size_t item_size = sizeof(ros_message->link_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rssi_dbm
  {
    size_t item_size = sizeof(ros_message->rssi_dbm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InputRc__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__InputRc(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__InputRc(
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
  // member: timestamp_last_signal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: channel_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rssi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rc_failsafe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_lost_frame_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rc_total_frame_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rc_ppm_frame_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: input_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: values
  {
    size_t array_size = 18;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: link_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rssi_dbm
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
    using DataType = px4_msgs__msg__InputRc;
    is_plain =
      (
      offsetof(DataType, rssi_dbm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _InputRc__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__InputRc(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InputRc = {
  "px4_msgs::msg",
  "InputRc",
  _InputRc__cdr_serialize,
  _InputRc__cdr_deserialize,
  _InputRc__get_serialized_size,
  _InputRc__max_serialized_size
};

static rosidl_message_type_support_t _InputRc__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InputRc,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, InputRc)() {
  return &_InputRc__type_support;
}

#if defined(__cplusplus)
}
#endif
