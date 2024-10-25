// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/SensorGnssRelative.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_gnss_relative__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/sensor_gnss_relative__struct.hpp"

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
  const px4_msgs::msg::SensorGnssRelative & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: timestamp_sample
  cdr << ros_message.timestamp_sample;
  // Member: device_id
  cdr << ros_message.device_id;
  // Member: time_utc_usec
  cdr << ros_message.time_utc_usec;
  // Member: reference_station_id
  cdr << ros_message.reference_station_id;
  // Member: position
  {
    cdr << ros_message.position;
  }
  // Member: position_accuracy
  {
    cdr << ros_message.position_accuracy;
  }
  // Member: heading
  cdr << ros_message.heading;
  // Member: heading_accuracy
  cdr << ros_message.heading_accuracy;
  // Member: position_length
  cdr << ros_message.position_length;
  // Member: accuracy_length
  cdr << ros_message.accuracy_length;
  // Member: gnss_fix_ok
  cdr << (ros_message.gnss_fix_ok ? true : false);
  // Member: differential_solution
  cdr << (ros_message.differential_solution ? true : false);
  // Member: relative_position_valid
  cdr << (ros_message.relative_position_valid ? true : false);
  // Member: carrier_solution_floating
  cdr << (ros_message.carrier_solution_floating ? true : false);
  // Member: carrier_solution_fixed
  cdr << (ros_message.carrier_solution_fixed ? true : false);
  // Member: moving_base_mode
  cdr << (ros_message.moving_base_mode ? true : false);
  // Member: reference_position_miss
  cdr << (ros_message.reference_position_miss ? true : false);
  // Member: reference_observations_miss
  cdr << (ros_message.reference_observations_miss ? true : false);
  // Member: heading_valid
  cdr << (ros_message.heading_valid ? true : false);
  // Member: relative_position_normalized
  cdr << (ros_message.relative_position_normalized ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::SensorGnssRelative & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: timestamp_sample
  cdr >> ros_message.timestamp_sample;

  // Member: device_id
  cdr >> ros_message.device_id;

  // Member: time_utc_usec
  cdr >> ros_message.time_utc_usec;

  // Member: reference_station_id
  cdr >> ros_message.reference_station_id;

  // Member: position
  {
    cdr >> ros_message.position;
  }

  // Member: position_accuracy
  {
    cdr >> ros_message.position_accuracy;
  }

  // Member: heading
  cdr >> ros_message.heading;

  // Member: heading_accuracy
  cdr >> ros_message.heading_accuracy;

  // Member: position_length
  cdr >> ros_message.position_length;

  // Member: accuracy_length
  cdr >> ros_message.accuracy_length;

  // Member: gnss_fix_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gnss_fix_ok = tmp ? true : false;
  }

  // Member: differential_solution
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.differential_solution = tmp ? true : false;
  }

  // Member: relative_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.relative_position_valid = tmp ? true : false;
  }

  // Member: carrier_solution_floating
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.carrier_solution_floating = tmp ? true : false;
  }

  // Member: carrier_solution_fixed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.carrier_solution_fixed = tmp ? true : false;
  }

  // Member: moving_base_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.moving_base_mode = tmp ? true : false;
  }

  // Member: reference_position_miss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reference_position_miss = tmp ? true : false;
  }

  // Member: reference_observations_miss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reference_observations_miss = tmp ? true : false;
  }

  // Member: heading_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heading_valid = tmp ? true : false;
  }

  // Member: relative_position_normalized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.relative_position_normalized = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::SensorGnssRelative & ros_message,
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
  // Member: device_id
  {
    size_t item_size = sizeof(ros_message.device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_utc_usec
  {
    size_t item_size = sizeof(ros_message.time_utc_usec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_station_id
  {
    size_t item_size = sizeof(ros_message.reference_station_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_accuracy
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.position_accuracy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading
  {
    size_t item_size = sizeof(ros_message.heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_accuracy
  {
    size_t item_size = sizeof(ros_message.heading_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_length
  {
    size_t item_size = sizeof(ros_message.position_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accuracy_length
  {
    size_t item_size = sizeof(ros_message.accuracy_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gnss_fix_ok
  {
    size_t item_size = sizeof(ros_message.gnss_fix_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: differential_solution
  {
    size_t item_size = sizeof(ros_message.differential_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_position_valid
  {
    size_t item_size = sizeof(ros_message.relative_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: carrier_solution_floating
  {
    size_t item_size = sizeof(ros_message.carrier_solution_floating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: carrier_solution_fixed
  {
    size_t item_size = sizeof(ros_message.carrier_solution_fixed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: moving_base_mode
  {
    size_t item_size = sizeof(ros_message.moving_base_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_position_miss
  {
    size_t item_size = sizeof(ros_message.reference_position_miss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_observations_miss
  {
    size_t item_size = sizeof(ros_message.reference_observations_miss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_valid
  {
    size_t item_size = sizeof(ros_message.heading_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relative_position_normalized
  {
    size_t item_size = sizeof(ros_message.relative_position_normalized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_SensorGnssRelative(
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

  // Member: device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_utc_usec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reference_station_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: position
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_accuracy
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heading_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accuracy_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gnss_fix_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: differential_solution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: relative_position_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: carrier_solution_floating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: carrier_solution_fixed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: moving_base_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reference_position_miss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reference_observations_miss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heading_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: relative_position_normalized
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
    using DataType = px4_msgs::msg::SensorGnssRelative;
    is_plain =
      (
      offsetof(DataType, relative_position_normalized) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SensorGnssRelative__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::SensorGnssRelative *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorGnssRelative__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::SensorGnssRelative *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorGnssRelative__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::SensorGnssRelative *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorGnssRelative__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorGnssRelative(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorGnssRelative__callbacks = {
  "px4_msgs::msg",
  "SensorGnssRelative",
  _SensorGnssRelative__cdr_serialize,
  _SensorGnssRelative__cdr_deserialize,
  _SensorGnssRelative__get_serialized_size,
  _SensorGnssRelative__max_serialized_size
};

static rosidl_message_type_support_t _SensorGnssRelative__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorGnssRelative__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::SensorGnssRelative>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_SensorGnssRelative__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, SensorGnssRelative)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_SensorGnssRelative__handle;
}

#ifdef __cplusplus
}
#endif
