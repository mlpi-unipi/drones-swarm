// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/NpfgStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/npfg_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/npfg_status__struct.h"
#include "px4_msgs/msg/detail/npfg_status__functions.h"
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


using _NpfgStatus__ros_msg_type = px4_msgs__msg__NpfgStatus;

static bool _NpfgStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NpfgStatus__ros_msg_type * ros_message = static_cast<const _NpfgStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: wind_est_valid
  {
    cdr << ros_message->wind_est_valid;
  }

  // Field name: lat_accel
  {
    cdr << ros_message->lat_accel;
  }

  // Field name: lat_accel_ff
  {
    cdr << ros_message->lat_accel_ff;
  }

  // Field name: bearing_feas
  {
    cdr << ros_message->bearing_feas;
  }

  // Field name: bearing_feas_on_track
  {
    cdr << ros_message->bearing_feas_on_track;
  }

  // Field name: signed_track_error
  {
    cdr << ros_message->signed_track_error;
  }

  // Field name: track_error_bound
  {
    cdr << ros_message->track_error_bound;
  }

  // Field name: airspeed_ref
  {
    cdr << ros_message->airspeed_ref;
  }

  // Field name: bearing
  {
    cdr << ros_message->bearing;
  }

  // Field name: heading_ref
  {
    cdr << ros_message->heading_ref;
  }

  // Field name: min_ground_speed_ref
  {
    cdr << ros_message->min_ground_speed_ref;
  }

  // Field name: adapted_period
  {
    cdr << ros_message->adapted_period;
  }

  // Field name: p_gain
  {
    cdr << ros_message->p_gain;
  }

  // Field name: time_const
  {
    cdr << ros_message->time_const;
  }

  // Field name: can_run_factor
  {
    cdr << ros_message->can_run_factor;
  }

  return true;
}

static bool _NpfgStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NpfgStatus__ros_msg_type * ros_message = static_cast<_NpfgStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: wind_est_valid
  {
    cdr >> ros_message->wind_est_valid;
  }

  // Field name: lat_accel
  {
    cdr >> ros_message->lat_accel;
  }

  // Field name: lat_accel_ff
  {
    cdr >> ros_message->lat_accel_ff;
  }

  // Field name: bearing_feas
  {
    cdr >> ros_message->bearing_feas;
  }

  // Field name: bearing_feas_on_track
  {
    cdr >> ros_message->bearing_feas_on_track;
  }

  // Field name: signed_track_error
  {
    cdr >> ros_message->signed_track_error;
  }

  // Field name: track_error_bound
  {
    cdr >> ros_message->track_error_bound;
  }

  // Field name: airspeed_ref
  {
    cdr >> ros_message->airspeed_ref;
  }

  // Field name: bearing
  {
    cdr >> ros_message->bearing;
  }

  // Field name: heading_ref
  {
    cdr >> ros_message->heading_ref;
  }

  // Field name: min_ground_speed_ref
  {
    cdr >> ros_message->min_ground_speed_ref;
  }

  // Field name: adapted_period
  {
    cdr >> ros_message->adapted_period;
  }

  // Field name: p_gain
  {
    cdr >> ros_message->p_gain;
  }

  // Field name: time_const
  {
    cdr >> ros_message->time_const;
  }

  // Field name: can_run_factor
  {
    cdr >> ros_message->can_run_factor;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__NpfgStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NpfgStatus__ros_msg_type * ros_message = static_cast<const _NpfgStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name wind_est_valid
  {
    size_t item_size = sizeof(ros_message->wind_est_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_accel
  {
    size_t item_size = sizeof(ros_message->lat_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_accel_ff
  {
    size_t item_size = sizeof(ros_message->lat_accel_ff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bearing_feas
  {
    size_t item_size = sizeof(ros_message->bearing_feas);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bearing_feas_on_track
  {
    size_t item_size = sizeof(ros_message->bearing_feas_on_track);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signed_track_error
  {
    size_t item_size = sizeof(ros_message->signed_track_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name track_error_bound
  {
    size_t item_size = sizeof(ros_message->track_error_bound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name airspeed_ref
  {
    size_t item_size = sizeof(ros_message->airspeed_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bearing
  {
    size_t item_size = sizeof(ros_message->bearing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_ref
  {
    size_t item_size = sizeof(ros_message->heading_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_ground_speed_ref
  {
    size_t item_size = sizeof(ros_message->min_ground_speed_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adapted_period
  {
    size_t item_size = sizeof(ros_message->adapted_period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_gain
  {
    size_t item_size = sizeof(ros_message->p_gain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_const
  {
    size_t item_size = sizeof(ros_message->time_const);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_run_factor
  {
    size_t item_size = sizeof(ros_message->can_run_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NpfgStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__NpfgStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__NpfgStatus(
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
  // member: wind_est_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lat_accel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lat_accel_ff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bearing_feas
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bearing_feas_on_track
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: signed_track_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: track_error_bound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: airspeed_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bearing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_ground_speed_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: adapted_period
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: p_gain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_const
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: can_run_factor
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
    using DataType = px4_msgs__msg__NpfgStatus;
    is_plain =
      (
      offsetof(DataType, can_run_factor) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NpfgStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__NpfgStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NpfgStatus = {
  "px4_msgs::msg",
  "NpfgStatus",
  _NpfgStatus__cdr_serialize,
  _NpfgStatus__cdr_deserialize,
  _NpfgStatus__get_serialized_size,
  _NpfgStatus__max_serialized_size
};

static rosidl_message_type_support_t _NpfgStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NpfgStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, NpfgStatus)() {
  return &_NpfgStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
