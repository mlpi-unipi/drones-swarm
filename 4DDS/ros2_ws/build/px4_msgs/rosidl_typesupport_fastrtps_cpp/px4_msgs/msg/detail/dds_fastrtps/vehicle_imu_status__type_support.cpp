// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleImuStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_imu_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/vehicle_imu_status__struct.hpp"

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

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::VehicleImuStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: accel_device_id
  cdr << ros_message.accel_device_id;
  // Member: gyro_device_id
  cdr << ros_message.gyro_device_id;
  // Member: accel_clipping
  {
    cdr << ros_message.accel_clipping;
  }
  // Member: gyro_clipping
  {
    cdr << ros_message.gyro_clipping;
  }
  // Member: accel_error_count
  cdr << ros_message.accel_error_count;
  // Member: gyro_error_count
  cdr << ros_message.gyro_error_count;
  // Member: accel_rate_hz
  cdr << ros_message.accel_rate_hz;
  // Member: gyro_rate_hz
  cdr << ros_message.gyro_rate_hz;
  // Member: accel_raw_rate_hz
  cdr << ros_message.accel_raw_rate_hz;
  // Member: gyro_raw_rate_hz
  cdr << ros_message.gyro_raw_rate_hz;
  // Member: accel_vibration_metric
  cdr << ros_message.accel_vibration_metric;
  // Member: gyro_vibration_metric
  cdr << ros_message.gyro_vibration_metric;
  // Member: delta_angle_coning_metric
  cdr << ros_message.delta_angle_coning_metric;
  // Member: mean_accel
  {
    cdr << ros_message.mean_accel;
  }
  // Member: mean_gyro
  {
    cdr << ros_message.mean_gyro;
  }
  // Member: var_accel
  {
    cdr << ros_message.var_accel;
  }
  // Member: var_gyro
  {
    cdr << ros_message.var_gyro;
  }
  // Member: temperature_accel
  cdr << ros_message.temperature_accel;
  // Member: temperature_gyro
  cdr << ros_message.temperature_gyro;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VehicleImuStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: accel_device_id
  cdr >> ros_message.accel_device_id;

  // Member: gyro_device_id
  cdr >> ros_message.gyro_device_id;

  // Member: accel_clipping
  {
    cdr >> ros_message.accel_clipping;
  }

  // Member: gyro_clipping
  {
    cdr >> ros_message.gyro_clipping;
  }

  // Member: accel_error_count
  cdr >> ros_message.accel_error_count;

  // Member: gyro_error_count
  cdr >> ros_message.gyro_error_count;

  // Member: accel_rate_hz
  cdr >> ros_message.accel_rate_hz;

  // Member: gyro_rate_hz
  cdr >> ros_message.gyro_rate_hz;

  // Member: accel_raw_rate_hz
  cdr >> ros_message.accel_raw_rate_hz;

  // Member: gyro_raw_rate_hz
  cdr >> ros_message.gyro_raw_rate_hz;

  // Member: accel_vibration_metric
  cdr >> ros_message.accel_vibration_metric;

  // Member: gyro_vibration_metric
  cdr >> ros_message.gyro_vibration_metric;

  // Member: delta_angle_coning_metric
  cdr >> ros_message.delta_angle_coning_metric;

  // Member: mean_accel
  {
    cdr >> ros_message.mean_accel;
  }

  // Member: mean_gyro
  {
    cdr >> ros_message.mean_gyro;
  }

  // Member: var_accel
  {
    cdr >> ros_message.var_accel;
  }

  // Member: var_gyro
  {
    cdr >> ros_message.var_gyro;
  }

  // Member: temperature_accel
  cdr >> ros_message.temperature_accel;

  // Member: temperature_gyro
  cdr >> ros_message.temperature_gyro;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VehicleImuStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_device_id
  {
    size_t item_size = sizeof(ros_message.accel_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_device_id
  {
    size_t item_size = sizeof(ros_message.gyro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_clipping
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.accel_clipping[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_clipping
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.gyro_clipping[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_error_count
  {
    size_t item_size = sizeof(ros_message.accel_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_error_count
  {
    size_t item_size = sizeof(ros_message.gyro_error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_rate_hz
  {
    size_t item_size = sizeof(ros_message.accel_rate_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_rate_hz
  {
    size_t item_size = sizeof(ros_message.gyro_rate_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_raw_rate_hz
  {
    size_t item_size = sizeof(ros_message.accel_raw_rate_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_raw_rate_hz
  {
    size_t item_size = sizeof(ros_message.gyro_raw_rate_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_vibration_metric
  {
    size_t item_size = sizeof(ros_message.accel_vibration_metric);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_vibration_metric
  {
    size_t item_size = sizeof(ros_message.gyro_vibration_metric);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_angle_coning_metric
  {
    size_t item_size = sizeof(ros_message.delta_angle_coning_metric);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mean_accel
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.mean_accel[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mean_gyro
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.mean_gyro[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: var_accel
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.var_accel[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: var_gyro
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.var_gyro[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_accel
  {
    size_t item_size = sizeof(ros_message.temperature_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature_gyro
  {
    size_t item_size = sizeof(ros_message.temperature_gyro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VehicleImuStatus(
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


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: accel_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_clipping
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_clipping
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_error_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_error_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_rate_hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_rate_hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_raw_rate_hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_raw_rate_hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_vibration_metric
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_vibration_metric
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: delta_angle_coning_metric
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mean_accel
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mean_gyro
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: var_accel
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: var_gyro
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature_accel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temperature_gyro
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
    using DataType = px4_msgs::msg::VehicleImuStatus;
    is_plain =
      (
      offsetof(DataType, temperature_gyro) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleImuStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleImuStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleImuStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VehicleImuStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleImuStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleImuStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleImuStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleImuStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleImuStatus__callbacks = {
  "px4_msgs::msg",
  "VehicleImuStatus",
  _VehicleImuStatus__cdr_serialize,
  _VehicleImuStatus__cdr_deserialize,
  _VehicleImuStatus__get_serialized_size,
  _VehicleImuStatus__max_serialized_size
};

static rosidl_message_type_support_t _VehicleImuStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleImuStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::VehicleImuStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleImuStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VehicleImuStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleImuStatus__handle;
}

#ifdef __cplusplus
}
#endif
