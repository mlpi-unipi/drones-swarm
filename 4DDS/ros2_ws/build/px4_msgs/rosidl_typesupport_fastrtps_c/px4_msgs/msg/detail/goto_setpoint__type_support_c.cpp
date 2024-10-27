// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/GotoSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/goto_setpoint__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/goto_setpoint__struct.h"
#include "px4_msgs/msg/detail/goto_setpoint__functions.h"
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


using _GotoSetpoint__ros_msg_type = px4_msgs__msg__GotoSetpoint;

static bool _GotoSetpoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GotoSetpoint__ros_msg_type * ros_message = static_cast<const _GotoSetpoint__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: position
  {
    size_t size = 3;
    auto array_ptr = ros_message->position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: flag_control_heading
  {
    cdr << (ros_message->flag_control_heading ? true : false);
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: flag_set_max_horizontal_speed
  {
    cdr << (ros_message->flag_set_max_horizontal_speed ? true : false);
  }

  // Field name: max_horizontal_speed
  {
    cdr << ros_message->max_horizontal_speed;
  }

  // Field name: flag_set_max_vertical_speed
  {
    cdr << (ros_message->flag_set_max_vertical_speed ? true : false);
  }

  // Field name: max_vertical_speed
  {
    cdr << ros_message->max_vertical_speed;
  }

  // Field name: flag_set_max_heading_rate
  {
    cdr << (ros_message->flag_set_max_heading_rate ? true : false);
  }

  // Field name: max_heading_rate
  {
    cdr << ros_message->max_heading_rate;
  }

  return true;
}

static bool _GotoSetpoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GotoSetpoint__ros_msg_type * ros_message = static_cast<_GotoSetpoint__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: position
  {
    size_t size = 3;
    auto array_ptr = ros_message->position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: flag_control_heading
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_control_heading = tmp ? true : false;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: flag_set_max_horizontal_speed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_set_max_horizontal_speed = tmp ? true : false;
  }

  // Field name: max_horizontal_speed
  {
    cdr >> ros_message->max_horizontal_speed;
  }

  // Field name: flag_set_max_vertical_speed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_set_max_vertical_speed = tmp ? true : false;
  }

  // Field name: max_vertical_speed
  {
    cdr >> ros_message->max_vertical_speed;
  }

  // Field name: flag_set_max_heading_rate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flag_set_max_heading_rate = tmp ? true : false;
  }

  // Field name: max_heading_rate
  {
    cdr >> ros_message->max_heading_rate;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__GotoSetpoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GotoSetpoint__ros_msg_type * ros_message = static_cast<const _GotoSetpoint__ros_msg_type *>(untyped_ros_message);
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
    size_t array_size = 3;
    auto array_ptr = ros_message->position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_control_heading
  {
    size_t item_size = sizeof(ros_message->flag_control_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_set_max_horizontal_speed
  {
    size_t item_size = sizeof(ros_message->flag_set_max_horizontal_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_horizontal_speed
  {
    size_t item_size = sizeof(ros_message->max_horizontal_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_set_max_vertical_speed
  {
    size_t item_size = sizeof(ros_message->flag_set_max_vertical_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_vertical_speed
  {
    size_t item_size = sizeof(ros_message->max_vertical_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flag_set_max_heading_rate
  {
    size_t item_size = sizeof(ros_message->flag_set_max_heading_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_heading_rate
  {
    size_t item_size = sizeof(ros_message->max_heading_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GotoSetpoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__GotoSetpoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__GotoSetpoint(
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
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flag_control_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flag_set_max_horizontal_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_horizontal_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flag_set_max_vertical_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_vertical_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flag_set_max_heading_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_heading_rate
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
    using DataType = px4_msgs__msg__GotoSetpoint;
    is_plain =
      (
      offsetof(DataType, max_heading_rate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GotoSetpoint__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__GotoSetpoint(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GotoSetpoint = {
  "px4_msgs::msg",
  "GotoSetpoint",
  _GotoSetpoint__cdr_serialize,
  _GotoSetpoint__cdr_deserialize,
  _GotoSetpoint__get_serialized_size,
  _GotoSetpoint__max_serialized_size
};

static rosidl_message_type_support_t _GotoSetpoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GotoSetpoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, GotoSetpoint)() {
  return &_GotoSetpoint__type_support;
}

#if defined(__cplusplus)
}
#endif
