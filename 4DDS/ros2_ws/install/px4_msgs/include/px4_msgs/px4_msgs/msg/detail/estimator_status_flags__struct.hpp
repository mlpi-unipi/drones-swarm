// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorStatusFlags __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorStatusFlags __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorStatusFlags_
{
  using Type = EstimatorStatusFlags_<ContainerAllocator>;

  explicit EstimatorStatusFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->control_status_changes = 0ul;
      this->cs_tilt_align = false;
      this->cs_yaw_align = false;
      this->cs_gps = false;
      this->cs_opt_flow = false;
      this->cs_mag_hdg = false;
      this->cs_mag_3d = false;
      this->cs_mag_dec = false;
      this->cs_in_air = false;
      this->cs_wind = false;
      this->cs_baro_hgt = false;
      this->cs_rng_hgt = false;
      this->cs_gps_hgt = false;
      this->cs_ev_pos = false;
      this->cs_ev_yaw = false;
      this->cs_ev_hgt = false;
      this->cs_fuse_beta = false;
      this->cs_mag_field_disturbed = false;
      this->cs_fixed_wing = false;
      this->cs_mag_fault = false;
      this->cs_fuse_aspd = false;
      this->cs_gnd_effect = false;
      this->cs_rng_stuck = false;
      this->cs_gps_yaw = false;
      this->cs_mag_aligned_in_flight = false;
      this->cs_ev_vel = false;
      this->cs_synthetic_mag_z = false;
      this->cs_vehicle_at_rest = false;
      this->cs_gps_yaw_fault = false;
      this->cs_rng_fault = false;
      this->cs_inertial_dead_reckoning = false;
      this->cs_wind_dead_reckoning = false;
      this->cs_rng_kin_consistent = false;
      this->cs_fake_pos = false;
      this->cs_fake_hgt = false;
      this->cs_gravity_vector = false;
      this->cs_mag = false;
      this->cs_ev_yaw_fault = false;
      this->cs_mag_heading_consistent = false;
      this->cs_aux_gpos = false;
      this->fault_status_changes = 0ul;
      this->fs_bad_mag_x = false;
      this->fs_bad_mag_y = false;
      this->fs_bad_mag_z = false;
      this->fs_bad_hdg = false;
      this->fs_bad_mag_decl = false;
      this->fs_bad_airspeed = false;
      this->fs_bad_sideslip = false;
      this->fs_bad_optflow_x = false;
      this->fs_bad_optflow_y = false;
      this->fs_bad_acc_bias = false;
      this->fs_bad_acc_vertical = false;
      this->fs_bad_acc_clipping = false;
      this->innovation_fault_status_changes = 0ul;
      this->reject_hor_vel = false;
      this->reject_ver_vel = false;
      this->reject_hor_pos = false;
      this->reject_ver_pos = false;
      this->reject_yaw = false;
      this->reject_airspeed = false;
      this->reject_sideslip = false;
      this->reject_hagl = false;
      this->reject_optflow_x = false;
      this->reject_optflow_y = false;
    }
  }

  explicit EstimatorStatusFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->control_status_changes = 0ul;
      this->cs_tilt_align = false;
      this->cs_yaw_align = false;
      this->cs_gps = false;
      this->cs_opt_flow = false;
      this->cs_mag_hdg = false;
      this->cs_mag_3d = false;
      this->cs_mag_dec = false;
      this->cs_in_air = false;
      this->cs_wind = false;
      this->cs_baro_hgt = false;
      this->cs_rng_hgt = false;
      this->cs_gps_hgt = false;
      this->cs_ev_pos = false;
      this->cs_ev_yaw = false;
      this->cs_ev_hgt = false;
      this->cs_fuse_beta = false;
      this->cs_mag_field_disturbed = false;
      this->cs_fixed_wing = false;
      this->cs_mag_fault = false;
      this->cs_fuse_aspd = false;
      this->cs_gnd_effect = false;
      this->cs_rng_stuck = false;
      this->cs_gps_yaw = false;
      this->cs_mag_aligned_in_flight = false;
      this->cs_ev_vel = false;
      this->cs_synthetic_mag_z = false;
      this->cs_vehicle_at_rest = false;
      this->cs_gps_yaw_fault = false;
      this->cs_rng_fault = false;
      this->cs_inertial_dead_reckoning = false;
      this->cs_wind_dead_reckoning = false;
      this->cs_rng_kin_consistent = false;
      this->cs_fake_pos = false;
      this->cs_fake_hgt = false;
      this->cs_gravity_vector = false;
      this->cs_mag = false;
      this->cs_ev_yaw_fault = false;
      this->cs_mag_heading_consistent = false;
      this->cs_aux_gpos = false;
      this->fault_status_changes = 0ul;
      this->fs_bad_mag_x = false;
      this->fs_bad_mag_y = false;
      this->fs_bad_mag_z = false;
      this->fs_bad_hdg = false;
      this->fs_bad_mag_decl = false;
      this->fs_bad_airspeed = false;
      this->fs_bad_sideslip = false;
      this->fs_bad_optflow_x = false;
      this->fs_bad_optflow_y = false;
      this->fs_bad_acc_bias = false;
      this->fs_bad_acc_vertical = false;
      this->fs_bad_acc_clipping = false;
      this->innovation_fault_status_changes = 0ul;
      this->reject_hor_vel = false;
      this->reject_ver_vel = false;
      this->reject_hor_pos = false;
      this->reject_ver_pos = false;
      this->reject_yaw = false;
      this->reject_airspeed = false;
      this->reject_sideslip = false;
      this->reject_hagl = false;
      this->reject_optflow_x = false;
      this->reject_optflow_y = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _control_status_changes_type =
    uint32_t;
  _control_status_changes_type control_status_changes;
  using _cs_tilt_align_type =
    bool;
  _cs_tilt_align_type cs_tilt_align;
  using _cs_yaw_align_type =
    bool;
  _cs_yaw_align_type cs_yaw_align;
  using _cs_gps_type =
    bool;
  _cs_gps_type cs_gps;
  using _cs_opt_flow_type =
    bool;
  _cs_opt_flow_type cs_opt_flow;
  using _cs_mag_hdg_type =
    bool;
  _cs_mag_hdg_type cs_mag_hdg;
  using _cs_mag_3d_type =
    bool;
  _cs_mag_3d_type cs_mag_3d;
  using _cs_mag_dec_type =
    bool;
  _cs_mag_dec_type cs_mag_dec;
  using _cs_in_air_type =
    bool;
  _cs_in_air_type cs_in_air;
  using _cs_wind_type =
    bool;
  _cs_wind_type cs_wind;
  using _cs_baro_hgt_type =
    bool;
  _cs_baro_hgt_type cs_baro_hgt;
  using _cs_rng_hgt_type =
    bool;
  _cs_rng_hgt_type cs_rng_hgt;
  using _cs_gps_hgt_type =
    bool;
  _cs_gps_hgt_type cs_gps_hgt;
  using _cs_ev_pos_type =
    bool;
  _cs_ev_pos_type cs_ev_pos;
  using _cs_ev_yaw_type =
    bool;
  _cs_ev_yaw_type cs_ev_yaw;
  using _cs_ev_hgt_type =
    bool;
  _cs_ev_hgt_type cs_ev_hgt;
  using _cs_fuse_beta_type =
    bool;
  _cs_fuse_beta_type cs_fuse_beta;
  using _cs_mag_field_disturbed_type =
    bool;
  _cs_mag_field_disturbed_type cs_mag_field_disturbed;
  using _cs_fixed_wing_type =
    bool;
  _cs_fixed_wing_type cs_fixed_wing;
  using _cs_mag_fault_type =
    bool;
  _cs_mag_fault_type cs_mag_fault;
  using _cs_fuse_aspd_type =
    bool;
  _cs_fuse_aspd_type cs_fuse_aspd;
  using _cs_gnd_effect_type =
    bool;
  _cs_gnd_effect_type cs_gnd_effect;
  using _cs_rng_stuck_type =
    bool;
  _cs_rng_stuck_type cs_rng_stuck;
  using _cs_gps_yaw_type =
    bool;
  _cs_gps_yaw_type cs_gps_yaw;
  using _cs_mag_aligned_in_flight_type =
    bool;
  _cs_mag_aligned_in_flight_type cs_mag_aligned_in_flight;
  using _cs_ev_vel_type =
    bool;
  _cs_ev_vel_type cs_ev_vel;
  using _cs_synthetic_mag_z_type =
    bool;
  _cs_synthetic_mag_z_type cs_synthetic_mag_z;
  using _cs_vehicle_at_rest_type =
    bool;
  _cs_vehicle_at_rest_type cs_vehicle_at_rest;
  using _cs_gps_yaw_fault_type =
    bool;
  _cs_gps_yaw_fault_type cs_gps_yaw_fault;
  using _cs_rng_fault_type =
    bool;
  _cs_rng_fault_type cs_rng_fault;
  using _cs_inertial_dead_reckoning_type =
    bool;
  _cs_inertial_dead_reckoning_type cs_inertial_dead_reckoning;
  using _cs_wind_dead_reckoning_type =
    bool;
  _cs_wind_dead_reckoning_type cs_wind_dead_reckoning;
  using _cs_rng_kin_consistent_type =
    bool;
  _cs_rng_kin_consistent_type cs_rng_kin_consistent;
  using _cs_fake_pos_type =
    bool;
  _cs_fake_pos_type cs_fake_pos;
  using _cs_fake_hgt_type =
    bool;
  _cs_fake_hgt_type cs_fake_hgt;
  using _cs_gravity_vector_type =
    bool;
  _cs_gravity_vector_type cs_gravity_vector;
  using _cs_mag_type =
    bool;
  _cs_mag_type cs_mag;
  using _cs_ev_yaw_fault_type =
    bool;
  _cs_ev_yaw_fault_type cs_ev_yaw_fault;
  using _cs_mag_heading_consistent_type =
    bool;
  _cs_mag_heading_consistent_type cs_mag_heading_consistent;
  using _cs_aux_gpos_type =
    bool;
  _cs_aux_gpos_type cs_aux_gpos;
  using _fault_status_changes_type =
    uint32_t;
  _fault_status_changes_type fault_status_changes;
  using _fs_bad_mag_x_type =
    bool;
  _fs_bad_mag_x_type fs_bad_mag_x;
  using _fs_bad_mag_y_type =
    bool;
  _fs_bad_mag_y_type fs_bad_mag_y;
  using _fs_bad_mag_z_type =
    bool;
  _fs_bad_mag_z_type fs_bad_mag_z;
  using _fs_bad_hdg_type =
    bool;
  _fs_bad_hdg_type fs_bad_hdg;
  using _fs_bad_mag_decl_type =
    bool;
  _fs_bad_mag_decl_type fs_bad_mag_decl;
  using _fs_bad_airspeed_type =
    bool;
  _fs_bad_airspeed_type fs_bad_airspeed;
  using _fs_bad_sideslip_type =
    bool;
  _fs_bad_sideslip_type fs_bad_sideslip;
  using _fs_bad_optflow_x_type =
    bool;
  _fs_bad_optflow_x_type fs_bad_optflow_x;
  using _fs_bad_optflow_y_type =
    bool;
  _fs_bad_optflow_y_type fs_bad_optflow_y;
  using _fs_bad_acc_bias_type =
    bool;
  _fs_bad_acc_bias_type fs_bad_acc_bias;
  using _fs_bad_acc_vertical_type =
    bool;
  _fs_bad_acc_vertical_type fs_bad_acc_vertical;
  using _fs_bad_acc_clipping_type =
    bool;
  _fs_bad_acc_clipping_type fs_bad_acc_clipping;
  using _innovation_fault_status_changes_type =
    uint32_t;
  _innovation_fault_status_changes_type innovation_fault_status_changes;
  using _reject_hor_vel_type =
    bool;
  _reject_hor_vel_type reject_hor_vel;
  using _reject_ver_vel_type =
    bool;
  _reject_ver_vel_type reject_ver_vel;
  using _reject_hor_pos_type =
    bool;
  _reject_hor_pos_type reject_hor_pos;
  using _reject_ver_pos_type =
    bool;
  _reject_ver_pos_type reject_ver_pos;
  using _reject_yaw_type =
    bool;
  _reject_yaw_type reject_yaw;
  using _reject_airspeed_type =
    bool;
  _reject_airspeed_type reject_airspeed;
  using _reject_sideslip_type =
    bool;
  _reject_sideslip_type reject_sideslip;
  using _reject_hagl_type =
    bool;
  _reject_hagl_type reject_hagl;
  using _reject_optflow_x_type =
    bool;
  _reject_optflow_x_type reject_optflow_x;
  using _reject_optflow_y_type =
    bool;
  _reject_optflow_y_type reject_optflow_y;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__control_status_changes(
    const uint32_t & _arg)
  {
    this->control_status_changes = _arg;
    return *this;
  }
  Type & set__cs_tilt_align(
    const bool & _arg)
  {
    this->cs_tilt_align = _arg;
    return *this;
  }
  Type & set__cs_yaw_align(
    const bool & _arg)
  {
    this->cs_yaw_align = _arg;
    return *this;
  }
  Type & set__cs_gps(
    const bool & _arg)
  {
    this->cs_gps = _arg;
    return *this;
  }
  Type & set__cs_opt_flow(
    const bool & _arg)
  {
    this->cs_opt_flow = _arg;
    return *this;
  }
  Type & set__cs_mag_hdg(
    const bool & _arg)
  {
    this->cs_mag_hdg = _arg;
    return *this;
  }
  Type & set__cs_mag_3d(
    const bool & _arg)
  {
    this->cs_mag_3d = _arg;
    return *this;
  }
  Type & set__cs_mag_dec(
    const bool & _arg)
  {
    this->cs_mag_dec = _arg;
    return *this;
  }
  Type & set__cs_in_air(
    const bool & _arg)
  {
    this->cs_in_air = _arg;
    return *this;
  }
  Type & set__cs_wind(
    const bool & _arg)
  {
    this->cs_wind = _arg;
    return *this;
  }
  Type & set__cs_baro_hgt(
    const bool & _arg)
  {
    this->cs_baro_hgt = _arg;
    return *this;
  }
  Type & set__cs_rng_hgt(
    const bool & _arg)
  {
    this->cs_rng_hgt = _arg;
    return *this;
  }
  Type & set__cs_gps_hgt(
    const bool & _arg)
  {
    this->cs_gps_hgt = _arg;
    return *this;
  }
  Type & set__cs_ev_pos(
    const bool & _arg)
  {
    this->cs_ev_pos = _arg;
    return *this;
  }
  Type & set__cs_ev_yaw(
    const bool & _arg)
  {
    this->cs_ev_yaw = _arg;
    return *this;
  }
  Type & set__cs_ev_hgt(
    const bool & _arg)
  {
    this->cs_ev_hgt = _arg;
    return *this;
  }
  Type & set__cs_fuse_beta(
    const bool & _arg)
  {
    this->cs_fuse_beta = _arg;
    return *this;
  }
  Type & set__cs_mag_field_disturbed(
    const bool & _arg)
  {
    this->cs_mag_field_disturbed = _arg;
    return *this;
  }
  Type & set__cs_fixed_wing(
    const bool & _arg)
  {
    this->cs_fixed_wing = _arg;
    return *this;
  }
  Type & set__cs_mag_fault(
    const bool & _arg)
  {
    this->cs_mag_fault = _arg;
    return *this;
  }
  Type & set__cs_fuse_aspd(
    const bool & _arg)
  {
    this->cs_fuse_aspd = _arg;
    return *this;
  }
  Type & set__cs_gnd_effect(
    const bool & _arg)
  {
    this->cs_gnd_effect = _arg;
    return *this;
  }
  Type & set__cs_rng_stuck(
    const bool & _arg)
  {
    this->cs_rng_stuck = _arg;
    return *this;
  }
  Type & set__cs_gps_yaw(
    const bool & _arg)
  {
    this->cs_gps_yaw = _arg;
    return *this;
  }
  Type & set__cs_mag_aligned_in_flight(
    const bool & _arg)
  {
    this->cs_mag_aligned_in_flight = _arg;
    return *this;
  }
  Type & set__cs_ev_vel(
    const bool & _arg)
  {
    this->cs_ev_vel = _arg;
    return *this;
  }
  Type & set__cs_synthetic_mag_z(
    const bool & _arg)
  {
    this->cs_synthetic_mag_z = _arg;
    return *this;
  }
  Type & set__cs_vehicle_at_rest(
    const bool & _arg)
  {
    this->cs_vehicle_at_rest = _arg;
    return *this;
  }
  Type & set__cs_gps_yaw_fault(
    const bool & _arg)
  {
    this->cs_gps_yaw_fault = _arg;
    return *this;
  }
  Type & set__cs_rng_fault(
    const bool & _arg)
  {
    this->cs_rng_fault = _arg;
    return *this;
  }
  Type & set__cs_inertial_dead_reckoning(
    const bool & _arg)
  {
    this->cs_inertial_dead_reckoning = _arg;
    return *this;
  }
  Type & set__cs_wind_dead_reckoning(
    const bool & _arg)
  {
    this->cs_wind_dead_reckoning = _arg;
    return *this;
  }
  Type & set__cs_rng_kin_consistent(
    const bool & _arg)
  {
    this->cs_rng_kin_consistent = _arg;
    return *this;
  }
  Type & set__cs_fake_pos(
    const bool & _arg)
  {
    this->cs_fake_pos = _arg;
    return *this;
  }
  Type & set__cs_fake_hgt(
    const bool & _arg)
  {
    this->cs_fake_hgt = _arg;
    return *this;
  }
  Type & set__cs_gravity_vector(
    const bool & _arg)
  {
    this->cs_gravity_vector = _arg;
    return *this;
  }
  Type & set__cs_mag(
    const bool & _arg)
  {
    this->cs_mag = _arg;
    return *this;
  }
  Type & set__cs_ev_yaw_fault(
    const bool & _arg)
  {
    this->cs_ev_yaw_fault = _arg;
    return *this;
  }
  Type & set__cs_mag_heading_consistent(
    const bool & _arg)
  {
    this->cs_mag_heading_consistent = _arg;
    return *this;
  }
  Type & set__cs_aux_gpos(
    const bool & _arg)
  {
    this->cs_aux_gpos = _arg;
    return *this;
  }
  Type & set__fault_status_changes(
    const uint32_t & _arg)
  {
    this->fault_status_changes = _arg;
    return *this;
  }
  Type & set__fs_bad_mag_x(
    const bool & _arg)
  {
    this->fs_bad_mag_x = _arg;
    return *this;
  }
  Type & set__fs_bad_mag_y(
    const bool & _arg)
  {
    this->fs_bad_mag_y = _arg;
    return *this;
  }
  Type & set__fs_bad_mag_z(
    const bool & _arg)
  {
    this->fs_bad_mag_z = _arg;
    return *this;
  }
  Type & set__fs_bad_hdg(
    const bool & _arg)
  {
    this->fs_bad_hdg = _arg;
    return *this;
  }
  Type & set__fs_bad_mag_decl(
    const bool & _arg)
  {
    this->fs_bad_mag_decl = _arg;
    return *this;
  }
  Type & set__fs_bad_airspeed(
    const bool & _arg)
  {
    this->fs_bad_airspeed = _arg;
    return *this;
  }
  Type & set__fs_bad_sideslip(
    const bool & _arg)
  {
    this->fs_bad_sideslip = _arg;
    return *this;
  }
  Type & set__fs_bad_optflow_x(
    const bool & _arg)
  {
    this->fs_bad_optflow_x = _arg;
    return *this;
  }
  Type & set__fs_bad_optflow_y(
    const bool & _arg)
  {
    this->fs_bad_optflow_y = _arg;
    return *this;
  }
  Type & set__fs_bad_acc_bias(
    const bool & _arg)
  {
    this->fs_bad_acc_bias = _arg;
    return *this;
  }
  Type & set__fs_bad_acc_vertical(
    const bool & _arg)
  {
    this->fs_bad_acc_vertical = _arg;
    return *this;
  }
  Type & set__fs_bad_acc_clipping(
    const bool & _arg)
  {
    this->fs_bad_acc_clipping = _arg;
    return *this;
  }
  Type & set__innovation_fault_status_changes(
    const uint32_t & _arg)
  {
    this->innovation_fault_status_changes = _arg;
    return *this;
  }
  Type & set__reject_hor_vel(
    const bool & _arg)
  {
    this->reject_hor_vel = _arg;
    return *this;
  }
  Type & set__reject_ver_vel(
    const bool & _arg)
  {
    this->reject_ver_vel = _arg;
    return *this;
  }
  Type & set__reject_hor_pos(
    const bool & _arg)
  {
    this->reject_hor_pos = _arg;
    return *this;
  }
  Type & set__reject_ver_pos(
    const bool & _arg)
  {
    this->reject_ver_pos = _arg;
    return *this;
  }
  Type & set__reject_yaw(
    const bool & _arg)
  {
    this->reject_yaw = _arg;
    return *this;
  }
  Type & set__reject_airspeed(
    const bool & _arg)
  {
    this->reject_airspeed = _arg;
    return *this;
  }
  Type & set__reject_sideslip(
    const bool & _arg)
  {
    this->reject_sideslip = _arg;
    return *this;
  }
  Type & set__reject_hagl(
    const bool & _arg)
  {
    this->reject_hagl = _arg;
    return *this;
  }
  Type & set__reject_optflow_x(
    const bool & _arg)
  {
    this->reject_optflow_x = _arg;
    return *this;
  }
  Type & set__reject_optflow_y(
    const bool & _arg)
  {
    this->reject_optflow_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorStatusFlags
    std::shared_ptr<px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorStatusFlags
    std::shared_ptr<px4_msgs::msg::EstimatorStatusFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorStatusFlags_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->control_status_changes != other.control_status_changes) {
      return false;
    }
    if (this->cs_tilt_align != other.cs_tilt_align) {
      return false;
    }
    if (this->cs_yaw_align != other.cs_yaw_align) {
      return false;
    }
    if (this->cs_gps != other.cs_gps) {
      return false;
    }
    if (this->cs_opt_flow != other.cs_opt_flow) {
      return false;
    }
    if (this->cs_mag_hdg != other.cs_mag_hdg) {
      return false;
    }
    if (this->cs_mag_3d != other.cs_mag_3d) {
      return false;
    }
    if (this->cs_mag_dec != other.cs_mag_dec) {
      return false;
    }
    if (this->cs_in_air != other.cs_in_air) {
      return false;
    }
    if (this->cs_wind != other.cs_wind) {
      return false;
    }
    if (this->cs_baro_hgt != other.cs_baro_hgt) {
      return false;
    }
    if (this->cs_rng_hgt != other.cs_rng_hgt) {
      return false;
    }
    if (this->cs_gps_hgt != other.cs_gps_hgt) {
      return false;
    }
    if (this->cs_ev_pos != other.cs_ev_pos) {
      return false;
    }
    if (this->cs_ev_yaw != other.cs_ev_yaw) {
      return false;
    }
    if (this->cs_ev_hgt != other.cs_ev_hgt) {
      return false;
    }
    if (this->cs_fuse_beta != other.cs_fuse_beta) {
      return false;
    }
    if (this->cs_mag_field_disturbed != other.cs_mag_field_disturbed) {
      return false;
    }
    if (this->cs_fixed_wing != other.cs_fixed_wing) {
      return false;
    }
    if (this->cs_mag_fault != other.cs_mag_fault) {
      return false;
    }
    if (this->cs_fuse_aspd != other.cs_fuse_aspd) {
      return false;
    }
    if (this->cs_gnd_effect != other.cs_gnd_effect) {
      return false;
    }
    if (this->cs_rng_stuck != other.cs_rng_stuck) {
      return false;
    }
    if (this->cs_gps_yaw != other.cs_gps_yaw) {
      return false;
    }
    if (this->cs_mag_aligned_in_flight != other.cs_mag_aligned_in_flight) {
      return false;
    }
    if (this->cs_ev_vel != other.cs_ev_vel) {
      return false;
    }
    if (this->cs_synthetic_mag_z != other.cs_synthetic_mag_z) {
      return false;
    }
    if (this->cs_vehicle_at_rest != other.cs_vehicle_at_rest) {
      return false;
    }
    if (this->cs_gps_yaw_fault != other.cs_gps_yaw_fault) {
      return false;
    }
    if (this->cs_rng_fault != other.cs_rng_fault) {
      return false;
    }
    if (this->cs_inertial_dead_reckoning != other.cs_inertial_dead_reckoning) {
      return false;
    }
    if (this->cs_wind_dead_reckoning != other.cs_wind_dead_reckoning) {
      return false;
    }
    if (this->cs_rng_kin_consistent != other.cs_rng_kin_consistent) {
      return false;
    }
    if (this->cs_fake_pos != other.cs_fake_pos) {
      return false;
    }
    if (this->cs_fake_hgt != other.cs_fake_hgt) {
      return false;
    }
    if (this->cs_gravity_vector != other.cs_gravity_vector) {
      return false;
    }
    if (this->cs_mag != other.cs_mag) {
      return false;
    }
    if (this->cs_ev_yaw_fault != other.cs_ev_yaw_fault) {
      return false;
    }
    if (this->cs_mag_heading_consistent != other.cs_mag_heading_consistent) {
      return false;
    }
    if (this->cs_aux_gpos != other.cs_aux_gpos) {
      return false;
    }
    if (this->fault_status_changes != other.fault_status_changes) {
      return false;
    }
    if (this->fs_bad_mag_x != other.fs_bad_mag_x) {
      return false;
    }
    if (this->fs_bad_mag_y != other.fs_bad_mag_y) {
      return false;
    }
    if (this->fs_bad_mag_z != other.fs_bad_mag_z) {
      return false;
    }
    if (this->fs_bad_hdg != other.fs_bad_hdg) {
      return false;
    }
    if (this->fs_bad_mag_decl != other.fs_bad_mag_decl) {
      return false;
    }
    if (this->fs_bad_airspeed != other.fs_bad_airspeed) {
      return false;
    }
    if (this->fs_bad_sideslip != other.fs_bad_sideslip) {
      return false;
    }
    if (this->fs_bad_optflow_x != other.fs_bad_optflow_x) {
      return false;
    }
    if (this->fs_bad_optflow_y != other.fs_bad_optflow_y) {
      return false;
    }
    if (this->fs_bad_acc_bias != other.fs_bad_acc_bias) {
      return false;
    }
    if (this->fs_bad_acc_vertical != other.fs_bad_acc_vertical) {
      return false;
    }
    if (this->fs_bad_acc_clipping != other.fs_bad_acc_clipping) {
      return false;
    }
    if (this->innovation_fault_status_changes != other.innovation_fault_status_changes) {
      return false;
    }
    if (this->reject_hor_vel != other.reject_hor_vel) {
      return false;
    }
    if (this->reject_ver_vel != other.reject_ver_vel) {
      return false;
    }
    if (this->reject_hor_pos != other.reject_hor_pos) {
      return false;
    }
    if (this->reject_ver_pos != other.reject_ver_pos) {
      return false;
    }
    if (this->reject_yaw != other.reject_yaw) {
      return false;
    }
    if (this->reject_airspeed != other.reject_airspeed) {
      return false;
    }
    if (this->reject_sideslip != other.reject_sideslip) {
      return false;
    }
    if (this->reject_hagl != other.reject_hagl) {
      return false;
    }
    if (this->reject_optflow_x != other.reject_optflow_x) {
      return false;
    }
    if (this->reject_optflow_y != other.reject_optflow_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorStatusFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorStatusFlags_

// alias to use template instance with default allocator
using EstimatorStatusFlags =
  px4_msgs::msg::EstimatorStatusFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS_FLAGS__STRUCT_HPP_
