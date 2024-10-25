// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorCombined.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_combined__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorCombined_gyro_calibration_count
{
public:
  explicit Init_SensorCombined_gyro_calibration_count(::px4_msgs::msg::SensorCombined & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorCombined gyro_calibration_count(::px4_msgs::msg::SensorCombined::_gyro_calibration_count_type arg)
  {
    msg_.gyro_calibration_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorCombined msg_;
};

class Init_SensorCombined_accel_calibration_count
{
public:
  explicit Init_SensorCombined_accel_calibration_count(::px4_msgs::msg::SensorCombined & msg)
  : msg_(msg)
  {}
  Init_SensorCombined_gyro_calibration_count accel_calibration_count(::px4_msgs::msg::SensorCombined::_accel_calibration_count_type arg)
  {
    msg_.accel_calibration_count = std::move(arg);
    return Init_SensorCombined_gyro_calibration_count(msg_);
  }

private:
  ::px4_msgs::msg::SensorCombined msg_;
};

class Init_SensorCombined_gyro_clipping
{
public:
  explicit Init_SensorCombined_gyro_clipping(::px4_msgs::msg::SensorCombined & msg)
  : msg_(msg)
  {}
  Init_SensorCombined_accel_calibration_count gyro_clipping(::px4_msgs::msg::SensorCombined::_gyro_clipping_type arg)
  {
    msg_.gyro_clipping = std::move(arg);
    return Init_SensorCombined_accel_calibration_count(msg_);
  }

private:
  ::px4_msgs::msg::SensorCombined msg_;
};

class Init_SensorCombined_accelerometer_clipping
{
public:
  explicit Init_SensorCombined_accelerometer_clipping(::px4_msgs::msg::SensorCombined & msg)
  : msg_(msg)
  {}
  Init_SensorCombined_gyro_clipping accelerometer_clipping(::px4_msgs::msg::SensorCombined::_accelerometer_clipping_type arg)
  {
    msg_.accelerometer_clipping = std::move(arg);
    return Init_SensorCombined_gyro_clipping(msg_);
  }

private:
  ::px4_msgs::msg::SensorCombined msg_;
};

class Init_SensorCombined_accelerometer_integral_dt
{
public:
  explicit Init_SensorCombined_accelerometer_integral_dt(::px4_msgs::msg::SensorCombined & msg)
  : msg_(msg)
  {}
  Init_SensorCombined_accelerometer_clipping accelerometer_integral_dt(::px4_msgs::msg::SensorCombined::_accelerometer_integral_dt_type arg)
  {
    msg_.accelerometer_integral_dt = std::move(arg);
    return Init_SensorCombined_accelerometer_clipping(msg_);
  }

private:
  ::px4_msgs::msg::SensorCombined msg_;
};

class Init_SensorCombined_accelerometer_m_s2
{
public:
  explicit Init_SensorCombined_accelerometer_m_s2(::px4_msgs::msg::SensorCombined & msg)
  : msg_(msg)
  {}
  Init_SensorCombined_accelerometer_integral_dt accelerometer_m_s2(::px4_msgs::msg::SensorCombined::_accelerometer_m_s2_type arg)
  {
    msg_.accelerometer_m_s2 = std::move(arg);
    return Init_SensorCombined_accelerometer_integral_dt(msg_);
  }

private:
  ::px4_msgs::msg::SensorCombined msg_;
};

class Init_SensorCombined_accelerometer_timestamp_relative
{
public:
  explicit Init_SensorCombined_accelerometer_timestamp_relative(::px4_msgs::msg::SensorCombined & msg)
  : msg_(msg)
  {}
  Init_SensorCombined_accelerometer_m_s2 accelerometer_timestamp_relative(::px4_msgs::msg::SensorCombined::_accelerometer_timestamp_relative_type arg)
  {
    msg_.accelerometer_timestamp_relative = std::move(arg);
    return Init_SensorCombined_accelerometer_m_s2(msg_);
  }

private:
  ::px4_msgs::msg::SensorCombined msg_;
};

class Init_SensorCombined_gyro_integral_dt
{
public:
  explicit Init_SensorCombined_gyro_integral_dt(::px4_msgs::msg::SensorCombined & msg)
  : msg_(msg)
  {}
  Init_SensorCombined_accelerometer_timestamp_relative gyro_integral_dt(::px4_msgs::msg::SensorCombined::_gyro_integral_dt_type arg)
  {
    msg_.gyro_integral_dt = std::move(arg);
    return Init_SensorCombined_accelerometer_timestamp_relative(msg_);
  }

private:
  ::px4_msgs::msg::SensorCombined msg_;
};

class Init_SensorCombined_gyro_rad
{
public:
  explicit Init_SensorCombined_gyro_rad(::px4_msgs::msg::SensorCombined & msg)
  : msg_(msg)
  {}
  Init_SensorCombined_gyro_integral_dt gyro_rad(::px4_msgs::msg::SensorCombined::_gyro_rad_type arg)
  {
    msg_.gyro_rad = std::move(arg);
    return Init_SensorCombined_gyro_integral_dt(msg_);
  }

private:
  ::px4_msgs::msg::SensorCombined msg_;
};

class Init_SensorCombined_timestamp
{
public:
  Init_SensorCombined_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorCombined_gyro_rad timestamp(::px4_msgs::msg::SensorCombined::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorCombined_gyro_rad(msg_);
  }

private:
  ::px4_msgs::msg::SensorCombined msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorCombined>()
{
  return px4_msgs::msg::builder::Init_SensorCombined_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__BUILDER_HPP_
