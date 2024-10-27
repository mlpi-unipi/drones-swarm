// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorStatus_mag_strength_ref_gs
{
public:
  explicit Init_EstimatorStatus_mag_strength_ref_gs(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorStatus mag_strength_ref_gs(::px4_msgs::msg::EstimatorStatus::_mag_strength_ref_gs_type arg)
  {
    msg_.mag_strength_ref_gs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_mag_strength_gs
{
public:
  explicit Init_EstimatorStatus_mag_strength_gs(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_mag_strength_ref_gs mag_strength_gs(::px4_msgs::msg::EstimatorStatus::_mag_strength_gs_type arg)
  {
    msg_.mag_strength_gs = std::move(arg);
    return Init_EstimatorStatus_mag_strength_ref_gs(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_mag_inclination_ref_deg
{
public:
  explicit Init_EstimatorStatus_mag_inclination_ref_deg(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_mag_strength_gs mag_inclination_ref_deg(::px4_msgs::msg::EstimatorStatus::_mag_inclination_ref_deg_type arg)
  {
    msg_.mag_inclination_ref_deg = std::move(arg);
    return Init_EstimatorStatus_mag_strength_gs(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_mag_inclination_deg
{
public:
  explicit Init_EstimatorStatus_mag_inclination_deg(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_mag_inclination_ref_deg mag_inclination_deg(::px4_msgs::msg::EstimatorStatus::_mag_inclination_deg_type arg)
  {
    msg_.mag_inclination_deg = std::move(arg);
    return Init_EstimatorStatus_mag_inclination_ref_deg(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_timeout_flags
{
public:
  explicit Init_EstimatorStatus_timeout_flags(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_mag_inclination_deg timeout_flags(::px4_msgs::msg::EstimatorStatus::_timeout_flags_type arg)
  {
    msg_.timeout_flags = std::move(arg);
    return Init_EstimatorStatus_mag_inclination_deg(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_health_flags
{
public:
  explicit Init_EstimatorStatus_health_flags(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_timeout_flags health_flags(::px4_msgs::msg::EstimatorStatus::_health_flags_type arg)
  {
    msg_.health_flags = std::move(arg);
    return Init_EstimatorStatus_timeout_flags(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_mag_device_id
{
public:
  explicit Init_EstimatorStatus_mag_device_id(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_health_flags mag_device_id(::px4_msgs::msg::EstimatorStatus::_mag_device_id_type arg)
  {
    msg_.mag_device_id = std::move(arg);
    return Init_EstimatorStatus_health_flags(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_baro_device_id
{
public:
  explicit Init_EstimatorStatus_baro_device_id(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_mag_device_id baro_device_id(::px4_msgs::msg::EstimatorStatus::_baro_device_id_type arg)
  {
    msg_.baro_device_id = std::move(arg);
    return Init_EstimatorStatus_mag_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_gyro_device_id
{
public:
  explicit Init_EstimatorStatus_gyro_device_id(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_baro_device_id gyro_device_id(::px4_msgs::msg::EstimatorStatus::_gyro_device_id_type arg)
  {
    msg_.gyro_device_id = std::move(arg);
    return Init_EstimatorStatus_baro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_accel_device_id
{
public:
  explicit Init_EstimatorStatus_accel_device_id(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_gyro_device_id accel_device_id(::px4_msgs::msg::EstimatorStatus::_accel_device_id_type arg)
  {
    msg_.accel_device_id = std::move(arg);
    return Init_EstimatorStatus_gyro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_pre_flt_fail_mag_field_disturbed
{
public:
  explicit Init_EstimatorStatus_pre_flt_fail_mag_field_disturbed(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_accel_device_id pre_flt_fail_mag_field_disturbed(::px4_msgs::msg::EstimatorStatus::_pre_flt_fail_mag_field_disturbed_type arg)
  {
    msg_.pre_flt_fail_mag_field_disturbed = std::move(arg);
    return Init_EstimatorStatus_accel_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_pre_flt_fail_innov_height
{
public:
  explicit Init_EstimatorStatus_pre_flt_fail_innov_height(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_pre_flt_fail_mag_field_disturbed pre_flt_fail_innov_height(::px4_msgs::msg::EstimatorStatus::_pre_flt_fail_innov_height_type arg)
  {
    msg_.pre_flt_fail_innov_height = std::move(arg);
    return Init_EstimatorStatus_pre_flt_fail_mag_field_disturbed(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_pre_flt_fail_innov_vel_vert
{
public:
  explicit Init_EstimatorStatus_pre_flt_fail_innov_vel_vert(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_pre_flt_fail_innov_height pre_flt_fail_innov_vel_vert(::px4_msgs::msg::EstimatorStatus::_pre_flt_fail_innov_vel_vert_type arg)
  {
    msg_.pre_flt_fail_innov_vel_vert = std::move(arg);
    return Init_EstimatorStatus_pre_flt_fail_innov_height(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_pre_flt_fail_innov_vel_horiz
{
public:
  explicit Init_EstimatorStatus_pre_flt_fail_innov_vel_horiz(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_pre_flt_fail_innov_vel_vert pre_flt_fail_innov_vel_horiz(::px4_msgs::msg::EstimatorStatus::_pre_flt_fail_innov_vel_horiz_type arg)
  {
    msg_.pre_flt_fail_innov_vel_horiz = std::move(arg);
    return Init_EstimatorStatus_pre_flt_fail_innov_vel_vert(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_pre_flt_fail_innov_heading
{
public:
  explicit Init_EstimatorStatus_pre_flt_fail_innov_heading(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_pre_flt_fail_innov_vel_horiz pre_flt_fail_innov_heading(::px4_msgs::msg::EstimatorStatus::_pre_flt_fail_innov_heading_type arg)
  {
    msg_.pre_flt_fail_innov_heading = std::move(arg);
    return Init_EstimatorStatus_pre_flt_fail_innov_vel_horiz(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_time_slip
{
public:
  explicit Init_EstimatorStatus_time_slip(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_pre_flt_fail_innov_heading time_slip(::px4_msgs::msg::EstimatorStatus::_time_slip_type arg)
  {
    msg_.time_slip = std::move(arg);
    return Init_EstimatorStatus_pre_flt_fail_innov_heading(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_reset_count_quat
{
public:
  explicit Init_EstimatorStatus_reset_count_quat(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_time_slip reset_count_quat(::px4_msgs::msg::EstimatorStatus::_reset_count_quat_type arg)
  {
    msg_.reset_count_quat = std::move(arg);
    return Init_EstimatorStatus_time_slip(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_reset_count_pod_d
{
public:
  explicit Init_EstimatorStatus_reset_count_pod_d(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_reset_count_quat reset_count_pod_d(::px4_msgs::msg::EstimatorStatus::_reset_count_pod_d_type arg)
  {
    msg_.reset_count_pod_d = std::move(arg);
    return Init_EstimatorStatus_reset_count_quat(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_reset_count_pos_ne
{
public:
  explicit Init_EstimatorStatus_reset_count_pos_ne(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_reset_count_pod_d reset_count_pos_ne(::px4_msgs::msg::EstimatorStatus::_reset_count_pos_ne_type arg)
  {
    msg_.reset_count_pos_ne = std::move(arg);
    return Init_EstimatorStatus_reset_count_pod_d(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_reset_count_vel_d
{
public:
  explicit Init_EstimatorStatus_reset_count_vel_d(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_reset_count_pos_ne reset_count_vel_d(::px4_msgs::msg::EstimatorStatus::_reset_count_vel_d_type arg)
  {
    msg_.reset_count_vel_d = std::move(arg);
    return Init_EstimatorStatus_reset_count_pos_ne(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_reset_count_vel_ne
{
public:
  explicit Init_EstimatorStatus_reset_count_vel_ne(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_reset_count_vel_d reset_count_vel_ne(::px4_msgs::msg::EstimatorStatus::_reset_count_vel_ne_type arg)
  {
    msg_.reset_count_vel_ne = std::move(arg);
    return Init_EstimatorStatus_reset_count_vel_d(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_solution_status_flags
{
public:
  explicit Init_EstimatorStatus_solution_status_flags(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_reset_count_vel_ne solution_status_flags(::px4_msgs::msg::EstimatorStatus::_solution_status_flags_type arg)
  {
    msg_.solution_status_flags = std::move(arg);
    return Init_EstimatorStatus_reset_count_vel_ne(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_beta_test_ratio
{
public:
  explicit Init_EstimatorStatus_beta_test_ratio(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_solution_status_flags beta_test_ratio(::px4_msgs::msg::EstimatorStatus::_beta_test_ratio_type arg)
  {
    msg_.beta_test_ratio = std::move(arg);
    return Init_EstimatorStatus_solution_status_flags(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_hagl_test_ratio
{
public:
  explicit Init_EstimatorStatus_hagl_test_ratio(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_beta_test_ratio hagl_test_ratio(::px4_msgs::msg::EstimatorStatus::_hagl_test_ratio_type arg)
  {
    msg_.hagl_test_ratio = std::move(arg);
    return Init_EstimatorStatus_beta_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_tas_test_ratio
{
public:
  explicit Init_EstimatorStatus_tas_test_ratio(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_hagl_test_ratio tas_test_ratio(::px4_msgs::msg::EstimatorStatus::_tas_test_ratio_type arg)
  {
    msg_.tas_test_ratio = std::move(arg);
    return Init_EstimatorStatus_hagl_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_hgt_test_ratio
{
public:
  explicit Init_EstimatorStatus_hgt_test_ratio(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_tas_test_ratio hgt_test_ratio(::px4_msgs::msg::EstimatorStatus::_hgt_test_ratio_type arg)
  {
    msg_.hgt_test_ratio = std::move(arg);
    return Init_EstimatorStatus_tas_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_pos_test_ratio
{
public:
  explicit Init_EstimatorStatus_pos_test_ratio(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_hgt_test_ratio pos_test_ratio(::px4_msgs::msg::EstimatorStatus::_pos_test_ratio_type arg)
  {
    msg_.pos_test_ratio = std::move(arg);
    return Init_EstimatorStatus_hgt_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_vel_test_ratio
{
public:
  explicit Init_EstimatorStatus_vel_test_ratio(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_pos_test_ratio vel_test_ratio(::px4_msgs::msg::EstimatorStatus::_vel_test_ratio_type arg)
  {
    msg_.vel_test_ratio = std::move(arg);
    return Init_EstimatorStatus_pos_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_mag_test_ratio
{
public:
  explicit Init_EstimatorStatus_mag_test_ratio(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_vel_test_ratio mag_test_ratio(::px4_msgs::msg::EstimatorStatus::_mag_test_ratio_type arg)
  {
    msg_.mag_test_ratio = std::move(arg);
    return Init_EstimatorStatus_vel_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_innovation_check_flags
{
public:
  explicit Init_EstimatorStatus_innovation_check_flags(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_mag_test_ratio innovation_check_flags(::px4_msgs::msg::EstimatorStatus::_innovation_check_flags_type arg)
  {
    msg_.innovation_check_flags = std::move(arg);
    return Init_EstimatorStatus_mag_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_pos_vert_accuracy
{
public:
  explicit Init_EstimatorStatus_pos_vert_accuracy(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_innovation_check_flags pos_vert_accuracy(::px4_msgs::msg::EstimatorStatus::_pos_vert_accuracy_type arg)
  {
    msg_.pos_vert_accuracy = std::move(arg);
    return Init_EstimatorStatus_innovation_check_flags(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_pos_horiz_accuracy
{
public:
  explicit Init_EstimatorStatus_pos_horiz_accuracy(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_pos_vert_accuracy pos_horiz_accuracy(::px4_msgs::msg::EstimatorStatus::_pos_horiz_accuracy_type arg)
  {
    msg_.pos_horiz_accuracy = std::move(arg);
    return Init_EstimatorStatus_pos_vert_accuracy(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_filter_fault_flags
{
public:
  explicit Init_EstimatorStatus_filter_fault_flags(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_pos_horiz_accuracy filter_fault_flags(::px4_msgs::msg::EstimatorStatus::_filter_fault_flags_type arg)
  {
    msg_.filter_fault_flags = std::move(arg);
    return Init_EstimatorStatus_pos_horiz_accuracy(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_control_mode_flags
{
public:
  explicit Init_EstimatorStatus_control_mode_flags(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_filter_fault_flags control_mode_flags(::px4_msgs::msg::EstimatorStatus::_control_mode_flags_type arg)
  {
    msg_.control_mode_flags = std::move(arg);
    return Init_EstimatorStatus_filter_fault_flags(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_gps_check_fail_flags
{
public:
  explicit Init_EstimatorStatus_gps_check_fail_flags(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_control_mode_flags gps_check_fail_flags(::px4_msgs::msg::EstimatorStatus::_gps_check_fail_flags_type arg)
  {
    msg_.gps_check_fail_flags = std::move(arg);
    return Init_EstimatorStatus_control_mode_flags(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_output_tracking_error
{
public:
  explicit Init_EstimatorStatus_output_tracking_error(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_gps_check_fail_flags output_tracking_error(::px4_msgs::msg::EstimatorStatus::_output_tracking_error_type arg)
  {
    msg_.output_tracking_error = std::move(arg);
    return Init_EstimatorStatus_gps_check_fail_flags(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_timestamp_sample
{
public:
  explicit Init_EstimatorStatus_timestamp_sample(::px4_msgs::msg::EstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorStatus_output_tracking_error timestamp_sample(::px4_msgs::msg::EstimatorStatus::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorStatus_output_tracking_error(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

class Init_EstimatorStatus_timestamp
{
public:
  Init_EstimatorStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorStatus_timestamp_sample timestamp(::px4_msgs::msg::EstimatorStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorStatus_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorStatus>()
{
  return px4_msgs::msg::builder::Init_EstimatorStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS__BUILDER_HPP_
