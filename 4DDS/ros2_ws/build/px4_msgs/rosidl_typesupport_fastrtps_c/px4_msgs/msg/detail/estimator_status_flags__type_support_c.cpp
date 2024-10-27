// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EstimatorStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_status_flags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/estimator_status_flags__struct.h"
#include "px4_msgs/msg/detail/estimator_status_flags__functions.h"
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


using _EstimatorStatusFlags__ros_msg_type = px4_msgs__msg__EstimatorStatusFlags;

static bool _EstimatorStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EstimatorStatusFlags__ros_msg_type * ros_message = static_cast<const _EstimatorStatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: control_status_changes
  {
    cdr << ros_message->control_status_changes;
  }

  // Field name: cs_tilt_align
  {
    cdr << (ros_message->cs_tilt_align ? true : false);
  }

  // Field name: cs_yaw_align
  {
    cdr << (ros_message->cs_yaw_align ? true : false);
  }

  // Field name: cs_gps
  {
    cdr << (ros_message->cs_gps ? true : false);
  }

  // Field name: cs_opt_flow
  {
    cdr << (ros_message->cs_opt_flow ? true : false);
  }

  // Field name: cs_mag_hdg
  {
    cdr << (ros_message->cs_mag_hdg ? true : false);
  }

  // Field name: cs_mag_3d
  {
    cdr << (ros_message->cs_mag_3d ? true : false);
  }

  // Field name: cs_mag_dec
  {
    cdr << (ros_message->cs_mag_dec ? true : false);
  }

  // Field name: cs_in_air
  {
    cdr << (ros_message->cs_in_air ? true : false);
  }

  // Field name: cs_wind
  {
    cdr << (ros_message->cs_wind ? true : false);
  }

  // Field name: cs_baro_hgt
  {
    cdr << (ros_message->cs_baro_hgt ? true : false);
  }

  // Field name: cs_rng_hgt
  {
    cdr << (ros_message->cs_rng_hgt ? true : false);
  }

  // Field name: cs_gps_hgt
  {
    cdr << (ros_message->cs_gps_hgt ? true : false);
  }

  // Field name: cs_ev_pos
  {
    cdr << (ros_message->cs_ev_pos ? true : false);
  }

  // Field name: cs_ev_yaw
  {
    cdr << (ros_message->cs_ev_yaw ? true : false);
  }

  // Field name: cs_ev_hgt
  {
    cdr << (ros_message->cs_ev_hgt ? true : false);
  }

  // Field name: cs_fuse_beta
  {
    cdr << (ros_message->cs_fuse_beta ? true : false);
  }

  // Field name: cs_mag_field_disturbed
  {
    cdr << (ros_message->cs_mag_field_disturbed ? true : false);
  }

  // Field name: cs_fixed_wing
  {
    cdr << (ros_message->cs_fixed_wing ? true : false);
  }

  // Field name: cs_mag_fault
  {
    cdr << (ros_message->cs_mag_fault ? true : false);
  }

  // Field name: cs_fuse_aspd
  {
    cdr << (ros_message->cs_fuse_aspd ? true : false);
  }

  // Field name: cs_gnd_effect
  {
    cdr << (ros_message->cs_gnd_effect ? true : false);
  }

  // Field name: cs_rng_stuck
  {
    cdr << (ros_message->cs_rng_stuck ? true : false);
  }

  // Field name: cs_gps_yaw
  {
    cdr << (ros_message->cs_gps_yaw ? true : false);
  }

  // Field name: cs_mag_aligned_in_flight
  {
    cdr << (ros_message->cs_mag_aligned_in_flight ? true : false);
  }

  // Field name: cs_ev_vel
  {
    cdr << (ros_message->cs_ev_vel ? true : false);
  }

  // Field name: cs_synthetic_mag_z
  {
    cdr << (ros_message->cs_synthetic_mag_z ? true : false);
  }

  // Field name: cs_vehicle_at_rest
  {
    cdr << (ros_message->cs_vehicle_at_rest ? true : false);
  }

  // Field name: cs_gps_yaw_fault
  {
    cdr << (ros_message->cs_gps_yaw_fault ? true : false);
  }

  // Field name: cs_rng_fault
  {
    cdr << (ros_message->cs_rng_fault ? true : false);
  }

  // Field name: cs_inertial_dead_reckoning
  {
    cdr << (ros_message->cs_inertial_dead_reckoning ? true : false);
  }

  // Field name: cs_wind_dead_reckoning
  {
    cdr << (ros_message->cs_wind_dead_reckoning ? true : false);
  }

  // Field name: cs_rng_kin_consistent
  {
    cdr << (ros_message->cs_rng_kin_consistent ? true : false);
  }

  // Field name: cs_fake_pos
  {
    cdr << (ros_message->cs_fake_pos ? true : false);
  }

  // Field name: cs_fake_hgt
  {
    cdr << (ros_message->cs_fake_hgt ? true : false);
  }

  // Field name: cs_gravity_vector
  {
    cdr << (ros_message->cs_gravity_vector ? true : false);
  }

  // Field name: cs_mag
  {
    cdr << (ros_message->cs_mag ? true : false);
  }

  // Field name: cs_ev_yaw_fault
  {
    cdr << (ros_message->cs_ev_yaw_fault ? true : false);
  }

  // Field name: cs_mag_heading_consistent
  {
    cdr << (ros_message->cs_mag_heading_consistent ? true : false);
  }

  // Field name: cs_aux_gpos
  {
    cdr << (ros_message->cs_aux_gpos ? true : false);
  }

  // Field name: fault_status_changes
  {
    cdr << ros_message->fault_status_changes;
  }

  // Field name: fs_bad_mag_x
  {
    cdr << (ros_message->fs_bad_mag_x ? true : false);
  }

  // Field name: fs_bad_mag_y
  {
    cdr << (ros_message->fs_bad_mag_y ? true : false);
  }

  // Field name: fs_bad_mag_z
  {
    cdr << (ros_message->fs_bad_mag_z ? true : false);
  }

  // Field name: fs_bad_hdg
  {
    cdr << (ros_message->fs_bad_hdg ? true : false);
  }

  // Field name: fs_bad_mag_decl
  {
    cdr << (ros_message->fs_bad_mag_decl ? true : false);
  }

  // Field name: fs_bad_airspeed
  {
    cdr << (ros_message->fs_bad_airspeed ? true : false);
  }

  // Field name: fs_bad_sideslip
  {
    cdr << (ros_message->fs_bad_sideslip ? true : false);
  }

  // Field name: fs_bad_optflow_x
  {
    cdr << (ros_message->fs_bad_optflow_x ? true : false);
  }

  // Field name: fs_bad_optflow_y
  {
    cdr << (ros_message->fs_bad_optflow_y ? true : false);
  }

  // Field name: fs_bad_acc_bias
  {
    cdr << (ros_message->fs_bad_acc_bias ? true : false);
  }

  // Field name: fs_bad_acc_vertical
  {
    cdr << (ros_message->fs_bad_acc_vertical ? true : false);
  }

  // Field name: fs_bad_acc_clipping
  {
    cdr << (ros_message->fs_bad_acc_clipping ? true : false);
  }

  // Field name: innovation_fault_status_changes
  {
    cdr << ros_message->innovation_fault_status_changes;
  }

  // Field name: reject_hor_vel
  {
    cdr << (ros_message->reject_hor_vel ? true : false);
  }

  // Field name: reject_ver_vel
  {
    cdr << (ros_message->reject_ver_vel ? true : false);
  }

  // Field name: reject_hor_pos
  {
    cdr << (ros_message->reject_hor_pos ? true : false);
  }

  // Field name: reject_ver_pos
  {
    cdr << (ros_message->reject_ver_pos ? true : false);
  }

  // Field name: reject_yaw
  {
    cdr << (ros_message->reject_yaw ? true : false);
  }

  // Field name: reject_airspeed
  {
    cdr << (ros_message->reject_airspeed ? true : false);
  }

  // Field name: reject_sideslip
  {
    cdr << (ros_message->reject_sideslip ? true : false);
  }

  // Field name: reject_hagl
  {
    cdr << (ros_message->reject_hagl ? true : false);
  }

  // Field name: reject_optflow_x
  {
    cdr << (ros_message->reject_optflow_x ? true : false);
  }

  // Field name: reject_optflow_y
  {
    cdr << (ros_message->reject_optflow_y ? true : false);
  }

  return true;
}

static bool _EstimatorStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EstimatorStatusFlags__ros_msg_type * ros_message = static_cast<_EstimatorStatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: control_status_changes
  {
    cdr >> ros_message->control_status_changes;
  }

  // Field name: cs_tilt_align
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_tilt_align = tmp ? true : false;
  }

  // Field name: cs_yaw_align
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_yaw_align = tmp ? true : false;
  }

  // Field name: cs_gps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_gps = tmp ? true : false;
  }

  // Field name: cs_opt_flow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_opt_flow = tmp ? true : false;
  }

  // Field name: cs_mag_hdg
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_mag_hdg = tmp ? true : false;
  }

  // Field name: cs_mag_3d
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_mag_3d = tmp ? true : false;
  }

  // Field name: cs_mag_dec
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_mag_dec = tmp ? true : false;
  }

  // Field name: cs_in_air
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_in_air = tmp ? true : false;
  }

  // Field name: cs_wind
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_wind = tmp ? true : false;
  }

  // Field name: cs_baro_hgt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_baro_hgt = tmp ? true : false;
  }

  // Field name: cs_rng_hgt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_rng_hgt = tmp ? true : false;
  }

  // Field name: cs_gps_hgt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_gps_hgt = tmp ? true : false;
  }

  // Field name: cs_ev_pos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_ev_pos = tmp ? true : false;
  }

  // Field name: cs_ev_yaw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_ev_yaw = tmp ? true : false;
  }

  // Field name: cs_ev_hgt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_ev_hgt = tmp ? true : false;
  }

  // Field name: cs_fuse_beta
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_fuse_beta = tmp ? true : false;
  }

  // Field name: cs_mag_field_disturbed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_mag_field_disturbed = tmp ? true : false;
  }

  // Field name: cs_fixed_wing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_fixed_wing = tmp ? true : false;
  }

  // Field name: cs_mag_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_mag_fault = tmp ? true : false;
  }

  // Field name: cs_fuse_aspd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_fuse_aspd = tmp ? true : false;
  }

  // Field name: cs_gnd_effect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_gnd_effect = tmp ? true : false;
  }

  // Field name: cs_rng_stuck
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_rng_stuck = tmp ? true : false;
  }

  // Field name: cs_gps_yaw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_gps_yaw = tmp ? true : false;
  }

  // Field name: cs_mag_aligned_in_flight
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_mag_aligned_in_flight = tmp ? true : false;
  }

  // Field name: cs_ev_vel
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_ev_vel = tmp ? true : false;
  }

  // Field name: cs_synthetic_mag_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_synthetic_mag_z = tmp ? true : false;
  }

  // Field name: cs_vehicle_at_rest
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_vehicle_at_rest = tmp ? true : false;
  }

  // Field name: cs_gps_yaw_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_gps_yaw_fault = tmp ? true : false;
  }

  // Field name: cs_rng_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_rng_fault = tmp ? true : false;
  }

  // Field name: cs_inertial_dead_reckoning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_inertial_dead_reckoning = tmp ? true : false;
  }

  // Field name: cs_wind_dead_reckoning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_wind_dead_reckoning = tmp ? true : false;
  }

  // Field name: cs_rng_kin_consistent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_rng_kin_consistent = tmp ? true : false;
  }

  // Field name: cs_fake_pos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_fake_pos = tmp ? true : false;
  }

  // Field name: cs_fake_hgt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_fake_hgt = tmp ? true : false;
  }

  // Field name: cs_gravity_vector
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_gravity_vector = tmp ? true : false;
  }

  // Field name: cs_mag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_mag = tmp ? true : false;
  }

  // Field name: cs_ev_yaw_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_ev_yaw_fault = tmp ? true : false;
  }

  // Field name: cs_mag_heading_consistent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_mag_heading_consistent = tmp ? true : false;
  }

  // Field name: cs_aux_gpos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cs_aux_gpos = tmp ? true : false;
  }

  // Field name: fault_status_changes
  {
    cdr >> ros_message->fault_status_changes;
  }

  // Field name: fs_bad_mag_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_mag_x = tmp ? true : false;
  }

  // Field name: fs_bad_mag_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_mag_y = tmp ? true : false;
  }

  // Field name: fs_bad_mag_z
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_mag_z = tmp ? true : false;
  }

  // Field name: fs_bad_hdg
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_hdg = tmp ? true : false;
  }

  // Field name: fs_bad_mag_decl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_mag_decl = tmp ? true : false;
  }

  // Field name: fs_bad_airspeed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_airspeed = tmp ? true : false;
  }

  // Field name: fs_bad_sideslip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_sideslip = tmp ? true : false;
  }

  // Field name: fs_bad_optflow_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_optflow_x = tmp ? true : false;
  }

  // Field name: fs_bad_optflow_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_optflow_y = tmp ? true : false;
  }

  // Field name: fs_bad_acc_bias
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_acc_bias = tmp ? true : false;
  }

  // Field name: fs_bad_acc_vertical
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_acc_vertical = tmp ? true : false;
  }

  // Field name: fs_bad_acc_clipping
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fs_bad_acc_clipping = tmp ? true : false;
  }

  // Field name: innovation_fault_status_changes
  {
    cdr >> ros_message->innovation_fault_status_changes;
  }

  // Field name: reject_hor_vel
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject_hor_vel = tmp ? true : false;
  }

  // Field name: reject_ver_vel
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject_ver_vel = tmp ? true : false;
  }

  // Field name: reject_hor_pos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject_hor_pos = tmp ? true : false;
  }

  // Field name: reject_ver_pos
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject_ver_pos = tmp ? true : false;
  }

  // Field name: reject_yaw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject_yaw = tmp ? true : false;
  }

  // Field name: reject_airspeed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject_airspeed = tmp ? true : false;
  }

  // Field name: reject_sideslip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject_sideslip = tmp ? true : false;
  }

  // Field name: reject_hagl
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject_hagl = tmp ? true : false;
  }

  // Field name: reject_optflow_x
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject_optflow_x = tmp ? true : false;
  }

  // Field name: reject_optflow_y
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reject_optflow_y = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EstimatorStatusFlags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EstimatorStatusFlags__ros_msg_type * ros_message = static_cast<const _EstimatorStatusFlags__ros_msg_type *>(untyped_ros_message);
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
  // field.name control_status_changes
  {
    size_t item_size = sizeof(ros_message->control_status_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_tilt_align
  {
    size_t item_size = sizeof(ros_message->cs_tilt_align);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_yaw_align
  {
    size_t item_size = sizeof(ros_message->cs_yaw_align);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_gps
  {
    size_t item_size = sizeof(ros_message->cs_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_opt_flow
  {
    size_t item_size = sizeof(ros_message->cs_opt_flow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_mag_hdg
  {
    size_t item_size = sizeof(ros_message->cs_mag_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_mag_3d
  {
    size_t item_size = sizeof(ros_message->cs_mag_3d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_mag_dec
  {
    size_t item_size = sizeof(ros_message->cs_mag_dec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_in_air
  {
    size_t item_size = sizeof(ros_message->cs_in_air);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_wind
  {
    size_t item_size = sizeof(ros_message->cs_wind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_baro_hgt
  {
    size_t item_size = sizeof(ros_message->cs_baro_hgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_rng_hgt
  {
    size_t item_size = sizeof(ros_message->cs_rng_hgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_gps_hgt
  {
    size_t item_size = sizeof(ros_message->cs_gps_hgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_ev_pos
  {
    size_t item_size = sizeof(ros_message->cs_ev_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_ev_yaw
  {
    size_t item_size = sizeof(ros_message->cs_ev_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_ev_hgt
  {
    size_t item_size = sizeof(ros_message->cs_ev_hgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_fuse_beta
  {
    size_t item_size = sizeof(ros_message->cs_fuse_beta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_mag_field_disturbed
  {
    size_t item_size = sizeof(ros_message->cs_mag_field_disturbed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_fixed_wing
  {
    size_t item_size = sizeof(ros_message->cs_fixed_wing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_mag_fault
  {
    size_t item_size = sizeof(ros_message->cs_mag_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_fuse_aspd
  {
    size_t item_size = sizeof(ros_message->cs_fuse_aspd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_gnd_effect
  {
    size_t item_size = sizeof(ros_message->cs_gnd_effect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_rng_stuck
  {
    size_t item_size = sizeof(ros_message->cs_rng_stuck);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_gps_yaw
  {
    size_t item_size = sizeof(ros_message->cs_gps_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_mag_aligned_in_flight
  {
    size_t item_size = sizeof(ros_message->cs_mag_aligned_in_flight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_ev_vel
  {
    size_t item_size = sizeof(ros_message->cs_ev_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_synthetic_mag_z
  {
    size_t item_size = sizeof(ros_message->cs_synthetic_mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_vehicle_at_rest
  {
    size_t item_size = sizeof(ros_message->cs_vehicle_at_rest);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_gps_yaw_fault
  {
    size_t item_size = sizeof(ros_message->cs_gps_yaw_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_rng_fault
  {
    size_t item_size = sizeof(ros_message->cs_rng_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_inertial_dead_reckoning
  {
    size_t item_size = sizeof(ros_message->cs_inertial_dead_reckoning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_wind_dead_reckoning
  {
    size_t item_size = sizeof(ros_message->cs_wind_dead_reckoning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_rng_kin_consistent
  {
    size_t item_size = sizeof(ros_message->cs_rng_kin_consistent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_fake_pos
  {
    size_t item_size = sizeof(ros_message->cs_fake_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_fake_hgt
  {
    size_t item_size = sizeof(ros_message->cs_fake_hgt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_gravity_vector
  {
    size_t item_size = sizeof(ros_message->cs_gravity_vector);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_mag
  {
    size_t item_size = sizeof(ros_message->cs_mag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_ev_yaw_fault
  {
    size_t item_size = sizeof(ros_message->cs_ev_yaw_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_mag_heading_consistent
  {
    size_t item_size = sizeof(ros_message->cs_mag_heading_consistent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cs_aux_gpos
  {
    size_t item_size = sizeof(ros_message->cs_aux_gpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fault_status_changes
  {
    size_t item_size = sizeof(ros_message->fault_status_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_mag_x
  {
    size_t item_size = sizeof(ros_message->fs_bad_mag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_mag_y
  {
    size_t item_size = sizeof(ros_message->fs_bad_mag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_mag_z
  {
    size_t item_size = sizeof(ros_message->fs_bad_mag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_hdg
  {
    size_t item_size = sizeof(ros_message->fs_bad_hdg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_mag_decl
  {
    size_t item_size = sizeof(ros_message->fs_bad_mag_decl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_airspeed
  {
    size_t item_size = sizeof(ros_message->fs_bad_airspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_sideslip
  {
    size_t item_size = sizeof(ros_message->fs_bad_sideslip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_optflow_x
  {
    size_t item_size = sizeof(ros_message->fs_bad_optflow_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_optflow_y
  {
    size_t item_size = sizeof(ros_message->fs_bad_optflow_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_acc_bias
  {
    size_t item_size = sizeof(ros_message->fs_bad_acc_bias);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_acc_vertical
  {
    size_t item_size = sizeof(ros_message->fs_bad_acc_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fs_bad_acc_clipping
  {
    size_t item_size = sizeof(ros_message->fs_bad_acc_clipping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name innovation_fault_status_changes
  {
    size_t item_size = sizeof(ros_message->innovation_fault_status_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reject_hor_vel
  {
    size_t item_size = sizeof(ros_message->reject_hor_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reject_ver_vel
  {
    size_t item_size = sizeof(ros_message->reject_ver_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reject_hor_pos
  {
    size_t item_size = sizeof(ros_message->reject_hor_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reject_ver_pos
  {
    size_t item_size = sizeof(ros_message->reject_ver_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reject_yaw
  {
    size_t item_size = sizeof(ros_message->reject_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reject_airspeed
  {
    size_t item_size = sizeof(ros_message->reject_airspeed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reject_sideslip
  {
    size_t item_size = sizeof(ros_message->reject_sideslip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reject_hagl
  {
    size_t item_size = sizeof(ros_message->reject_hagl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reject_optflow_x
  {
    size_t item_size = sizeof(ros_message->reject_optflow_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reject_optflow_y
  {
    size_t item_size = sizeof(ros_message->reject_optflow_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EstimatorStatusFlags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EstimatorStatusFlags(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EstimatorStatusFlags(
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
  // member: control_status_changes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cs_tilt_align
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_yaw_align
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_gps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_opt_flow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_mag_hdg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_mag_3d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_mag_dec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_in_air
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_wind
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_baro_hgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_rng_hgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_gps_hgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_ev_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_ev_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_ev_hgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_fuse_beta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_mag_field_disturbed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_fixed_wing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_mag_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_fuse_aspd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_gnd_effect
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_rng_stuck
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_gps_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_mag_aligned_in_flight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_ev_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_synthetic_mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_vehicle_at_rest
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_gps_yaw_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_rng_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_inertial_dead_reckoning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_wind_dead_reckoning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_rng_kin_consistent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_fake_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_fake_hgt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_gravity_vector
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_mag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_ev_yaw_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_mag_heading_consistent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cs_aux_gpos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fault_status_changes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fs_bad_mag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_mag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_mag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_hdg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_mag_decl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_airspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_sideslip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_optflow_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_optflow_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_acc_bias
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_acc_vertical
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fs_bad_acc_clipping
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: innovation_fault_status_changes
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reject_hor_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reject_ver_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reject_hor_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reject_ver_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reject_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reject_airspeed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reject_sideslip
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reject_hagl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reject_optflow_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reject_optflow_y
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
    using DataType = px4_msgs__msg__EstimatorStatusFlags;
    is_plain =
      (
      offsetof(DataType, reject_optflow_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EstimatorStatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__EstimatorStatusFlags(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EstimatorStatusFlags = {
  "px4_msgs::msg",
  "EstimatorStatusFlags",
  _EstimatorStatusFlags__cdr_serialize,
  _EstimatorStatusFlags__cdr_deserialize,
  _EstimatorStatusFlags__get_serialized_size,
  _EstimatorStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorStatusFlags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EstimatorStatusFlags,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EstimatorStatusFlags)() {
  return &_EstimatorStatusFlags__type_support;
}

#if defined(__cplusplus)
}
#endif
