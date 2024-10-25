// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorBaro.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_BARO__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_BARO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_baro__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorBaro_error_count
{
public:
  explicit Init_SensorBaro_error_count(::px4_msgs::msg::SensorBaro & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorBaro error_count(::px4_msgs::msg::SensorBaro::_error_count_type arg)
  {
    msg_.error_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorBaro msg_;
};

class Init_SensorBaro_temperature
{
public:
  explicit Init_SensorBaro_temperature(::px4_msgs::msg::SensorBaro & msg)
  : msg_(msg)
  {}
  Init_SensorBaro_error_count temperature(::px4_msgs::msg::SensorBaro::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_SensorBaro_error_count(msg_);
  }

private:
  ::px4_msgs::msg::SensorBaro msg_;
};

class Init_SensorBaro_pressure
{
public:
  explicit Init_SensorBaro_pressure(::px4_msgs::msg::SensorBaro & msg)
  : msg_(msg)
  {}
  Init_SensorBaro_temperature pressure(::px4_msgs::msg::SensorBaro::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_SensorBaro_temperature(msg_);
  }

private:
  ::px4_msgs::msg::SensorBaro msg_;
};

class Init_SensorBaro_device_id
{
public:
  explicit Init_SensorBaro_device_id(::px4_msgs::msg::SensorBaro & msg)
  : msg_(msg)
  {}
  Init_SensorBaro_pressure device_id(::px4_msgs::msg::SensorBaro::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SensorBaro_pressure(msg_);
  }

private:
  ::px4_msgs::msg::SensorBaro msg_;
};

class Init_SensorBaro_timestamp_sample
{
public:
  explicit Init_SensorBaro_timestamp_sample(::px4_msgs::msg::SensorBaro & msg)
  : msg_(msg)
  {}
  Init_SensorBaro_device_id timestamp_sample(::px4_msgs::msg::SensorBaro::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_SensorBaro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorBaro msg_;
};

class Init_SensorBaro_timestamp
{
public:
  Init_SensorBaro_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorBaro_timestamp_sample timestamp(::px4_msgs::msg::SensorBaro::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorBaro_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::SensorBaro msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorBaro>()
{
  return px4_msgs::msg::builder::Init_SensorBaro_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_BARO__BUILDER_HPP_
