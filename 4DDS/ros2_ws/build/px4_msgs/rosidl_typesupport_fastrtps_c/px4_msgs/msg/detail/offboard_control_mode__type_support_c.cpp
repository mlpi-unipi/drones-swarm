// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/OffboardControlMode.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/offboard_control_mode__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/offboard_control_mode__struct.h"
#include "px4_msgs/msg/detail/offboard_control_mode__functions.h"
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


using _OffboardControlMode__ros_msg_type = px4_msgs__msg__OffboardControlMode;

static bool _OffboardControlMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OffboardControlMode__ros_msg_type * ros_message = static_cast<const _OffboardControlMode__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: position
  {
    cdr << (ros_message->position ? true : false);
  }

  // Field name: velocity
  {
    cdr << (ros_message->velocity ? true : false);
  }

  // Field name: acceleration
  {
    cdr << (ros_message->acceleration ? true : false);
  }

  // Field name: attitude
  {
    cdr << (ros_message->attitude ? true : false);
  }

  // Field name: body_rate
  {
    cdr << (ros_message->body_rate ? true : false);
  }

  // Field name: thrust_and_torque
  {
    cdr << (ros_message->thrust_and_torque ? true : false);
  }

  // Field name: direct_actuator
  {
    cdr << (ros_message->direct_actuator ? true : false);
  }

  return true;
}

static bool _OffboardControlMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OffboardControlMode__ros_msg_type * ros_message = static_cast<_OffboardControlMode__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->position = tmp ? true : false;
  }

  // Field name: velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->velocity = tmp ? true : false;
  }

  // Field name: acceleration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->acceleration = tmp ? true : false;
  }

  // Field name: attitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->attitude = tmp ? true : false;
  }

  // Field name: body_rate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->body_rate = tmp ? true : false;
  }

  // Field name: thrust_and_torque
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->thrust_and_torque = tmp ? true : false;
  }

  // Field name: direct_actuator
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->direct_actuator = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__OffboardControlMode(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OffboardControlMode__ros_msg_type * ros_message = static_cast<const _OffboardControlMode__ros_msg_type *>(untyped_ros_message);
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
  // field.name position
  {
    size_t item_size = sizeof(ros_message->position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity
  {
    size_t item_size = sizeof(ros_message->velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attitude
  {
    size_t item_size = sizeof(ros_message->attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name body_rate
  {
    size_t item_size = sizeof(ros_message->body_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thrust_and_torque
  {
    size_t item_size = sizeof(ros_message->thrust_and_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direct_actuator
  {
    size_t item_size = sizeof(ros_message->direct_actuator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OffboardControlMode__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__OffboardControlMode(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__OffboardControlMode(
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
  // member: position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: body_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: thrust_and_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: direct_actuator
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
    using DataType = px4_msgs__msg__OffboardControlMode;
    is_plain =
      (
      offsetof(DataType, direct_actuator) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OffboardControlMode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__OffboardControlMode(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OffboardControlMode = {
  "px4_msgs::msg",
  "OffboardControlMode",
  _OffboardControlMode__cdr_serialize,
  _OffboardControlMode__cdr_deserialize,
  _OffboardControlMode__get_serialized_size,
  _OffboardControlMode__max_serialized_size
};

static rosidl_message_type_support_t _OffboardControlMode__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OffboardControlMode,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, OffboardControlMode)() {
  return &_OffboardControlMode__type_support;
}

#if defined(__cplusplus)
}
#endif
