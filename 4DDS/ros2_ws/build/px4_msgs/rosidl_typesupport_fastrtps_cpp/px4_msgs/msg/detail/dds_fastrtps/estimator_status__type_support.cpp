// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/estimator_status__struct.hpp"

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
  const px4_msgs::msg::EstimatorStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: timestamp_sample
  cdr << ros_message.timestamp_sample;
  // Member: output_tracking_error
  {
    cdr << ros_message.output_tracking_error;
  }
  // Member: gps_check_fail_flags
  cdr << ros_message.gps_check_fail_flags;
  // Member: control_mode_flags
  cdr << ros_message.control_mode_flags;
  // Member: filter_fault_flags
  cdr << ros_message.filter_fault_flags;
  // Member: pos_horiz_accuracy
  cdr << ros_message.pos_horiz_accuracy;
  // Member: pos_vert_accuracy
  cdr << ros_message.pos_vert_accuracy;
  // Member: innovation_check_flags
  cdr << ros_message.innovation_check_flags;
  // Member: mag_test_ratio
  cdr << ros_message.mag_test_ratio;
  // Member: vel_test_ratio
  cdr << ros_message.vel_test_ratio;
  // Member: pos_test_ratio
  cdr << ros_message.pos_test_ratio;
  // Member: hgt_test_ratio
  cdr << ros_message.hgt_test_ratio;
  // Member: tas_test_ratio
  cdr << ros_message.tas_test_ratio;
  // Member: hagl_test_ratio
  cdr << ros_message.hagl_test_ratio;
  // Member: beta_test_ratio
  cdr << ros_message.beta_test_ratio;
  // Member: solution_status_flags
  cdr << ros_message.solution_status_flags;
  // Member: reset_count_vel_ne
  cdr << ros_message.reset_count_vel_ne;
  // Member: reset_count_vel_d
  cdr << ros_message.reset_count_vel_d;
  // Member: reset_count_pos_ne
  cdr << ros_message.reset_count_pos_ne;
  // Member: reset_count_pod_d
  cdr << ros_message.reset_count_pod_d;
  // Member: reset_count_quat
  cdr << ros_message.reset_count_quat;
  // Member: time_slip
  cdr << ros_message.time_slip;
  // Member: pre_flt_fail_innov_heading
  cdr << (ros_message.pre_flt_fail_innov_heading ? true : false);
  // Member: pre_flt_fail_innov_vel_horiz
  cdr << (ros_message.pre_flt_fail_innov_vel_horiz ? true : false);
  // Member: pre_flt_fail_innov_vel_vert
  cdr << (ros_message.pre_flt_fail_innov_vel_vert ? true : false);
  // Member: pre_flt_fail_innov_height
  cdr << (ros_message.pre_flt_fail_innov_height ? true : false);
  // Member: pre_flt_fail_mag_field_disturbed
  cdr << (ros_message.pre_flt_fail_mag_field_disturbed ? true : false);
  // Member: accel_device_id
  cdr << ros_message.accel_device_id;
  // Member: gyro_device_id
  cdr << ros_message.gyro_device_id;
  // Member: baro_device_id
  cdr << ros_message.baro_device_id;
  // Member: mag_device_id
  cdr << ros_message.mag_device_id;
  // Member: health_flags
  cdr << ros_message.health_flags;
  // Member: timeout_flags
  cdr << ros_message.timeout_flags;
  // Member: mag_inclination_deg
  cdr << ros_message.mag_inclination_deg;
  // Member: mag_inclination_ref_deg
  cdr << ros_message.mag_inclination_ref_deg;
  // Member: mag_strength_gs
  cdr << ros_message.mag_strength_gs;
  // Member: mag_strength_ref_gs
  cdr << ros_message.mag_strength_ref_gs;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::EstimatorStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: timestamp_sample
  cdr >> ros_message.timestamp_sample;

  // Member: output_tracking_error
  {
    cdr >> ros_message.output_tracking_error;
  }

  // Member: gps_check_fail_flags
  cdr >> ros_message.gps_check_fail_flags;

  // Member: control_mode_flags
  cdr >> ros_message.control_mode_flags;

  // Member: filter_fault_flags
  cdr >> ros_message.filter_fault_flags;

  // Member: pos_horiz_accuracy
  cdr >> ros_message.pos_horiz_accuracy;

  // Member: pos_vert_accuracy
  cdr >> ros_message.pos_vert_accuracy;

  // Member: innovation_check_flags
  cdr >> ros_message.innovation_check_flags;

  // Member: mag_test_ratio
  cdr >> ros_message.mag_test_ratio;

  // Member: vel_test_ratio
  cdr >> ros_message.vel_test_ratio;

  // Member: pos_test_ratio
  cdr >> ros_message.pos_test_ratio;

  // Member: hgt_test_ratio
  cdr >> ros_message.hgt_test_ratio;

  // Member: tas_test_ratio
  cdr >> ros_message.tas_test_ratio;

  // Member: hagl_test_ratio
  cdr >> ros_message.hagl_test_ratio;

  // Member: beta_test_ratio
  cdr >> ros_message.beta_test_ratio;

  // Member: solution_status_flags
  cdr >> ros_message.solution_status_flags;

  // Member: reset_count_vel_ne
  cdr >> ros_message.reset_count_vel_ne;

  // Member: reset_count_vel_d
  cdr >> ros_message.reset_count_vel_d;

  // Member: reset_count_pos_ne
  cdr >> ros_message.reset_count_pos_ne;

  // Member: reset_count_pod_d
  cdr >> ros_message.reset_count_pod_d;

  // Member: reset_count_quat
  cdr >> ros_message.reset_count_quat;

  // Member: time_slip
  cdr >> ros_message.time_slip;

  // Member: pre_flt_fail_innov_heading
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pre_flt_fail_innov_heading = tmp ? true : false;
  }

  // Member: pre_flt_fail_innov_vel_horiz
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pre_flt_fail_innov_vel_horiz = tmp ? true : false;
  }

  // Member: pre_flt_fail_innov_vel_vert
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pre_flt_fail_innov_vel_vert = tmp ? true : false;
  }

  // Member: pre_flt_fail_innov_height
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pre_flt_fail_innov_height = tmp ? true : false;
  }

  // Member: pre_flt_fail_mag_field_disturbed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pre_flt_fail_mag_field_disturbed = tmp ? true : false;
  }

  // Member: accel_device_id
  cdr >> ros_message.accel_device_id;

  // Member: gyro_device_id
  cdr >> ros_message.gyro_device_id;

  // Member: baro_device_id
  cdr >> ros_message.baro_device_id;

  // Member: mag_device_id
  cdr >> ros_message.mag_device_id;

  // Member: health_flags
  cdr >> ros_message.health_flags;

  // Member: timeout_flags
  cdr >> ros_message.timeout_flags;

  // Member: mag_inclination_deg
  cdr >> ros_message.mag_inclination_deg;

  // Member: mag_inclination_ref_deg
  cdr >> ros_message.mag_inclination_ref_deg;

  // Member: mag_strength_gs
  cdr >> ros_message.mag_strength_gs;

  // Member: mag_strength_ref_gs
  cdr >> ros_message.mag_strength_ref_gs;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::EstimatorStatus & ros_message,
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
  // Member: output_tracking_error
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.output_tracking_error[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_check_fail_flags
  {
    size_t item_size = sizeof(ros_message.gps_check_fail_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_mode_flags
  {
    size_t item_size = sizeof(ros_message.control_mode_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filter_fault_flags
  {
    size_t item_size = sizeof(ros_message.filter_fault_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_horiz_accuracy
  {
    size_t item_size = sizeof(ros_message.pos_horiz_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_vert_accuracy
  {
    size_t item_size = sizeof(ros_message.pos_vert_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: innovation_check_flags
  {
    size_t item_size = sizeof(ros_message.innovation_check_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_test_ratio
  {
    size_t item_size = sizeof(ros_message.mag_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_test_ratio
  {
    size_t item_size = sizeof(ros_message.vel_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_test_ratio
  {
    size_t item_size = sizeof(ros_message.pos_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hgt_test_ratio
  {
    size_t item_size = sizeof(ros_message.hgt_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tas_test_ratio
  {
    size_t item_size = sizeof(ros_message.tas_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hagl_test_ratio
  {
    size_t item_size = sizeof(ros_message.hagl_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: beta_test_ratio
  {
    size_t item_size = sizeof(ros_message.beta_test_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: solution_status_flags
  {
    size_t item_size = sizeof(ros_message.solution_status_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reset_count_vel_ne
  {
    size_t item_size = sizeof(ros_message.reset_count_vel_ne);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reset_count_vel_d
  {
    size_t item_size = sizeof(ros_message.reset_count_vel_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reset_count_pos_ne
  {
    size_t item_size = sizeof(ros_message.reset_count_pos_ne);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reset_count_pod_d
  {
    size_t item_size = sizeof(ros_message.reset_count_pod_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reset_count_quat
  {
    size_t item_size = sizeof(ros_message.reset_count_quat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_slip
  {
    size_t item_size = sizeof(ros_message.time_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_flt_fail_innov_heading
  {
    size_t item_size = sizeof(ros_message.pre_flt_fail_innov_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_flt_fail_innov_vel_horiz
  {
    size_t item_size = sizeof(ros_message.pre_flt_fail_innov_vel_horiz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_flt_fail_innov_vel_vert
  {
    size_t item_size = sizeof(ros_message.pre_flt_fail_innov_vel_vert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_flt_fail_innov_height
  {
    size_t item_size = sizeof(ros_message.pre_flt_fail_innov_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_flt_fail_mag_field_disturbed
  {
    size_t item_size = sizeof(ros_message.pre_flt_fail_mag_field_disturbed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_device_id
  {
    size_t item_size = sizeof(ros_message.accel_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro_device_id
  {
    size_t item_size = sizeof(ros_message.gyro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baro_device_id
  {
    size_t item_size = sizeof(ros_message.baro_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_device_id
  {
    size_t item_size = sizeof(ros_message.mag_device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: health_flags
  {
    size_t item_size = sizeof(ros_message.health_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timeout_flags
  {
    size_t item_size = sizeof(ros_message.timeout_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_inclination_deg
  {
    size_t item_size = sizeof(ros_message.mag_inclination_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_inclination_ref_deg
  {
    size_t item_size = sizeof(ros_message.mag_inclination_ref_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_strength_gs
  {
    size_t item_size = sizeof(ros_message.mag_strength_gs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mag_strength_ref_gs
  {
    size_t item_size = sizeof(ros_message.mag_strength_ref_gs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_EstimatorStatus(
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

  // Member: output_tracking_error
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gps_check_fail_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: control_mode_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: filter_fault_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_horiz_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_vert_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: innovation_check_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mag_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hgt_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tas_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hagl_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: beta_test_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: solution_status_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: reset_count_vel_ne
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reset_count_vel_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reset_count_pos_ne
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reset_count_pod_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reset_count_quat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: time_slip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pre_flt_fail_innov_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pre_flt_fail_innov_vel_horiz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pre_flt_fail_innov_vel_vert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pre_flt_fail_innov_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pre_flt_fail_mag_field_disturbed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accel_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: baro_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: health_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: timeout_flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mag_inclination_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_inclination_ref_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_strength_gs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mag_strength_ref_gs
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
    using DataType = px4_msgs::msg::EstimatorStatus;
    is_plain =
      (
      offsetof(DataType, mag_strength_ref_gs) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EstimatorStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EstimatorStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::EstimatorStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EstimatorStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EstimatorStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EstimatorStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EstimatorStatus__callbacks = {
  "px4_msgs::msg",
  "EstimatorStatus",
  _EstimatorStatus__cdr_serialize,
  _EstimatorStatus__cdr_deserialize,
  _EstimatorStatus__get_serialized_size,
  _EstimatorStatus__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EstimatorStatus__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::EstimatorStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, EstimatorStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorStatus__handle;
}

#ifdef __cplusplus
}
#endif
