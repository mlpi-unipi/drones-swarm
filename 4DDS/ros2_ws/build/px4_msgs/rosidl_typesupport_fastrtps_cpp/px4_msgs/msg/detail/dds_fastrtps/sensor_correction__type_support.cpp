// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_correction__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/sensor_correction__struct.hpp"

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
  const px4_msgs::msg::SensorCorrection & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: accel_device_ids
  {
    cdr << ros_message.accel_device_ids;
  }
  // Member: accel_temperature
  {
    cdr << ros_message.accel_temperature;
  }
  // Member: accel_offset_0
  {
    cdr << ros_message.accel_offset_0;
  }
  // Member: accel_offset_1
  {
    cdr << ros_message.accel_offset_1;
  }
  // Member: accel_offset_2
  {
    cdr << ros_message.accel_offset_2;
  }
  // Member: accel_offset_3
  {
    cdr << ros_message.accel_offset_3;
  }
  // Member: gyro_device_ids
  {
    cdr << ros_message.gyro_device_ids;
  }
  // Member: gyro_temperature
  {
    cdr << ros_message.gyro_temperature;
  }
  // Member: gyro_offset_0
  {
    cdr << ros_message.gyro_offset_0;
  }
  // Member: gyro_offset_1
  {
    cdr << ros_message.gyro_offset_1;
  }
  // Member: gyro_offset_2
  {
    cdr << ros_message.gyro_offset_2;
  }
  // Member: gyro_offset_3
  {
    cdr << ros_message.gyro_offset_3;
  }
  // Member: mag_device_ids
  {
    cdr << ros_message.mag_device_ids;
  }
  // Member: mag_temperature
  {
    cdr << ros_message.mag_temperature;
  }
  // Member: mag_offset_0
  {
    cdr << ros_message.mag_offset_0;
  }
  // Member: mag_offset_1
  {
    cdr << ros_message.mag_offset_1;
  }
  // Member: mag_offset_2
  {
    cdr << ros_message.mag_offset_2;
  }
  // Member: mag_offset_3
  {
    cdr << ros_message.mag_offset_3;
  }
  // Member: baro_device_ids
  {
    cdr << ros_message.baro_device_ids;
  }
  // Member: baro_temperature
  {
    cdr << ros_message.baro_temperature;
  }
  // Member: baro_offset_0
  cdr << ros_message.baro_offset_0;
  // Member: baro_offset_1
  cdr << ros_message.baro_offset_1;
  // Member: baro_offset_2
  cdr << ros_message.baro_offset_2;
  // Member: baro_offset_3
  cdr << ros_message.baro_offset_3;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::SensorCorrection & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: accel_device_ids
  {
    cdr >> ros_message.accel_device_ids;
  }

  // Member: accel_temperature
  {
    cdr >> ros_message.accel_temperature;
  }

  // Member: accel_offset_0
  {
    cdr >> ros_message.accel_offset_0;
  }

  // Member: accel_offset_1
  {
    cdr >> ros_message.accel_offset_1;
  }

  // Member: accel_offset_2
  {
    cdr >> ros_message.accel_offset_2;
  }

  // Member: accel_offset_3
  {
    cdr >> ros_message.accel_offset_3;
  }

  // Member: gyro_device_ids
  {
    cdr >> ros_message.gyro_device_ids;
  }

  // Member: gyro_temperature
  {
    cdr >> ros_message.gyro_temperature;
  }

  // Member: gyro_offset_0
  {
    cdr >> ros_message.gyro_offset_0;
  }

  // Member: gyro_offset_1
  {
    cdr >> ros_message.gyro_offset_1;
  }

  // Member: gyro_offset_2
  {
    cdr >> ros_message.gyro_offset_2;
  }

  // Member: gyro_offset_3
  {
    cdr >> ros_message.gyro_offset_3;
  }

  // Member: mag_device_ids
  {
    cdr >> ros_message.mag_device_ids;
  }

  // Member: mag_temperature
  {
    cdr >> ros_message.mag_temperature;
  }

  // Member: mag_offset_0
  {
    cdr >> ros_message.mag_offset_0;
  }

  // Member: mag_offset_1
  {
    cdr >> ros_message.mag_offset_1;
  }

  // Member: mag_offset_2
  {
    cdr >> ros_message.mag_offset_2;
  }

  // Member: mag_offset_3
  {
    cdr >> ros_message.mag_offset_3;
  }

  // Member: baro_device_ids
  {
    cdr >> ros_message.baro_device_ids;
  }

  // Member: baro_temperature
  {
    cdr >> ros_message.baro_temperature;
  }

  // Member: baro_offset_0
  cdr >> ros_message.baro_offset_0;

  // Member: baro_offset_1
  cdr >> ros_message.baro_offset_1;

  // Member: baro_offset_2
  cdr >> ros_message.baro_offset_2;

  // Member: baro_offset_3
  cdr >> ros_message.baro_offset_3;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::SensorCorrection & ros_message,
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
  // Member: accel_device_ids
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.accel_device_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_temperature
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.accel_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_offset_0
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.accel_offset_0[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_offset_1
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.accel_offset_1[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_offset_2
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.accel_offset_2[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_offset_3
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.accel_offset_3[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_device_ids
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.gyro_device_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_temperature
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.gyro_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_offset_0
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.gyro_offset_0[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_offset_1
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.gyro_offset_1[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_offset_2
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.gyro_offset_2[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_offset_3
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.gyro_offset_3[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_device_ids
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.mag_device_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_temperature
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.mag_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_offset_0
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.mag_offset_0[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_offset_1
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.mag_offset_1[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_offset_2
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.mag_offset_2[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_offset_3
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.mag_offset_3[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baro_device_ids
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.baro_device_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baro_temperature
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.baro_temperature[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baro_offset_0
  {
    size_t item_size = sizeof(ros_message.baro_offset_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baro_offset_1
  {
    size_t item_size = sizeof(ros_message.baro_offset_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baro_offset_2
  {
    size_t item_size = sizeof(ros_message.baro_offset_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baro_offset_3
  {
    size_t item_size = sizeof(ros_message.baro_offset_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_SensorCorrection(
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

  // Member: accel_device_ids
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_offset_0
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_offset_1
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_offset_2
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_offset_3
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_device_ids
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_offset_0
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_offset_1
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_offset_2
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_offset_3
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_device_ids
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_offset_0
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_offset_1
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_offset_2
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_offset_3
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: baro_device_ids
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: baro_temperature
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: baro_offset_0
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: baro_offset_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: baro_offset_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: baro_offset_3
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
    using DataType = px4_msgs::msg::SensorCorrection;
    is_plain =
      (
      offsetof(DataType, baro_offset_3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SensorCorrection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::SensorCorrection *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorCorrection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::SensorCorrection *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorCorrection__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::SensorCorrection *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorCorrection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorCorrection(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorCorrection__callbacks = {
  "px4_msgs::msg",
  "SensorCorrection",
  _SensorCorrection__cdr_serialize,
  _SensorCorrection__cdr_deserialize,
  _SensorCorrection__get_serialized_size,
  _SensorCorrection__max_serialized_size
};

static rosidl_message_type_support_t _SensorCorrection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorCorrection__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::SensorCorrection>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_SensorCorrection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, SensorCorrection)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_SensorCorrection__handle;
}

#ifdef __cplusplus
}
#endif
