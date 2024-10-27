// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_correction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorCorrection_baro_offset_3
{
public:
  explicit Init_SensorCorrection_baro_offset_3(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorCorrection baro_offset_3(::px4_msgs::msg::SensorCorrection::_baro_offset_3_type arg)
  {
    msg_.baro_offset_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_baro_offset_2
{
public:
  explicit Init_SensorCorrection_baro_offset_2(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_baro_offset_3 baro_offset_2(::px4_msgs::msg::SensorCorrection::_baro_offset_2_type arg)
  {
    msg_.baro_offset_2 = std::move(arg);
    return Init_SensorCorrection_baro_offset_3(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_baro_offset_1
{
public:
  explicit Init_SensorCorrection_baro_offset_1(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_baro_offset_2 baro_offset_1(::px4_msgs::msg::SensorCorrection::_baro_offset_1_type arg)
  {
    msg_.baro_offset_1 = std::move(arg);
    return Init_SensorCorrection_baro_offset_2(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_baro_offset_0
{
public:
  explicit Init_SensorCorrection_baro_offset_0(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_baro_offset_1 baro_offset_0(::px4_msgs::msg::SensorCorrection::_baro_offset_0_type arg)
  {
    msg_.baro_offset_0 = std::move(arg);
    return Init_SensorCorrection_baro_offset_1(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_baro_temperature
{
public:
  explicit Init_SensorCorrection_baro_temperature(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_baro_offset_0 baro_temperature(::px4_msgs::msg::SensorCorrection::_baro_temperature_type arg)
  {
    msg_.baro_temperature = std::move(arg);
    return Init_SensorCorrection_baro_offset_0(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_baro_device_ids
{
public:
  explicit Init_SensorCorrection_baro_device_ids(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_baro_temperature baro_device_ids(::px4_msgs::msg::SensorCorrection::_baro_device_ids_type arg)
  {
    msg_.baro_device_ids = std::move(arg);
    return Init_SensorCorrection_baro_temperature(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_mag_offset_3
{
public:
  explicit Init_SensorCorrection_mag_offset_3(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_baro_device_ids mag_offset_3(::px4_msgs::msg::SensorCorrection::_mag_offset_3_type arg)
  {
    msg_.mag_offset_3 = std::move(arg);
    return Init_SensorCorrection_baro_device_ids(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_mag_offset_2
{
public:
  explicit Init_SensorCorrection_mag_offset_2(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_mag_offset_3 mag_offset_2(::px4_msgs::msg::SensorCorrection::_mag_offset_2_type arg)
  {
    msg_.mag_offset_2 = std::move(arg);
    return Init_SensorCorrection_mag_offset_3(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_mag_offset_1
{
public:
  explicit Init_SensorCorrection_mag_offset_1(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_mag_offset_2 mag_offset_1(::px4_msgs::msg::SensorCorrection::_mag_offset_1_type arg)
  {
    msg_.mag_offset_1 = std::move(arg);
    return Init_SensorCorrection_mag_offset_2(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_mag_offset_0
{
public:
  explicit Init_SensorCorrection_mag_offset_0(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_mag_offset_1 mag_offset_0(::px4_msgs::msg::SensorCorrection::_mag_offset_0_type arg)
  {
    msg_.mag_offset_0 = std::move(arg);
    return Init_SensorCorrection_mag_offset_1(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_mag_temperature
{
public:
  explicit Init_SensorCorrection_mag_temperature(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_mag_offset_0 mag_temperature(::px4_msgs::msg::SensorCorrection::_mag_temperature_type arg)
  {
    msg_.mag_temperature = std::move(arg);
    return Init_SensorCorrection_mag_offset_0(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_mag_device_ids
{
public:
  explicit Init_SensorCorrection_mag_device_ids(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_mag_temperature mag_device_ids(::px4_msgs::msg::SensorCorrection::_mag_device_ids_type arg)
  {
    msg_.mag_device_ids = std::move(arg);
    return Init_SensorCorrection_mag_temperature(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_gyro_offset_3
{
public:
  explicit Init_SensorCorrection_gyro_offset_3(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_mag_device_ids gyro_offset_3(::px4_msgs::msg::SensorCorrection::_gyro_offset_3_type arg)
  {
    msg_.gyro_offset_3 = std::move(arg);
    return Init_SensorCorrection_mag_device_ids(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_gyro_offset_2
{
public:
  explicit Init_SensorCorrection_gyro_offset_2(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_gyro_offset_3 gyro_offset_2(::px4_msgs::msg::SensorCorrection::_gyro_offset_2_type arg)
  {
    msg_.gyro_offset_2 = std::move(arg);
    return Init_SensorCorrection_gyro_offset_3(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_gyro_offset_1
{
public:
  explicit Init_SensorCorrection_gyro_offset_1(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_gyro_offset_2 gyro_offset_1(::px4_msgs::msg::SensorCorrection::_gyro_offset_1_type arg)
  {
    msg_.gyro_offset_1 = std::move(arg);
    return Init_SensorCorrection_gyro_offset_2(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_gyro_offset_0
{
public:
  explicit Init_SensorCorrection_gyro_offset_0(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_gyro_offset_1 gyro_offset_0(::px4_msgs::msg::SensorCorrection::_gyro_offset_0_type arg)
  {
    msg_.gyro_offset_0 = std::move(arg);
    return Init_SensorCorrection_gyro_offset_1(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_gyro_temperature
{
public:
  explicit Init_SensorCorrection_gyro_temperature(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_gyro_offset_0 gyro_temperature(::px4_msgs::msg::SensorCorrection::_gyro_temperature_type arg)
  {
    msg_.gyro_temperature = std::move(arg);
    return Init_SensorCorrection_gyro_offset_0(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_gyro_device_ids
{
public:
  explicit Init_SensorCorrection_gyro_device_ids(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_gyro_temperature gyro_device_ids(::px4_msgs::msg::SensorCorrection::_gyro_device_ids_type arg)
  {
    msg_.gyro_device_ids = std::move(arg);
    return Init_SensorCorrection_gyro_temperature(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_accel_offset_3
{
public:
  explicit Init_SensorCorrection_accel_offset_3(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_gyro_device_ids accel_offset_3(::px4_msgs::msg::SensorCorrection::_accel_offset_3_type arg)
  {
    msg_.accel_offset_3 = std::move(arg);
    return Init_SensorCorrection_gyro_device_ids(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_accel_offset_2
{
public:
  explicit Init_SensorCorrection_accel_offset_2(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_accel_offset_3 accel_offset_2(::px4_msgs::msg::SensorCorrection::_accel_offset_2_type arg)
  {
    msg_.accel_offset_2 = std::move(arg);
    return Init_SensorCorrection_accel_offset_3(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_accel_offset_1
{
public:
  explicit Init_SensorCorrection_accel_offset_1(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_accel_offset_2 accel_offset_1(::px4_msgs::msg::SensorCorrection::_accel_offset_1_type arg)
  {
    msg_.accel_offset_1 = std::move(arg);
    return Init_SensorCorrection_accel_offset_2(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_accel_offset_0
{
public:
  explicit Init_SensorCorrection_accel_offset_0(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_accel_offset_1 accel_offset_0(::px4_msgs::msg::SensorCorrection::_accel_offset_0_type arg)
  {
    msg_.accel_offset_0 = std::move(arg);
    return Init_SensorCorrection_accel_offset_1(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_accel_temperature
{
public:
  explicit Init_SensorCorrection_accel_temperature(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_accel_offset_0 accel_temperature(::px4_msgs::msg::SensorCorrection::_accel_temperature_type arg)
  {
    msg_.accel_temperature = std::move(arg);
    return Init_SensorCorrection_accel_offset_0(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_accel_device_ids
{
public:
  explicit Init_SensorCorrection_accel_device_ids(::px4_msgs::msg::SensorCorrection & msg)
  : msg_(msg)
  {}
  Init_SensorCorrection_accel_temperature accel_device_ids(::px4_msgs::msg::SensorCorrection::_accel_device_ids_type arg)
  {
    msg_.accel_device_ids = std::move(arg);
    return Init_SensorCorrection_accel_temperature(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

class Init_SensorCorrection_timestamp
{
public:
  Init_SensorCorrection_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorCorrection_accel_device_ids timestamp(::px4_msgs::msg::SensorCorrection::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorCorrection_accel_device_ids(msg_);
  }

private:
  ::px4_msgs::msg::SensorCorrection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorCorrection>()
{
  return px4_msgs::msg::builder::Init_SensorCorrection_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__BUILDER_HPP_
