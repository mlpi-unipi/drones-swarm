// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/SensorUwb.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_uwb__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/sensor_uwb__struct.h"
#include "px4_msgs/msg/detail/sensor_uwb__functions.h"
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


using _SensorUwb__ros_msg_type = px4_msgs__msg__SensorUwb;

static bool _SensorUwb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorUwb__ros_msg_type * ros_message = static_cast<const _SensorUwb__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: sessionid
  {
    cdr << ros_message->sessionid;
  }

  // Field name: time_offset
  {
    cdr << ros_message->time_offset;
  }

  // Field name: counter
  {
    cdr << ros_message->counter;
  }

  // Field name: mac
  {
    cdr << ros_message->mac;
  }

  // Field name: mac_dest
  {
    cdr << ros_message->mac_dest;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: nlos
  {
    cdr << ros_message->nlos;
  }

  // Field name: distance
  {
    cdr << ros_message->distance;
  }

  // Field name: aoa_azimuth_dev
  {
    cdr << ros_message->aoa_azimuth_dev;
  }

  // Field name: aoa_elevation_dev
  {
    cdr << ros_message->aoa_elevation_dev;
  }

  // Field name: aoa_azimuth_resp
  {
    cdr << ros_message->aoa_azimuth_resp;
  }

  // Field name: aoa_elevation_resp
  {
    cdr << ros_message->aoa_elevation_resp;
  }

  // Field name: aoa_azimuth_fom
  {
    cdr << ros_message->aoa_azimuth_fom;
  }

  // Field name: aoa_elevation_fom
  {
    cdr << ros_message->aoa_elevation_fom;
  }

  // Field name: aoa_dest_azimuth_fom
  {
    cdr << ros_message->aoa_dest_azimuth_fom;
  }

  // Field name: aoa_dest_elevation_fom
  {
    cdr << ros_message->aoa_dest_elevation_fom;
  }

  // Field name: orientation
  {
    cdr << ros_message->orientation;
  }

  // Field name: offset_x
  {
    cdr << ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr << ros_message->offset_y;
  }

  // Field name: offset_z
  {
    cdr << ros_message->offset_z;
  }

  return true;
}

static bool _SensorUwb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorUwb__ros_msg_type * ros_message = static_cast<_SensorUwb__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: sessionid
  {
    cdr >> ros_message->sessionid;
  }

  // Field name: time_offset
  {
    cdr >> ros_message->time_offset;
  }

  // Field name: counter
  {
    cdr >> ros_message->counter;
  }

  // Field name: mac
  {
    cdr >> ros_message->mac;
  }

  // Field name: mac_dest
  {
    cdr >> ros_message->mac_dest;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: nlos
  {
    cdr >> ros_message->nlos;
  }

  // Field name: distance
  {
    cdr >> ros_message->distance;
  }

  // Field name: aoa_azimuth_dev
  {
    cdr >> ros_message->aoa_azimuth_dev;
  }

  // Field name: aoa_elevation_dev
  {
    cdr >> ros_message->aoa_elevation_dev;
  }

  // Field name: aoa_azimuth_resp
  {
    cdr >> ros_message->aoa_azimuth_resp;
  }

  // Field name: aoa_elevation_resp
  {
    cdr >> ros_message->aoa_elevation_resp;
  }

  // Field name: aoa_azimuth_fom
  {
    cdr >> ros_message->aoa_azimuth_fom;
  }

  // Field name: aoa_elevation_fom
  {
    cdr >> ros_message->aoa_elevation_fom;
  }

  // Field name: aoa_dest_azimuth_fom
  {
    cdr >> ros_message->aoa_dest_azimuth_fom;
  }

  // Field name: aoa_dest_elevation_fom
  {
    cdr >> ros_message->aoa_dest_elevation_fom;
  }

  // Field name: orientation
  {
    cdr >> ros_message->orientation;
  }

  // Field name: offset_x
  {
    cdr >> ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr >> ros_message->offset_y;
  }

  // Field name: offset_z
  {
    cdr >> ros_message->offset_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__SensorUwb(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorUwb__ros_msg_type * ros_message = static_cast<const _SensorUwb__ros_msg_type *>(untyped_ros_message);
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
  // field.name sessionid
  {
    size_t item_size = sizeof(ros_message->sessionid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_offset
  {
    size_t item_size = sizeof(ros_message->time_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name counter
  {
    size_t item_size = sizeof(ros_message->counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mac
  {
    size_t item_size = sizeof(ros_message->mac);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mac_dest
  {
    size_t item_size = sizeof(ros_message->mac_dest);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nlos
  {
    size_t item_size = sizeof(ros_message->nlos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance
  {
    size_t item_size = sizeof(ros_message->distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aoa_azimuth_dev
  {
    size_t item_size = sizeof(ros_message->aoa_azimuth_dev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aoa_elevation_dev
  {
    size_t item_size = sizeof(ros_message->aoa_elevation_dev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aoa_azimuth_resp
  {
    size_t item_size = sizeof(ros_message->aoa_azimuth_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aoa_elevation_resp
  {
    size_t item_size = sizeof(ros_message->aoa_elevation_resp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aoa_azimuth_fom
  {
    size_t item_size = sizeof(ros_message->aoa_azimuth_fom);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aoa_elevation_fom
  {
    size_t item_size = sizeof(ros_message->aoa_elevation_fom);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aoa_dest_azimuth_fom
  {
    size_t item_size = sizeof(ros_message->aoa_dest_azimuth_fom);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aoa_dest_elevation_fom
  {
    size_t item_size = sizeof(ros_message->aoa_dest_elevation_fom);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orientation
  {
    size_t item_size = sizeof(ros_message->orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_x
  {
    size_t item_size = sizeof(ros_message->offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_y
  {
    size_t item_size = sizeof(ros_message->offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_z
  {
    size_t item_size = sizeof(ros_message->offset_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorUwb__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__SensorUwb(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__SensorUwb(
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
  // member: sessionid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mac
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mac_dest
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: nlos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aoa_azimuth_dev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aoa_elevation_dev
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aoa_azimuth_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aoa_elevation_resp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aoa_azimuth_fom
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aoa_elevation_fom
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aoa_dest_azimuth_fom
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aoa_dest_elevation_fom
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: orientation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: offset_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: offset_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: offset_z
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
    using DataType = px4_msgs__msg__SensorUwb;
    is_plain =
      (
      offsetof(DataType, offset_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorUwb__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__SensorUwb(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorUwb = {
  "px4_msgs::msg",
  "SensorUwb",
  _SensorUwb__cdr_serialize,
  _SensorUwb__cdr_deserialize,
  _SensorUwb__get_serialized_size,
  _SensorUwb__max_serialized_size
};

static rosidl_message_type_support_t _SensorUwb__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorUwb,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, SensorUwb)() {
  return &_SensorUwb__type_support;
}

#if defined(__cplusplus)
}
#endif
