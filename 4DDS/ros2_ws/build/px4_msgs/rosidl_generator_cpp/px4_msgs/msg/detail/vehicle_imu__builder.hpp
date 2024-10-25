// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleImu.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleImu_gyro_calibration_count
{
public:
  explicit Init_VehicleImu_gyro_calibration_count(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleImu gyro_calibration_count(::px4_msgs::msg::VehicleImu::_gyro_calibration_count_type arg)
  {
    msg_.gyro_calibration_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_accel_calibration_count
{
public:
  explicit Init_VehicleImu_accel_calibration_count(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  Init_VehicleImu_gyro_calibration_count accel_calibration_count(::px4_msgs::msg::VehicleImu::_accel_calibration_count_type arg)
  {
    msg_.accel_calibration_count = std::move(arg);
    return Init_VehicleImu_gyro_calibration_count(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_delta_velocity_clipping
{
public:
  explicit Init_VehicleImu_delta_velocity_clipping(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  Init_VehicleImu_accel_calibration_count delta_velocity_clipping(::px4_msgs::msg::VehicleImu::_delta_velocity_clipping_type arg)
  {
    msg_.delta_velocity_clipping = std::move(arg);
    return Init_VehicleImu_accel_calibration_count(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_delta_angle_clipping
{
public:
  explicit Init_VehicleImu_delta_angle_clipping(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  Init_VehicleImu_delta_velocity_clipping delta_angle_clipping(::px4_msgs::msg::VehicleImu::_delta_angle_clipping_type arg)
  {
    msg_.delta_angle_clipping = std::move(arg);
    return Init_VehicleImu_delta_velocity_clipping(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_delta_velocity_dt
{
public:
  explicit Init_VehicleImu_delta_velocity_dt(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  Init_VehicleImu_delta_angle_clipping delta_velocity_dt(::px4_msgs::msg::VehicleImu::_delta_velocity_dt_type arg)
  {
    msg_.delta_velocity_dt = std::move(arg);
    return Init_VehicleImu_delta_angle_clipping(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_delta_angle_dt
{
public:
  explicit Init_VehicleImu_delta_angle_dt(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  Init_VehicleImu_delta_velocity_dt delta_angle_dt(::px4_msgs::msg::VehicleImu::_delta_angle_dt_type arg)
  {
    msg_.delta_angle_dt = std::move(arg);
    return Init_VehicleImu_delta_velocity_dt(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_delta_velocity
{
public:
  explicit Init_VehicleImu_delta_velocity(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  Init_VehicleImu_delta_angle_dt delta_velocity(::px4_msgs::msg::VehicleImu::_delta_velocity_type arg)
  {
    msg_.delta_velocity = std::move(arg);
    return Init_VehicleImu_delta_angle_dt(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_delta_angle
{
public:
  explicit Init_VehicleImu_delta_angle(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  Init_VehicleImu_delta_velocity delta_angle(::px4_msgs::msg::VehicleImu::_delta_angle_type arg)
  {
    msg_.delta_angle = std::move(arg);
    return Init_VehicleImu_delta_velocity(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_gyro_device_id
{
public:
  explicit Init_VehicleImu_gyro_device_id(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  Init_VehicleImu_delta_angle gyro_device_id(::px4_msgs::msg::VehicleImu::_gyro_device_id_type arg)
  {
    msg_.gyro_device_id = std::move(arg);
    return Init_VehicleImu_delta_angle(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_accel_device_id
{
public:
  explicit Init_VehicleImu_accel_device_id(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  Init_VehicleImu_gyro_device_id accel_device_id(::px4_msgs::msg::VehicleImu::_accel_device_id_type arg)
  {
    msg_.accel_device_id = std::move(arg);
    return Init_VehicleImu_gyro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_timestamp_sample
{
public:
  explicit Init_VehicleImu_timestamp_sample(::px4_msgs::msg::VehicleImu & msg)
  : msg_(msg)
  {}
  Init_VehicleImu_accel_device_id timestamp_sample(::px4_msgs::msg::VehicleImu::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleImu_accel_device_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

class Init_VehicleImu_timestamp
{
public:
  Init_VehicleImu_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleImu_timestamp_sample timestamp(::px4_msgs::msg::VehicleImu::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleImu_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleImu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleImu>()
{
  return px4_msgs::msg::builder::Init_VehicleImu_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__BUILDER_HPP_
