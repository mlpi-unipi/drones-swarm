// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/NpfgStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NPFG_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__NPFG_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/npfg_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_NpfgStatus_can_run_factor
{
public:
  explicit Init_NpfgStatus_can_run_factor(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::NpfgStatus can_run_factor(::px4_msgs::msg::NpfgStatus::_can_run_factor_type arg)
  {
    msg_.can_run_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_time_const
{
public:
  explicit Init_NpfgStatus_time_const(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_can_run_factor time_const(::px4_msgs::msg::NpfgStatus::_time_const_type arg)
  {
    msg_.time_const = std::move(arg);
    return Init_NpfgStatus_can_run_factor(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_p_gain
{
public:
  explicit Init_NpfgStatus_p_gain(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_time_const p_gain(::px4_msgs::msg::NpfgStatus::_p_gain_type arg)
  {
    msg_.p_gain = std::move(arg);
    return Init_NpfgStatus_time_const(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_adapted_period
{
public:
  explicit Init_NpfgStatus_adapted_period(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_p_gain adapted_period(::px4_msgs::msg::NpfgStatus::_adapted_period_type arg)
  {
    msg_.adapted_period = std::move(arg);
    return Init_NpfgStatus_p_gain(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_min_ground_speed_ref
{
public:
  explicit Init_NpfgStatus_min_ground_speed_ref(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_adapted_period min_ground_speed_ref(::px4_msgs::msg::NpfgStatus::_min_ground_speed_ref_type arg)
  {
    msg_.min_ground_speed_ref = std::move(arg);
    return Init_NpfgStatus_adapted_period(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_heading_ref
{
public:
  explicit Init_NpfgStatus_heading_ref(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_min_ground_speed_ref heading_ref(::px4_msgs::msg::NpfgStatus::_heading_ref_type arg)
  {
    msg_.heading_ref = std::move(arg);
    return Init_NpfgStatus_min_ground_speed_ref(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_bearing
{
public:
  explicit Init_NpfgStatus_bearing(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_heading_ref bearing(::px4_msgs::msg::NpfgStatus::_bearing_type arg)
  {
    msg_.bearing = std::move(arg);
    return Init_NpfgStatus_heading_ref(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_airspeed_ref
{
public:
  explicit Init_NpfgStatus_airspeed_ref(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_bearing airspeed_ref(::px4_msgs::msg::NpfgStatus::_airspeed_ref_type arg)
  {
    msg_.airspeed_ref = std::move(arg);
    return Init_NpfgStatus_bearing(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_track_error_bound
{
public:
  explicit Init_NpfgStatus_track_error_bound(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_airspeed_ref track_error_bound(::px4_msgs::msg::NpfgStatus::_track_error_bound_type arg)
  {
    msg_.track_error_bound = std::move(arg);
    return Init_NpfgStatus_airspeed_ref(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_signed_track_error
{
public:
  explicit Init_NpfgStatus_signed_track_error(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_track_error_bound signed_track_error(::px4_msgs::msg::NpfgStatus::_signed_track_error_type arg)
  {
    msg_.signed_track_error = std::move(arg);
    return Init_NpfgStatus_track_error_bound(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_bearing_feas_on_track
{
public:
  explicit Init_NpfgStatus_bearing_feas_on_track(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_signed_track_error bearing_feas_on_track(::px4_msgs::msg::NpfgStatus::_bearing_feas_on_track_type arg)
  {
    msg_.bearing_feas_on_track = std::move(arg);
    return Init_NpfgStatus_signed_track_error(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_bearing_feas
{
public:
  explicit Init_NpfgStatus_bearing_feas(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_bearing_feas_on_track bearing_feas(::px4_msgs::msg::NpfgStatus::_bearing_feas_type arg)
  {
    msg_.bearing_feas = std::move(arg);
    return Init_NpfgStatus_bearing_feas_on_track(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_lat_accel_ff
{
public:
  explicit Init_NpfgStatus_lat_accel_ff(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_bearing_feas lat_accel_ff(::px4_msgs::msg::NpfgStatus::_lat_accel_ff_type arg)
  {
    msg_.lat_accel_ff = std::move(arg);
    return Init_NpfgStatus_bearing_feas(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_lat_accel
{
public:
  explicit Init_NpfgStatus_lat_accel(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_lat_accel_ff lat_accel(::px4_msgs::msg::NpfgStatus::_lat_accel_type arg)
  {
    msg_.lat_accel = std::move(arg);
    return Init_NpfgStatus_lat_accel_ff(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_wind_est_valid
{
public:
  explicit Init_NpfgStatus_wind_est_valid(::px4_msgs::msg::NpfgStatus & msg)
  : msg_(msg)
  {}
  Init_NpfgStatus_lat_accel wind_est_valid(::px4_msgs::msg::NpfgStatus::_wind_est_valid_type arg)
  {
    msg_.wind_est_valid = std::move(arg);
    return Init_NpfgStatus_lat_accel(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

class Init_NpfgStatus_timestamp
{
public:
  Init_NpfgStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NpfgStatus_wind_est_valid timestamp(::px4_msgs::msg::NpfgStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NpfgStatus_wind_est_valid(msg_);
  }

private:
  ::px4_msgs::msg::NpfgStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::NpfgStatus>()
{
  return px4_msgs::msg::builder::Init_NpfgStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__NPFG_STATUS__BUILDER_HPP_
