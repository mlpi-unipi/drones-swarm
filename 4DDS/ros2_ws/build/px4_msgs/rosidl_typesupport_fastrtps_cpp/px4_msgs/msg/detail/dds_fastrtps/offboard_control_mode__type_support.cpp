// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/OffboardControlMode.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/offboard_control_mode__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/offboard_control_mode__struct.hpp"

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
  const px4_msgs::msg::OffboardControlMode & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: position
  cdr << (ros_message.position ? true : false);
  // Member: velocity
  cdr << (ros_message.velocity ? true : false);
  // Member: acceleration
  cdr << (ros_message.acceleration ? true : false);
  // Member: attitude
  cdr << (ros_message.attitude ? true : false);
  // Member: body_rate
  cdr << (ros_message.body_rate ? true : false);
  // Member: thrust_and_torque
  cdr << (ros_message.thrust_and_torque ? true : false);
  // Member: direct_actuator
  cdr << (ros_message.direct_actuator ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::OffboardControlMode & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.position = tmp ? true : false;
  }

  // Member: velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.velocity = tmp ? true : false;
  }

  // Member: acceleration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.acceleration = tmp ? true : false;
  }

  // Member: attitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.attitude = tmp ? true : false;
  }

  // Member: body_rate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.body_rate = tmp ? true : false;
  }

  // Member: thrust_and_torque
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.thrust_and_torque = tmp ? true : false;
  }

  // Member: direct_actuator
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.direct_actuator = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::OffboardControlMode & ros_message,
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
  // Member: position
  {
    size_t item_size = sizeof(ros_message.position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity
  {
    size_t item_size = sizeof(ros_message.velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acceleration
  {
    size_t item_size = sizeof(ros_message.acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attitude
  {
    size_t item_size = sizeof(ros_message.attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: body_rate
  {
    size_t item_size = sizeof(ros_message.body_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thrust_and_torque
  {
    size_t item_size = sizeof(ros_message.thrust_and_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direct_actuator
  {
    size_t item_size = sizeof(ros_message.direct_actuator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_OffboardControlMode(
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

  // Member: position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: body_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: thrust_and_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: direct_actuator
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
    using DataType = px4_msgs::msg::OffboardControlMode;
    is_plain =
      (
      offsetof(DataType, direct_actuator) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _OffboardControlMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::OffboardControlMode *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OffboardControlMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::OffboardControlMode *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OffboardControlMode__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::OffboardControlMode *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OffboardControlMode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OffboardControlMode(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OffboardControlMode__callbacks = {
  "px4_msgs::msg",
  "OffboardControlMode",
  _OffboardControlMode__cdr_serialize,
  _OffboardControlMode__cdr_deserialize,
  _OffboardControlMode__get_serialized_size,
  _OffboardControlMode__max_serialized_size
};

static rosidl_message_type_support_t _OffboardControlMode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OffboardControlMode__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::OffboardControlMode>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_OffboardControlMode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, OffboardControlMode)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_OffboardControlMode__handle;
}

#ifdef __cplusplus
}
#endif
