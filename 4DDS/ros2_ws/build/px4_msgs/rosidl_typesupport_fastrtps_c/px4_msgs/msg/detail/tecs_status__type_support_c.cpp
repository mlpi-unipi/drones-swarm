// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/tecs_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/tecs_status__struct.h"
#include "px4_msgs/msg/detail/tecs_status__functions.h"
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


using _TecsStatus__ros_msg_type = px4_msgs__msg__TecsStatus;

static bool _TecsStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TecsStatus__ros_msg_type * ros_message = static_cast<const _TecsStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: altitude_sp
  {
    cdr << ros_message->altitude_sp;
  }

  // Field name: altitude_reference
  {
    cdr << ros_message->altitude_reference;
  }

  // Field name: height_rate_reference
  {
    cdr << ros_message->height_rate_reference;
  }

  // Field name: height_rate_direct
  {
    cdr << ros_message->height_rate_direct;
  }

  // Field name: height_rate_setpoint
  {
    cdr << ros_message->height_rate_setpoint;
  }

  // Field name: height_rate
  {
    cdr << ros_message->height_rate;
  }

  // Field name: equivalent_airspeed_sp
  {
    cdr << ros_message->equivalent_airspeed_sp;
  }

  // Field name: true_airspeed_sp
  {
    cdr << ros_message->true_airspeed_sp;
  }

  // Field name: true_airspeed_filtered
  {
    cdr << ros_message->true_airspeed_filtered;
  }

  // Field name: true_airspeed_derivative_sp
  {
    cdr << ros_message->true_airspeed_derivative_sp;
  }

  // Field name: true_airspeed_derivative
  {
    cdr << ros_message->true_airspeed_derivative;
  }

  // Field name: true_airspeed_derivative_raw
  {
    cdr << ros_message->true_airspeed_derivative_raw;
  }

  // Field name: total_energy_rate_sp
  {
    cdr << ros_message->total_energy_rate_sp;
  }

  // Field name: total_energy_rate
  {
    cdr << ros_message->total_energy_rate;
  }

  // Field name: total_energy_balance_rate_sp
  {
    cdr << ros_message->total_energy_balance_rate_sp;
  }

  // Field name: total_energy_balance_rate
  {
    cdr << ros_message->total_energy_balance_rate;
  }

  // Field name: throttle_integ
  {
    cdr << ros_message->throttle_integ;
  }

  // Field name: pitch_integ
  {
    cdr << ros_message->pitch_integ;
  }

  // Field name: throttle_sp
  {
    cdr << ros_message->throttle_sp;
  }

  // Field name: pitch_sp_rad
  {
    cdr << ros_message->pitch_sp_rad;
  }

  // Field name: throttle_trim
  {
    cdr << ros_message->throttle_trim;
  }

  // Field name: underspeed_ratio
  {
    cdr << ros_message->underspeed_ratio;
  }

  return true;
}

static bool _TecsStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TecsStatus__ros_msg_type * ros_message = static_cast<_TecsStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: altitude_sp
  {
    cdr >> ros_message->altitude_sp;
  }

  // Field name: altitude_reference
  {
    cdr >> ros_message->altitude_reference;
  }

  // Field name: height_rate_reference
  {
    cdr >> ros_message->height_rate_reference;
  }

  // Field name: height_rate_direct
  {
    cdr >> ros_message->height_rate_direct;
  }

  // Field name: height_rate_setpoint
  {
    cdr >> ros_message->height_rate_setpoint;
  }

  // Field name: height_rate
  {
    cdr >> ros_message->height_rate;
  }

  // Field name: equivalent_airspeed_sp
  {
    cdr >> ros_message->equivalent_airspeed_sp;
  }

  // Field name: true_airspeed_sp
  {
    cdr >> ros_message->true_airspeed_sp;
  }

  // Field name: true_airspeed_filtered
  {
    cdr >> ros_message->true_airspeed_filtered;
  }

  // Field name: true_airspeed_derivative_sp
  {
    cdr >> ros_message->true_airspeed_derivative_sp;
  }

  // Field name: true_airspeed_derivative
  {
    cdr >> ros_message->true_airspeed_derivative;
  }

  // Field name: true_airspeed_derivative_raw
  {
    cdr >> ros_message->true_airspeed_derivative_raw;
  }

  // Field name: total_energy_rate_sp
  {
    cdr >> ros_message->total_energy_rate_sp;
  }

  // Field name: total_energy_rate
  {
    cdr >> ros_message->total_energy_rate;
  }

  // Field name: total_energy_balance_rate_sp
  {
    cdr >> ros_message->total_energy_balance_rate_sp;
  }

  // Field name: total_energy_balance_rate
  {
    cdr >> ros_message->total_energy_balance_rate;
  }

  // Field name: throttle_integ
  {
    cdr >> ros_message->throttle_integ;
  }

  // Field name: pitch_integ
  {
    cdr >> ros_message->pitch_integ;
  }

  // Field name: throttle_sp
  {
    cdr >> ros_message->throttle_sp;
  }

  // Field name: pitch_sp_rad
  {
    cdr >> ros_message->pitch_sp_rad;
  }

  // Field name: throttle_trim
  {
    cdr >> ros_message->throttle_trim;
  }

  // Field name: underspeed_ratio
  {
    cdr >> ros_message->underspeed_ratio;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__TecsStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TecsStatus__ros_msg_type * ros_message = static_cast<const _TecsStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name altitude_sp
  {
    size_t item_size = sizeof(ros_message->altitude_sp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude_reference
  {
    size_t item_size = sizeof(ros_message->altitude_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_rate_reference
  {
    size_t item_size = sizeof(ros_message->height_rate_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_rate_direct
  {
    size_t item_size = sizeof(ros_message->height_rate_direct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_rate_setpoint
  {
    size_t item_size = sizeof(ros_message->height_rate_setpoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_rate
  {
    size_t item_size = sizeof(ros_message->height_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name equivalent_airspeed_sp
  {
    size_t item_size = sizeof(ros_message->equivalent_airspeed_sp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name true_airspeed_sp
  {
    size_t item_size = sizeof(ros_message->true_airspeed_sp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name true_airspeed_filtered
  {
    size_t item_size = sizeof(ros_message->true_airspeed_filtered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name true_airspeed_derivative_sp
  {
    size_t item_size = sizeof(ros_message->true_airspeed_derivative_sp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name true_airspeed_derivative
  {
    size_t item_size = sizeof(ros_message->true_airspeed_derivative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name true_airspeed_derivative_raw
  {
    size_t item_size = sizeof(ros_message->true_airspeed_derivative_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_energy_rate_sp
  {
    size_t item_size = sizeof(ros_message->total_energy_rate_sp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_energy_rate
  {
    size_t item_size = sizeof(ros_message->total_energy_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_energy_balance_rate_sp
  {
    size_t item_size = sizeof(ros_message->total_energy_balance_rate_sp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_energy_balance_rate
  {
    size_t item_size = sizeof(ros_message->total_energy_balance_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_integ
  {
    size_t item_size = sizeof(ros_message->throttle_integ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_integ
  {
    size_t item_size = sizeof(ros_message->pitch_integ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_sp
  {
    size_t item_size = sizeof(ros_message->throttle_sp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_sp_rad
  {
    size_t item_size = sizeof(ros_message->pitch_sp_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_trim
  {
    size_t item_size = sizeof(ros_message->throttle_trim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name underspeed_ratio
  {
    size_t item_size = sizeof(ros_message->underspeed_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TecsStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__TecsStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__TecsStatus(
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
  // member: altitude_sp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: altitude_reference
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height_rate_reference
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height_rate_direct
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height_rate_setpoint
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: equivalent_airspeed_sp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: true_airspeed_sp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: true_airspeed_filtered
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: true_airspeed_derivative_sp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: true_airspeed_derivative
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: true_airspeed_derivative_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_energy_rate_sp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_energy_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_energy_balance_rate_sp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_energy_balance_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_integ
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_integ
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_sp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_sp_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_trim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: underspeed_ratio
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
    using DataType = px4_msgs__msg__TecsStatus;
    is_plain =
      (
      offsetof(DataType, underspeed_ratio) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TecsStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__TecsStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TecsStatus = {
  "px4_msgs::msg",
  "TecsStatus",
  _TecsStatus__cdr_serialize,
  _TecsStatus__cdr_deserialize,
  _TecsStatus__get_serialized_size,
  _TecsStatus__max_serialized_size
};

static rosidl_message_type_support_t _TecsStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TecsStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, TecsStatus)() {
  return &_TecsStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
