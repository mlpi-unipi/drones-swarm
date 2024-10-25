// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from stigmergy:msg/PheromoneGradient.idl
// generated code does not contain a copyright notice
#include "stigmergy/msg/detail/pheromone_gradient__rosidl_typesupport_fastrtps_cpp.hpp"
#include "stigmergy/msg/detail/pheromone_gradient__struct.hpp"

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

namespace stigmergy
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stigmergy
cdr_serialize(
  const stigmergy::msg::PheromoneGradient & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dx
  cdr << ros_message.dx;
  // Member: dy
  cdr << ros_message.dy;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stigmergy
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  stigmergy::msg::PheromoneGradient & ros_message)
{
  // Member: dx
  cdr >> ros_message.dx;

  // Member: dy
  cdr >> ros_message.dy;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stigmergy
get_serialized_size(
  const stigmergy::msg::PheromoneGradient & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dx
  {
    size_t item_size = sizeof(ros_message.dx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dy
  {
    size_t item_size = sizeof(ros_message.dy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stigmergy
max_serialized_size_PheromoneGradient(
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


  // Member: dx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dy
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
    using DataType = stigmergy::msg::PheromoneGradient;
    is_plain =
      (
      offsetof(DataType, dy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PheromoneGradient__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const stigmergy::msg::PheromoneGradient *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PheromoneGradient__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<stigmergy::msg::PheromoneGradient *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PheromoneGradient__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const stigmergy::msg::PheromoneGradient *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PheromoneGradient__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PheromoneGradient(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PheromoneGradient__callbacks = {
  "stigmergy::msg",
  "PheromoneGradient",
  _PheromoneGradient__cdr_serialize,
  _PheromoneGradient__cdr_deserialize,
  _PheromoneGradient__get_serialized_size,
  _PheromoneGradient__max_serialized_size
};

static rosidl_message_type_support_t _PheromoneGradient__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PheromoneGradient__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace stigmergy

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_stigmergy
const rosidl_message_type_support_t *
get_message_type_support_handle<stigmergy::msg::PheromoneGradient>()
{
  return &stigmergy::msg::typesupport_fastrtps_cpp::_PheromoneGradient__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stigmergy, msg, PheromoneGradient)() {
  return &stigmergy::msg::typesupport_fastrtps_cpp::_PheromoneGradient__handle;
}

#ifdef __cplusplus
}
#endif
