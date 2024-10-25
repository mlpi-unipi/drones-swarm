// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/IridiumsbdStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/iridiumsbd_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/iridiumsbd_status__struct.h"
#include "px4_msgs/msg/detail/iridiumsbd_status__functions.h"
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


using _IridiumsbdStatus__ros_msg_type = px4_msgs__msg__IridiumsbdStatus;

static bool _IridiumsbdStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IridiumsbdStatus__ros_msg_type * ros_message = static_cast<const _IridiumsbdStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: last_heartbeat
  {
    cdr << ros_message->last_heartbeat;
  }

  // Field name: tx_buf_write_index
  {
    cdr << ros_message->tx_buf_write_index;
  }

  // Field name: rx_buf_read_index
  {
    cdr << ros_message->rx_buf_read_index;
  }

  // Field name: rx_buf_end_index
  {
    cdr << ros_message->rx_buf_end_index;
  }

  // Field name: failed_sbd_sessions
  {
    cdr << ros_message->failed_sbd_sessions;
  }

  // Field name: successful_sbd_sessions
  {
    cdr << ros_message->successful_sbd_sessions;
  }

  // Field name: num_tx_buf_reset
  {
    cdr << ros_message->num_tx_buf_reset;
  }

  // Field name: signal_quality
  {
    cdr << ros_message->signal_quality;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: ring_pending
  {
    cdr << (ros_message->ring_pending ? true : false);
  }

  // Field name: tx_buf_write_pending
  {
    cdr << (ros_message->tx_buf_write_pending ? true : false);
  }

  // Field name: tx_session_pending
  {
    cdr << (ros_message->tx_session_pending ? true : false);
  }

  // Field name: rx_read_pending
  {
    cdr << (ros_message->rx_read_pending ? true : false);
  }

  // Field name: rx_session_pending
  {
    cdr << (ros_message->rx_session_pending ? true : false);
  }

  return true;
}

static bool _IridiumsbdStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IridiumsbdStatus__ros_msg_type * ros_message = static_cast<_IridiumsbdStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: last_heartbeat
  {
    cdr >> ros_message->last_heartbeat;
  }

  // Field name: tx_buf_write_index
  {
    cdr >> ros_message->tx_buf_write_index;
  }

  // Field name: rx_buf_read_index
  {
    cdr >> ros_message->rx_buf_read_index;
  }

  // Field name: rx_buf_end_index
  {
    cdr >> ros_message->rx_buf_end_index;
  }

  // Field name: failed_sbd_sessions
  {
    cdr >> ros_message->failed_sbd_sessions;
  }

  // Field name: successful_sbd_sessions
  {
    cdr >> ros_message->successful_sbd_sessions;
  }

  // Field name: num_tx_buf_reset
  {
    cdr >> ros_message->num_tx_buf_reset;
  }

  // Field name: signal_quality
  {
    cdr >> ros_message->signal_quality;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: ring_pending
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ring_pending = tmp ? true : false;
  }

  // Field name: tx_buf_write_pending
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tx_buf_write_pending = tmp ? true : false;
  }

  // Field name: tx_session_pending
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tx_session_pending = tmp ? true : false;
  }

  // Field name: rx_read_pending
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rx_read_pending = tmp ? true : false;
  }

  // Field name: rx_session_pending
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rx_session_pending = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__IridiumsbdStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IridiumsbdStatus__ros_msg_type * ros_message = static_cast<const _IridiumsbdStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name last_heartbeat
  {
    size_t item_size = sizeof(ros_message->last_heartbeat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_buf_write_index
  {
    size_t item_size = sizeof(ros_message->tx_buf_write_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_buf_read_index
  {
    size_t item_size = sizeof(ros_message->rx_buf_read_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_buf_end_index
  {
    size_t item_size = sizeof(ros_message->rx_buf_end_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failed_sbd_sessions
  {
    size_t item_size = sizeof(ros_message->failed_sbd_sessions);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name successful_sbd_sessions
  {
    size_t item_size = sizeof(ros_message->successful_sbd_sessions);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_tx_buf_reset
  {
    size_t item_size = sizeof(ros_message->num_tx_buf_reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_quality
  {
    size_t item_size = sizeof(ros_message->signal_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ring_pending
  {
    size_t item_size = sizeof(ros_message->ring_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_buf_write_pending
  {
    size_t item_size = sizeof(ros_message->tx_buf_write_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_session_pending
  {
    size_t item_size = sizeof(ros_message->tx_session_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_read_pending
  {
    size_t item_size = sizeof(ros_message->rx_read_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_session_pending
  {
    size_t item_size = sizeof(ros_message->rx_session_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IridiumsbdStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__IridiumsbdStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__IridiumsbdStatus(
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
  // member: last_heartbeat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tx_buf_write_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rx_buf_read_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: rx_buf_end_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: failed_sbd_sessions
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: successful_sbd_sessions
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: num_tx_buf_reset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: signal_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ring_pending
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tx_buf_write_pending
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tx_session_pending
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rx_read_pending
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rx_session_pending
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
    using DataType = px4_msgs__msg__IridiumsbdStatus;
    is_plain =
      (
      offsetof(DataType, rx_session_pending) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _IridiumsbdStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__IridiumsbdStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IridiumsbdStatus = {
  "px4_msgs::msg",
  "IridiumsbdStatus",
  _IridiumsbdStatus__cdr_serialize,
  _IridiumsbdStatus__cdr_deserialize,
  _IridiumsbdStatus__get_serialized_size,
  _IridiumsbdStatus__max_serialized_size
};

static rosidl_message_type_support_t _IridiumsbdStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IridiumsbdStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, IridiumsbdStatus)() {
  return &_IridiumsbdStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
