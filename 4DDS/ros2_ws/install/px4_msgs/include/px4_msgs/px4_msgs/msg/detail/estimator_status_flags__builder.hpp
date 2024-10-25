// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorStatusFlags_reject_optflow_y
{
public:
  explicit Init_EstimatorStatusFlags_reject_optflow_y(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorStatusFlags reject_optflow_y(::px4_msgs::msg::EstimatorStatusFlags::_reject_optflow_y_type arg)
  {
    msg_.reject_optflow_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_reject_optflow_x
{
public:
  explicit Init_EstimatorStatusFlags_reject_optflow_x(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_reject_optflow_y reject_optflow_x(::px4_msgs::msg::EstimatorStatusFlags::_reject_optflow_x_type arg)
  {
    msg_.reject_optflow_x = std::move(arg);
    return Init_EstimatorStatusFlags_reject_optflow_y(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_reject_hagl
{
public:
  explicit Init_EstimatorStatusFlags_reject_hagl(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_reject_optflow_x reject_hagl(::px4_msgs::msg::EstimatorStatusFlags::_reject_hagl_type arg)
  {
    msg_.reject_hagl = std::move(arg);
    return Init_EstimatorStatusFlags_reject_optflow_x(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_reject_sideslip
{
public:
  explicit Init_EstimatorStatusFlags_reject_sideslip(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_reject_hagl reject_sideslip(::px4_msgs::msg::EstimatorStatusFlags::_reject_sideslip_type arg)
  {
    msg_.reject_sideslip = std::move(arg);
    return Init_EstimatorStatusFlags_reject_hagl(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_reject_airspeed
{
public:
  explicit Init_EstimatorStatusFlags_reject_airspeed(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_reject_sideslip reject_airspeed(::px4_msgs::msg::EstimatorStatusFlags::_reject_airspeed_type arg)
  {
    msg_.reject_airspeed = std::move(arg);
    return Init_EstimatorStatusFlags_reject_sideslip(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_reject_yaw
{
public:
  explicit Init_EstimatorStatusFlags_reject_yaw(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_reject_airspeed reject_yaw(::px4_msgs::msg::EstimatorStatusFlags::_reject_yaw_type arg)
  {
    msg_.reject_yaw = std::move(arg);
    return Init_EstimatorStatusFlags_reject_airspeed(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_reject_ver_pos
{
public:
  explicit Init_EstimatorStatusFlags_reject_ver_pos(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_reject_yaw reject_ver_pos(::px4_msgs::msg::EstimatorStatusFlags::_reject_ver_pos_type arg)
  {
    msg_.reject_ver_pos = std::move(arg);
    return Init_EstimatorStatusFlags_reject_yaw(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_reject_hor_pos
{
public:
  explicit Init_EstimatorStatusFlags_reject_hor_pos(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_reject_ver_pos reject_hor_pos(::px4_msgs::msg::EstimatorStatusFlags::_reject_hor_pos_type arg)
  {
    msg_.reject_hor_pos = std::move(arg);
    return Init_EstimatorStatusFlags_reject_ver_pos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_reject_ver_vel
{
public:
  explicit Init_EstimatorStatusFlags_reject_ver_vel(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_reject_hor_pos reject_ver_vel(::px4_msgs::msg::EstimatorStatusFlags::_reject_ver_vel_type arg)
  {
    msg_.reject_ver_vel = std::move(arg);
    return Init_EstimatorStatusFlags_reject_hor_pos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_reject_hor_vel
{
public:
  explicit Init_EstimatorStatusFlags_reject_hor_vel(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_reject_ver_vel reject_hor_vel(::px4_msgs::msg::EstimatorStatusFlags::_reject_hor_vel_type arg)
  {
    msg_.reject_hor_vel = std::move(arg);
    return Init_EstimatorStatusFlags_reject_ver_vel(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_innovation_fault_status_changes
{
public:
  explicit Init_EstimatorStatusFlags_innovation_fault_status_changes(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_reject_hor_vel innovation_fault_status_changes(::px4_msgs::msg::EstimatorStatusFlags::_innovation_fault_status_changes_type arg)
  {
    msg_.innovation_fault_status_changes = std::move(arg);
    return Init_EstimatorStatusFlags_reject_hor_vel(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_acc_clipping
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_acc_clipping(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_innovation_fault_status_changes fs_bad_acc_clipping(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_acc_clipping_type arg)
  {
    msg_.fs_bad_acc_clipping = std::move(arg);
    return Init_EstimatorStatusFlags_innovation_fault_status_changes(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_acc_vertical
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_acc_vertical(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_acc_clipping fs_bad_acc_vertical(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_acc_vertical_type arg)
  {
    msg_.fs_bad_acc_vertical = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_acc_clipping(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_acc_bias
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_acc_bias(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_acc_vertical fs_bad_acc_bias(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_acc_bias_type arg)
  {
    msg_.fs_bad_acc_bias = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_acc_vertical(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_optflow_y
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_optflow_y(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_acc_bias fs_bad_optflow_y(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_optflow_y_type arg)
  {
    msg_.fs_bad_optflow_y = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_acc_bias(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_optflow_x
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_optflow_x(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_optflow_y fs_bad_optflow_x(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_optflow_x_type arg)
  {
    msg_.fs_bad_optflow_x = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_optflow_y(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_sideslip
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_sideslip(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_optflow_x fs_bad_sideslip(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_sideslip_type arg)
  {
    msg_.fs_bad_sideslip = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_optflow_x(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_airspeed
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_airspeed(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_sideslip fs_bad_airspeed(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_airspeed_type arg)
  {
    msg_.fs_bad_airspeed = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_sideslip(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_mag_decl
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_mag_decl(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_airspeed fs_bad_mag_decl(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_mag_decl_type arg)
  {
    msg_.fs_bad_mag_decl = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_airspeed(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_hdg
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_hdg(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_mag_decl fs_bad_hdg(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_hdg_type arg)
  {
    msg_.fs_bad_hdg = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_mag_decl(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_mag_z
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_mag_z(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_hdg fs_bad_mag_z(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_mag_z_type arg)
  {
    msg_.fs_bad_mag_z = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_hdg(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_mag_y
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_mag_y(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_mag_z fs_bad_mag_y(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_mag_y_type arg)
  {
    msg_.fs_bad_mag_y = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_mag_z(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fs_bad_mag_x
{
public:
  explicit Init_EstimatorStatusFlags_fs_bad_mag_x(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_mag_y fs_bad_mag_x(::px4_msgs::msg::EstimatorStatusFlags::_fs_bad_mag_x_type arg)
  {
    msg_.fs_bad_mag_x = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_mag_y(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_fault_status_changes
{
public:
  explicit Init_EstimatorStatusFlags_fault_status_changes(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fs_bad_mag_x fault_status_changes(::px4_msgs::msg::EstimatorStatusFlags::_fault_status_changes_type arg)
  {
    msg_.fault_status_changes = std::move(arg);
    return Init_EstimatorStatusFlags_fs_bad_mag_x(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_aux_gpos
{
public:
  explicit Init_EstimatorStatusFlags_cs_aux_gpos(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_fault_status_changes cs_aux_gpos(::px4_msgs::msg::EstimatorStatusFlags::_cs_aux_gpos_type arg)
  {
    msg_.cs_aux_gpos = std::move(arg);
    return Init_EstimatorStatusFlags_fault_status_changes(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_mag_heading_consistent
{
public:
  explicit Init_EstimatorStatusFlags_cs_mag_heading_consistent(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_aux_gpos cs_mag_heading_consistent(::px4_msgs::msg::EstimatorStatusFlags::_cs_mag_heading_consistent_type arg)
  {
    msg_.cs_mag_heading_consistent = std::move(arg);
    return Init_EstimatorStatusFlags_cs_aux_gpos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_ev_yaw_fault
{
public:
  explicit Init_EstimatorStatusFlags_cs_ev_yaw_fault(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_mag_heading_consistent cs_ev_yaw_fault(::px4_msgs::msg::EstimatorStatusFlags::_cs_ev_yaw_fault_type arg)
  {
    msg_.cs_ev_yaw_fault = std::move(arg);
    return Init_EstimatorStatusFlags_cs_mag_heading_consistent(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_mag
{
public:
  explicit Init_EstimatorStatusFlags_cs_mag(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_ev_yaw_fault cs_mag(::px4_msgs::msg::EstimatorStatusFlags::_cs_mag_type arg)
  {
    msg_.cs_mag = std::move(arg);
    return Init_EstimatorStatusFlags_cs_ev_yaw_fault(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_gravity_vector
{
public:
  explicit Init_EstimatorStatusFlags_cs_gravity_vector(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_mag cs_gravity_vector(::px4_msgs::msg::EstimatorStatusFlags::_cs_gravity_vector_type arg)
  {
    msg_.cs_gravity_vector = std::move(arg);
    return Init_EstimatorStatusFlags_cs_mag(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_fake_hgt
{
public:
  explicit Init_EstimatorStatusFlags_cs_fake_hgt(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_gravity_vector cs_fake_hgt(::px4_msgs::msg::EstimatorStatusFlags::_cs_fake_hgt_type arg)
  {
    msg_.cs_fake_hgt = std::move(arg);
    return Init_EstimatorStatusFlags_cs_gravity_vector(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_fake_pos
{
public:
  explicit Init_EstimatorStatusFlags_cs_fake_pos(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_fake_hgt cs_fake_pos(::px4_msgs::msg::EstimatorStatusFlags::_cs_fake_pos_type arg)
  {
    msg_.cs_fake_pos = std::move(arg);
    return Init_EstimatorStatusFlags_cs_fake_hgt(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_rng_kin_consistent
{
public:
  explicit Init_EstimatorStatusFlags_cs_rng_kin_consistent(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_fake_pos cs_rng_kin_consistent(::px4_msgs::msg::EstimatorStatusFlags::_cs_rng_kin_consistent_type arg)
  {
    msg_.cs_rng_kin_consistent = std::move(arg);
    return Init_EstimatorStatusFlags_cs_fake_pos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_wind_dead_reckoning
{
public:
  explicit Init_EstimatorStatusFlags_cs_wind_dead_reckoning(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_rng_kin_consistent cs_wind_dead_reckoning(::px4_msgs::msg::EstimatorStatusFlags::_cs_wind_dead_reckoning_type arg)
  {
    msg_.cs_wind_dead_reckoning = std::move(arg);
    return Init_EstimatorStatusFlags_cs_rng_kin_consistent(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_inertial_dead_reckoning
{
public:
  explicit Init_EstimatorStatusFlags_cs_inertial_dead_reckoning(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_wind_dead_reckoning cs_inertial_dead_reckoning(::px4_msgs::msg::EstimatorStatusFlags::_cs_inertial_dead_reckoning_type arg)
  {
    msg_.cs_inertial_dead_reckoning = std::move(arg);
    return Init_EstimatorStatusFlags_cs_wind_dead_reckoning(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_rng_fault
{
public:
  explicit Init_EstimatorStatusFlags_cs_rng_fault(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_inertial_dead_reckoning cs_rng_fault(::px4_msgs::msg::EstimatorStatusFlags::_cs_rng_fault_type arg)
  {
    msg_.cs_rng_fault = std::move(arg);
    return Init_EstimatorStatusFlags_cs_inertial_dead_reckoning(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_gps_yaw_fault
{
public:
  explicit Init_EstimatorStatusFlags_cs_gps_yaw_fault(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_rng_fault cs_gps_yaw_fault(::px4_msgs::msg::EstimatorStatusFlags::_cs_gps_yaw_fault_type arg)
  {
    msg_.cs_gps_yaw_fault = std::move(arg);
    return Init_EstimatorStatusFlags_cs_rng_fault(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_vehicle_at_rest
{
public:
  explicit Init_EstimatorStatusFlags_cs_vehicle_at_rest(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_gps_yaw_fault cs_vehicle_at_rest(::px4_msgs::msg::EstimatorStatusFlags::_cs_vehicle_at_rest_type arg)
  {
    msg_.cs_vehicle_at_rest = std::move(arg);
    return Init_EstimatorStatusFlags_cs_gps_yaw_fault(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_synthetic_mag_z
{
public:
  explicit Init_EstimatorStatusFlags_cs_synthetic_mag_z(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_vehicle_at_rest cs_synthetic_mag_z(::px4_msgs::msg::EstimatorStatusFlags::_cs_synthetic_mag_z_type arg)
  {
    msg_.cs_synthetic_mag_z = std::move(arg);
    return Init_EstimatorStatusFlags_cs_vehicle_at_rest(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_ev_vel
{
public:
  explicit Init_EstimatorStatusFlags_cs_ev_vel(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_synthetic_mag_z cs_ev_vel(::px4_msgs::msg::EstimatorStatusFlags::_cs_ev_vel_type arg)
  {
    msg_.cs_ev_vel = std::move(arg);
    return Init_EstimatorStatusFlags_cs_synthetic_mag_z(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_mag_aligned_in_flight
{
public:
  explicit Init_EstimatorStatusFlags_cs_mag_aligned_in_flight(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_ev_vel cs_mag_aligned_in_flight(::px4_msgs::msg::EstimatorStatusFlags::_cs_mag_aligned_in_flight_type arg)
  {
    msg_.cs_mag_aligned_in_flight = std::move(arg);
    return Init_EstimatorStatusFlags_cs_ev_vel(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_gps_yaw
{
public:
  explicit Init_EstimatorStatusFlags_cs_gps_yaw(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_mag_aligned_in_flight cs_gps_yaw(::px4_msgs::msg::EstimatorStatusFlags::_cs_gps_yaw_type arg)
  {
    msg_.cs_gps_yaw = std::move(arg);
    return Init_EstimatorStatusFlags_cs_mag_aligned_in_flight(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_rng_stuck
{
public:
  explicit Init_EstimatorStatusFlags_cs_rng_stuck(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_gps_yaw cs_rng_stuck(::px4_msgs::msg::EstimatorStatusFlags::_cs_rng_stuck_type arg)
  {
    msg_.cs_rng_stuck = std::move(arg);
    return Init_EstimatorStatusFlags_cs_gps_yaw(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_gnd_effect
{
public:
  explicit Init_EstimatorStatusFlags_cs_gnd_effect(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_rng_stuck cs_gnd_effect(::px4_msgs::msg::EstimatorStatusFlags::_cs_gnd_effect_type arg)
  {
    msg_.cs_gnd_effect = std::move(arg);
    return Init_EstimatorStatusFlags_cs_rng_stuck(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_fuse_aspd
{
public:
  explicit Init_EstimatorStatusFlags_cs_fuse_aspd(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_gnd_effect cs_fuse_aspd(::px4_msgs::msg::EstimatorStatusFlags::_cs_fuse_aspd_type arg)
  {
    msg_.cs_fuse_aspd = std::move(arg);
    return Init_EstimatorStatusFlags_cs_gnd_effect(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_mag_fault
{
public:
  explicit Init_EstimatorStatusFlags_cs_mag_fault(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_fuse_aspd cs_mag_fault(::px4_msgs::msg::EstimatorStatusFlags::_cs_mag_fault_type arg)
  {
    msg_.cs_mag_fault = std::move(arg);
    return Init_EstimatorStatusFlags_cs_fuse_aspd(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_fixed_wing
{
public:
  explicit Init_EstimatorStatusFlags_cs_fixed_wing(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_mag_fault cs_fixed_wing(::px4_msgs::msg::EstimatorStatusFlags::_cs_fixed_wing_type arg)
  {
    msg_.cs_fixed_wing = std::move(arg);
    return Init_EstimatorStatusFlags_cs_mag_fault(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_mag_field_disturbed
{
public:
  explicit Init_EstimatorStatusFlags_cs_mag_field_disturbed(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_fixed_wing cs_mag_field_disturbed(::px4_msgs::msg::EstimatorStatusFlags::_cs_mag_field_disturbed_type arg)
  {
    msg_.cs_mag_field_disturbed = std::move(arg);
    return Init_EstimatorStatusFlags_cs_fixed_wing(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_fuse_beta
{
public:
  explicit Init_EstimatorStatusFlags_cs_fuse_beta(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_mag_field_disturbed cs_fuse_beta(::px4_msgs::msg::EstimatorStatusFlags::_cs_fuse_beta_type arg)
  {
    msg_.cs_fuse_beta = std::move(arg);
    return Init_EstimatorStatusFlags_cs_mag_field_disturbed(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_ev_hgt
{
public:
  explicit Init_EstimatorStatusFlags_cs_ev_hgt(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_fuse_beta cs_ev_hgt(::px4_msgs::msg::EstimatorStatusFlags::_cs_ev_hgt_type arg)
  {
    msg_.cs_ev_hgt = std::move(arg);
    return Init_EstimatorStatusFlags_cs_fuse_beta(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_ev_yaw
{
public:
  explicit Init_EstimatorStatusFlags_cs_ev_yaw(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_ev_hgt cs_ev_yaw(::px4_msgs::msg::EstimatorStatusFlags::_cs_ev_yaw_type arg)
  {
    msg_.cs_ev_yaw = std::move(arg);
    return Init_EstimatorStatusFlags_cs_ev_hgt(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_ev_pos
{
public:
  explicit Init_EstimatorStatusFlags_cs_ev_pos(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_ev_yaw cs_ev_pos(::px4_msgs::msg::EstimatorStatusFlags::_cs_ev_pos_type arg)
  {
    msg_.cs_ev_pos = std::move(arg);
    return Init_EstimatorStatusFlags_cs_ev_yaw(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_gps_hgt
{
public:
  explicit Init_EstimatorStatusFlags_cs_gps_hgt(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_ev_pos cs_gps_hgt(::px4_msgs::msg::EstimatorStatusFlags::_cs_gps_hgt_type arg)
  {
    msg_.cs_gps_hgt = std::move(arg);
    return Init_EstimatorStatusFlags_cs_ev_pos(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_rng_hgt
{
public:
  explicit Init_EstimatorStatusFlags_cs_rng_hgt(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_gps_hgt cs_rng_hgt(::px4_msgs::msg::EstimatorStatusFlags::_cs_rng_hgt_type arg)
  {
    msg_.cs_rng_hgt = std::move(arg);
    return Init_EstimatorStatusFlags_cs_gps_hgt(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_baro_hgt
{
public:
  explicit Init_EstimatorStatusFlags_cs_baro_hgt(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_rng_hgt cs_baro_hgt(::px4_msgs::msg::EstimatorStatusFlags::_cs_baro_hgt_type arg)
  {
    msg_.cs_baro_hgt = std::move(arg);
    return Init_EstimatorStatusFlags_cs_rng_hgt(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_wind
{
public:
  explicit Init_EstimatorStatusFlags_cs_wind(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_baro_hgt cs_wind(::px4_msgs::msg::EstimatorStatusFlags::_cs_wind_type arg)
  {
    msg_.cs_wind = std::move(arg);
    return Init_EstimatorStatusFlags_cs_baro_hgt(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_in_air
{
public:
  explicit Init_EstimatorStatusFlags_cs_in_air(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_wind cs_in_air(::px4_msgs::msg::EstimatorStatusFlags::_cs_in_air_type arg)
  {
    msg_.cs_in_air = std::move(arg);
    return Init_EstimatorStatusFlags_cs_wind(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_mag_dec
{
public:
  explicit Init_EstimatorStatusFlags_cs_mag_dec(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_in_air cs_mag_dec(::px4_msgs::msg::EstimatorStatusFlags::_cs_mag_dec_type arg)
  {
    msg_.cs_mag_dec = std::move(arg);
    return Init_EstimatorStatusFlags_cs_in_air(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_mag_3d
{
public:
  explicit Init_EstimatorStatusFlags_cs_mag_3d(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_mag_dec cs_mag_3d(::px4_msgs::msg::EstimatorStatusFlags::_cs_mag_3d_type arg)
  {
    msg_.cs_mag_3d = std::move(arg);
    return Init_EstimatorStatusFlags_cs_mag_dec(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_mag_hdg
{
public:
  explicit Init_EstimatorStatusFlags_cs_mag_hdg(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_mag_3d cs_mag_hdg(::px4_msgs::msg::EstimatorStatusFlags::_cs_mag_hdg_type arg)
  {
    msg_.cs_mag_hdg = std::move(arg);
    return Init_EstimatorStatusFlags_cs_mag_3d(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_opt_flow
{
public:
  explicit Init_EstimatorStatusFlags_cs_opt_flow(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_mag_hdg cs_opt_flow(::px4_msgs::msg::EstimatorStatusFlags::_cs_opt_flow_type arg)
  {
    msg_.cs_opt_flow = std::move(arg);
    return Init_EstimatorStatusFlags_cs_mag_hdg(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_gps
{
public:
  explicit Init_EstimatorStatusFlags_cs_gps(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_opt_flow cs_gps(::px4_msgs::msg::EstimatorStatusFlags::_cs_gps_type arg)
  {
    msg_.cs_gps = std::move(arg);
    return Init_EstimatorStatusFlags_cs_opt_flow(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_yaw_align
{
public:
  explicit Init_EstimatorStatusFlags_cs_yaw_align(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_gps cs_yaw_align(::px4_msgs::msg::EstimatorStatusFlags::_cs_yaw_align_type arg)
  {
    msg_.cs_yaw_align = std::move(arg);
    return Init_EstimatorStatusFlags_cs_gps(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_cs_tilt_align
{
public:
  explicit Init_EstimatorStatusFlags_cs_tilt_align(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_yaw_align cs_tilt_align(::px4_msgs::msg::EstimatorStatusFlags::_cs_tilt_align_type arg)
  {
    msg_.cs_tilt_align = std::move(arg);
    return Init_EstimatorStatusFlags_cs_yaw_align(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_control_status_changes
{
public:
  explicit Init_EstimatorStatusFlags_control_status_changes(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_cs_tilt_align control_status_changes(::px4_msgs::msg::EstimatorStatusFlags::_control_status_changes_type arg)
  {
    msg_.control_status_changes = std::move(arg);
    return Init_EstimatorStatusFlags_cs_tilt_align(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_timestamp_sample
{
public:
  explicit Init_EstimatorStatusFlags_timestamp_sample(::px4_msgs::msg::EstimatorStatusFlags & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatusFlags_control_status_changes timestamp_sample(::px4_msgs::msg::EstimatorStatusFlags::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorStatusFlags_control_status_changes(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

class Init_EstimatorStatusFlags_timestamp
{
public:
  Init_EstimatorStatusFlags_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorStatusFlags_timestamp_sample timestamp(::px4_msgs::msg::EstimatorStatusFlags::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorStatusFlags_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatusFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorStatusFlags>()
{
  return px4_msgs::msg::builder::Init_EstimatorStatusFlags_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__BUILDER_HPP_
