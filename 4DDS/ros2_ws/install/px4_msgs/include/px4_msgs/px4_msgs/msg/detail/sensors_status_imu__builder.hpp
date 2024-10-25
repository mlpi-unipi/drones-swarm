// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorsStatusImu.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensors_status_imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorsStatusImu_gyro_priority
{
public:
  explicit Init_SensorsStatusImu_gyro_priority(::px4_msgs::msg::SensorsStatusImu & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorsStatusImu gyro_priority(::px4_msgs::msg::SensorsStatusImu::_gyro_priority_type arg)
  {
    msg_.gyro_priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

class Init_SensorsStatusImu_gyro_healthy
{
public:
  explicit Init_SensorsStatusImu_gyro_healthy(::px4_msgs::msg::SensorsStatusImu & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusImu_gyro_priority gyro_healthy(::px4_msgs::msg::SensorsStatusImu::_gyro_healthy_type arg)
  {
    msg_.gyro_healthy = std::move(arg);
    return Init_SensorsStatusImu_gyro_priority(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

class Init_SensorsStatusImu_gyro_inconsistency_rad_s
{
public:
  explicit Init_SensorsStatusImu_gyro_inconsistency_rad_s(::px4_msgs::msg::SensorsStatusImu & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusImu_gyro_healthy gyro_inconsistency_rad_s(::px4_msgs::msg::SensorsStatusImu::_gyro_inconsistency_rad_s_type arg)
  {
    msg_.gyro_inconsistency_rad_s = std::move(arg);
    return Init_SensorsStatusImu_gyro_healthy(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

class Init_SensorsStatusImu_gyro_device_ids
{
public:
  explicit Init_SensorsStatusImu_gyro_device_ids(::px4_msgs::msg::SensorsStatusImu & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusImu_gyro_inconsistency_rad_s gyro_device_ids(::px4_msgs::msg::SensorsStatusImu::_gyro_device_ids_type arg)
  {
    msg_.gyro_device_ids = std::move(arg);
    return Init_SensorsStatusImu_gyro_inconsistency_rad_s(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

class Init_SensorsStatusImu_gyro_device_id_primary
{
public:
  explicit Init_SensorsStatusImu_gyro_device_id_primary(::px4_msgs::msg::SensorsStatusImu & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusImu_gyro_device_ids gyro_device_id_primary(::px4_msgs::msg::SensorsStatusImu::_gyro_device_id_primary_type arg)
  {
    msg_.gyro_device_id_primary = std::move(arg);
    return Init_SensorsStatusImu_gyro_device_ids(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

class Init_SensorsStatusImu_accel_priority
{
public:
  explicit Init_SensorsStatusImu_accel_priority(::px4_msgs::msg::SensorsStatusImu & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusImu_gyro_device_id_primary accel_priority(::px4_msgs::msg::SensorsStatusImu::_accel_priority_type arg)
  {
    msg_.accel_priority = std::move(arg);
    return Init_SensorsStatusImu_gyro_device_id_primary(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

class Init_SensorsStatusImu_accel_healthy
{
public:
  explicit Init_SensorsStatusImu_accel_healthy(::px4_msgs::msg::SensorsStatusImu & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusImu_accel_priority accel_healthy(::px4_msgs::msg::SensorsStatusImu::_accel_healthy_type arg)
  {
    msg_.accel_healthy = std::move(arg);
    return Init_SensorsStatusImu_accel_priority(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

class Init_SensorsStatusImu_accel_inconsistency_m_s_s
{
public:
  explicit Init_SensorsStatusImu_accel_inconsistency_m_s_s(::px4_msgs::msg::SensorsStatusImu & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusImu_accel_healthy accel_inconsistency_m_s_s(::px4_msgs::msg::SensorsStatusImu::_accel_inconsistency_m_s_s_type arg)
  {
    msg_.accel_inconsistency_m_s_s = std::move(arg);
    return Init_SensorsStatusImu_accel_healthy(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

class Init_SensorsStatusImu_accel_device_ids
{
public:
  explicit Init_SensorsStatusImu_accel_device_ids(::px4_msgs::msg::SensorsStatusImu & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusImu_accel_inconsistency_m_s_s accel_device_ids(::px4_msgs::msg::SensorsStatusImu::_accel_device_ids_type arg)
  {
    msg_.accel_device_ids = std::move(arg);
    return Init_SensorsStatusImu_accel_inconsistency_m_s_s(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

class Init_SensorsStatusImu_accel_device_id_primary
{
public:
  explicit Init_SensorsStatusImu_accel_device_id_primary(::px4_msgs::msg::SensorsStatusImu & msg)
  : msg_(msg)
  {}
  Init_SensorsStatusImu_accel_device_ids accel_device_id_primary(::px4_msgs::msg::SensorsStatusImu::_accel_device_id_primary_type arg)
  {
    msg_.accel_device_id_primary = std::move(arg);
    return Init_SensorsStatusImu_accel_device_ids(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

class Init_SensorsStatusImu_timestamp
{
public:
  Init_SensorsStatusImu_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorsStatusImu_accel_device_id_primary timestamp(::px4_msgs::msg::SensorsStatusImu::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorsStatusImu_accel_device_id_primary(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatusImu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorsStatusImu>()
{
  return px4_msgs::msg::builder::Init_SensorsStatusImu_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__BUILDER_HPP_
