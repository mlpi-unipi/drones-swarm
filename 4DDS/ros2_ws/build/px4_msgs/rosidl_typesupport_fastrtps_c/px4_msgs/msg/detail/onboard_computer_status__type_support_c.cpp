// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/OnboardComputerStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/onboard_computer_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/onboard_computer_status__struct.h"
#include "px4_msgs/msg/detail/onboard_computer_status__functions.h"
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


using _OnboardComputerStatus__ros_msg_type = px4_msgs__msg__OnboardComputerStatus;

static bool _OnboardComputerStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OnboardComputerStatus__ros_msg_type * ros_message = static_cast<const _OnboardComputerStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: uptime
  {
    cdr << ros_message->uptime;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: cpu_cores
  {
    size_t size = 8;
    auto array_ptr = ros_message->cpu_cores;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cpu_combined
  {
    size_t size = 10;
    auto array_ptr = ros_message->cpu_combined;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gpu_cores
  {
    size_t size = 4;
    auto array_ptr = ros_message->gpu_cores;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gpu_combined
  {
    size_t size = 10;
    auto array_ptr = ros_message->gpu_combined;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: temperature_board
  {
    cdr << ros_message->temperature_board;
  }

  // Field name: temperature_core
  {
    size_t size = 8;
    auto array_ptr = ros_message->temperature_core;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fan_speed
  {
    size_t size = 4;
    auto array_ptr = ros_message->fan_speed;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ram_usage
  {
    cdr << ros_message->ram_usage;
  }

  // Field name: ram_total
  {
    cdr << ros_message->ram_total;
  }

  // Field name: storage_type
  {
    size_t size = 4;
    auto array_ptr = ros_message->storage_type;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: storage_usage
  {
    size_t size = 4;
    auto array_ptr = ros_message->storage_usage;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: storage_total
  {
    size_t size = 4;
    auto array_ptr = ros_message->storage_total;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: link_type
  {
    size_t size = 6;
    auto array_ptr = ros_message->link_type;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: link_tx_rate
  {
    size_t size = 6;
    auto array_ptr = ros_message->link_tx_rate;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: link_rx_rate
  {
    size_t size = 6;
    auto array_ptr = ros_message->link_rx_rate;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: link_tx_max
  {
    size_t size = 6;
    auto array_ptr = ros_message->link_tx_max;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: link_rx_max
  {
    size_t size = 6;
    auto array_ptr = ros_message->link_rx_max;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _OnboardComputerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OnboardComputerStatus__ros_msg_type * ros_message = static_cast<_OnboardComputerStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: uptime
  {
    cdr >> ros_message->uptime;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: cpu_cores
  {
    size_t size = 8;
    auto array_ptr = ros_message->cpu_cores;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cpu_combined
  {
    size_t size = 10;
    auto array_ptr = ros_message->cpu_combined;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gpu_cores
  {
    size_t size = 4;
    auto array_ptr = ros_message->gpu_cores;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gpu_combined
  {
    size_t size = 10;
    auto array_ptr = ros_message->gpu_combined;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: temperature_board
  {
    cdr >> ros_message->temperature_board;
  }

  // Field name: temperature_core
  {
    size_t size = 8;
    auto array_ptr = ros_message->temperature_core;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: fan_speed
  {
    size_t size = 4;
    auto array_ptr = ros_message->fan_speed;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ram_usage
  {
    cdr >> ros_message->ram_usage;
  }

  // Field name: ram_total
  {
    cdr >> ros_message->ram_total;
  }

  // Field name: storage_type
  {
    size_t size = 4;
    auto array_ptr = ros_message->storage_type;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: storage_usage
  {
    size_t size = 4;
    auto array_ptr = ros_message->storage_usage;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: storage_total
  {
    size_t size = 4;
    auto array_ptr = ros_message->storage_total;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: link_type
  {
    size_t size = 6;
    auto array_ptr = ros_message->link_type;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: link_tx_rate
  {
    size_t size = 6;
    auto array_ptr = ros_message->link_tx_rate;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: link_rx_rate
  {
    size_t size = 6;
    auto array_ptr = ros_message->link_rx_rate;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: link_tx_max
  {
    size_t size = 6;
    auto array_ptr = ros_message->link_tx_max;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: link_rx_max
  {
    size_t size = 6;
    auto array_ptr = ros_message->link_rx_max;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__OnboardComputerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OnboardComputerStatus__ros_msg_type * ros_message = static_cast<const _OnboardComputerStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name uptime
  {
    size_t item_size = sizeof(ros_message->uptime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu_cores
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->cpu_cores;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cpu_combined
  {
    size_t array_size = 10;
    auto array_ptr = ros_message->cpu_combined;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gpu_cores
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->gpu_cores;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gpu_combined
  {
    size_t array_size = 10;
    auto array_ptr = ros_message->gpu_combined;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_board
  {
    size_t item_size = sizeof(ros_message->temperature_board);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_core
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->temperature_core;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fan_speed
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->fan_speed;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ram_usage
  {
    size_t item_size = sizeof(ros_message->ram_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ram_total
  {
    size_t item_size = sizeof(ros_message->ram_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name storage_type
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->storage_type;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name storage_usage
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->storage_usage;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name storage_total
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->storage_total;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_type
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->link_type;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_tx_rate
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->link_tx_rate;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_rx_rate
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->link_rx_rate;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_tx_max
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->link_tx_max;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_rx_max
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->link_rx_max;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OnboardComputerStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__OnboardComputerStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__OnboardComputerStatus(
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
  // member: uptime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cpu_cores
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cpu_combined
  {
    size_t array_size = 10;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gpu_cores
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gpu_combined
  {
    size_t array_size = 10;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temperature_board
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temperature_core
  {
    size_t array_size = 8;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fan_speed
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ram_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ram_total
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: storage_type
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: storage_usage
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: storage_total
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link_type
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link_tx_rate
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link_rx_rate
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link_tx_max
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link_rx_max
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__OnboardComputerStatus;
    is_plain =
      (
      offsetof(DataType, link_rx_max) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OnboardComputerStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__OnboardComputerStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OnboardComputerStatus = {
  "px4_msgs::msg",
  "OnboardComputerStatus",
  _OnboardComputerStatus__cdr_serialize,
  _OnboardComputerStatus__cdr_deserialize,
  _OnboardComputerStatus__get_serialized_size,
  _OnboardComputerStatus__max_serialized_size
};

static rosidl_message_type_support_t _OnboardComputerStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OnboardComputerStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, OnboardComputerStatus)() {
  return &_OnboardComputerStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
