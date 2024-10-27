// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_status__struct.h"
#include "px4_msgs/msg/detail/estimator_status__functions.h"
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


using _EstimatorStatus__ros_msg_type = px4_msgs__msg__EstimatorStatus;

static bool _EstimatorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorStatus__ros_msg_type * ros_message = static_cast<const _EstimatorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: output_tracking_error
  {
    size_t size = 3;
    auto array_ptr = ros_message->output_tracking_error;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gps_check_fail_flags
  {
    cdr << ros_message->gps_check_fail_flags;
  }

  // Field name: control_mode_flags
  {
    cdr << ros_message->control_mode_flags;
  }

  // Field name: filter_fault_flags
  {
    cdr << ros_message->filter_fault_flags;
  }

  // Field name: pos_horiz_accuracy
  {
    cdr << ros_message->pos_horiz_accuracy;
  }

  // Field name: pos_vert_accuracy
  {
    cdr << ros_message->pos_vert_accuracy;
  }

  // Field name: innovation_check_flags
  {
    cdr << ros_message->innovation_check_flags;
  }

  // Field name: mag_test_ratio
  {
    cdr << ros_message->mag_test_ratio;
  }

  // Field name: vel_test_ratio
  {
    cdr << ros_message->vel_test_ratio;
  }

  // Field name: pos_test_ratio
  {
    cdr << ros_message->pos_test_ratio;
  }

  // Field name: hgt_test_ratio
  {
    cdr << ros_message->hgt_test_ratio;
  }

  // Field name: tas_test_ratio
  {
    cdr << ros_message->tas_test_ratio;
  }

  // Field name: hagl_test_ratio
  {
    cdr << ros_message->hagl_test_ratio;
  }

  // Field name: beta_test_ratio
  {
    cdr << ros_message->beta_test_ratio;
  }

  // Field name: solution_status_flags
  {
    cdr << ros_message->solution_status_flags;
  }

  // Field name: reset_count_vel_ne
  {
    cdr << ros_message->reset_count_vel_ne;
  }

  // Field name: reset_count_vel_d
  {
    cdr << ros_message->reset_count_vel_d;
  }

  // Field name: reset_count_pos_ne
  {
    cdr << ros_message->reset_count_pos_ne;
  }

  // Field name: reset_count_pod_d
  {
    cdr << ros_message->reset_count_pod_d;
  }

  // Field name: reset_count_quat
  {
    cdr << ros_message->reset_count_quat;
  }

  // Field name: time_slip
  {
    cdr << ros_message->time_slip;
  }

  // Field name: pre_flt_fail_innov_heading
  {
    cdr << (ros_message->pre_flt_fail_innov_heading ? true : false);
  }

  // Field name: pre_flt_fail_innov_vel_horiz
  {
    cdr << (ros_message->pre_flt_fail_innov_vel_horiz ? true : false);
  }

  // Field name: pre_flt_fail_innov_vel_vert
  {
    cdr << (ros_message->pre_flt_fail_innov_vel_vert ? true : false);
  }

  // Field name: pre_flt_fail_innov_height
  {
    cdr << (ros_message->pre_flt_fail_innov_height ? true : false);
  }

  // Field name: pre_flt_fail_mag_field_disturbed
  {
    cdr << (ros_message->pre_flt_fail_mag_field_disturbed ? true : false);
  }

  // Field name: accel_device_id
  {
    cdr << ros_message->accel_device_id;
  }

  // Field name: gyro_device_id
  {
    cdr << ros_message->gyro_device_id;
  }

  // Field name: baro_device_id
  {
    cdr << ros_message->baro_device_id;
  }

  // Field name: mag_device_id
  {
    cdr << ros_message->mag_device_id;
  }

  // Field name: health_flags
  {
    cdr << ros_message->health_flags;
  }

  // Field name: timeout_flags
  {
    cdr << ros_message->timeout_flags;
  }

  // Field name: mag_inclination_deg
  {
    cdr << ros_message->mag_inclination_deg;
  }

  // Field name: mag_inclination_ref_deg
  {
    cdr << ros_message->mag_inclination_ref_deg;
  }

  // Field name: mag_strength_gs
  {
    cdr << ros_message->mag_strength_gs;
  }

  // Field name: mag_strength_ref_gs
  {
    cdr << ros_message->mag_strength_ref_gs;
  }

  return true;
}

static bool _EstimatorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorStatus__ros_msg_type * ros_message = static_cast<_EstimatorStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: output_tracking_error
  {
    size_t size = 3;
    auto array_ptr = ros_message->output_tracking_error;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gps_check_fail_flags
  {
    cdr >> ros_message->gps_check_fail_flags;
  }

  // Field name: control_mode_flags
  {
    cdr >> ros_message->control_mode_flags;
  }

  // Field name: filter_fault_flags
  {
    cdr >> ros_message->filter_fault_flags;
  }

  // Field name: pos_horiz_accuracy
  {
    cdr >> ros_message->pos_horiz_accuracy;
  }

  // Field name: pos_vert_accuracy
  {
    cdr >> ros_message->pos_vert_accuracy;
  }

  // Field name: innovation_check_flags
  {
    cdr >> ros_message->innovation_check_flags;
  }

  // Field name: mag_test_ratio
  {
    cdr >> ros_message->mag_test_ratio;
  }

  // Field name: vel_test_ratio
  {
    cdr >> ros_message->vel_test_ratio;
  }

  // Field name: pos_test_ratio
  {
    cdr >> ros_message->pos_test_ratio;
  }

  // Field name: hgt_test_ratio
  {
    cdr >> ros_message->hgt_test_ratio;
  }

  // Field name: tas_test_ratio
  {
    cdr >> ros_message->tas_test_ratio;
  }

  // Field name: hagl_test_ratio
  {
    cdr >> ros_message->hagl_test_ratio;
  }

  // Field name: beta_test_ratio
  {
    cdr >> ros_message->beta_test_ratio;
  }

  // Field name: solution_status_flags
  {
    cdr >> ros_message->solution_status_flags;
  }

  // Field name: reset_count_vel_ne
  {
    cdr >> ros_message->reset_count_vel_ne;
  }

  // Field name: reset_count_vel_d
  {
    cdr >> ros_message->reset_count_vel_d;
  }

  // Field name: reset_count_pos_ne
  {
    cdr >> ros_message->reset_count_pos_ne;
  }

  // Field name: reset_count_pod_d
  {
    cdr >> ros_message->reset_count_pod_d;
  }

  // Field name: reset_count_quat
  {
    cdr >> ros_message->reset_count_quat;
  }

  // Field name: time_slip
  {
    cdr >> ros_message->time_slip;
  }

  // Field name: pre_flt_fail_innov_heading
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pre_flt_fail_innov_heading = tmp ? true : false;
  }

  // Field name: pre_flt_fail_innov_vel_horiz
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pre_flt_fail_innov_vel_horiz = tmp ? true : false;
  }

  // Field name: pre_flt_fail_innov_vel_vert
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pre_flt_fail_innov_vel_vert = tmp ? true : false;
  }

  // Field name: pre_flt_fail_innov_height
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pre_flt_fail_innov_height = tmp ? true : false;
  }

  // Field name: pre_flt_fail_mag_field_disturbed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pre_flt_fail_mag_field_disturbed = tmp ? true : false;
  }

  // Field name: accel_device_id
  {
    cdr >> ros_message->accel_device_id;
  }

  // Field name: gyro_device_id
  {
    cdr >> ros_message->gyro_device_id;
  }

  // Field name: baro_device_id
  {
    cdr >> ros_message->baro_device_id;
  }

  // Field name: mag_device_id
  {
    cdr >> ros_message->mag_device_id;
  }

  // Field name: health_flags
  {
    cdr >> ros_message->health_flags;
  }

  // Field name: timeout_flags
  {
    cdr >> ros_message->timeout_flags;
  }

  // Field name: mag_inclination_deg
  {
    cdr >> ros_message->mag_inclination_deg;
  }

  // Field name: mag_inclination_ref_deg
  {
    cdr >> ros_message->mag_inclination_ref_deg;
  }

  // Field name: mag_strength_gs
  {
    cdr >> ros_message->mag_strength_gs;
  }

  // Field name: mag_strength_ref_gs
  {
    cdr >> ros_message->mag_strength_ref_gs;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorStatus__ros_msg_type * ros_message = static_cast<const _EstimatorStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name output_tracking_error
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->output_tracking_error;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_check_fail_flags
  {
    size_t item_size = sizeof(ros_message->gps_check_fail_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_mode_flags
  {
    size_t item_size = sizeof(ros_message->control_mode_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_fault_flags
  {
    size_t item_size = sizeof(ros_message->filter_fault_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_horiz_accuracy
  {
    size_t item_size = sizeof(ros_message->pos_horiz_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_vert_accuracy
  {
    size_t item_size = sizeof(ros_message->pos_vert_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation_check_flags
  {
    size_t item_size = sizeof(ros_message->innovation_check_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_test_ratio
  {
    size_t item_size = sizeof(ros_message->mag_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_test_ratio
  {
    size_t item_size = sizeof(ros_message->vel_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_test_ratio
  {
    size_t item_size = sizeof(ros_message->pos_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hgt_test_ratio
  {
    size_t item_size = sizeof(ros_message->hgt_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tas_test_ratio
  {
    size_t item_size = sizeof(ros_message->tas_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hagl_test_ratio
  {
    size_t item_size = sizeof(ros_message->hagl_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beta_test_ratio
  {
    size_t item_size = sizeof(ros_message->beta_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name solution_status_flags
  {
    size_t item_size = sizeof(ros_message->solution_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_count_vel_ne
  {
    size_t item_size = sizeof(ros_message->reset_count_vel_ne);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_count_vel_d
  {
    size_t item_size = sizeof(ros_message->reset_count_vel_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_count_pos_ne
  {
    size_t item_size = sizeof(ros_message->reset_count_pos_ne);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_count_pod_d
  {
    size_t item_size = sizeof(ros_message->reset_count_pod_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_count_quat
  {
    size_t item_size = sizeof(ros_message->reset_count_quat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_slip
  {
    size_t item_size = sizeof(ros_message->time_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_flt_fail_innov_heading
  {
    size_t item_size = sizeof(ros_message->pre_flt_fail_innov_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_flt_fail_innov_vel_horiz
  {
    size_t item_size = sizeof(ros_message->pre_flt_fail_innov_vel_horiz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_flt_fail_innov_vel_vert
  {
    size_t item_size = sizeof(ros_message->pre_flt_fail_innov_vel_vert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_flt_fail_innov_height
  {
    size_t item_size = sizeof(ros_message->pre_flt_fail_innov_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pre_flt_fail_mag_field_disturbed
  {
    size_t item_size = sizeof(ros_message->pre_flt_fail_mag_field_disturbed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_device_id
  {
    size_t item_size = sizeof(ros_message->accel_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro_device_id
  {
    size_t item_size = sizeof(ros_message->gyro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro_device_id
  {
    size_t item_size = sizeof(ros_message->baro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_device_id
  {
    size_t item_size = sizeof(ros_message->mag_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name health_flags
  {
    size_t item_size = sizeof(ros_message->health_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timeout_flags
  {
    size_t item_size = sizeof(ros_message->timeout_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_inclination_deg
  {
    size_t item_size = sizeof(ros_message->mag_inclination_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_inclination_ref_deg
  {
    size_t item_size = sizeof(ros_message->mag_inclination_ref_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_strength_gs
  {
    size_t item_size = sizeof(ros_message->mag_strength_gs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mag_strength_ref_gs
  {
    size_t item_size = sizeof(ros_message->mag_strength_ref_gs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorStatus(
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
  // member: output_tracking_error
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_check_fail_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: control_mode_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: filter_fault_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_horiz_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_vert_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: innovation_check_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mag_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hgt_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tas_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hagl_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: beta_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: solution_status_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reset_count_vel_ne
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_count_vel_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_count_pos_ne
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_count_pod_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_count_quat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: time_slip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pre_flt_fail_innov_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pre_flt_fail_innov_vel_horiz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pre_flt_fail_innov_vel_vert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pre_flt_fail_innov_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pre_flt_fail_mag_field_disturbed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accel_device_id
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
  // member: baro_device_id
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
  // member: health_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: timeout_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mag_inclination_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_inclination_ref_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_strength_gs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mag_strength_ref_gs
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
    using DataType = px4_msgs__msg__EstimatorStatus;
    is_plain =
      (
      offsetof(DataType, mag_strength_ref_gs) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EstimatorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__EstimatorStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EstimatorStatus = {
  "px4_msgs::msg",
  "EstimatorStatus",
  _EstimatorStatus__cdr_serialize,
  _EstimatorStatus__cdr_deserialize,
  _EstimatorStatus__get_serialized_size,
  _EstimatorStatus__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorStatus)() {
  return &_EstimatorStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
