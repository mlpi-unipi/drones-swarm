// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/IridiumsbdStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/iridiumsbd_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/iridiumsbd_status__struct.hpp"

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
  const px4_msgs::msg::IridiumsbdStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: last_heartbeat
  cdr << ros_message.last_heartbeat;
  // Member: tx_buf_write_index
  cdr << ros_message.tx_buf_write_index;
  // Member: rx_buf_read_index
  cdr << ros_message.rx_buf_read_index;
  // Member: rx_buf_end_index
  cdr << ros_message.rx_buf_end_index;
  // Member: failed_sbd_sessions
  cdr << ros_message.failed_sbd_sessions;
  // Member: successful_sbd_sessions
  cdr << ros_message.successful_sbd_sessions;
  // Member: num_tx_buf_reset
  cdr << ros_message.num_tx_buf_reset;
  // Member: signal_quality
  cdr << ros_message.signal_quality;
  // Member: state
  cdr << ros_message.state;
  // Member: ring_pending
  cdr << (ros_message.ring_pending ? true : false);
  // Member: tx_buf_write_pending
  cdr << (ros_message.tx_buf_write_pending ? true : false);
  // Member: tx_session_pending
  cdr << (ros_message.tx_session_pending ? true : false);
  // Member: rx_read_pending
  cdr << (ros_message.rx_read_pending ? true : false);
  // Member: rx_session_pending
  cdr << (ros_message.rx_session_pending ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::IridiumsbdStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: last_heartbeat
  cdr >> ros_message.last_heartbeat;

  // Member: tx_buf_write_index
  cdr >> ros_message.tx_buf_write_index;

  // Member: rx_buf_read_index
  cdr >> ros_message.rx_buf_read_index;

  // Member: rx_buf_end_index
  cdr >> ros_message.rx_buf_end_index;

  // Member: failed_sbd_sessions
  cdr >> ros_message.failed_sbd_sessions;

  // Member: successful_sbd_sessions
  cdr >> ros_message.successful_sbd_sessions;

  // Member: num_tx_buf_reset
  cdr >> ros_message.num_tx_buf_reset;

  // Member: signal_quality
  cdr >> ros_message.signal_quality;

  // Member: state
  cdr >> ros_message.state;

  // Member: ring_pending
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ring_pending = tmp ? true : false;
  }

  // Member: tx_buf_write_pending
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tx_buf_write_pending = tmp ? true : false;
  }

  // Member: tx_session_pending
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tx_session_pending = tmp ? true : false;
  }

  // Member: rx_read_pending
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rx_read_pending = tmp ? true : false;
  }

  // Member: rx_session_pending
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rx_session_pending = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::IridiumsbdStatus & ros_message,
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
  // Member: last_heartbeat
  {
    size_t item_size = sizeof(ros_message.last_heartbeat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tx_buf_write_index
  {
    size_t item_size = sizeof(ros_message.tx_buf_write_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_buf_read_index
  {
    size_t item_size = sizeof(ros_message.rx_buf_read_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_buf_end_index
  {
    size_t item_size = sizeof(ros_message.rx_buf_end_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failed_sbd_sessions
  {
    size_t item_size = sizeof(ros_message.failed_sbd_sessions);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: successful_sbd_sessions
  {
    size_t item_size = sizeof(ros_message.successful_sbd_sessions);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_tx_buf_reset
  {
    size_t item_size = sizeof(ros_message.num_tx_buf_reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_quality
  {
    size_t item_size = sizeof(ros_message.signal_quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ring_pending
  {
    size_t item_size = sizeof(ros_message.ring_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tx_buf_write_pending
  {
    size_t item_size = sizeof(ros_message.tx_buf_write_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tx_session_pending
  {
    size_t item_size = sizeof(ros_message.tx_session_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_read_pending
  {
    size_t item_size = sizeof(ros_message.rx_read_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_session_pending
  {
    size_t item_size = sizeof(ros_message.rx_session_pending);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_IridiumsbdStatus(
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

  // Member: last_heartbeat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tx_buf_write_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: rx_buf_read_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: rx_buf_end_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: failed_sbd_sessions
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: successful_sbd_sessions
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: num_tx_buf_reset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: signal_quality
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ring_pending
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tx_buf_write_pending
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tx_session_pending
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rx_read_pending
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rx_session_pending
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
    using DataType = px4_msgs::msg::IridiumsbdStatus;
    is_plain =
      (
      offsetof(DataType, rx_session_pending) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IridiumsbdStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::IridiumsbdStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IridiumsbdStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::IridiumsbdStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IridiumsbdStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::IridiumsbdStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IridiumsbdStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IridiumsbdStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IridiumsbdStatus__callbacks = {
  "px4_msgs::msg",
  "IridiumsbdStatus",
  _IridiumsbdStatus__cdr_serialize,
  _IridiumsbdStatus__cdr_deserialize,
  _IridiumsbdStatus__get_serialized_size,
  _IridiumsbdStatus__max_serialized_size
};

static rosidl_message_type_support_t _IridiumsbdStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IridiumsbdStatus__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::IridiumsbdStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_IridiumsbdStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, IridiumsbdStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_IridiumsbdStatus__handle;
}

#ifdef __cplusplus
}
#endif
