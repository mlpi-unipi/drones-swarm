// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorAidSource2d.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_aid_source2d__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_aid_source2d__struct.h"
#include "px4_msgs/msg/detail/estimator_aid_source2d__functions.h"
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


using _EstimatorAidSource2d__ros_msg_type = px4_msgs__msg__EstimatorAidSource2d;

static bool _EstimatorAidSource2d__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorAidSource2d__ros_msg_type * ros_message = static_cast<const _EstimatorAidSource2d__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: estimator_instance
  {
    cdr << ros_message->estimator_instance;
  }

  // Field name: device_id
  {
    cdr << ros_message->device_id;
  }

  // Field name: time_last_fuse
  {
    cdr << ros_message->time_last_fuse;
  }

  // Field name: observation
  {
    size_t size = 2;
    auto array_ptr = ros_message->observation;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: observation_variance
  {
    size_t size = 2;
    auto array_ptr = ros_message->observation_variance;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: innovation
  {
    size_t size = 2;
    auto array_ptr = ros_message->innovation;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: innovation_variance
  {
    size_t size = 2;
    auto array_ptr = ros_message->innovation_variance;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: test_ratio
  {
    size_t size = 2;
    auto array_ptr = ros_message->test_ratio;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: innovation_rejected
  {
    cdr << (ros_message->innovation_rejected ? true : false);
  }

  // Field name: fused
  {
    cdr << (ros_message->fused ? true : false);
  }

  return true;
}

static bool _EstimatorAidSource2d__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorAidSource2d__ros_msg_type * ros_message = static_cast<_EstimatorAidSource2d__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: estimator_instance
  {
    cdr >> ros_message->estimator_instance;
  }

  // Field name: device_id
  {
    cdr >> ros_message->device_id;
  }

  // Field name: time_last_fuse
  {
    cdr >> ros_message->time_last_fuse;
  }

  // Field name: observation
  {
    size_t size = 2;
    auto array_ptr = ros_message->observation;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: observation_variance
  {
    size_t size = 2;
    auto array_ptr = ros_message->observation_variance;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: innovation
  {
    size_t size = 2;
    auto array_ptr = ros_message->innovation;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: innovation_variance
  {
    size_t size = 2;
    auto array_ptr = ros_message->innovation_variance;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: test_ratio
  {
    size_t size = 2;
    auto array_ptr = ros_message->test_ratio;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: innovation_rejected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->innovation_rejected = tmp ? true : false;
  }

  // Field name: fused
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fused = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorAidSource2d(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorAidSource2d__ros_msg_type * ros_message = static_cast<const _EstimatorAidSource2d__ros_msg_type *>(untyped_ros_message);
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
  // field.name estimator_instance
  {
    size_t item_size = sizeof(ros_message->estimator_instance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_last_fuse
  {
    size_t item_size = sizeof(ros_message->time_last_fuse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name observation
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->observation;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name observation_variance
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->observation_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->innovation;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation_variance
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->innovation_variance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name test_ratio
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->test_ratio;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation_rejected
  {
    size_t item_size = sizeof(ros_message->innovation_rejected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fused
  {
    size_t item_size = sizeof(ros_message->fused);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorAidSource2d__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorAidSource2d(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorAidSource2d(
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
  // member: estimator_instance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_last_fuse
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: observation
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: observation_variance
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: innovation
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: innovation_variance
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: test_ratio
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: innovation_rejected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fused
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
    using DataType = px4_msgs__msg__EstimatorAidSource2d;
    is_plain =
      (
      offsetof(DataType, fused) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EstimatorAidSource2d__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__EstimatorAidSource2d(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EstimatorAidSource2d = {
  "px4_msgs::msg",
  "EstimatorAidSource2d",
  _EstimatorAidSource2d__cdr_serialize,
  _EstimatorAidSource2d__cdr_deserialize,
  _EstimatorAidSource2d__get_serialized_size,
  _EstimatorAidSource2d__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorAidSource2d__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorAidSource2d,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorAidSource2d)() {
  return &_EstimatorAidSource2d__type_support;
}

#if defined(__cplusplus)
}
#endif
