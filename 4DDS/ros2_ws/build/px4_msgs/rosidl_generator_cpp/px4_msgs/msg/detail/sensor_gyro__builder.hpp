// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorGyro.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GYRO__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GYRO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_gyro__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorGyro_samples
{
public:
  explicit Init_SensorGyro_samples(::px4_msgs::msg::SensorGyro & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorGyro samples(::px4_msgs::msg::SensorGyro::_samples_type arg)
  {
    msg_.samples = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyro msg_;
};

class Init_SensorGyro_clip_counter
{
public:
  explicit Init_SensorGyro_clip_counter(::px4_msgs::msg::SensorGyro & msg)
  : msg_(msg)
  {}
  Init_SensorGyro_samples clip_counter(::px4_msgs::msg::SensorGyro::_clip_counter_type arg)
  {
    msg_.clip_counter = std::move(arg);
    return Init_SensorGyro_samples(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyro msg_;
};

class Init_SensorGyro_error_count
{
public:
  explicit Init_SensorGyro_error_count(::px4_msgs::msg::SensorGyro & msg)
  : msg_(msg)
  {}
  Init_SensorGyro_clip_counter error_count(::px4_msgs::msg::SensorGyro::_error_count_type arg)
  {
    msg_.error_count = std::move(arg);
    return Init_SensorGyro_clip_counter(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyro msg_;
};

class Init_SensorGyro_temperature
{
public:
  explicit Init_SensorGyro_temperature(::px4_msgs::msg::SensorGyro & msg)
  : msg_(msg)
  {}
  Init_SensorGyro_error_count temperature(::px4_msgs::msg::SensorGyro::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_SensorGyro_error_count(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyro msg_;
};

class Init_SensorGyro_z
{
public:
  explicit Init_SensorGyro_z(::px4_msgs::msg::SensorGyro & msg)
  : msg_(msg)
  {}
  Init_SensorGyro_temperature z(::px4_msgs::msg::SensorGyro::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SensorGyro_temperature(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyro msg_;
};

class Init_SensorGyro_y
{
public:
  explicit Init_SensorGyro_y(::px4_msgs::msg::SensorGyro & msg)
  : msg_(msg)
  {}
  Init_SensorGyro_z y(::px4_msgs::msg::SensorGyro::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SensorGyro_z(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyro msg_;
};

class Init_SensorGyro_x
{
public:
  explicit Init_SensorGyro_x(::px4_msgs::msg::SensorGyro & msg)
  : msg_(msg)
  {}
  Init_SensorGyro_y x(::px4_msgs::msg::SensorGyro::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SensorGyro_y(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyro msg_;
};

class Init_SensorGyro_device_id
{
public:
  explicit Init_SensorGyro_device_id(::px4_msgs::msg::SensorGyro & msg)
  : msg_(msg)
  {}
  Init_SensorGyro_x device_id(::px4_msgs::msg::SensorGyro::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SensorGyro_x(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyro msg_;
};

class Init_SensorGyro_timestamp_sample
{
public:
  explicit Init_SensorGyro_timestamp_sample(::px4_msgs::msg::SensorGyro & msg)
  : msg_(msg)
  {}
  Init_SensorGyro_device_id timestamp_sample(::px4_msgs::msg::SensorGyro::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_SensorGyro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyro msg_;
};

class Init_SensorGyro_timestamp
{
public:
  Init_SensorGyro_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorGyro_timestamp_sample timestamp(::px4_msgs::msg::SensorGyro::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorGyro_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyro msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorGyro>()
{
  return px4_msgs::msg::builder::Init_SensorGyro_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GYRO__BUILDER_HPP_
