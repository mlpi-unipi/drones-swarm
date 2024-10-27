// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorSensorBias.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_sensor_bias__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/estimator_sensor_bias__struct.hpp"

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
  const px4_msgs::msg::EstimatorSensorBias & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: timestamp_sample
  cdr << ros_message.timestamp_sample;
  // Member: gyro_device_id
  cdr << ros_message.gyro_device_id;
  // Member: gyro_bias
  {
    cdr << ros_message.gyro_bias;
  }
  // Member: gyro_bias_limit
  cdr << ros_message.gyro_bias_limit;
  // Member: gyro_bias_variance
  {
    cdr << ros_message.gyro_bias_variance;
  }
  // Member: gyro_bias_valid
  cdr << (ros_message.gyro_bias_valid ? true : false);
  // Member: gyro_bias_stable
  cdr << (ros_message.gyro_bias_stable ? true : false);
  // Member: accel_device_id
  cdr << ros_message.accel_device_id;
  // Member: accel_bias
  {
    cdr << ros_message.accel_bias;
  }
  // Member: accel_bias_limit
  cdr << ros_message.accel_bias_limit;
  // Member: accel_bias_variance
  {
    cdr << ros_message.accel_bias_variance;
  }
  // Member: accel_bias_valid
  cdr << (ros_message.accel_bias_valid ? true : false);
  // Member: accel_bias_stable
  cdr << (ros_message.accel_bias_stable ? true : false);
  // Member: mag_device_id
  cdr << ros_message.mag_device_id;
  // Member: mag_bias
  {
    cdr << ros_message.mag_bias;
  }
  // Member: mag_bias_limit
  cdr << ros_message.mag_bias_limit;
  // Member: mag_bias_variance
  {
    cdr << ros_message.mag_bias_variance;
  }
  // Member: mag_bias_valid
  cdr << (ros_message.mag_bias_valid ? true : false);
  // Member: mag_bias_stable
  cdr << (ros_message.mag_bias_stable ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::EstimatorSensorBias & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: timestamp_sample
  cdr >> ros_message.timestamp_sample;

  // Member: gyro_device_id
  cdr >> ros_message.gyro_device_id;

  // Member: gyro_bias
  {
    cdr >> ros_message.gyro_bias;
  }

  // Member: gyro_bias_limit
  cdr >> ros_message.gyro_bias_limit;

  // Member: gyro_bias_variance
  {
    cdr >> ros_message.gyro_bias_variance;
  }

  // Member: gyro_bias_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gyro_bias_valid = tmp ? true : false;
  }

  // Member: gyro_bias_stable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gyro_bias_stable = tmp ? true : false;
  }

  // Member: accel_device_id
  cdr >> ros_message.accel_device_id;

  // Member: accel_bias
  {
    cdr >> ros_message.accel_bias;
  }

  // Member: accel_bias_limit
  cdr >> ros_message.accel_bias_limit;

  // Member: accel_bias_variance
  {
    cdr >> ros_message.accel_bias_variance;
  }

  // Member: accel_bias_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accel_bias_valid = tmp ? true : false;
  }

  // Member: accel_bias_stable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accel_bias_stable = tmp ? true : false;
  }

  // Member: mag_device_id
  cdr >> ros_message.mag_device_id;

  // Member: mag_bias
  {
    cdr >> ros_message.mag_bias;
  }

  // Member: mag_bias_limit
  cdr >> ros_message.mag_bias_limit;

  // Member: mag_bias_variance
  {
    cdr >> ros_message.mag_bias_variance;
  }

  // Member: mag_bias_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_bias_valid = tmp ? true : false;
  }

  // Member: mag_bias_stable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mag_bias_stable = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::EstimatorSensorBias & ros_message,
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
  // Member: timestamp_sample
  {
    size_t item_size = sizeof(ros_message.timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_device_id
  {
    size_t item_size = sizeof(ros_message.gyro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_bias
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.gyro_bias[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_bias_limit
  {
    size_t item_size = sizeof(ros_message.gyro_bias_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_bias_variance
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.gyro_bias_variance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_bias_valid
  {
    size_t item_size = sizeof(ros_message.gyro_bias_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_bias_stable
  {
    size_t item_size = sizeof(ros_message.gyro_bias_stable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_device_id
  {
    size_t item_size = sizeof(ros_message.accel_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_bias
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.accel_bias[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_bias_limit
  {
    size_t item_size = sizeof(ros_message.accel_bias_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_bias_variance
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.accel_bias_variance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_bias_valid
  {
    size_t item_size = sizeof(ros_message.accel_bias_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_bias_stable
  {
    size_t item_size = sizeof(ros_message.accel_bias_stable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_device_id
  {
    size_t item_size = sizeof(ros_message.mag_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_bias
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.mag_bias[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_bias_limit
  {
    size_t item_size = sizeof(ros_message.mag_bias_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_bias_variance
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.mag_bias_variance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_bias_valid
  {
    size_t item_size = sizeof(ros_message.mag_bias_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_bias_stable
  {
    size_t item_size = sizeof(ros_message.mag_bias_stable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_EstimatorSensorBias(
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

  // Member: timestamp_sample
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gyro_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_bias
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_bias_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_bias_variance
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_bias_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gyro_bias_stable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_bias
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_bias_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_bias_variance
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_bias_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_bias_stable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_bias
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_bias_limit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_bias_variance
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_bias_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_bias_stable
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
    using DataType = px4_msgs::msg::EstimatorSensorBias;
    is_plain =
      (
      offsetof(DataType, mag_bias_stable) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EstimatorSensorBias__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorSensorBias *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EstimatorSensorBias__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::EstimatorSensorBias *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EstimatorSensorBias__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorSensorBias *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EstimatorSensorBias__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EstimatorSensorBias(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EstimatorSensorBias__callbacks = {
  "px4_msgs::msg",
  "EstimatorSensorBias",
  _EstimatorSensorBias__cdr_serialize,
  _EstimatorSensorBias__cdr_deserialize,
  _EstimatorSensorBias__get_serialized_size,
  _EstimatorSensorBias__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorSensorBias__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EstimatorSensorBias__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::EstimatorSensorBias>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorSensorBias__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, EstimatorSensorBias)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorSensorBias__handle;
}

#ifdef __cplusplus
}
#endif
