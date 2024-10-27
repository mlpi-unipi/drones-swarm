// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleImuStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_imu_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_imu_status__struct.h"
#include "px4_msgs/msg/detail/vehicle_imu_status__functions.h"
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


using _VehicleImuStatus__ros_msg_type = px4_msgs__msg__VehicleImuStatus;

static bool _VehicleImuStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleImuStatus__ros_msg_type * ros_message = static_cast<const _VehicleImuStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: accel_device_id
  {
    cdr << ros_message->accel_device_id;
  }

  // Field name: gyro_device_id
  {
    cdr << ros_message->gyro_device_id;
  }

  // Field name: accel_clipping
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_clipping;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_clipping
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_clipping;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accel_error_count
  {
    cdr << ros_message->accel_error_count;
  }

  // Field name: gyro_error_count
  {
    cdr << ros_message->gyro_error_count;
  }

  // Field name: accel_rate_hz
  {
    cdr << ros_message->accel_rate_hz;
  }

  // Field name: gyro_rate_hz
  {
    cdr << ros_message->gyro_rate_hz;
  }

  // Field name: accel_raw_rate_hz
  {
    cdr << ros_message->accel_raw_rate_hz;
  }

  // Field name: gyro_raw_rate_hz
  {
    cdr << ros_message->gyro_raw_rate_hz;
  }

  // Field name: accel_vibration_metric
  {
    cdr << ros_message->accel_vibration_metric;
  }

  // Field name: gyro_vibration_metric
  {
    cdr << ros_message->gyro_vibration_metric;
  }

  // Field name: delta_angle_coning_metric
  {
    cdr << ros_message->delta_angle_coning_metric;
  }

  // Field name: mean_accel
  {
    size_t size = 3;
    auto array_ptr = ros_message->mean_accel;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mean_gyro
  {
    size_t size = 3;
    auto array_ptr = ros_message->mean_gyro;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: var_accel
  {
    size_t size = 3;
    auto array_ptr = ros_message->var_accel;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: var_gyro
  {
    size_t size = 3;
    auto array_ptr = ros_message->var_gyro;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: temperature_accel
  {
    cdr << ros_message->temperature_accel;
  }

  // Field name: temperature_gyro
  {
    cdr << ros_message->temperature_gyro;
  }

  return true;
}

static bool _VehicleImuStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleImuStatus__ros_msg_type * ros_message = static_cast<_VehicleImuStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: accel_device_id
  {
    cdr >> ros_message->accel_device_id;
  }

  // Field name: gyro_device_id
  {
    cdr >> ros_message->gyro_device_id;
  }

  // Field name: accel_clipping
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel_clipping;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_clipping
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro_clipping;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accel_error_count
  {
    cdr >> ros_message->accel_error_count;
  }

  // Field name: gyro_error_count
  {
    cdr >> ros_message->gyro_error_count;
  }

  // Field name: accel_rate_hz
  {
    cdr >> ros_message->accel_rate_hz;
  }

  // Field name: gyro_rate_hz
  {
    cdr >> ros_message->gyro_rate_hz;
  }

  // Field name: accel_raw_rate_hz
  {
    cdr >> ros_message->accel_raw_rate_hz;
  }

  // Field name: gyro_raw_rate_hz
  {
    cdr >> ros_message->gyro_raw_rate_hz;
  }

  // Field name: accel_vibration_metric
  {
    cdr >> ros_message->accel_vibration_metric;
  }

  // Field name: gyro_vibration_metric
  {
    cdr >> ros_message->gyro_vibration_metric;
  }

  // Field name: delta_angle_coning_metric
  {
    cdr >> ros_message->delta_angle_coning_metric;
  }

  // Field name: mean_accel
  {
    size_t size = 3;
    auto array_ptr = ros_message->mean_accel;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mean_gyro
  {
    size_t size = 3;
    auto array_ptr = ros_message->mean_gyro;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: var_accel
  {
    size_t size = 3;
    auto array_ptr = ros_message->var_accel;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: var_gyro
  {
    size_t size = 3;
    auto array_ptr = ros_message->var_gyro;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: temperature_accel
  {
    cdr >> ros_message->temperature_accel;
  }

  // Field name: temperature_gyro
  {
    cdr >> ros_message->temperature_gyro;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleImuStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleImuStatus__ros_msg_type * ros_message = static_cast<const _VehicleImuStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name accel_device_id
  {
    size_t item_size = sizeof(ros_message->accel_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_device_id
  {
    size_t item_size = sizeof(ros_message->gyro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_clipping
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accel_clipping;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_clipping
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyro_clipping;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_error_count
  {
    size_t item_size = sizeof(ros_message->accel_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_error_count
  {
    size_t item_size = sizeof(ros_message->gyro_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_rate_hz
  {
    size_t item_size = sizeof(ros_message->accel_rate_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_rate_hz
  {
    size_t item_size = sizeof(ros_message->gyro_rate_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_raw_rate_hz
  {
    size_t item_size = sizeof(ros_message->accel_raw_rate_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_raw_rate_hz
  {
    size_t item_size = sizeof(ros_message->gyro_raw_rate_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_vibration_metric
  {
    size_t item_size = sizeof(ros_message->accel_vibration_metric);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_vibration_metric
  {
    size_t item_size = sizeof(ros_message->gyro_vibration_metric);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_angle_coning_metric
  {
    size_t item_size = sizeof(ros_message->delta_angle_coning_metric);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mean_accel
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->mean_accel;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mean_gyro
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->mean_gyro;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name var_accel
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->var_accel;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name var_gyro
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->var_gyro;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_accel
  {
    size_t item_size = sizeof(ros_message->temperature_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_gyro
  {
    size_t item_size = sizeof(ros_message->temperature_gyro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleImuStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleImuStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleImuStatus(
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
  // member: accel_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_clipping
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_clipping
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_error_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_error_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_rate_hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_rate_hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_raw_rate_hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_raw_rate_hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel_vibration_metric
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_vibration_metric
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_angle_coning_metric
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mean_accel
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mean_gyro
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: var_accel
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: var_gyro
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature_accel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature_gyro
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
    using DataType = px4_msgs__msg__VehicleImuStatus;
    is_plain =
      (
      offsetof(DataType, temperature_gyro) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleImuStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__VehicleImuStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleImuStatus = {
  "px4_msgs::msg",
  "VehicleImuStatus",
  _VehicleImuStatus__cdr_serialize,
  _VehicleImuStatus__cdr_deserialize,
  _VehicleImuStatus__get_serialized_size,
  _VehicleImuStatus__max_serialized_size
};

static rosidl_message_type_support_t _VehicleImuStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleImuStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleImuStatus)() {
  return &_VehicleImuStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
