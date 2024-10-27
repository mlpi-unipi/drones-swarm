// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fdds_messages:msg/GeoPing.idl
// generated code does not contain a copyright notice
#include "fdds_messages/msg/detail/geo_ping__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fdds_messages/msg/detail/geo_ping__struct.hpp"

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

namespace fdds_messages
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fdds_messages
cdr_serialize(
  const fdds_messages::msg::GeoPing & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: vehicle_id
  cdr << ros_message.vehicle_id;
  // Member: latitude_m
  cdr << ros_message.latitude_m;
  // Member: longitude_m
  cdr << ros_message.longitude_m;
  // Member: speed_north_m_s
  cdr << ros_message.speed_north_m_s;
  // Member: speed_east_m_s
  cdr << ros_message.speed_east_m_s;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fdds_messages
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fdds_messages::msg::GeoPing & ros_message)
{
  // Member: vehicle_id
  cdr >> ros_message.vehicle_id;

  // Member: latitude_m
  cdr >> ros_message.latitude_m;

  // Member: longitude_m
  cdr >> ros_message.longitude_m;

  // Member: speed_north_m_s
  cdr >> ros_message.speed_north_m_s;

  // Member: speed_east_m_s
  cdr >> ros_message.speed_east_m_s;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fdds_messages
get_serialized_size(
  const fdds_messages::msg::GeoPing & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: vehicle_id
  {
    size_t item_size = sizeof(ros_message.vehicle_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latitude_m
  {
    size_t item_size = sizeof(ros_message.latitude_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitude_m
  {
    size_t item_size = sizeof(ros_message.longitude_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_north_m_s
  {
    size_t item_size = sizeof(ros_message.speed_north_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_east_m_s
  {
    size_t item_size = sizeof(ros_message.speed_east_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fdds_messages
max_serialized_size_GeoPing(
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


  // Member: vehicle_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: latitude_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitude_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_north_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_east_m_s
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
    using DataType = fdds_messages::msg::GeoPing;
    is_plain =
      (
      offsetof(DataType, speed_east_m_s) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GeoPing__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fdds_messages::msg::GeoPing *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GeoPing__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fdds_messages::msg::GeoPing *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GeoPing__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fdds_messages::msg::GeoPing *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GeoPing__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GeoPing(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GeoPing__callbacks = {
  "fdds_messages::msg",
  "GeoPing",
  _GeoPing__cdr_serialize,
  _GeoPing__cdr_deserialize,
  _GeoPing__get_serialized_size,
  _GeoPing__max_serialized_size
};

static rosidl_message_type_support_t _GeoPing__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GeoPing__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fdds_messages

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fdds_messages
const rosidl_message_type_support_t *
get_message_type_support_handle<fdds_messages::msg::GeoPing>()
{
  return &fdds_messages::msg::typesupport_fastrtps_cpp::_GeoPing__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fdds_messages, msg, GeoPing)() {
  return &fdds_messages::msg::typesupport_fastrtps_cpp::_GeoPing__handle;
}

#ifdef __cplusplus
}
#endif
