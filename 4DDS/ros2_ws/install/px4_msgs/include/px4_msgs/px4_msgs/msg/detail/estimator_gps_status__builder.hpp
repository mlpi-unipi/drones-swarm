// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorGpsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_gps_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorGpsStatus_filtered_horizontal_speed_m_s
{
public:
  explicit Init_EstimatorGpsStatus_filtered_horizontal_speed_m_s(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorGpsStatus filtered_horizontal_speed_m_s(::px4_msgs::msg::EstimatorGpsStatus::_filtered_horizontal_speed_m_s_type arg)
  {
    msg_.filtered_horizontal_speed_m_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_position_drift_rate_vertical_m_s
{
public:
  explicit Init_EstimatorGpsStatus_position_drift_rate_vertical_m_s(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_filtered_horizontal_speed_m_s position_drift_rate_vertical_m_s(::px4_msgs::msg::EstimatorGpsStatus::_position_drift_rate_vertical_m_s_type arg)
  {
    msg_.position_drift_rate_vertical_m_s = std::move(arg);
    return Init_EstimatorGpsStatus_filtered_horizontal_speed_m_s(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_position_drift_rate_horizontal_m_s
{
public:
  explicit Init_EstimatorGpsStatus_position_drift_rate_horizontal_m_s(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_position_drift_rate_vertical_m_s position_drift_rate_horizontal_m_s(::px4_msgs::msg::EstimatorGpsStatus::_position_drift_rate_horizontal_m_s_type arg)
  {
    msg_.position_drift_rate_horizontal_m_s = std::move(arg);
    return Init_EstimatorGpsStatus_position_drift_rate_vertical_m_s(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_check_fail_max_vert_spd_err
{
public:
  explicit Init_EstimatorGpsStatus_check_fail_max_vert_spd_err(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_position_drift_rate_horizontal_m_s check_fail_max_vert_spd_err(::px4_msgs::msg::EstimatorGpsStatus::_check_fail_max_vert_spd_err_type arg)
  {
    msg_.check_fail_max_vert_spd_err = std::move(arg);
    return Init_EstimatorGpsStatus_position_drift_rate_horizontal_m_s(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_check_fail_max_horz_spd_err
{
public:
  explicit Init_EstimatorGpsStatus_check_fail_max_horz_spd_err(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_check_fail_max_vert_spd_err check_fail_max_horz_spd_err(::px4_msgs::msg::EstimatorGpsStatus::_check_fail_max_horz_spd_err_type arg)
  {
    msg_.check_fail_max_horz_spd_err = std::move(arg);
    return Init_EstimatorGpsStatus_check_fail_max_vert_spd_err(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_check_fail_max_vert_drift
{
public:
  explicit Init_EstimatorGpsStatus_check_fail_max_vert_drift(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_check_fail_max_horz_spd_err check_fail_max_vert_drift(::px4_msgs::msg::EstimatorGpsStatus::_check_fail_max_vert_drift_type arg)
  {
    msg_.check_fail_max_vert_drift = std::move(arg);
    return Init_EstimatorGpsStatus_check_fail_max_horz_spd_err(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_check_fail_max_horz_drift
{
public:
  explicit Init_EstimatorGpsStatus_check_fail_max_horz_drift(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_check_fail_max_vert_drift check_fail_max_horz_drift(::px4_msgs::msg::EstimatorGpsStatus::_check_fail_max_horz_drift_type arg)
  {
    msg_.check_fail_max_horz_drift = std::move(arg);
    return Init_EstimatorGpsStatus_check_fail_max_vert_drift(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_check_fail_max_spd_err
{
public:
  explicit Init_EstimatorGpsStatus_check_fail_max_spd_err(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_check_fail_max_horz_drift check_fail_max_spd_err(::px4_msgs::msg::EstimatorGpsStatus::_check_fail_max_spd_err_type arg)
  {
    msg_.check_fail_max_spd_err = std::move(arg);
    return Init_EstimatorGpsStatus_check_fail_max_horz_drift(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_check_fail_max_vert_err
{
public:
  explicit Init_EstimatorGpsStatus_check_fail_max_vert_err(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_check_fail_max_spd_err check_fail_max_vert_err(::px4_msgs::msg::EstimatorGpsStatus::_check_fail_max_vert_err_type arg)
  {
    msg_.check_fail_max_vert_err = std::move(arg);
    return Init_EstimatorGpsStatus_check_fail_max_spd_err(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_check_fail_max_horz_err
{
public:
  explicit Init_EstimatorGpsStatus_check_fail_max_horz_err(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_check_fail_max_vert_err check_fail_max_horz_err(::px4_msgs::msg::EstimatorGpsStatus::_check_fail_max_horz_err_type arg)
  {
    msg_.check_fail_max_horz_err = std::move(arg);
    return Init_EstimatorGpsStatus_check_fail_max_vert_err(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_check_fail_max_pdop
{
public:
  explicit Init_EstimatorGpsStatus_check_fail_max_pdop(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_check_fail_max_horz_err check_fail_max_pdop(::px4_msgs::msg::EstimatorGpsStatus::_check_fail_max_pdop_type arg)
  {
    msg_.check_fail_max_pdop = std::move(arg);
    return Init_EstimatorGpsStatus_check_fail_max_horz_err(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_check_fail_min_sat_count
{
public:
  explicit Init_EstimatorGpsStatus_check_fail_min_sat_count(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_check_fail_max_pdop check_fail_min_sat_count(::px4_msgs::msg::EstimatorGpsStatus::_check_fail_min_sat_count_type arg)
  {
    msg_.check_fail_min_sat_count = std::move(arg);
    return Init_EstimatorGpsStatus_check_fail_max_pdop(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_check_fail_gps_fix
{
public:
  explicit Init_EstimatorGpsStatus_check_fail_gps_fix(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_check_fail_min_sat_count check_fail_gps_fix(::px4_msgs::msg::EstimatorGpsStatus::_check_fail_gps_fix_type arg)
  {
    msg_.check_fail_gps_fix = std::move(arg);
    return Init_EstimatorGpsStatus_check_fail_min_sat_count(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_checks_passed
{
public:
  explicit Init_EstimatorGpsStatus_checks_passed(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_check_fail_gps_fix checks_passed(::px4_msgs::msg::EstimatorGpsStatus::_checks_passed_type arg)
  {
    msg_.checks_passed = std::move(arg);
    return Init_EstimatorGpsStatus_check_fail_gps_fix(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_timestamp_sample
{
public:
  explicit Init_EstimatorGpsStatus_timestamp_sample(::px4_msgs::msg::EstimatorGpsStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorGpsStatus_checks_passed timestamp_sample(::px4_msgs::msg::EstimatorGpsStatus::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorGpsStatus_checks_passed(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

class Init_EstimatorGpsStatus_timestamp
{
public:
  Init_EstimatorGpsStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorGpsStatus_timestamp_sample timestamp(::px4_msgs::msg::EstimatorGpsStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorGpsStatus_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorGpsStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorGpsStatus>()
{
  return px4_msgs::msg::builder::Init_EstimatorGpsStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__BUILDER_HPP_
