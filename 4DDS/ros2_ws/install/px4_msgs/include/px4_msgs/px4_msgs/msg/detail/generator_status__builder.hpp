// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GeneratorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/generator_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GeneratorStatus_generator_temperature
{
public:
  explicit Init_GeneratorStatus_generator_temperature(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GeneratorStatus generator_temperature(::px4_msgs::msg::GeneratorStatus::_generator_temperature_type arg)
  {
    msg_.generator_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_rectifier_temperature
{
public:
  explicit Init_GeneratorStatus_rectifier_temperature(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  Init_GeneratorStatus_generator_temperature rectifier_temperature(::px4_msgs::msg::GeneratorStatus::_rectifier_temperature_type arg)
  {
    msg_.rectifier_temperature = std::move(arg);
    return Init_GeneratorStatus_generator_temperature(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_generator_speed
{
public:
  explicit Init_GeneratorStatus_generator_speed(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  Init_GeneratorStatus_rectifier_temperature generator_speed(::px4_msgs::msg::GeneratorStatus::_generator_speed_type arg)
  {
    msg_.generator_speed = std::move(arg);
    return Init_GeneratorStatus_rectifier_temperature(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_time_until_maintenance
{
public:
  explicit Init_GeneratorStatus_time_until_maintenance(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  Init_GeneratorStatus_generator_speed time_until_maintenance(::px4_msgs::msg::GeneratorStatus::_time_until_maintenance_type arg)
  {
    msg_.time_until_maintenance = std::move(arg);
    return Init_GeneratorStatus_generator_speed(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_runtime
{
public:
  explicit Init_GeneratorStatus_runtime(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  Init_GeneratorStatus_time_until_maintenance runtime(::px4_msgs::msg::GeneratorStatus::_runtime_type arg)
  {
    msg_.runtime = std::move(arg);
    return Init_GeneratorStatus_time_until_maintenance(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_bat_current_setpoint
{
public:
  explicit Init_GeneratorStatus_bat_current_setpoint(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  Init_GeneratorStatus_runtime bat_current_setpoint(::px4_msgs::msg::GeneratorStatus::_bat_current_setpoint_type arg)
  {
    msg_.bat_current_setpoint = std::move(arg);
    return Init_GeneratorStatus_runtime(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_bus_voltage
{
public:
  explicit Init_GeneratorStatus_bus_voltage(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  Init_GeneratorStatus_bat_current_setpoint bus_voltage(::px4_msgs::msg::GeneratorStatus::_bus_voltage_type arg)
  {
    msg_.bus_voltage = std::move(arg);
    return Init_GeneratorStatus_bat_current_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_power_generated
{
public:
  explicit Init_GeneratorStatus_power_generated(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  Init_GeneratorStatus_bus_voltage power_generated(::px4_msgs::msg::GeneratorStatus::_power_generated_type arg)
  {
    msg_.power_generated = std::move(arg);
    return Init_GeneratorStatus_bus_voltage(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_load_current
{
public:
  explicit Init_GeneratorStatus_load_current(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  Init_GeneratorStatus_power_generated load_current(::px4_msgs::msg::GeneratorStatus::_load_current_type arg)
  {
    msg_.load_current = std::move(arg);
    return Init_GeneratorStatus_power_generated(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_battery_current
{
public:
  explicit Init_GeneratorStatus_battery_current(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  Init_GeneratorStatus_load_current battery_current(::px4_msgs::msg::GeneratorStatus::_battery_current_type arg)
  {
    msg_.battery_current = std::move(arg);
    return Init_GeneratorStatus_load_current(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_status
{
public:
  explicit Init_GeneratorStatus_status(::px4_msgs::msg::GeneratorStatus & msg)
  : msg_(msg)
  {}
  Init_GeneratorStatus_battery_current status(::px4_msgs::msg::GeneratorStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GeneratorStatus_battery_current(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

class Init_GeneratorStatus_timestamp
{
public:
  Init_GeneratorStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeneratorStatus_status timestamp(::px4_msgs::msg::GeneratorStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GeneratorStatus_status(msg_);
  }

private:
  ::px4_msgs::msg::GeneratorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GeneratorStatus>()
{
  return px4_msgs::msg::builder::Init_GeneratorStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__BUILDER_HPP_
