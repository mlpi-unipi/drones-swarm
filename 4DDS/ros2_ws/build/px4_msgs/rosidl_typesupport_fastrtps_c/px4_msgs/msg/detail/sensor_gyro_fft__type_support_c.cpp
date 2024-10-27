// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/SensorGyroFft.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_gyro_fft__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/sensor_gyro_fft__struct.h"
#include "px4_msgs/msg/detail/sensor_gyro_fft__functions.h"
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


using _SensorGyroFft__ros_msg_type = px4_msgs__msg__SensorGyroFft;

static bool _SensorGyroFft__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorGyroFft__ros_msg_type * ros_message = static_cast<const _SensorGyroFft__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sensor_sample_rate_hz
  {
    cdr << ros_message->sensor_sample_rate_hz;
  }

  // Field name: resolution_hz
  {
    cdr << ros_message->resolution_hz;
  }

  // Field name: peak_frequencies_x
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_frequencies_x;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: peak_frequencies_y
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_frequencies_y;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: peak_frequencies_z
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_frequencies_z;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: peak_snr_x
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_snr_x;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: peak_snr_y
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_snr_y;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: peak_snr_z
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_snr_z;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SensorGyroFft__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorGyroFft__ros_msg_type * ros_message = static_cast<_SensorGyroFft__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sensor_sample_rate_hz
  {
    cdr >> ros_message->sensor_sample_rate_hz;
  }

  // Field name: resolution_hz
  {
    cdr >> ros_message->resolution_hz;
  }

  // Field name: peak_frequencies_x
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_frequencies_x;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: peak_frequencies_y
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_frequencies_y;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: peak_frequencies_z
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_frequencies_z;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: peak_snr_x
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_snr_x;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: peak_snr_y
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_snr_y;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: peak_snr_z
  {
    size_t size = 3;
    auto array_ptr = ros_message->peak_snr_z;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__SensorGyroFft(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorGyroFft__ros_msg_type * ros_message = static_cast<const _SensorGyroFft__ros_msg_type *>(untyped_ros_message);
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
  // field.name sensor_sample_rate_hz
  {
    size_t item_size = sizeof(ros_message->sensor_sample_rate_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name resolution_hz
  {
    size_t item_size = sizeof(ros_message->resolution_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name peak_frequencies_x
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->peak_frequencies_x;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name peak_frequencies_y
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->peak_frequencies_y;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name peak_frequencies_z
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->peak_frequencies_z;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name peak_snr_x
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->peak_snr_x;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name peak_snr_y
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->peak_snr_y;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name peak_snr_z
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->peak_snr_z;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorGyroFft__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__SensorGyroFft(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__SensorGyroFft(
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
  // member: sensor_sample_rate_hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: resolution_hz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: peak_frequencies_x
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: peak_frequencies_y
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: peak_frequencies_z
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: peak_snr_x
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: peak_snr_y
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: peak_snr_z
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__SensorGyroFft;
    is_plain =
      (
      offsetof(DataType, peak_snr_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorGyroFft__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__SensorGyroFft(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorGyroFft = {
  "px4_msgs::msg",
  "SensorGyroFft",
  _SensorGyroFft__cdr_serialize,
  _SensorGyroFft__cdr_deserialize,
  _SensorGyroFft__get_serialized_size,
  _SensorGyroFft__max_serialized_size
};

static rosidl_message_type_support_t _SensorGyroFft__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorGyroFft,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, SensorGyroFft)() {
  return &_SensorGyroFft__type_support;
}

#if defined(__cplusplus)
}
#endif
