// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/sensor_performance_metric__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gazebo_msgs/msg/detail/sensor_performance_metric__struct.hpp"

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

namespace gazebo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
cdr_serialize(
  const gazebo_msgs::msg::SensorPerformanceMetric & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: sim_update_rate
  cdr << ros_message.sim_update_rate;
  // Member: real_update_rate
  cdr << ros_message.real_update_rate;
  // Member: fps
  cdr << ros_message.fps;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gazebo_msgs::msg::SensorPerformanceMetric & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: sim_update_rate
  cdr >> ros_message.sim_update_rate;

  // Member: real_update_rate
  cdr >> ros_message.real_update_rate;

  // Member: fps
  cdr >> ros_message.fps;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
get_serialized_size(
  const gazebo_msgs::msg::SensorPerformanceMetric & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: sim_update_rate
  {
    size_t item_size = sizeof(ros_message.sim_update_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: real_update_rate
  {
    size_t item_size = sizeof(ros_message.real_update_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fps
  {
    size_t item_size = sizeof(ros_message.fps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
max_serialized_size_SensorPerformanceMetric(
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


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sim_update_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: real_update_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: fps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gazebo_msgs::msg::SensorPerformanceMetric;
    is_plain =
      (
      offsetof(DataType, fps) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SensorPerformanceMetric__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gazebo_msgs::msg::SensorPerformanceMetric *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorPerformanceMetric__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gazebo_msgs::msg::SensorPerformanceMetric *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorPerformanceMetric__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gazebo_msgs::msg::SensorPerformanceMetric *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorPerformanceMetric__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorPerformanceMetric(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorPerformanceMetric__callbacks = {
  "gazebo_msgs::msg",
  "SensorPerformanceMetric",
  _SensorPerformanceMetric__cdr_serialize,
  _SensorPerformanceMetric__cdr_deserialize,
  _SensorPerformanceMetric__get_serialized_size,
  _SensorPerformanceMetric__max_serialized_size
};

static rosidl_message_type_support_t _SensorPerformanceMetric__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorPerformanceMetric__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gazebo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::msg::SensorPerformanceMetric>()
{
  return &gazebo_msgs::msg::typesupport_fastrtps_cpp::_SensorPerformanceMetric__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, msg, SensorPerformanceMetric)() {
  return &gazebo_msgs::msg::typesupport_fastrtps_cpp::_SensorPerformanceMetric__handle;
}

#ifdef __cplusplus
}
#endif
