// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/FollowTargetEstimator.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/follow_target_estimator__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/follow_target_estimator__struct.h"
#include "px4_msgs/msg/detail/follow_target_estimator__functions.h"
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


using _FollowTargetEstimator__ros_msg_type = px4_msgs__msg__FollowTargetEstimator;

static bool _FollowTargetEstimator__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FollowTargetEstimator__ros_msg_type * ros_message = static_cast<const _FollowTargetEstimator__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: last_filter_reset_timestamp
  {
    cdr << ros_message->last_filter_reset_timestamp;
  }

  // Field name: valid
  {
    cdr << (ros_message->valid ? true : false);
  }

  // Field name: stale
  {
    cdr << (ros_message->stale ? true : false);
  }

  // Field name: lat_est
  {
    cdr << ros_message->lat_est;
  }

  // Field name: lon_est
  {
    cdr << ros_message->lon_est;
  }

  // Field name: alt_est
  {
    cdr << ros_message->alt_est;
  }

  // Field name: pos_est
  {
    size_t size = 3;
    auto array_ptr = ros_message->pos_est;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel_est
  {
    size_t size = 3;
    auto array_ptr = ros_message->vel_est;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: acc_est
  {
    size_t size = 3;
    auto array_ptr = ros_message->acc_est;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: prediction_count
  {
    cdr << ros_message->prediction_count;
  }

  // Field name: fusion_count
  {
    cdr << ros_message->fusion_count;
  }

  return true;
}

static bool _FollowTargetEstimator__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FollowTargetEstimator__ros_msg_type * ros_message = static_cast<_FollowTargetEstimator__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: last_filter_reset_timestamp
  {
    cdr >> ros_message->last_filter_reset_timestamp;
  }

  // Field name: valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid = tmp ? true : false;
  }

  // Field name: stale
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stale = tmp ? true : false;
  }

  // Field name: lat_est
  {
    cdr >> ros_message->lat_est;
  }

  // Field name: lon_est
  {
    cdr >> ros_message->lon_est;
  }

  // Field name: alt_est
  {
    cdr >> ros_message->alt_est;
  }

  // Field name: pos_est
  {
    size_t size = 3;
    auto array_ptr = ros_message->pos_est;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel_est
  {
    size_t size = 3;
    auto array_ptr = ros_message->vel_est;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: acc_est
  {
    size_t size = 3;
    auto array_ptr = ros_message->acc_est;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: prediction_count
  {
    cdr >> ros_message->prediction_count;
  }

  // Field name: fusion_count
  {
    cdr >> ros_message->fusion_count;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__FollowTargetEstimator(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FollowTargetEstimator__ros_msg_type * ros_message = static_cast<const _FollowTargetEstimator__ros_msg_type *>(untyped_ros_message);
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
  // field.name last_filter_reset_timestamp
  {
    size_t item_size = sizeof(ros_message->last_filter_reset_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valid
  {
    size_t item_size = sizeof(ros_message->valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stale
  {
    size_t item_size = sizeof(ros_message->stale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_est
  {
    size_t item_size = sizeof(ros_message->lat_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon_est
  {
    size_t item_size = sizeof(ros_message->lon_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alt_est
  {
    size_t item_size = sizeof(ros_message->alt_est);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_est
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pos_est;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_est
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->vel_est;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_est
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->acc_est;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prediction_count
  {
    size_t item_size = sizeof(ros_message->prediction_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fusion_count
  {
    size_t item_size = sizeof(ros_message->fusion_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FollowTargetEstimator__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__FollowTargetEstimator(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__FollowTargetEstimator(
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
  // member: last_filter_reset_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stale
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lat_est
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon_est
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alt_est
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_est
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_est
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acc_est
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: prediction_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fusion_count
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
    using DataType = px4_msgs__msg__FollowTargetEstimator;
    is_plain =
      (
      offsetof(DataType, fusion_count) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FollowTargetEstimator__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__FollowTargetEstimator(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FollowTargetEstimator = {
  "px4_msgs::msg",
  "FollowTargetEstimator",
  _FollowTargetEstimator__cdr_serialize,
  _FollowTargetEstimator__cdr_deserialize,
  _FollowTargetEstimator__get_serialized_size,
  _FollowTargetEstimator__max_serialized_size
};

static rosidl_message_type_support_t _FollowTargetEstimator__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FollowTargetEstimator,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, FollowTargetEstimator)() {
  return &_FollowTargetEstimator__type_support;
}

#if defined(__cplusplus)
}
#endif
