// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_correction__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/sensor_correction__struct.h"
#include "px4_msgs/msg/detail/sensor_correction__functions.h"
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


using _SensorCorrection__ros_msg_type = px4_msgs__msg__SensorCorrection;

static bool _SensorCorrection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorCorrection__ros_msg_type * ros_message = static_cast<const _SensorCorrection__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: accel_device_ids
  {
    size_t size = 4;
    auto array_ptr = ros_message->accel_device_ids;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accel_temperature
  {
    size_t size = 4;
    auto array_ptr = ros_message->accel_temperature;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accel_offset_0
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_offset_0;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accel_offset_1
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_offset_1;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accel_offset_2
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_offset_2;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accel_offset_3
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_offset_3;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_device_ids
  {
    size_t size = 4;
    auto array_ptr = ros_message->gyro_device_ids;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_temperature
  {
    size_t size = 4;
    auto array_ptr = ros_message->gyro_temperature;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_offset_0
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_offset_0;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_offset_1
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_offset_1;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_offset_2
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_offset_2;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_offset_3
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_offset_3;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mag_device_ids
  {
    size_t size = 4;
    auto array_ptr = ros_message->mag_device_ids;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mag_temperature
  {
    size_t size = 4;
    auto array_ptr = ros_message->mag_temperature;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mag_offset_0
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_offset_0;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mag_offset_1
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_offset_1;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mag_offset_2
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_offset_2;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mag_offset_3
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_offset_3;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: baro_device_ids
  {
    size_t size = 4;
    auto array_ptr = ros_message->baro_device_ids;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: baro_temperature
  {
    size_t size = 4;
    auto array_ptr = ros_message->baro_temperature;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: baro_offset_0
  {
    cdr << ros_message->baro_offset_0;
  }

  // Field name: baro_offset_1
  {
    cdr << ros_message->baro_offset_1;
  }

  // Field name: baro_offset_2
  {
    cdr << ros_message->baro_offset_2;
  }

  // Field name: baro_offset_3
  {
    cdr << ros_message->baro_offset_3;
  }

  return true;
}

static bool _SensorCorrection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorCorrection__ros_msg_type * ros_message = static_cast<_SensorCorrection__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: accel_device_ids
  {
    size_t size = 4;
    auto array_ptr = ros_message->accel_device_ids;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accel_temperature
  {
    size_t size = 4;
    auto array_ptr = ros_message->accel_temperature;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accel_offset_0
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_offset_0;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accel_offset_1
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_offset_1;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accel_offset_2
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_offset_2;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accel_offset_3
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_offset_3;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_device_ids
  {
    size_t size = 4;
    auto array_ptr = ros_message->gyro_device_ids;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_temperature
  {
    size_t size = 4;
    auto array_ptr = ros_message->gyro_temperature;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_offset_0
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_offset_0;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_offset_1
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_offset_1;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_offset_2
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_offset_2;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_offset_3
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_offset_3;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mag_device_ids
  {
    size_t size = 4;
    auto array_ptr = ros_message->mag_device_ids;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mag_temperature
  {
    size_t size = 4;
    auto array_ptr = ros_message->mag_temperature;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mag_offset_0
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_offset_0;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mag_offset_1
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_offset_1;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mag_offset_2
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_offset_2;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mag_offset_3
  {
    size_t size = 3;
    auto array_ptr = ros_message->mag_offset_3;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: baro_device_ids
  {
    size_t size = 4;
    auto array_ptr = ros_message->baro_device_ids;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: baro_temperature
  {
    size_t size = 4;
    auto array_ptr = ros_message->baro_temperature;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: baro_offset_0
  {
    cdr >> ros_message->baro_offset_0;
  }

  // Field name: baro_offset_1
  {
    cdr >> ros_message->baro_offset_1;
  }

  // Field name: baro_offset_2
  {
    cdr >> ros_message->baro_offset_2;
  }

  // Field name: baro_offset_3
  {
    cdr >> ros_message->baro_offset_3;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__SensorCorrection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorCorrection__ros_msg_type * ros_message = static_cast<const _SensorCorrection__ros_msg_type *>(untyped_ros_message);
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
  // field.name accel_device_ids
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->accel_device_ids;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_temperature
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->accel_temperature;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_offset_0
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accel_offset_0;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_offset_1
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accel_offset_1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_offset_2
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accel_offset_2;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_offset_3
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accel_offset_3;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_device_ids
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->gyro_device_ids;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_temperature
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->gyro_temperature;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_offset_0
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyro_offset_0;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_offset_1
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyro_offset_1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_offset_2
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyro_offset_2;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_offset_3
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyro_offset_3;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_device_ids
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->mag_device_ids;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_temperature
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->mag_temperature;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_offset_0
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->mag_offset_0;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_offset_1
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->mag_offset_1;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_offset_2
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->mag_offset_2;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_offset_3
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->mag_offset_3;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_device_ids
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->baro_device_ids;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_temperature
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->baro_temperature;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_offset_0
  {
    size_t item_size = sizeof(ros_message->baro_offset_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_offset_1
  {
    size_t item_size = sizeof(ros_message->baro_offset_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_offset_2
  {
    size_t item_size = sizeof(ros_message->baro_offset_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_offset_3
  {
    size_t item_size = sizeof(ros_message->baro_offset_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorCorrection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__SensorCorrection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__SensorCorrection(
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
  // member: accel_device_ids
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_offset_0
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_offset_1
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_offset_2
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_offset_3
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_device_ids
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_offset_0
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_offset_1
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_offset_2
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_offset_3
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_device_ids
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_offset_0
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_offset_1
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_offset_2
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_offset_3
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro_device_ids
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro_offset_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro_offset_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro_offset_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro_offset_3
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
    using DataType = px4_msgs__msg__SensorCorrection;
    is_plain =
      (
      offsetof(DataType, baro_offset_3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorCorrection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__SensorCorrection(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorCorrection = {
  "px4_msgs::msg",
  "SensorCorrection",
  _SensorCorrection__cdr_serialize,
  _SensorCorrection__cdr_deserialize,
  _SensorCorrection__get_serialized_size,
  _SensorCorrection__max_serialized_size
};

static rosidl_message_type_support_t _SensorCorrection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorCorrection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, SensorCorrection)() {
  return &_SensorCorrection__type_support;
}

#if defined(__cplusplus)
}
#endif
