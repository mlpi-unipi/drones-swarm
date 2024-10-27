// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorMag.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_MAG__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_MAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_mag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorMag_error_count
{
public:
  explicit Init_SensorMag_error_count(::px4_msgs::msg::SensorMag & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorMag error_count(::px4_msgs::msg::SensorMag::_error_count_type arg)
  {
    msg_.error_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorMag msg_;
};

class Init_SensorMag_temperature
{
public:
  explicit Init_SensorMag_temperature(::px4_msgs::msg::SensorMag & msg)
  : msg_(msg)
  {}
  Init_SensorMag_error_count temperature(::px4_msgs::msg::SensorMag::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_SensorMag_error_count(msg_);
  }

private:
  ::px4_msgs::msg::SensorMag msg_;
};

class Init_SensorMag_z
{
public:
  explicit Init_SensorMag_z(::px4_msgs::msg::SensorMag & msg)
  : msg_(msg)
  {}
  Init_SensorMag_temperature z(::px4_msgs::msg::SensorMag::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_SensorMag_temperature(msg_);
  }

private:
  ::px4_msgs::msg::SensorMag msg_;
};

class Init_SensorMag_y
{
public:
  explicit Init_SensorMag_y(::px4_msgs::msg::SensorMag & msg)
  : msg_(msg)
  {}
  Init_SensorMag_z y(::px4_msgs::msg::SensorMag::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SensorMag_z(msg_);
  }

private:
  ::px4_msgs::msg::SensorMag msg_;
};

class Init_SensorMag_x
{
public:
  explicit Init_SensorMag_x(::px4_msgs::msg::SensorMag & msg)
  : msg_(msg)
  {}
  Init_SensorMag_y x(::px4_msgs::msg::SensorMag::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SensorMag_y(msg_);
  }

private:
  ::px4_msgs::msg::SensorMag msg_;
};

class Init_SensorMag_device_id
{
public:
  explicit Init_SensorMag_device_id(::px4_msgs::msg::SensorMag & msg)
  : msg_(msg)
  {}
  Init_SensorMag_x device_id(::px4_msgs::msg::SensorMag::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SensorMag_x(msg_);
  }

private:
  ::px4_msgs::msg::SensorMag msg_;
};

class Init_SensorMag_timestamp_sample
{
public:
  explicit Init_SensorMag_timestamp_sample(::px4_msgs::msg::SensorMag & msg)
  : msg_(msg)
  {}
  Init_SensorMag_device_id timestamp_sample(::px4_msgs::msg::SensorMag::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_SensorMag_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorMag msg_;
};

class Init_SensorMag_timestamp
{
public:
  Init_SensorMag_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorMag_timestamp_sample timestamp(::px4_msgs::msg::SensorMag::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorMag_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::SensorMag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorMag>()
{
  return px4_msgs::msg::builder::Init_SensorMag_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_MAG__BUILDER_HPP_
