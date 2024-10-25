// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/estimator_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatorStatusFlags & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_sample
  {
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << ", ";
  }

  // member: control_status_changes
  {
    out << "control_status_changes: ";
    rosidl_generator_traits::value_to_yaml(msg.control_status_changes, out);
    out << ", ";
  }

  // member: cs_tilt_align
  {
    out << "cs_tilt_align: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_tilt_align, out);
    out << ", ";
  }

  // member: cs_yaw_align
  {
    out << "cs_yaw_align: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_yaw_align, out);
    out << ", ";
  }

  // member: cs_gps
  {
    out << "cs_gps: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gps, out);
    out << ", ";
  }

  // member: cs_opt_flow
  {
    out << "cs_opt_flow: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_opt_flow, out);
    out << ", ";
  }

  // member: cs_mag_hdg
  {
    out << "cs_mag_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_hdg, out);
    out << ", ";
  }

  // member: cs_mag_3d
  {
    out << "cs_mag_3d: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_3d, out);
    out << ", ";
  }

  // member: cs_mag_dec
  {
    out << "cs_mag_dec: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_dec, out);
    out << ", ";
  }

  // member: cs_in_air
  {
    out << "cs_in_air: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_in_air, out);
    out << ", ";
  }

  // member: cs_wind
  {
    out << "cs_wind: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_wind, out);
    out << ", ";
  }

  // member: cs_baro_hgt
  {
    out << "cs_baro_hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_baro_hgt, out);
    out << ", ";
  }

  // member: cs_rng_hgt
  {
    out << "cs_rng_hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_rng_hgt, out);
    out << ", ";
  }

  // member: cs_gps_hgt
  {
    out << "cs_gps_hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gps_hgt, out);
    out << ", ";
  }

  // member: cs_ev_pos
  {
    out << "cs_ev_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_ev_pos, out);
    out << ", ";
  }

  // member: cs_ev_yaw
  {
    out << "cs_ev_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_ev_yaw, out);
    out << ", ";
  }

  // member: cs_ev_hgt
  {
    out << "cs_ev_hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_ev_hgt, out);
    out << ", ";
  }

  // member: cs_fuse_beta
  {
    out << "cs_fuse_beta: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_fuse_beta, out);
    out << ", ";
  }

  // member: cs_mag_field_disturbed
  {
    out << "cs_mag_field_disturbed: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_field_disturbed, out);
    out << ", ";
  }

  // member: cs_fixed_wing
  {
    out << "cs_fixed_wing: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_fixed_wing, out);
    out << ", ";
  }

  // member: cs_mag_fault
  {
    out << "cs_mag_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_fault, out);
    out << ", ";
  }

  // member: cs_fuse_aspd
  {
    out << "cs_fuse_aspd: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_fuse_aspd, out);
    out << ", ";
  }

  // member: cs_gnd_effect
  {
    out << "cs_gnd_effect: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gnd_effect, out);
    out << ", ";
  }

  // member: cs_rng_stuck
  {
    out << "cs_rng_stuck: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_rng_stuck, out);
    out << ", ";
  }

  // member: cs_gps_yaw
  {
    out << "cs_gps_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gps_yaw, out);
    out << ", ";
  }

  // member: cs_mag_aligned_in_flight
  {
    out << "cs_mag_aligned_in_flight: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_aligned_in_flight, out);
    out << ", ";
  }

  // member: cs_ev_vel
  {
    out << "cs_ev_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_ev_vel, out);
    out << ", ";
  }

  // member: cs_synthetic_mag_z
  {
    out << "cs_synthetic_mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_synthetic_mag_z, out);
    out << ", ";
  }

  // member: cs_vehicle_at_rest
  {
    out << "cs_vehicle_at_rest: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_vehicle_at_rest, out);
    out << ", ";
  }

  // member: cs_gps_yaw_fault
  {
    out << "cs_gps_yaw_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gps_yaw_fault, out);
    out << ", ";
  }

  // member: cs_rng_fault
  {
    out << "cs_rng_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_rng_fault, out);
    out << ", ";
  }

  // member: cs_inertial_dead_reckoning
  {
    out << "cs_inertial_dead_reckoning: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_inertial_dead_reckoning, out);
    out << ", ";
  }

  // member: cs_wind_dead_reckoning
  {
    out << "cs_wind_dead_reckoning: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_wind_dead_reckoning, out);
    out << ", ";
  }

  // member: cs_rng_kin_consistent
  {
    out << "cs_rng_kin_consistent: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_rng_kin_consistent, out);
    out << ", ";
  }

  // member: cs_fake_pos
  {
    out << "cs_fake_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_fake_pos, out);
    out << ", ";
  }

  // member: cs_fake_hgt
  {
    out << "cs_fake_hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_fake_hgt, out);
    out << ", ";
  }

  // member: cs_gravity_vector
  {
    out << "cs_gravity_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gravity_vector, out);
    out << ", ";
  }

  // member: cs_mag
  {
    out << "cs_mag: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag, out);
    out << ", ";
  }

  // member: cs_ev_yaw_fault
  {
    out << "cs_ev_yaw_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_ev_yaw_fault, out);
    out << ", ";
  }

  // member: cs_mag_heading_consistent
  {
    out << "cs_mag_heading_consistent: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_heading_consistent, out);
    out << ", ";
  }

  // member: cs_aux_gpos
  {
    out << "cs_aux_gpos: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_aux_gpos, out);
    out << ", ";
  }

  // member: fault_status_changes
  {
    out << "fault_status_changes: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_status_changes, out);
    out << ", ";
  }

  // member: fs_bad_mag_x
  {
    out << "fs_bad_mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_mag_x, out);
    out << ", ";
  }

  // member: fs_bad_mag_y
  {
    out << "fs_bad_mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_mag_y, out);
    out << ", ";
  }

  // member: fs_bad_mag_z
  {
    out << "fs_bad_mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_mag_z, out);
    out << ", ";
  }

  // member: fs_bad_hdg
  {
    out << "fs_bad_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_hdg, out);
    out << ", ";
  }

  // member: fs_bad_mag_decl
  {
    out << "fs_bad_mag_decl: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_mag_decl, out);
    out << ", ";
  }

  // member: fs_bad_airspeed
  {
    out << "fs_bad_airspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_airspeed, out);
    out << ", ";
  }

  // member: fs_bad_sideslip
  {
    out << "fs_bad_sideslip: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_sideslip, out);
    out << ", ";
  }

  // member: fs_bad_optflow_x
  {
    out << "fs_bad_optflow_x: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_optflow_x, out);
    out << ", ";
  }

  // member: fs_bad_optflow_y
  {
    out << "fs_bad_optflow_y: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_optflow_y, out);
    out << ", ";
  }

  // member: fs_bad_acc_bias
  {
    out << "fs_bad_acc_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_acc_bias, out);
    out << ", ";
  }

  // member: fs_bad_acc_vertical
  {
    out << "fs_bad_acc_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_acc_vertical, out);
    out << ", ";
  }

  // member: fs_bad_acc_clipping
  {
    out << "fs_bad_acc_clipping: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_acc_clipping, out);
    out << ", ";
  }

  // member: innovation_fault_status_changes
  {
    out << "innovation_fault_status_changes: ";
    rosidl_generator_traits::value_to_yaml(msg.innovation_fault_status_changes, out);
    out << ", ";
  }

  // member: reject_hor_vel
  {
    out << "reject_hor_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_hor_vel, out);
    out << ", ";
  }

  // member: reject_ver_vel
  {
    out << "reject_ver_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_ver_vel, out);
    out << ", ";
  }

  // member: reject_hor_pos
  {
    out << "reject_hor_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_hor_pos, out);
    out << ", ";
  }

  // member: reject_ver_pos
  {
    out << "reject_ver_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_ver_pos, out);
    out << ", ";
  }

  // member: reject_yaw
  {
    out << "reject_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_yaw, out);
    out << ", ";
  }

  // member: reject_airspeed
  {
    out << "reject_airspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_airspeed, out);
    out << ", ";
  }

  // member: reject_sideslip
  {
    out << "reject_sideslip: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_sideslip, out);
    out << ", ";
  }

  // member: reject_hagl
  {
    out << "reject_hagl: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_hagl, out);
    out << ", ";
  }

  // member: reject_optflow_x
  {
    out << "reject_optflow_x: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_optflow_x, out);
    out << ", ";
  }

  // member: reject_optflow_y
  {
    out << "reject_optflow_y: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_optflow_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimatorStatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: control_status_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_status_changes: ";
    rosidl_generator_traits::value_to_yaml(msg.control_status_changes, out);
    out << "\n";
  }

  // member: cs_tilt_align
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_tilt_align: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_tilt_align, out);
    out << "\n";
  }

  // member: cs_yaw_align
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_yaw_align: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_yaw_align, out);
    out << "\n";
  }

  // member: cs_gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gps: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gps, out);
    out << "\n";
  }

  // member: cs_opt_flow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_opt_flow: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_opt_flow, out);
    out << "\n";
  }

  // member: cs_mag_hdg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_hdg, out);
    out << "\n";
  }

  // member: cs_mag_3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_3d: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_3d, out);
    out << "\n";
  }

  // member: cs_mag_dec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_dec: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_dec, out);
    out << "\n";
  }

  // member: cs_in_air
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_in_air: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_in_air, out);
    out << "\n";
  }

  // member: cs_wind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_wind: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_wind, out);
    out << "\n";
  }

  // member: cs_baro_hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_baro_hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_baro_hgt, out);
    out << "\n";
  }

  // member: cs_rng_hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_rng_hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_rng_hgt, out);
    out << "\n";
  }

  // member: cs_gps_hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gps_hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gps_hgt, out);
    out << "\n";
  }

  // member: cs_ev_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_ev_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_ev_pos, out);
    out << "\n";
  }

  // member: cs_ev_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_ev_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_ev_yaw, out);
    out << "\n";
  }

  // member: cs_ev_hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_ev_hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_ev_hgt, out);
    out << "\n";
  }

  // member: cs_fuse_beta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_fuse_beta: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_fuse_beta, out);
    out << "\n";
  }

  // member: cs_mag_field_disturbed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_field_disturbed: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_field_disturbed, out);
    out << "\n";
  }

  // member: cs_fixed_wing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_fixed_wing: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_fixed_wing, out);
    out << "\n";
  }

  // member: cs_mag_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_fault, out);
    out << "\n";
  }

  // member: cs_fuse_aspd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_fuse_aspd: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_fuse_aspd, out);
    out << "\n";
  }

  // member: cs_gnd_effect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gnd_effect: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gnd_effect, out);
    out << "\n";
  }

  // member: cs_rng_stuck
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_rng_stuck: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_rng_stuck, out);
    out << "\n";
  }

  // member: cs_gps_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gps_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gps_yaw, out);
    out << "\n";
  }

  // member: cs_mag_aligned_in_flight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_aligned_in_flight: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_aligned_in_flight, out);
    out << "\n";
  }

  // member: cs_ev_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_ev_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_ev_vel, out);
    out << "\n";
  }

  // member: cs_synthetic_mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_synthetic_mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_synthetic_mag_z, out);
    out << "\n";
  }

  // member: cs_vehicle_at_rest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_vehicle_at_rest: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_vehicle_at_rest, out);
    out << "\n";
  }

  // member: cs_gps_yaw_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gps_yaw_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gps_yaw_fault, out);
    out << "\n";
  }

  // member: cs_rng_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_rng_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_rng_fault, out);
    out << "\n";
  }

  // member: cs_inertial_dead_reckoning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_inertial_dead_reckoning: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_inertial_dead_reckoning, out);
    out << "\n";
  }

  // member: cs_wind_dead_reckoning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_wind_dead_reckoning: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_wind_dead_reckoning, out);
    out << "\n";
  }

  // member: cs_rng_kin_consistent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_rng_kin_consistent: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_rng_kin_consistent, out);
    out << "\n";
  }

  // member: cs_fake_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_fake_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_fake_pos, out);
    out << "\n";
  }

  // member: cs_fake_hgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_fake_hgt: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_fake_hgt, out);
    out << "\n";
  }

  // member: cs_gravity_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_gravity_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_gravity_vector, out);
    out << "\n";
  }

  // member: cs_mag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag, out);
    out << "\n";
  }

  // member: cs_ev_yaw_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_ev_yaw_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_ev_yaw_fault, out);
    out << "\n";
  }

  // member: cs_mag_heading_consistent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_mag_heading_consistent: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_mag_heading_consistent, out);
    out << "\n";
  }

  // member: cs_aux_gpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cs_aux_gpos: ";
    rosidl_generator_traits::value_to_yaml(msg.cs_aux_gpos, out);
    out << "\n";
  }

  // member: fault_status_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_status_changes: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_status_changes, out);
    out << "\n";
  }

  // member: fs_bad_mag_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_mag_x, out);
    out << "\n";
  }

  // member: fs_bad_mag_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_mag_y, out);
    out << "\n";
  }

  // member: fs_bad_mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_mag_z, out);
    out << "\n";
  }

  // member: fs_bad_hdg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_hdg: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_hdg, out);
    out << "\n";
  }

  // member: fs_bad_mag_decl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_mag_decl: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_mag_decl, out);
    out << "\n";
  }

  // member: fs_bad_airspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_airspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_airspeed, out);
    out << "\n";
  }

  // member: fs_bad_sideslip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_sideslip: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_sideslip, out);
    out << "\n";
  }

  // member: fs_bad_optflow_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_optflow_x: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_optflow_x, out);
    out << "\n";
  }

  // member: fs_bad_optflow_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_optflow_y: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_optflow_y, out);
    out << "\n";
  }

  // member: fs_bad_acc_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_acc_bias: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_acc_bias, out);
    out << "\n";
  }

  // member: fs_bad_acc_vertical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_acc_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_acc_vertical, out);
    out << "\n";
  }

  // member: fs_bad_acc_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fs_bad_acc_clipping: ";
    rosidl_generator_traits::value_to_yaml(msg.fs_bad_acc_clipping, out);
    out << "\n";
  }

  // member: innovation_fault_status_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innovation_fault_status_changes: ";
    rosidl_generator_traits::value_to_yaml(msg.innovation_fault_status_changes, out);
    out << "\n";
  }

  // member: reject_hor_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_hor_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_hor_vel, out);
    out << "\n";
  }

  // member: reject_ver_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_ver_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_ver_vel, out);
    out << "\n";
  }

  // member: reject_hor_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_hor_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_hor_pos, out);
    out << "\n";
  }

  // member: reject_ver_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_ver_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_ver_pos, out);
    out << "\n";
  }

  // member: reject_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_yaw, out);
    out << "\n";
  }

  // member: reject_airspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_airspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_airspeed, out);
    out << "\n";
  }

  // member: reject_sideslip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_sideslip: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_sideslip, out);
    out << "\n";
  }

  // member: reject_hagl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_hagl: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_hagl, out);
    out << "\n";
  }

  // member: reject_optflow_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_optflow_x: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_optflow_x, out);
    out << "\n";
  }

  // member: reject_optflow_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_optflow_y: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_optflow_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimatorStatusFlags & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::EstimatorStatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::EstimatorStatusFlags & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorStatusFlags>()
{
  return "px4_msgs::msg::EstimatorStatusFlags";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorStatusFlags>()
{
  return "px4_msgs/msg/EstimatorStatusFlags";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorStatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorStatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorStatusFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__TRAITS_HPP_
