// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/Ekf2Timestamps.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/ekf2_timestamps__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/ekf2_timestamps__struct.h"
#include "px4_msgs/msg/detail/ekf2_timestamps__functions.h"
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


using _Ekf2Timestamps__ros_msg_type = px4_msgs__msg__Ekf2Timestamps;

static bool _Ekf2Timestamps__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ekf2Timestamps__ros_msg_type * ros_message = static_cast<const _Ekf2Timestamps__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: airspeed_timestamp_rel
  {
    cdr << ros_message->airspeed_timestamp_rel;
  }

  // Field name: distance_sensor_timestamp_rel
  {
    cdr << ros_message->distance_sensor_timestamp_rel;
  }

  // Field name: optical_flow_timestamp_rel
  {
    cdr << ros_message->optical_flow_timestamp_rel;
  }

  // Field name: vehicle_air_data_timestamp_rel
  {
    cdr << ros_message->vehicle_air_data_timestamp_rel;
  }

  // Field name: vehicle_magnetometer_timestamp_rel
  {
    cdr << ros_message->vehicle_magnetometer_timestamp_rel;
  }

  // Field name: visual_odometry_timestamp_rel
  {
    cdr << ros_message->visual_odometry_timestamp_rel;
  }

  return true;
}

static bool _Ekf2Timestamps__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ekf2Timestamps__ros_msg_type * ros_message = static_cast<_Ekf2Timestamps__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: airspeed_timestamp_rel
  {
    cdr >> ros_message->airspeed_timestamp_rel;
  }

  // Field name: distance_sensor_timestamp_rel
  {
    cdr >> ros_message->distance_sensor_timestamp_rel;
  }

  // Field name: optical_flow_timestamp_rel
  {
    cdr >> ros_message->optical_flow_timestamp_rel;
  }

  // Field name: vehicle_air_data_timestamp_rel
  {
    cdr >> ros_message->vehicle_air_data_timestamp_rel;
  }

  // Field name: vehicle_magnetometer_timestamp_rel
  {
    cdr >> ros_message->vehicle_magnetometer_timestamp_rel;
  }

  // Field name: visual_odometry_timestamp_rel
  {
    cdr >> ros_message->visual_odometry_timestamp_rel;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__Ekf2Timestamps(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ekf2Timestamps__ros_msg_type * ros_message = static_cast<const _Ekf2Timestamps__ros_msg_type *>(untyped_ros_message);
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
  // field.name airspeed_timestamp_rel
  {
    size_t item_size = sizeof(ros_message->airspeed_timestamp_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_sensor_timestamp_rel
  {
    size_t item_size = sizeof(ros_message->distance_sensor_timestamp_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name optical_flow_timestamp_rel
  {
    size_t item_size = sizeof(ros_message->optical_flow_timestamp_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_air_data_timestamp_rel
  {
    size_t item_size = sizeof(ros_message->vehicle_air_data_timestamp_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_magnetometer_timestamp_rel
  {
    size_t item_size = sizeof(ros_message->vehicle_magnetometer_timestamp_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name visual_odometry_timestamp_rel
  {
    size_t item_size = sizeof(ros_message->visual_odometry_timestamp_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Ekf2Timestamps__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__Ekf2Timestamps(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__Ekf2Timestamps(
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
  // member: airspeed_timestamp_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: distance_sensor_timestamp_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: optical_flow_timestamp_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: vehicle_air_data_timestamp_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: vehicle_magnetometer_timestamp_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: visual_odometry_timestamp_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__Ekf2Timestamps;
    is_plain =
      (
      offsetof(DataType, visual_odometry_timestamp_rel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Ekf2Timestamps__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__Ekf2Timestamps(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Ekf2Timestamps = {
  "px4_msgs::msg",
  "Ekf2Timestamps",
  _Ekf2Timestamps__cdr_serialize,
  _Ekf2Timestamps__cdr_deserialize,
  _Ekf2Timestamps__get_serialized_size,
  _Ekf2Timestamps__max_serialized_size
};

static rosidl_message_type_support_t _Ekf2Timestamps__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ekf2Timestamps,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, Ekf2Timestamps)() {
  return &_Ekf2Timestamps__type_support;
}

#if defined(__cplusplus)
}
#endif
