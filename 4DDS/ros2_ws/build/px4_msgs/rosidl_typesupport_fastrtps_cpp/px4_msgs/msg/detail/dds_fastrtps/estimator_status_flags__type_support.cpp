// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_status_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/estimator_status_flags__struct.hpp"

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
  const px4_msgs::msg::EstimatorStatusFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: timestamp_sample
  cdr << ros_message.timestamp_sample;
  // Member: control_status_changes
  cdr << ros_message.control_status_changes;
  // Member: cs_tilt_align
  cdr << (ros_message.cs_tilt_align ? true : false);
  // Member: cs_yaw_align
  cdr << (ros_message.cs_yaw_align ? true : false);
  // Member: cs_gps
  cdr << (ros_message.cs_gps ? true : false);
  // Member: cs_opt_flow
  cdr << (ros_message.cs_opt_flow ? true : false);
  // Member: cs_mag_hdg
  cdr << (ros_message.cs_mag_hdg ? true : false);
  // Member: cs_mag_3d
  cdr << (ros_message.cs_mag_3d ? true : false);
  // Member: cs_mag_dec
  cdr << (ros_message.cs_mag_dec ? true : false);
  // Member: cs_in_air
  cdr << (ros_message.cs_in_air ? true : false);
  // Member: cs_wind
  cdr << (ros_message.cs_wind ? true : false);
  // Member: cs_baro_hgt
  cdr << (ros_message.cs_baro_hgt ? true : false);
  // Member: cs_rng_hgt
  cdr << (ros_message.cs_rng_hgt ? true : false);
  // Member: cs_gps_hgt
  cdr << (ros_message.cs_gps_hgt ? true : false);
  // Member: cs_ev_pos
  cdr << (ros_message.cs_ev_pos ? true : false);
  // Member: cs_ev_yaw
  cdr << (ros_message.cs_ev_yaw ? true : false);
  // Member: cs_ev_hgt
  cdr << (ros_message.cs_ev_hgt ? true : false);
  // Member: cs_fuse_beta
  cdr << (ros_message.cs_fuse_beta ? true : false);
  // Member: cs_mag_field_disturbed
  cdr << (ros_message.cs_mag_field_disturbed ? true : false);
  // Member: cs_fixed_wing
  cdr << (ros_message.cs_fixed_wing ? true : false);
  // Member: cs_mag_fault
  cdr << (ros_message.cs_mag_fault ? true : false);
  // Member: cs_fuse_aspd
  cdr << (ros_message.cs_fuse_aspd ? true : false);
  // Member: cs_gnd_effect
  cdr << (ros_message.cs_gnd_effect ? true : false);
  // Member: cs_rng_stuck
  cdr << (ros_message.cs_rng_stuck ? true : false);
  // Member: cs_gps_yaw
  cdr << (ros_message.cs_gps_yaw ? true : false);
  // Member: cs_mag_aligned_in_flight
  cdr << (ros_message.cs_mag_aligned_in_flight ? true : false);
  // Member: cs_ev_vel
  cdr << (ros_message.cs_ev_vel ? true : false);
  // Member: cs_synthetic_mag_z
  cdr << (ros_message.cs_synthetic_mag_z ? true : false);
  // Member: cs_vehicle_at_rest
  cdr << (ros_message.cs_vehicle_at_rest ? true : false);
  // Member: cs_gps_yaw_fault
  cdr << (ros_message.cs_gps_yaw_fault ? true : false);
  // Member: cs_rng_fault
  cdr << (ros_message.cs_rng_fault ? true : false);
  // Member: cs_inertial_dead_reckoning
  cdr << (ros_message.cs_inertial_dead_reckoning ? true : false);
  // Member: cs_wind_dead_reckoning
  cdr << (ros_message.cs_wind_dead_reckoning ? true : false);
  // Member: cs_rng_kin_consistent
  cdr << (ros_message.cs_rng_kin_consistent ? true : false);
  // Member: cs_fake_pos
  cdr << (ros_message.cs_fake_pos ? true : false);
  // Member: cs_fake_hgt
  cdr << (ros_message.cs_fake_hgt ? true : false);
  // Member: cs_gravity_vector
  cdr << (ros_message.cs_gravity_vector ? true : false);
  // Member: cs_mag
  cdr << (ros_message.cs_mag ? true : false);
  // Member: cs_ev_yaw_fault
  cdr << (ros_message.cs_ev_yaw_fault ? true : false);
  // Member: cs_mag_heading_consistent
  cdr << (ros_message.cs_mag_heading_consistent ? true : false);
  // Member: cs_aux_gpos
  cdr << (ros_message.cs_aux_gpos ? true : false);
  // Member: fault_status_changes
  cdr << ros_message.fault_status_changes;
  // Member: fs_bad_mag_x
  cdr << (ros_message.fs_bad_mag_x ? true : false);
  // Member: fs_bad_mag_y
  cdr << (ros_message.fs_bad_mag_y ? true : false);
  // Member: fs_bad_mag_z
  cdr << (ros_message.fs_bad_mag_z ? true : false);
  // Member: fs_bad_hdg
  cdr << (ros_message.fs_bad_hdg ? true : false);
  // Member: fs_bad_mag_decl
  cdr << (ros_message.fs_bad_mag_decl ? true : false);
  // Member: fs_bad_airspeed
  cdr << (ros_message.fs_bad_airspeed ? true : false);
  // Member: fs_bad_sideslip
  cdr << (ros_message.fs_bad_sideslip ? true : false);
  // Member: fs_bad_optflow_x
  cdr << (ros_message.fs_bad_optflow_x ? true : false);
  // Member: fs_bad_optflow_y
  cdr << (ros_message.fs_bad_optflow_y ? true : false);
  // Member: fs_bad_acc_bias
  cdr << (ros_message.fs_bad_acc_bias ? true : false);
  // Member: fs_bad_acc_vertical
  cdr << (ros_message.fs_bad_acc_vertical ? true : false);
  // Member: fs_bad_acc_clipping
  cdr << (ros_message.fs_bad_acc_clipping ? true : false);
  // Member: innovation_fault_status_changes
  cdr << ros_message.innovation_fault_status_changes;
  // Member: reject_hor_vel
  cdr << (ros_message.reject_hor_vel ? true : false);
  // Member: reject_ver_vel
  cdr << (ros_message.reject_ver_vel ? true : false);
  // Member: reject_hor_pos
  cdr << (ros_message.reject_hor_pos ? true : false);
  // Member: reject_ver_pos
  cdr << (ros_message.reject_ver_pos ? true : false);
  // Member: reject_yaw
  cdr << (ros_message.reject_yaw ? true : false);
  // Member: reject_airspeed
  cdr << (ros_message.reject_airspeed ? true : false);
  // Member: reject_sideslip
  cdr << (ros_message.reject_sideslip ? true : false);
  // Member: reject_hagl
  cdr << (ros_message.reject_hagl ? true : false);
  // Member: reject_optflow_x
  cdr << (ros_message.reject_optflow_x ? true : false);
  // Member: reject_optflow_y
  cdr << (ros_message.reject_optflow_y ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::EstimatorStatusFlags & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: timestamp_sample
  cdr >> ros_message.timestamp_sample;

  // Member: control_status_changes
  cdr >> ros_message.control_status_changes;

  // Member: cs_tilt_align
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_tilt_align = tmp ? true : false;
  }

  // Member: cs_yaw_align
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_yaw_align = tmp ? true : false;
  }

  // Member: cs_gps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_gps = tmp ? true : false;
  }

  // Member: cs_opt_flow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_opt_flow = tmp ? true : false;
  }

  // Member: cs_mag_hdg
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_mag_hdg = tmp ? true : false;
  }

  // Member: cs_mag_3d
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_mag_3d = tmp ? true : false;
  }

  // Member: cs_mag_dec
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_mag_dec = tmp ? true : false;
  }

  // Member: cs_in_air
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_in_air = tmp ? true : false;
  }

  // Member: cs_wind
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_wind = tmp ? true : false;
  }

  // Member: cs_baro_hgt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_baro_hgt = tmp ? true : false;
  }

  // Member: cs_rng_hgt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_rng_hgt = tmp ? true : false;
  }

  // Member: cs_gps_hgt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_gps_hgt = tmp ? true : false;
  }

  // Member: cs_ev_pos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_ev_pos = tmp ? true : false;
  }

  // Member: cs_ev_yaw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_ev_yaw = tmp ? true : false;
  }

  // Member: cs_ev_hgt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_ev_hgt = tmp ? true : false;
  }

  // Member: cs_fuse_beta
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_fuse_beta = tmp ? true : false;
  }

  // Member: cs_mag_field_disturbed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_mag_field_disturbed = tmp ? true : false;
  }

  // Member: cs_fixed_wing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_fixed_wing = tmp ? true : false;
  }

  // Member: cs_mag_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_mag_fault = tmp ? true : false;
  }

  // Member: cs_fuse_aspd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_fuse_aspd = tmp ? true : false;
  }

  // Member: cs_gnd_effect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_gnd_effect = tmp ? true : false;
  }

  // Member: cs_rng_stuck
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_rng_stuck = tmp ? true : false;
  }

  // Member: cs_gps_yaw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_gps_yaw = tmp ? true : false;
  }

  // Member: cs_mag_aligned_in_flight
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_mag_aligned_in_flight = tmp ? true : false;
  }

  // Member: cs_ev_vel
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_ev_vel = tmp ? true : false;
  }

  // Member: cs_synthetic_mag_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_synthetic_mag_z = tmp ? true : false;
  }

  // Member: cs_vehicle_at_rest
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_vehicle_at_rest = tmp ? true : false;
  }

  // Member: cs_gps_yaw_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_gps_yaw_fault = tmp ? true : false;
  }

  // Member: cs_rng_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_rng_fault = tmp ? true : false;
  }

  // Member: cs_inertial_dead_reckoning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_inertial_dead_reckoning = tmp ? true : false;
  }

  // Member: cs_wind_dead_reckoning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_wind_dead_reckoning = tmp ? true : false;
  }

  // Member: cs_rng_kin_consistent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_rng_kin_consistent = tmp ? true : false;
  }

  // Member: cs_fake_pos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_fake_pos = tmp ? true : false;
  }

  // Member: cs_fake_hgt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_fake_hgt = tmp ? true : false;
  }

  // Member: cs_gravity_vector
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_gravity_vector = tmp ? true : false;
  }

  // Member: cs_mag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_mag = tmp ? true : false;
  }

  // Member: cs_ev_yaw_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_ev_yaw_fault = tmp ? true : false;
  }

  // Member: cs_mag_heading_consistent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_mag_heading_consistent = tmp ? true : false;
  }

  // Member: cs_aux_gpos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cs_aux_gpos = tmp ? true : false;
  }

  // Member: fault_status_changes
  cdr >> ros_message.fault_status_changes;

  // Member: fs_bad_mag_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_mag_x = tmp ? true : false;
  }

  // Member: fs_bad_mag_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_mag_y = tmp ? true : false;
  }

  // Member: fs_bad_mag_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_mag_z = tmp ? true : false;
  }

  // Member: fs_bad_hdg
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_hdg = tmp ? true : false;
  }

  // Member: fs_bad_mag_decl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_mag_decl = tmp ? true : false;
  }

  // Member: fs_bad_airspeed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_airspeed = tmp ? true : false;
  }

  // Member: fs_bad_sideslip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_sideslip = tmp ? true : false;
  }

  // Member: fs_bad_optflow_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_optflow_x = tmp ? true : false;
  }

  // Member: fs_bad_optflow_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_optflow_y = tmp ? true : false;
  }

  // Member: fs_bad_acc_bias
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_acc_bias = tmp ? true : false;
  }

  // Member: fs_bad_acc_vertical
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_acc_vertical = tmp ? true : false;
  }

  // Member: fs_bad_acc_clipping
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fs_bad_acc_clipping = tmp ? true : false;
  }

  // Member: innovation_fault_status_changes
  cdr >> ros_message.innovation_fault_status_changes;

  // Member: reject_hor_vel
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reject_hor_vel = tmp ? true : false;
  }

  // Member: reject_ver_vel
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reject_ver_vel = tmp ? true : false;
  }

  // Member: reject_hor_pos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reject_hor_pos = tmp ? true : false;
  }

  // Member: reject_ver_pos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reject_ver_pos = tmp ? true : false;
  }

  // Member: reject_yaw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reject_yaw = tmp ? true : false;
  }

  // Member: reject_airspeed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reject_airspeed = tmp ? true : false;
  }

  // Member: reject_sideslip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reject_sideslip = tmp ? true : false;
  }

  // Member: reject_hagl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reject_hagl = tmp ? true : false;
  }

  // Member: reject_optflow_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reject_optflow_x = tmp ? true : false;
  }

  // Member: reject_optflow_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reject_optflow_y = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::EstimatorStatusFlags & ros_message,
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
  // Member: control_status_changes
  {
    size_t item_size = sizeof(ros_message.control_status_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_tilt_align
  {
    size_t item_size = sizeof(ros_message.cs_tilt_align);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_yaw_align
  {
    size_t item_size = sizeof(ros_message.cs_yaw_align);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_gps
  {
    size_t item_size = sizeof(ros_message.cs_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_opt_flow
  {
    size_t item_size = sizeof(ros_message.cs_opt_flow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_mag_hdg
  {
    size_t item_size = sizeof(ros_message.cs_mag_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_mag_3d
  {
    size_t item_size = sizeof(ros_message.cs_mag_3d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_mag_dec
  {
    size_t item_size = sizeof(ros_message.cs_mag_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_in_air
  {
    size_t item_size = sizeof(ros_message.cs_in_air);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_wind
  {
    size_t item_size = sizeof(ros_message.cs_wind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_baro_hgt
  {
    size_t item_size = sizeof(ros_message.cs_baro_hgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_rng_hgt
  {
    size_t item_size = sizeof(ros_message.cs_rng_hgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_gps_hgt
  {
    size_t item_size = sizeof(ros_message.cs_gps_hgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_ev_pos
  {
    size_t item_size = sizeof(ros_message.cs_ev_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_ev_yaw
  {
    size_t item_size = sizeof(ros_message.cs_ev_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_ev_hgt
  {
    size_t item_size = sizeof(ros_message.cs_ev_hgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_fuse_beta
  {
    size_t item_size = sizeof(ros_message.cs_fuse_beta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_mag_field_disturbed
  {
    size_t item_size = sizeof(ros_message.cs_mag_field_disturbed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_fixed_wing
  {
    size_t item_size = sizeof(ros_message.cs_fixed_wing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_mag_fault
  {
    size_t item_size = sizeof(ros_message.cs_mag_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_fuse_aspd
  {
    size_t item_size = sizeof(ros_message.cs_fuse_aspd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_gnd_effect
  {
    size_t item_size = sizeof(ros_message.cs_gnd_effect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_rng_stuck
  {
    size_t item_size = sizeof(ros_message.cs_rng_stuck);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_gps_yaw
  {
    size_t item_size = sizeof(ros_message.cs_gps_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_mag_aligned_in_flight
  {
    size_t item_size = sizeof(ros_message.cs_mag_aligned_in_flight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_ev_vel
  {
    size_t item_size = sizeof(ros_message.cs_ev_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_synthetic_mag_z
  {
    size_t item_size = sizeof(ros_message.cs_synthetic_mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_vehicle_at_rest
  {
    size_t item_size = sizeof(ros_message.cs_vehicle_at_rest);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_gps_yaw_fault
  {
    size_t item_size = sizeof(ros_message.cs_gps_yaw_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_rng_fault
  {
    size_t item_size = sizeof(ros_message.cs_rng_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_inertial_dead_reckoning
  {
    size_t item_size = sizeof(ros_message.cs_inertial_dead_reckoning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_wind_dead_reckoning
  {
    size_t item_size = sizeof(ros_message.cs_wind_dead_reckoning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_rng_kin_consistent
  {
    size_t item_size = sizeof(ros_message.cs_rng_kin_consistent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_fake_pos
  {
    size_t item_size = sizeof(ros_message.cs_fake_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_fake_hgt
  {
    size_t item_size = sizeof(ros_message.cs_fake_hgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_gravity_vector
  {
    size_t item_size = sizeof(ros_message.cs_gravity_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_mag
  {
    size_t item_size = sizeof(ros_message.cs_mag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_ev_yaw_fault
  {
    size_t item_size = sizeof(ros_message.cs_ev_yaw_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_mag_heading_consistent
  {
    size_t item_size = sizeof(ros_message.cs_mag_heading_consistent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cs_aux_gpos
  {
    size_t item_size = sizeof(ros_message.cs_aux_gpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fault_status_changes
  {
    size_t item_size = sizeof(ros_message.fault_status_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_mag_x
  {
    size_t item_size = sizeof(ros_message.fs_bad_mag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_mag_y
  {
    size_t item_size = sizeof(ros_message.fs_bad_mag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_mag_z
  {
    size_t item_size = sizeof(ros_message.fs_bad_mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_hdg
  {
    size_t item_size = sizeof(ros_message.fs_bad_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_mag_decl
  {
    size_t item_size = sizeof(ros_message.fs_bad_mag_decl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_airspeed
  {
    size_t item_size = sizeof(ros_message.fs_bad_airspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_sideslip
  {
    size_t item_size = sizeof(ros_message.fs_bad_sideslip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_optflow_x
  {
    size_t item_size = sizeof(ros_message.fs_bad_optflow_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_optflow_y
  {
    size_t item_size = sizeof(ros_message.fs_bad_optflow_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_acc_bias
  {
    size_t item_size = sizeof(ros_message.fs_bad_acc_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_acc_vertical
  {
    size_t item_size = sizeof(ros_message.fs_bad_acc_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fs_bad_acc_clipping
  {
    size_t item_size = sizeof(ros_message.fs_bad_acc_clipping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: innovation_fault_status_changes
  {
    size_t item_size = sizeof(ros_message.innovation_fault_status_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reject_hor_vel
  {
    size_t item_size = sizeof(ros_message.reject_hor_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reject_ver_vel
  {
    size_t item_size = sizeof(ros_message.reject_ver_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reject_hor_pos
  {
    size_t item_size = sizeof(ros_message.reject_hor_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reject_ver_pos
  {
    size_t item_size = sizeof(ros_message.reject_ver_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reject_yaw
  {
    size_t item_size = sizeof(ros_message.reject_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reject_airspeed
  {
    size_t item_size = sizeof(ros_message.reject_airspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reject_sideslip
  {
    size_t item_size = sizeof(ros_message.reject_sideslip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reject_hagl
  {
    size_t item_size = sizeof(ros_message.reject_hagl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reject_optflow_x
  {
    size_t item_size = sizeof(ros_message.reject_optflow_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reject_optflow_y
  {
    size_t item_size = sizeof(ros_message.reject_optflow_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_EstimatorStatusFlags(
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

  // Member: control_status_changes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cs_tilt_align
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_yaw_align
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_gps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_opt_flow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_mag_hdg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_mag_3d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_mag_dec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_in_air
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_wind
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_baro_hgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_rng_hgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_gps_hgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_ev_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_ev_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_ev_hgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_fuse_beta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_mag_field_disturbed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_fixed_wing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_mag_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_fuse_aspd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_gnd_effect
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_rng_stuck
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_gps_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_mag_aligned_in_flight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_ev_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_synthetic_mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_vehicle_at_rest
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_gps_yaw_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_rng_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_inertial_dead_reckoning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_wind_dead_reckoning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_rng_kin_consistent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_fake_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_fake_hgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_gravity_vector
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_mag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_ev_yaw_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_mag_heading_consistent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cs_aux_gpos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fault_status_changes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fs_bad_mag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_mag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_hdg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_mag_decl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_airspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_sideslip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_optflow_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_optflow_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_acc_bias
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_acc_vertical
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fs_bad_acc_clipping
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: innovation_fault_status_changes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reject_hor_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reject_ver_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reject_hor_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reject_ver_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reject_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reject_airspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reject_sideslip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reject_hagl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reject_optflow_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reject_optflow_y
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
    using DataType = px4_msgs::msg::EstimatorStatusFlags;
    is_plain =
      (
      offsetof(DataType, reject_optflow_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EstimatorStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorStatusFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EstimatorStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::EstimatorStatusFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EstimatorStatusFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorStatusFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EstimatorStatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EstimatorStatusFlags(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EstimatorStatusFlags__callbacks = {
  "px4_msgs::msg",
  "EstimatorStatusFlags",
  _EstimatorStatusFlags__cdr_serialize,
  _EstimatorStatusFlags__cdr_deserialize,
  _EstimatorStatusFlags__get_serialized_size,
  _EstimatorStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorStatusFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EstimatorStatusFlags__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::EstimatorStatusFlags>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorStatusFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, EstimatorStatusFlags)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorStatusFlags__handle;
}

#ifdef __cplusplus
}
#endif
