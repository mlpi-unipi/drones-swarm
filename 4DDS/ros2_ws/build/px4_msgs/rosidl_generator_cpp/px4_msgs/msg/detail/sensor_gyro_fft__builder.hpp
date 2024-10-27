// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorGyroFft.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_gyro_fft__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorGyroFft_peak_snr_z
{
public:
  explicit Init_SensorGyroFft_peak_snr_z(::px4_msgs::msg::SensorGyroFft & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorGyroFft peak_snr_z(::px4_msgs::msg::SensorGyroFft::_peak_snr_z_type arg)
  {
    msg_.peak_snr_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

class Init_SensorGyroFft_peak_snr_y
{
public:
  explicit Init_SensorGyroFft_peak_snr_y(::px4_msgs::msg::SensorGyroFft & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFft_peak_snr_z peak_snr_y(::px4_msgs::msg::SensorGyroFft::_peak_snr_y_type arg)
  {
    msg_.peak_snr_y = std::move(arg);
    return Init_SensorGyroFft_peak_snr_z(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

class Init_SensorGyroFft_peak_snr_x
{
public:
  explicit Init_SensorGyroFft_peak_snr_x(::px4_msgs::msg::SensorGyroFft & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFft_peak_snr_y peak_snr_x(::px4_msgs::msg::SensorGyroFft::_peak_snr_x_type arg)
  {
    msg_.peak_snr_x = std::move(arg);
    return Init_SensorGyroFft_peak_snr_y(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

class Init_SensorGyroFft_peak_frequencies_z
{
public:
  explicit Init_SensorGyroFft_peak_frequencies_z(::px4_msgs::msg::SensorGyroFft & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFft_peak_snr_x peak_frequencies_z(::px4_msgs::msg::SensorGyroFft::_peak_frequencies_z_type arg)
  {
    msg_.peak_frequencies_z = std::move(arg);
    return Init_SensorGyroFft_peak_snr_x(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

class Init_SensorGyroFft_peak_frequencies_y
{
public:
  explicit Init_SensorGyroFft_peak_frequencies_y(::px4_msgs::msg::SensorGyroFft & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFft_peak_frequencies_z peak_frequencies_y(::px4_msgs::msg::SensorGyroFft::_peak_frequencies_y_type arg)
  {
    msg_.peak_frequencies_y = std::move(arg);
    return Init_SensorGyroFft_peak_frequencies_z(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

class Init_SensorGyroFft_peak_frequencies_x
{
public:
  explicit Init_SensorGyroFft_peak_frequencies_x(::px4_msgs::msg::SensorGyroFft & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFft_peak_frequencies_y peak_frequencies_x(::px4_msgs::msg::SensorGyroFft::_peak_frequencies_x_type arg)
  {
    msg_.peak_frequencies_x = std::move(arg);
    return Init_SensorGyroFft_peak_frequencies_y(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

class Init_SensorGyroFft_resolution_hz
{
public:
  explicit Init_SensorGyroFft_resolution_hz(::px4_msgs::msg::SensorGyroFft & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFft_peak_frequencies_x resolution_hz(::px4_msgs::msg::SensorGyroFft::_resolution_hz_type arg)
  {
    msg_.resolution_hz = std::move(arg);
    return Init_SensorGyroFft_peak_frequencies_x(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

class Init_SensorGyroFft_sensor_sample_rate_hz
{
public:
  explicit Init_SensorGyroFft_sensor_sample_rate_hz(::px4_msgs::msg::SensorGyroFft & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFft_resolution_hz sensor_sample_rate_hz(::px4_msgs::msg::SensorGyroFft::_sensor_sample_rate_hz_type arg)
  {
    msg_.sensor_sample_rate_hz = std::move(arg);
    return Init_SensorGyroFft_resolution_hz(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

class Init_SensorGyroFft_device_id
{
public:
  explicit Init_SensorGyroFft_device_id(::px4_msgs::msg::SensorGyroFft & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFft_sensor_sample_rate_hz device_id(::px4_msgs::msg::SensorGyroFft::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SensorGyroFft_sensor_sample_rate_hz(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

class Init_SensorGyroFft_timestamp_sample
{
public:
  explicit Init_SensorGyroFft_timestamp_sample(::px4_msgs::msg::SensorGyroFft & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFft_device_id timestamp_sample(::px4_msgs::msg::SensorGyroFft::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_SensorGyroFft_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

class Init_SensorGyroFft_timestamp
{
public:
  Init_SensorGyroFft_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorGyroFft_timestamp_sample timestamp(::px4_msgs::msg::SensorGyroFft::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorGyroFft_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFft msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorGyroFft>()
{
  return px4_msgs::msg::builder::Init_SensorGyroFft_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__BUILDER_HPP_
