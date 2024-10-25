// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/FailureDetectorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/failure_detector_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/failure_detector_status__struct.hpp"

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
  const px4_msgs::msg::FailureDetectorStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: fd_roll
  cdr << (ros_message.fd_roll ? true : false);
  // Member: fd_pitch
  cdr << (ros_message.fd_pitch ? true : false);
  // Member: fd_alt
  cdr << (ros_message.fd_alt ? true : false);
  // Member: fd_ext
  cdr << (ros_message.fd_ext ? true : false);
  // Member: fd_arm_escs
  cdr << (ros_message.fd_arm_escs ? true : false);
  // Member: fd_battery
  cdr << (ros_message.fd_battery ? true : false);
  // Member: fd_imbalanced_prop
  cdr << (ros_message.fd_imbalanced_prop ? true : false);
  // Member: fd_motor
  cdr << (ros_message.fd_motor ? true : false);
  // Member: imbalanced_prop_metric
  cdr << ros_message.imbalanced_prop_metric;
  // Member: motor_failure_mask
  cdr << ros_message.motor_failure_mask;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::FailureDetectorStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: fd_roll
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_roll = tmp ? true : false;
  }

  // Member: fd_pitch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_pitch = tmp ? true : false;
  }

  // Member: fd_alt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_alt = tmp ? true : false;
  }

  // Member: fd_ext
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_ext = tmp ? true : false;
  }

  // Member: fd_arm_escs
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_arm_escs = tmp ? true : false;
  }

  // Member: fd_battery
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_battery = tmp ? true : false;
  }

  // Member: fd_imbalanced_prop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_imbalanced_prop = tmp ? true : false;
  }

  // Member: fd_motor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fd_motor = tmp ? true : false;
  }

  // Member: imbalanced_prop_metric
  cdr >> ros_message.imbalanced_prop_metric;

  // Member: motor_failure_mask
  cdr >> ros_message.motor_failure_mask;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::FailureDetectorStatus & ros_message,
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
  // Member: fd_roll
  {
    size_t item_size = sizeof(ros_message.fd_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_pitch
  {
    size_t item_size = sizeof(ros_message.fd_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_alt
  {
    size_t item_size = sizeof(ros_message.fd_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_ext
  {
    size_t item_size = sizeof(ros_message.fd_ext);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_arm_escs
  {
    size_t item_size = sizeof(ros_message.fd_arm_escs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_battery
  {
    size_t item_size = sizeof(ros_message.fd_battery);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_imbalanced_prop
  {
    size_t item_size = sizeof(ros_message.fd_imbalanced_prop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fd_motor
  {
    size_t item_size = sizeof(ros_message.fd_motor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imbalanced_prop_metric
  {
    size_t item_size = sizeof(ros_message.imbalanced_prop_metric);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_failure_mask
  {
    size_t item_size = sizeof(ros_message.motor_failure_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_FailureDetectorStatus(
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

  // Member: fd_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_ext
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_arm_escs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_battery
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_imbalanced_prop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fd_motor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: imbalanced_prop_metric
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_failure_mask
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
    using DataType = px4_msgs::msg::FailureDetectorStatus;
    is_plain =
      (
      offsetof(DataType, motor_failure_mask) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _FailureDetectorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::FailureDetectorStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FailureDetectorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::FailureDetectorStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FailureDetectorStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::FailureDetectorStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FailureDetectorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FailureDetectorStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FailureDetectorStatus__callbacks = {
  "px4_msgs::msg",
  "FailureDetectorStatus",
  _FailureDetectorStatus__cdr_serialize,
  _FailureDetectorStatus__cdr_deserialize,
  _FailureDetectorStatus__get_serialized_size,
  _FailureDetectorStatus__max_serialized_size
};

static rosidl_message_type_support_t _FailureDetectorStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FailureDetectorStatus__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::FailureDetectorStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_FailureDetectorStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, FailureDetectorStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_FailureDetectorStatus__handle;
}

#ifdef __cplusplus
}
#endif
