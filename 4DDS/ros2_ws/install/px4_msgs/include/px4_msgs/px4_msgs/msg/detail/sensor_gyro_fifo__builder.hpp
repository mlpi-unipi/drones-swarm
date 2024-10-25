// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorGyroFifo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FIFO__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FIFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_gyro_fifo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorGyroFifo_z
{
public:
  explicit Init_SensorGyroFifo_z(::px4_msgs::msg::SensorGyroFifo & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorGyroFifo z(::px4_msgs::msg::SensorGyroFifo::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFifo msg_;
};

class Init_SensorGyroFifo_y
{
public:
  explicit Init_SensorGyroFifo_y(::px4_msgs::msg::SensorGyroFifo & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFifo_z y(::px4_msgs::msg::SensorGyroFifo::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SensorGyroFifo_z(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFifo msg_;
};

class Init_SensorGyroFifo_x
{
public:
  explicit Init_SensorGyroFifo_x(::px4_msgs::msg::SensorGyroFifo & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFifo_y x(::px4_msgs::msg::SensorGyroFifo::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SensorGyroFifo_y(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFifo msg_;
};

class Init_SensorGyroFifo_samples
{
public:
  explicit Init_SensorGyroFifo_samples(::px4_msgs::msg::SensorGyroFifo & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFifo_x samples(::px4_msgs::msg::SensorGyroFifo::_samples_type arg)
  {
    msg_.samples = std::move(arg);
    return Init_SensorGyroFifo_x(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFifo msg_;
};

class Init_SensorGyroFifo_scale
{
public:
  explicit Init_SensorGyroFifo_scale(::px4_msgs::msg::SensorGyroFifo & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFifo_samples scale(::px4_msgs::msg::SensorGyroFifo::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_SensorGyroFifo_samples(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFifo msg_;
};

class Init_SensorGyroFifo_dt
{
public:
  explicit Init_SensorGyroFifo_dt(::px4_msgs::msg::SensorGyroFifo & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFifo_scale dt(::px4_msgs::msg::SensorGyroFifo::_dt_type arg)
  {
    msg_.dt = std::move(arg);
    return Init_SensorGyroFifo_scale(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFifo msg_;
};

class Init_SensorGyroFifo_device_id
{
public:
  explicit Init_SensorGyroFifo_device_id(::px4_msgs::msg::SensorGyroFifo & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFifo_dt device_id(::px4_msgs::msg::SensorGyroFifo::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SensorGyroFifo_dt(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFifo msg_;
};

class Init_SensorGyroFifo_timestamp_sample
{
public:
  explicit Init_SensorGyroFifo_timestamp_sample(::px4_msgs::msg::SensorGyroFifo & msg)
  : msg_(msg)
  {}
  Init_SensorGyroFifo_device_id timestamp_sample(::px4_msgs::msg::SensorGyroFifo::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_SensorGyroFifo_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFifo msg_;
};

class Init_SensorGyroFifo_timestamp
{
public:
  Init_SensorGyroFifo_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorGyroFifo_timestamp_sample timestamp(::px4_msgs::msg::SensorGyroFifo::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorGyroFifo_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::SensorGyroFifo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorGyroFifo>()
{
  return px4_msgs::msg::builder::Init_SensorGyroFifo_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FIFO__BUILDER_HPP_
