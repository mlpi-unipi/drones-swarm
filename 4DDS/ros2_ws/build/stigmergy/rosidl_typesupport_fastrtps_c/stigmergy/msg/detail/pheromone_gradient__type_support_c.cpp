// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stigmergy:msg/PheromoneGradient.idl
// generated code does not contain a copyright notice
#include "stigmergy/msg/detail/pheromone_gradient__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stigmergy/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stigmergy/msg/detail/pheromone_gradient__struct.h"
#include "stigmergy/msg/detail/pheromone_gradient__functions.h"
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


using _PheromoneGradient__ros_msg_type = stigmergy__msg__PheromoneGradient;

static bool _PheromoneGradient__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PheromoneGradient__ros_msg_type * ros_message = static_cast<const _PheromoneGradient__ros_msg_type *>(untyped_ros_message);
  // Field name: dx
  {
    cdr << ros_message->dx;
  }

  // Field name: dy
  {
    cdr << ros_message->dy;
  }

  return true;
}

static bool _PheromoneGradient__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PheromoneGradient__ros_msg_type * ros_message = static_cast<_PheromoneGradient__ros_msg_type *>(untyped_ros_message);
  // Field name: dx
  {
    cdr >> ros_message->dx;
  }

  // Field name: dy
  {
    cdr >> ros_message->dy;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stigmergy
size_t get_serialized_size_stigmergy__msg__PheromoneGradient(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PheromoneGradient__ros_msg_type * ros_message = static_cast<const _PheromoneGradient__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name dx
  {
    size_t item_size = sizeof(ros_message->dx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dy
  {
    size_t item_size = sizeof(ros_message->dy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PheromoneGradient__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stigmergy__msg__PheromoneGradient(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stigmergy
size_t max_serialized_size_stigmergy__msg__PheromoneGradient(
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

  // member: dx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dy
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
    using DataType = stigmergy__msg__PheromoneGradient;
    is_plain =
      (
      offsetof(DataType, dy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PheromoneGradient__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_stigmergy__msg__PheromoneGradient(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PheromoneGradient = {
  "stigmergy::msg",
  "PheromoneGradient",
  _PheromoneGradient__cdr_serialize,
  _PheromoneGradient__cdr_deserialize,
  _PheromoneGradient__get_serialized_size,
  _PheromoneGradient__max_serialized_size
};

static rosidl_message_type_support_t _PheromoneGradient__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PheromoneGradient,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stigmergy, msg, PheromoneGradient)() {
  return &_PheromoneGradient__type_support;
}

#if defined(__cplusplus)
}
#endif
