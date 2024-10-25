// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/UavcanParameterValue.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/uavcan_parameter_value__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/uavcan_parameter_value__struct.h"
#include "px4_msgs/msg/detail/uavcan_parameter_value__functions.h"
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


using _UavcanParameterValue__ros_msg_type = px4_msgs__msg__UavcanParameterValue;

static bool _UavcanParameterValue__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UavcanParameterValue__ros_msg_type * ros_message = static_cast<const _UavcanParameterValue__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: node_id
  {
    cdr << ros_message->node_id;
  }

  // Field name: param_id
  {
    size_t size = 17;
    auto array_ptr = ros_message->param_id;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: param_index
  {
    cdr << ros_message->param_index;
  }

  // Field name: param_count
  {
    cdr << ros_message->param_count;
  }

  // Field name: param_type
  {
    cdr << ros_message->param_type;
  }

  // Field name: int_value
  {
    cdr << ros_message->int_value;
  }

  // Field name: real_value
  {
    cdr << ros_message->real_value;
  }

  return true;
}

static bool _UavcanParameterValue__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UavcanParameterValue__ros_msg_type * ros_message = static_cast<_UavcanParameterValue__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: node_id
  {
    cdr >> ros_message->node_id;
  }

  // Field name: param_id
  {
    size_t size = 17;
    auto array_ptr = ros_message->param_id;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: param_index
  {
    cdr >> ros_message->param_index;
  }

  // Field name: param_count
  {
    cdr >> ros_message->param_count;
  }

  // Field name: param_type
  {
    cdr >> ros_message->param_type;
  }

  // Field name: int_value
  {
    cdr >> ros_message->int_value;
  }

  // Field name: real_value
  {
    cdr >> ros_message->real_value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__UavcanParameterValue(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UavcanParameterValue__ros_msg_type * ros_message = static_cast<const _UavcanParameterValue__ros_msg_type *>(untyped_ros_message);
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
  // field.name node_id
  {
    size_t item_size = sizeof(ros_message->node_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param_id
  {
    size_t array_size = 17;
    auto array_ptr = ros_message->param_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param_index
  {
    size_t item_size = sizeof(ros_message->param_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param_count
  {
    size_t item_size = sizeof(ros_message->param_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param_type
  {
    size_t item_size = sizeof(ros_message->param_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int_value
  {
    size_t item_size = sizeof(ros_message->int_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name real_value
  {
    size_t item_size = sizeof(ros_message->real_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UavcanParameterValue__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__UavcanParameterValue(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__UavcanParameterValue(
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
  // member: node_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: param_id
  {
    size_t array_size = 17;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: param_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: param_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: param_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: real_value
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
    using DataType = px4_msgs__msg__UavcanParameterValue;
    is_plain =
      (
      offsetof(DataType, real_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _UavcanParameterValue__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__UavcanParameterValue(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UavcanParameterValue = {
  "px4_msgs::msg",
  "UavcanParameterValue",
  _UavcanParameterValue__cdr_serialize,
  _UavcanParameterValue__cdr_deserialize,
  _UavcanParameterValue__get_serialized_size,
  _UavcanParameterValue__max_serialized_size
};

static rosidl_message_type_support_t _UavcanParameterValue__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UavcanParameterValue,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, UavcanParameterValue)() {
  return &_UavcanParameterValue__type_support;
}

#if defined(__cplusplus)
}
#endif
