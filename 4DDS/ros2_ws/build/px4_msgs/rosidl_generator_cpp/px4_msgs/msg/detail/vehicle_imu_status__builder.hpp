// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleImuStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_imu_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleImuStatus_temperature_gyro
{
public:
  explicit Init_VehicleImuStatus_temperature_gyro(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleImuStatus temperature_gyro(::px4_msgs::msg::VehicleImuStatus::_temperature_gyro_type arg)
  {
    msg_.temperature_gyro = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_temperature_accel
{
public:
  explicit Init_VehicleImuStatus_temperature_accel(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_temperature_gyro temperature_accel(::px4_msgs::msg::VehicleImuStatus::_temperature_accel_type arg)
  {
    msg_.temperature_accel = std::move(arg);
    return Init_VehicleImuStatus_temperature_gyro(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_var_gyro
{
public:
  explicit Init_VehicleImuStatus_var_gyro(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_temperature_accel var_gyro(::px4_msgs::msg::VehicleImuStatus::_var_gyro_type arg)
  {
    msg_.var_gyro = std::move(arg);
    return Init_VehicleImuStatus_temperature_accel(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_var_accel
{
public:
  explicit Init_VehicleImuStatus_var_accel(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_var_gyro var_accel(::px4_msgs::msg::VehicleImuStatus::_var_accel_type arg)
  {
    msg_.var_accel = std::move(arg);
    return Init_VehicleImuStatus_var_gyro(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_mean_gyro
{
public:
  explicit Init_VehicleImuStatus_mean_gyro(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_var_accel mean_gyro(::px4_msgs::msg::VehicleImuStatus::_mean_gyro_type arg)
  {
    msg_.mean_gyro = std::move(arg);
    return Init_VehicleImuStatus_var_accel(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_mean_accel
{
public:
  explicit Init_VehicleImuStatus_mean_accel(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_mean_gyro mean_accel(::px4_msgs::msg::VehicleImuStatus::_mean_accel_type arg)
  {
    msg_.mean_accel = std::move(arg);
    return Init_VehicleImuStatus_mean_gyro(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_delta_angle_coning_metric
{
public:
  explicit Init_VehicleImuStatus_delta_angle_coning_metric(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_mean_accel delta_angle_coning_metric(::px4_msgs::msg::VehicleImuStatus::_delta_angle_coning_metric_type arg)
  {
    msg_.delta_angle_coning_metric = std::move(arg);
    return Init_VehicleImuStatus_mean_accel(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_gyro_vibration_metric
{
public:
  explicit Init_VehicleImuStatus_gyro_vibration_metric(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_delta_angle_coning_metric gyro_vibration_metric(::px4_msgs::msg::VehicleImuStatus::_gyro_vibration_metric_type arg)
  {
    msg_.gyro_vibration_metric = std::move(arg);
    return Init_VehicleImuStatus_delta_angle_coning_metric(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_accel_vibration_metric
{
public:
  explicit Init_VehicleImuStatus_accel_vibration_metric(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_gyro_vibration_metric accel_vibration_metric(::px4_msgs::msg::VehicleImuStatus::_accel_vibration_metric_type arg)
  {
    msg_.accel_vibration_metric = std::move(arg);
    return Init_VehicleImuStatus_gyro_vibration_metric(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_gyro_raw_rate_hz
{
public:
  explicit Init_VehicleImuStatus_gyro_raw_rate_hz(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_accel_vibration_metric gyro_raw_rate_hz(::px4_msgs::msg::VehicleImuStatus::_gyro_raw_rate_hz_type arg)
  {
    msg_.gyro_raw_rate_hz = std::move(arg);
    return Init_VehicleImuStatus_accel_vibration_metric(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_accel_raw_rate_hz
{
public:
  explicit Init_VehicleImuStatus_accel_raw_rate_hz(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_gyro_raw_rate_hz accel_raw_rate_hz(::px4_msgs::msg::VehicleImuStatus::_accel_raw_rate_hz_type arg)
  {
    msg_.accel_raw_rate_hz = std::move(arg);
    return Init_VehicleImuStatus_gyro_raw_rate_hz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_gyro_rate_hz
{
public:
  explicit Init_VehicleImuStatus_gyro_rate_hz(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_accel_raw_rate_hz gyro_rate_hz(::px4_msgs::msg::VehicleImuStatus::_gyro_rate_hz_type arg)
  {
    msg_.gyro_rate_hz = std::move(arg);
    return Init_VehicleImuStatus_accel_raw_rate_hz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_accel_rate_hz
{
public:
  explicit Init_VehicleImuStatus_accel_rate_hz(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_gyro_rate_hz accel_rate_hz(::px4_msgs::msg::VehicleImuStatus::_accel_rate_hz_type arg)
  {
    msg_.accel_rate_hz = std::move(arg);
    return Init_VehicleImuStatus_gyro_rate_hz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_gyro_error_count
{
public:
  explicit Init_VehicleImuStatus_gyro_error_count(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_accel_rate_hz gyro_error_count(::px4_msgs::msg::VehicleImuStatus::_gyro_error_count_type arg)
  {
    msg_.gyro_error_count = std::move(arg);
    return Init_VehicleImuStatus_accel_rate_hz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_accel_error_count
{
public:
  explicit Init_VehicleImuStatus_accel_error_count(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_gyro_error_count accel_error_count(::px4_msgs::msg::VehicleImuStatus::_accel_error_count_type arg)
  {
    msg_.accel_error_count = std::move(arg);
    return Init_VehicleImuStatus_gyro_error_count(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_gyro_clipping
{
public:
  explicit Init_VehicleImuStatus_gyro_clipping(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_accel_error_count gyro_clipping(::px4_msgs::msg::VehicleImuStatus::_gyro_clipping_type arg)
  {
    msg_.gyro_clipping = std::move(arg);
    return Init_VehicleImuStatus_accel_error_count(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_accel_clipping
{
public:
  explicit Init_VehicleImuStatus_accel_clipping(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_gyro_clipping accel_clipping(::px4_msgs::msg::VehicleImuStatus::_accel_clipping_type arg)
  {
    msg_.accel_clipping = std::move(arg);
    return Init_VehicleImuStatus_gyro_clipping(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_gyro_device_id
{
public:
  explicit Init_VehicleImuStatus_gyro_device_id(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_accel_clipping gyro_device_id(::px4_msgs::msg::VehicleImuStatus::_gyro_device_id_type arg)
  {
    msg_.gyro_device_id = std::move(arg);
    return Init_VehicleImuStatus_accel_clipping(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_accel_device_id
{
public:
  explicit Init_VehicleImuStatus_accel_device_id(::px4_msgs::msg::VehicleImuStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleImuStatus_gyro_device_id accel_device_id(::px4_msgs::msg::VehicleImuStatus::_accel_device_id_type arg)
  {
    msg_.accel_device_id = std::move(arg);
    return Init_VehicleImuStatus_gyro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

class Init_VehicleImuStatus_timestamp
{
public:
  Init_VehicleImuStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleImuStatus_accel_device_id timestamp(::px4_msgs::msg::VehicleImuStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleImuStatus_accel_device_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImuStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleImuStatus>()
{
  return px4_msgs::msg::builder::Init_VehicleImuStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__BUILDER_HPP_
