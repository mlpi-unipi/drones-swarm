// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorSelectorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_selector_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_selector_status__struct.h"
#include "px4_msgs/msg/detail/estimator_selector_status__functions.h"
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


using _EstimatorSelectorStatus__ros_msg_type = px4_msgs__msg__EstimatorSelectorStatus;

static bool _EstimatorSelectorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorSelectorStatus__ros_msg_type * ros_message = static_cast<const _EstimatorSelectorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: primary_instance
  {
    cdr << ros_message->primary_instance;
  }

  // Field name: instances_available
  {
    cdr << ros_message->instances_available;
  }

  // Field name: instance_changed_count
  {
    cdr << ros_message->instance_changed_count;
  }

  // Field name: last_instance_change
  {
    cdr << ros_message->last_instance_change;
  }

  // Field name: accel_device_id
  {
    cdr << ros_message->accel_device_id;
  }

  // Field name: baro_device_id
  {
    cdr << ros_message->baro_device_id;
  }

  // Field name: gyro_device_id
  {
    cdr << ros_message->gyro_device_id;
  }

  // Field name: mag_device_id
  {
    cdr << ros_message->mag_device_id;
  }

  // Field name: combined_test_ratio
  {
    size_t size = 9;
    auto array_ptr = ros_message->combined_test_ratio;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: relative_test_ratio
  {
    size_t size = 9;
    auto array_ptr = ros_message->relative_test_ratio;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: healthy
  {
    size_t size = 9;
    auto array_ptr = ros_message->healthy;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accumulated_gyro_error
  {
    size_t size = 4;
    auto array_ptr = ros_message->accumulated_gyro_error;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accumulated_accel_error
  {
    size_t size = 4;
    auto array_ptr = ros_message->accumulated_accel_error;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro_fault_detected
  {
    cdr << (ros_message->gyro_fault_detected ? true : false);
  }

  // Field name: accel_fault_detected
  {
    cdr << (ros_message->accel_fault_detected ? true : false);
  }

  return true;
}

static bool _EstimatorSelectorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorSelectorStatus__ros_msg_type * ros_message = static_cast<_EstimatorSelectorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: primary_instance
  {
    cdr >> ros_message->primary_instance;
  }

  // Field name: instances_available
  {
    cdr >> ros_message->instances_available;
  }

  // Field name: instance_changed_count
  {
    cdr >> ros_message->instance_changed_count;
  }

  // Field name: last_instance_change
  {
    cdr >> ros_message->last_instance_change;
  }

  // Field name: accel_device_id
  {
    cdr >> ros_message->accel_device_id;
  }

  // Field name: baro_device_id
  {
    cdr >> ros_message->baro_device_id;
  }

  // Field name: gyro_device_id
  {
    cdr >> ros_message->gyro_device_id;
  }

  // Field name: mag_device_id
  {
    cdr >> ros_message->mag_device_id;
  }

  // Field name: combined_test_ratio
  {
    size_t size = 9;
    auto array_ptr = ros_message->combined_test_ratio;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: relative_test_ratio
  {
    size_t size = 9;
    auto array_ptr = ros_message->relative_test_ratio;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: healthy
  {
    size_t size = 9;
    auto array_ptr = ros_message->healthy;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: accumulated_gyro_error
  {
    size_t size = 4;
    auto array_ptr = ros_message->accumulated_gyro_error;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accumulated_accel_error
  {
    size_t size = 4;
    auto array_ptr = ros_message->accumulated_accel_error;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro_fault_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gyro_fault_detected = tmp ? true : false;
  }

  // Field name: accel_fault_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accel_fault_detected = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorSelectorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorSelectorStatus__ros_msg_type * ros_message = static_cast<const _EstimatorSelectorStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name primary_instance
  {
    size_t item_size = sizeof(ros_message->primary_instance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name instances_available
  {
    size_t item_size = sizeof(ros_message->instances_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name instance_changed_count
  {
    size_t item_size = sizeof(ros_message->instance_changed_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_instance_change
  {
    size_t item_size = sizeof(ros_message->last_instance_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_device_id
  {
    size_t item_size = sizeof(ros_message->accel_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_device_id
  {
    size_t item_size = sizeof(ros_message->baro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_device_id
  {
    size_t item_size = sizeof(ros_message->gyro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_device_id
  {
    size_t item_size = sizeof(ros_message->mag_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name combined_test_ratio
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->combined_test_ratio;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name relative_test_ratio
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->relative_test_ratio;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name healthy
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->healthy;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accumulated_gyro_error
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->accumulated_gyro_error;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accumulated_accel_error
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->accumulated_accel_error;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_fault_detected
  {
    size_t item_size = sizeof(ros_message->gyro_fault_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_fault_detected
  {
    size_t item_size = sizeof(ros_message->accel_fault_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorSelectorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorSelectorStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorSelectorStatus(
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
  // member: primary_instance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: instances_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: instance_changed_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: last_instance_change
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
  // member: baro_device_id
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
  // member: mag_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: combined_test_ratio
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: relative_test_ratio
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: healthy
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accumulated_gyro_error
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accumulated_accel_error
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro_fault_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accel_fault_detected
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
    using DataType = px4_msgs__msg__EstimatorSelectorStatus;
    is_plain =
      (
      offsetof(DataType, accel_fault_detected) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EstimatorSelectorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__EstimatorSelectorStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EstimatorSelectorStatus = {
  "px4_msgs::msg",
  "EstimatorSelectorStatus",
  _EstimatorSelectorStatus__cdr_serialize,
  _EstimatorSelectorStatus__cdr_deserialize,
  _EstimatorSelectorStatus__get_serialized_size,
  _EstimatorSelectorStatus__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorSelectorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorSelectorStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorSelectorStatus)() {
  return &_EstimatorSelectorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
