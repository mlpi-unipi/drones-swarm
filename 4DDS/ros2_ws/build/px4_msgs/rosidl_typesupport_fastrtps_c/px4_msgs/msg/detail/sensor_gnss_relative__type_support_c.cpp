// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/SensorGnssRelative.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_gnss_relative__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/sensor_gnss_relative__struct.h"
#include "px4_msgs/msg/detail/sensor_gnss_relative__functions.h"
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


using _SensorGnssRelative__ros_msg_type = px4_msgs__msg__SensorGnssRelative;

static bool _SensorGnssRelative__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorGnssRelative__ros_msg_type * ros_message = static_cast<const _SensorGnssRelative__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: device_id
  {
    cdr << ros_message->device_id;
  }

  // Field name: time_utc_usec
  {
    cdr << ros_message->time_utc_usec;
  }

  // Field name: reference_station_id
  {
    cdr << ros_message->reference_station_id;
  }

  // Field name: position
  {
    size_t size = 3;
    auto array_ptr = ros_message->position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: position_accuracy
  {
    size_t size = 3;
    auto array_ptr = ros_message->position_accuracy;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: heading_accuracy
  {
    cdr << ros_message->heading_accuracy;
  }

  // Field name: position_length
  {
    cdr << ros_message->position_length;
  }

  // Field name: accuracy_length
  {
    cdr << ros_message->accuracy_length;
  }

  // Field name: gnss_fix_ok
  {
    cdr << (ros_message->gnss_fix_ok ? true : false);
  }

  // Field name: differential_solution
  {
    cdr << (ros_message->differential_solution ? true : false);
  }

  // Field name: relative_position_valid
  {
    cdr << (ros_message->relative_position_valid ? true : false);
  }

  // Field name: carrier_solution_floating
  {
    cdr << (ros_message->carrier_solution_floating ? true : false);
  }

  // Field name: carrier_solution_fixed
  {
    cdr << (ros_message->carrier_solution_fixed ? true : false);
  }

  // Field name: moving_base_mode
  {
    cdr << (ros_message->moving_base_mode ? true : false);
  }

  // Field name: reference_position_miss
  {
    cdr << (ros_message->reference_position_miss ? true : false);
  }

  // Field name: reference_observations_miss
  {
    cdr << (ros_message->reference_observations_miss ? true : false);
  }

  // Field name: heading_valid
  {
    cdr << (ros_message->heading_valid ? true : false);
  }

  // Field name: relative_position_normalized
  {
    cdr << (ros_message->relative_position_normalized ? true : false);
  }

  return true;
}

static bool _SensorGnssRelative__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorGnssRelative__ros_msg_type * ros_message = static_cast<_SensorGnssRelative__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: device_id
  {
    cdr >> ros_message->device_id;
  }

  // Field name: time_utc_usec
  {
    cdr >> ros_message->time_utc_usec;
  }

  // Field name: reference_station_id
  {
    cdr >> ros_message->reference_station_id;
  }

  // Field name: position
  {
    size_t size = 3;
    auto array_ptr = ros_message->position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: position_accuracy
  {
    size_t size = 3;
    auto array_ptr = ros_message->position_accuracy;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: heading_accuracy
  {
    cdr >> ros_message->heading_accuracy;
  }

  // Field name: position_length
  {
    cdr >> ros_message->position_length;
  }

  // Field name: accuracy_length
  {
    cdr >> ros_message->accuracy_length;
  }

  // Field name: gnss_fix_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gnss_fix_ok = tmp ? true : false;
  }

  // Field name: differential_solution
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->differential_solution = tmp ? true : false;
  }

  // Field name: relative_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->relative_position_valid = tmp ? true : false;
  }

  // Field name: carrier_solution_floating
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->carrier_solution_floating = tmp ? true : false;
  }

  // Field name: carrier_solution_fixed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->carrier_solution_fixed = tmp ? true : false;
  }

  // Field name: moving_base_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->moving_base_mode = tmp ? true : false;
  }

  // Field name: reference_position_miss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reference_position_miss = tmp ? true : false;
  }

  // Field name: reference_observations_miss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reference_observations_miss = tmp ? true : false;
  }

  // Field name: heading_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heading_valid = tmp ? true : false;
  }

  // Field name: relative_position_normalized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->relative_position_normalized = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__SensorGnssRelative(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorGnssRelative__ros_msg_type * ros_message = static_cast<const _SensorGnssRelative__ros_msg_type *>(untyped_ros_message);
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
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_utc_usec
  {
    size_t item_size = sizeof(ros_message->time_utc_usec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_station_id
  {
    size_t item_size = sizeof(ros_message->reference_station_id);
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
  // field.name position_accuracy
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->position_accuracy;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_accuracy
  {
    size_t item_size = sizeof(ros_message->heading_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_length
  {
    size_t item_size = sizeof(ros_message->position_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accuracy_length
  {
    size_t item_size = sizeof(ros_message->accuracy_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gnss_fix_ok
  {
    size_t item_size = sizeof(ros_message->gnss_fix_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name differential_solution
  {
    size_t item_size = sizeof(ros_message->differential_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_position_valid
  {
    size_t item_size = sizeof(ros_message->relative_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrier_solution_floating
  {
    size_t item_size = sizeof(ros_message->carrier_solution_floating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name carrier_solution_fixed
  {
    size_t item_size = sizeof(ros_message->carrier_solution_fixed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name moving_base_mode
  {
    size_t item_size = sizeof(ros_message->moving_base_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_position_miss
  {
    size_t item_size = sizeof(ros_message->reference_position_miss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_observations_miss
  {
    size_t item_size = sizeof(ros_message->reference_observations_miss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_valid
  {
    size_t item_size = sizeof(ros_message->heading_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_position_normalized
  {
    size_t item_size = sizeof(ros_message->relative_position_normalized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorGnssRelative__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__SensorGnssRelative(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__SensorGnssRelative(
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
  // member: timestamp_sample
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_utc_usec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reference_station_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: position
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_accuracy
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accuracy_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gnss_fix_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: differential_solution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: relative_position_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: carrier_solution_floating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: carrier_solution_fixed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: moving_base_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reference_position_miss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reference_observations_miss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heading_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: relative_position_normalized
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
    using DataType = px4_msgs__msg__SensorGnssRelative;
    is_plain =
      (
      offsetof(DataType, relative_position_normalized) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorGnssRelative__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__SensorGnssRelative(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorGnssRelative = {
  "px4_msgs::msg",
  "SensorGnssRelative",
  _SensorGnssRelative__cdr_serialize,
  _SensorGnssRelative__cdr_deserialize,
  _SensorGnssRelative__get_serialized_size,
  _SensorGnssRelative__max_serialized_size
};

static rosidl_message_type_support_t _SensorGnssRelative__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorGnssRelative,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, SensorGnssRelative)() {
  return &_SensorGnssRelative__type_support;
}

#if defined(__cplusplus)
}
#endif
