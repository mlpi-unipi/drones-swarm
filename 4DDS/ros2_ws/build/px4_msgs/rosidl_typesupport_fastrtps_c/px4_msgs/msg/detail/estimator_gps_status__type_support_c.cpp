// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorGpsStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_gps_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_gps_status__struct.h"
#include "px4_msgs/msg/detail/estimator_gps_status__functions.h"
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


using _EstimatorGpsStatus__ros_msg_type = px4_msgs__msg__EstimatorGpsStatus;

static bool _EstimatorGpsStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorGpsStatus__ros_msg_type * ros_message = static_cast<const _EstimatorGpsStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: checks_passed
  {
    cdr << (ros_message->checks_passed ? true : false);
  }

  // Field name: check_fail_gps_fix
  {
    cdr << (ros_message->check_fail_gps_fix ? true : false);
  }

  // Field name: check_fail_min_sat_count
  {
    cdr << (ros_message->check_fail_min_sat_count ? true : false);
  }

  // Field name: check_fail_max_pdop
  {
    cdr << (ros_message->check_fail_max_pdop ? true : false);
  }

  // Field name: check_fail_max_horz_err
  {
    cdr << (ros_message->check_fail_max_horz_err ? true : false);
  }

  // Field name: check_fail_max_vert_err
  {
    cdr << (ros_message->check_fail_max_vert_err ? true : false);
  }

  // Field name: check_fail_max_spd_err
  {
    cdr << (ros_message->check_fail_max_spd_err ? true : false);
  }

  // Field name: check_fail_max_horz_drift
  {
    cdr << (ros_message->check_fail_max_horz_drift ? true : false);
  }

  // Field name: check_fail_max_vert_drift
  {
    cdr << (ros_message->check_fail_max_vert_drift ? true : false);
  }

  // Field name: check_fail_max_horz_spd_err
  {
    cdr << (ros_message->check_fail_max_horz_spd_err ? true : false);
  }

  // Field name: check_fail_max_vert_spd_err
  {
    cdr << (ros_message->check_fail_max_vert_spd_err ? true : false);
  }

  // Field name: position_drift_rate_horizontal_m_s
  {
    cdr << ros_message->position_drift_rate_horizontal_m_s;
  }

  // Field name: position_drift_rate_vertical_m_s
  {
    cdr << ros_message->position_drift_rate_vertical_m_s;
  }

  // Field name: filtered_horizontal_speed_m_s
  {
    cdr << ros_message->filtered_horizontal_speed_m_s;
  }

  return true;
}

static bool _EstimatorGpsStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorGpsStatus__ros_msg_type * ros_message = static_cast<_EstimatorGpsStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: checks_passed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->checks_passed = tmp ? true : false;
  }

  // Field name: check_fail_gps_fix
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_fail_gps_fix = tmp ? true : false;
  }

  // Field name: check_fail_min_sat_count
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_fail_min_sat_count = tmp ? true : false;
  }

  // Field name: check_fail_max_pdop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_fail_max_pdop = tmp ? true : false;
  }

  // Field name: check_fail_max_horz_err
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_fail_max_horz_err = tmp ? true : false;
  }

  // Field name: check_fail_max_vert_err
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_fail_max_vert_err = tmp ? true : false;
  }

  // Field name: check_fail_max_spd_err
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_fail_max_spd_err = tmp ? true : false;
  }

  // Field name: check_fail_max_horz_drift
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_fail_max_horz_drift = tmp ? true : false;
  }

  // Field name: check_fail_max_vert_drift
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_fail_max_vert_drift = tmp ? true : false;
  }

  // Field name: check_fail_max_horz_spd_err
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_fail_max_horz_spd_err = tmp ? true : false;
  }

  // Field name: check_fail_max_vert_spd_err
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_fail_max_vert_spd_err = tmp ? true : false;
  }

  // Field name: position_drift_rate_horizontal_m_s
  {
    cdr >> ros_message->position_drift_rate_horizontal_m_s;
  }

  // Field name: position_drift_rate_vertical_m_s
  {
    cdr >> ros_message->position_drift_rate_vertical_m_s;
  }

  // Field name: filtered_horizontal_speed_m_s
  {
    cdr >> ros_message->filtered_horizontal_speed_m_s;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorGpsStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorGpsStatus__ros_msg_type * ros_message = static_cast<const _EstimatorGpsStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name checks_passed
  {
    size_t item_size = sizeof(ros_message->checks_passed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_fail_gps_fix
  {
    size_t item_size = sizeof(ros_message->check_fail_gps_fix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_fail_min_sat_count
  {
    size_t item_size = sizeof(ros_message->check_fail_min_sat_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_fail_max_pdop
  {
    size_t item_size = sizeof(ros_message->check_fail_max_pdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_fail_max_horz_err
  {
    size_t item_size = sizeof(ros_message->check_fail_max_horz_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_fail_max_vert_err
  {
    size_t item_size = sizeof(ros_message->check_fail_max_vert_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_fail_max_spd_err
  {
    size_t item_size = sizeof(ros_message->check_fail_max_spd_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_fail_max_horz_drift
  {
    size_t item_size = sizeof(ros_message->check_fail_max_horz_drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_fail_max_vert_drift
  {
    size_t item_size = sizeof(ros_message->check_fail_max_vert_drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_fail_max_horz_spd_err
  {
    size_t item_size = sizeof(ros_message->check_fail_max_horz_spd_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_fail_max_vert_spd_err
  {
    size_t item_size = sizeof(ros_message->check_fail_max_vert_spd_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_drift_rate_horizontal_m_s
  {
    size_t item_size = sizeof(ros_message->position_drift_rate_horizontal_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_drift_rate_vertical_m_s
  {
    size_t item_size = sizeof(ros_message->position_drift_rate_vertical_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filtered_horizontal_speed_m_s
  {
    size_t item_size = sizeof(ros_message->filtered_horizontal_speed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorGpsStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorGpsStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorGpsStatus(
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
  // member: checks_passed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check_fail_gps_fix
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check_fail_min_sat_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check_fail_max_pdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check_fail_max_horz_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check_fail_max_vert_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check_fail_max_spd_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check_fail_max_horz_drift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check_fail_max_vert_drift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check_fail_max_horz_spd_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: check_fail_max_vert_spd_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_drift_rate_horizontal_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_drift_rate_vertical_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: filtered_horizontal_speed_m_s
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
    using DataType = px4_msgs__msg__EstimatorGpsStatus;
    is_plain =
      (
      offsetof(DataType, filtered_horizontal_speed_m_s) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EstimatorGpsStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__EstimatorGpsStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EstimatorGpsStatus = {
  "px4_msgs::msg",
  "EstimatorGpsStatus",
  _EstimatorGpsStatus__cdr_serialize,
  _EstimatorGpsStatus__cdr_deserialize,
  _EstimatorGpsStatus__get_serialized_size,
  _EstimatorGpsStatus__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorGpsStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorGpsStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorGpsStatus)() {
  return &_EstimatorGpsStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
