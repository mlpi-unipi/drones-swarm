// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/SystemPower.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/system_power__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/system_power__struct.hpp"

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
  const px4_msgs::msg::SystemPower & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: voltage5v_v
  cdr << ros_message.voltage5v_v;
  // Member: sensors3v3
  {
    cdr << ros_message.sensors3v3;
  }
  // Member: sensors3v3_valid
  cdr << ros_message.sensors3v3_valid;
  // Member: usb_connected
  cdr << ros_message.usb_connected;
  // Member: brick_valid
  cdr << ros_message.brick_valid;
  // Member: usb_valid
  cdr << ros_message.usb_valid;
  // Member: servo_valid
  cdr << ros_message.servo_valid;
  // Member: periph_5v_oc
  cdr << ros_message.periph_5v_oc;
  // Member: hipower_5v_oc
  cdr << ros_message.hipower_5v_oc;
  // Member: comp_5v_valid
  cdr << ros_message.comp_5v_valid;
  // Member: can1_gps1_5v_valid
  cdr << ros_message.can1_gps1_5v_valid;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::SystemPower & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: voltage5v_v
  cdr >> ros_message.voltage5v_v;

  // Member: sensors3v3
  {
    cdr >> ros_message.sensors3v3;
  }

  // Member: sensors3v3_valid
  cdr >> ros_message.sensors3v3_valid;

  // Member: usb_connected
  cdr >> ros_message.usb_connected;

  // Member: brick_valid
  cdr >> ros_message.brick_valid;

  // Member: usb_valid
  cdr >> ros_message.usb_valid;

  // Member: servo_valid
  cdr >> ros_message.servo_valid;

  // Member: periph_5v_oc
  cdr >> ros_message.periph_5v_oc;

  // Member: hipower_5v_oc
  cdr >> ros_message.hipower_5v_oc;

  // Member: comp_5v_valid
  cdr >> ros_message.comp_5v_valid;

  // Member: can1_gps1_5v_valid
  cdr >> ros_message.can1_gps1_5v_valid;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::SystemPower & ros_message,
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
  // Member: voltage5v_v
  {
    size_t item_size = sizeof(ros_message.voltage5v_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensors3v3
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.sensors3v3[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensors3v3_valid
  {
    size_t item_size = sizeof(ros_message.sensors3v3_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: usb_connected
  {
    size_t item_size = sizeof(ros_message.usb_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brick_valid
  {
    size_t item_size = sizeof(ros_message.brick_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: usb_valid
  {
    size_t item_size = sizeof(ros_message.usb_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_valid
  {
    size_t item_size = sizeof(ros_message.servo_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: periph_5v_oc
  {
    size_t item_size = sizeof(ros_message.periph_5v_oc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hipower_5v_oc
  {
    size_t item_size = sizeof(ros_message.hipower_5v_oc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: comp_5v_valid
  {
    size_t item_size = sizeof(ros_message.comp_5v_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can1_gps1_5v_valid
  {
    size_t item_size = sizeof(ros_message.can1_gps1_5v_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_SystemPower(
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

  // Member: voltage5v_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sensors3v3
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sensors3v3_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: usb_connected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brick_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: usb_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: servo_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: periph_5v_oc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hipower_5v_oc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: comp_5v_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can1_gps1_5v_valid
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
    using DataType = px4_msgs::msg::SystemPower;
    is_plain =
      (
      offsetof(DataType, can1_gps1_5v_valid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SystemPower__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::SystemPower *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SystemPower__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::SystemPower *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SystemPower__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::SystemPower *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SystemPower__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SystemPower(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SystemPower__callbacks = {
  "px4_msgs::msg",
  "SystemPower",
  _SystemPower__cdr_serialize,
  _SystemPower__cdr_deserialize,
  _SystemPower__get_serialized_size,
  _SystemPower__max_serialized_size
};

static rosidl_message_type_support_t _SystemPower__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SystemPower__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::SystemPower>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_SystemPower__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, SystemPower)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_SystemPower__handle;
}

#ifdef __cplusplus
}
#endif
