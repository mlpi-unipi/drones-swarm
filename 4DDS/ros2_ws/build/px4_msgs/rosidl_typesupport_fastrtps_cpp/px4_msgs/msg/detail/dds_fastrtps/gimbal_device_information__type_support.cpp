// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/GimbalDeviceInformation.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/gimbal_device_information__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/gimbal_device_information__struct.hpp"

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
  const px4_msgs::msg::GimbalDeviceInformation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: vendor_name
  {
    cdr << ros_message.vendor_name;
  }
  // Member: model_name
  {
    cdr << ros_message.model_name;
  }
  // Member: custom_name
  {
    cdr << ros_message.custom_name;
  }
  // Member: firmware_version
  cdr << ros_message.firmware_version;
  // Member: hardware_version
  cdr << ros_message.hardware_version;
  // Member: uid
  cdr << ros_message.uid;
  // Member: cap_flags
  cdr << ros_message.cap_flags;
  // Member: custom_cap_flags
  cdr << ros_message.custom_cap_flags;
  // Member: roll_min
  cdr << ros_message.roll_min;
  // Member: roll_max
  cdr << ros_message.roll_max;
  // Member: pitch_min
  cdr << ros_message.pitch_min;
  // Member: pitch_max
  cdr << ros_message.pitch_max;
  // Member: yaw_min
  cdr << ros_message.yaw_min;
  // Member: yaw_max
  cdr << ros_message.yaw_max;
  // Member: gimbal_device_compid
  cdr << ros_message.gimbal_device_compid;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::GimbalDeviceInformation & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: vendor_name
  {
    cdr >> ros_message.vendor_name;
  }

  // Member: model_name
  {
    cdr >> ros_message.model_name;
  }

  // Member: custom_name
  {
    cdr >> ros_message.custom_name;
  }

  // Member: firmware_version
  cdr >> ros_message.firmware_version;

  // Member: hardware_version
  cdr >> ros_message.hardware_version;

  // Member: uid
  cdr >> ros_message.uid;

  // Member: cap_flags
  cdr >> ros_message.cap_flags;

  // Member: custom_cap_flags
  cdr >> ros_message.custom_cap_flags;

  // Member: roll_min
  cdr >> ros_message.roll_min;

  // Member: roll_max
  cdr >> ros_message.roll_max;

  // Member: pitch_min
  cdr >> ros_message.pitch_min;

  // Member: pitch_max
  cdr >> ros_message.pitch_max;

  // Member: yaw_min
  cdr >> ros_message.yaw_min;

  // Member: yaw_max
  cdr >> ros_message.yaw_max;

  // Member: gimbal_device_compid
  cdr >> ros_message.gimbal_device_compid;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::GimbalDeviceInformation & ros_message,
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
  // Member: vendor_name
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.vendor_name[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: model_name
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.model_name[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: custom_name
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.custom_name[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: firmware_version
  {
    size_t item_size = sizeof(ros_message.firmware_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hardware_version
  {
    size_t item_size = sizeof(ros_message.hardware_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uid
  {
    size_t item_size = sizeof(ros_message.uid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cap_flags
  {
    size_t item_size = sizeof(ros_message.cap_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: custom_cap_flags
  {
    size_t item_size = sizeof(ros_message.custom_cap_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_min
  {
    size_t item_size = sizeof(ros_message.roll_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_max
  {
    size_t item_size = sizeof(ros_message.roll_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_min
  {
    size_t item_size = sizeof(ros_message.pitch_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_max
  {
    size_t item_size = sizeof(ros_message.pitch_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_min
  {
    size_t item_size = sizeof(ros_message.yaw_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_max
  {
    size_t item_size = sizeof(ros_message.yaw_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gimbal_device_compid
  {
    size_t item_size = sizeof(ros_message.gimbal_device_compid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_GimbalDeviceInformation(
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

  // Member: vendor_name
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: model_name
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: custom_name
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: firmware_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hardware_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: uid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cap_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: custom_cap_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: roll_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gimbal_device_compid
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
    using DataType = px4_msgs::msg::GimbalDeviceInformation;
    is_plain =
      (
      offsetof(DataType, gimbal_device_compid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GimbalDeviceInformation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::GimbalDeviceInformation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GimbalDeviceInformation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::GimbalDeviceInformation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GimbalDeviceInformation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::GimbalDeviceInformation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GimbalDeviceInformation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GimbalDeviceInformation(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GimbalDeviceInformation__callbacks = {
  "px4_msgs::msg",
  "GimbalDeviceInformation",
  _GimbalDeviceInformation__cdr_serialize,
  _GimbalDeviceInformation__cdr_deserialize,
  _GimbalDeviceInformation__get_serialized_size,
  _GimbalDeviceInformation__max_serialized_size
};

static rosidl_message_type_support_t _GimbalDeviceInformation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GimbalDeviceInformation__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::GimbalDeviceInformation>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_GimbalDeviceInformation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, GimbalDeviceInformation)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_GimbalDeviceInformation__handle;
}

#ifdef __cplusplus
}
#endif
