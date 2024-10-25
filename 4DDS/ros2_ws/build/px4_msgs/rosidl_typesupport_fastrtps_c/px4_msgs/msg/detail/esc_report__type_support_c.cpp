// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EscReport.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/esc_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/esc_report__struct.h"
#include "px4_msgs/msg/detail/esc_report__functions.h"
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


using _EscReport__ros_msg_type = px4_msgs__msg__EscReport;

static bool _EscReport__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EscReport__ros_msg_type * ros_message = static_cast<const _EscReport__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: esc_errorcount
  {
    cdr << ros_message->esc_errorcount;
  }

  // Field name: esc_rpm
  {
    cdr << ros_message->esc_rpm;
  }

  // Field name: esc_voltage
  {
    cdr << ros_message->esc_voltage;
  }

  // Field name: esc_current
  {
    cdr << ros_message->esc_current;
  }

  // Field name: esc_temperature
  {
    cdr << ros_message->esc_temperature;
  }

  // Field name: esc_address
  {
    cdr << ros_message->esc_address;
  }

  // Field name: esc_cmdcount
  {
    cdr << ros_message->esc_cmdcount;
  }

  // Field name: esc_state
  {
    cdr << ros_message->esc_state;
  }

  // Field name: actuator_function
  {
    cdr << ros_message->actuator_function;
  }

  // Field name: failures
  {
    cdr << ros_message->failures;
  }

  // Field name: esc_power
  {
    cdr << ros_message->esc_power;
  }

  return true;
}

static bool _EscReport__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EscReport__ros_msg_type * ros_message = static_cast<_EscReport__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: esc_errorcount
  {
    cdr >> ros_message->esc_errorcount;
  }

  // Field name: esc_rpm
  {
    cdr >> ros_message->esc_rpm;
  }

  // Field name: esc_voltage
  {
    cdr >> ros_message->esc_voltage;
  }

  // Field name: esc_current
  {
    cdr >> ros_message->esc_current;
  }

  // Field name: esc_temperature
  {
    cdr >> ros_message->esc_temperature;
  }

  // Field name: esc_address
  {
    cdr >> ros_message->esc_address;
  }

  // Field name: esc_cmdcount
  {
    cdr >> ros_message->esc_cmdcount;
  }

  // Field name: esc_state
  {
    cdr >> ros_message->esc_state;
  }

  // Field name: actuator_function
  {
    cdr >> ros_message->actuator_function;
  }

  // Field name: failures
  {
    cdr >> ros_message->failures;
  }

  // Field name: esc_power
  {
    cdr >> ros_message->esc_power;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EscReport(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EscReport__ros_msg_type * ros_message = static_cast<const _EscReport__ros_msg_type *>(untyped_ros_message);
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
  // field.name esc_errorcount
  {
    size_t item_size = sizeof(ros_message->esc_errorcount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_rpm
  {
    size_t item_size = sizeof(ros_message->esc_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_voltage
  {
    size_t item_size = sizeof(ros_message->esc_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_current
  {
    size_t item_size = sizeof(ros_message->esc_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_temperature
  {
    size_t item_size = sizeof(ros_message->esc_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_address
  {
    size_t item_size = sizeof(ros_message->esc_address);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_cmdcount
  {
    size_t item_size = sizeof(ros_message->esc_cmdcount);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_state
  {
    size_t item_size = sizeof(ros_message->esc_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actuator_function
  {
    size_t item_size = sizeof(ros_message->actuator_function);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failures
  {
    size_t item_size = sizeof(ros_message->failures);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_power
  {
    size_t item_size = sizeof(ros_message->esc_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EscReport__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EscReport(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EscReport(
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
  // member: esc_errorcount
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: esc_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: esc_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: esc_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: esc_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: esc_address
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: esc_cmdcount
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: esc_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: actuator_function
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: failures
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: esc_power
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
    using DataType = px4_msgs__msg__EscReport;
    is_plain =
      (
      offsetof(DataType, esc_power) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EscReport__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__EscReport(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EscReport = {
  "px4_msgs::msg",
  "EscReport",
  _EscReport__cdr_serialize,
  _EscReport__cdr_deserialize,
  _EscReport__get_serialized_size,
  _EscReport__max_serialized_size
};

static rosidl_message_type_support_t _EscReport__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EscReport,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EscReport)() {
  return &_EscReport__type_support;
}

#if defined(__cplusplus)
}
#endif
