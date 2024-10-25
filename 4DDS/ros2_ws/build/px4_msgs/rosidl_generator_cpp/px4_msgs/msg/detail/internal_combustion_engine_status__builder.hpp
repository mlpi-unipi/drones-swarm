// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/InternalCombustionEngineStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/internal_combustion_engine_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_InternalCombustionEngineStatus_lambda_coefficient
{
public:
  explicit Init_InternalCombustionEngineStatus_lambda_coefficient(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::InternalCombustionEngineStatus lambda_coefficient(::px4_msgs::msg::InternalCombustionEngineStatus::_lambda_coefficient_type arg)
  {
    msg_.lambda_coefficient = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_exhaust_gas_temperature
{
public:
  explicit Init_InternalCombustionEngineStatus_exhaust_gas_temperature(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_lambda_coefficient exhaust_gas_temperature(::px4_msgs::msg::InternalCombustionEngineStatus::_exhaust_gas_temperature_type arg)
  {
    msg_.exhaust_gas_temperature = std::move(arg);
    return Init_InternalCombustionEngineStatus_lambda_coefficient(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_cylinder_head_temperature
{
public:
  explicit Init_InternalCombustionEngineStatus_cylinder_head_temperature(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_exhaust_gas_temperature cylinder_head_temperature(::px4_msgs::msg::InternalCombustionEngineStatus::_cylinder_head_temperature_type arg)
  {
    msg_.cylinder_head_temperature = std::move(arg);
    return Init_InternalCombustionEngineStatus_exhaust_gas_temperature(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_injection_time_ms
{
public:
  explicit Init_InternalCombustionEngineStatus_injection_time_ms(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_cylinder_head_temperature injection_time_ms(::px4_msgs::msg::InternalCombustionEngineStatus::_injection_time_ms_type arg)
  {
    msg_.injection_time_ms = std::move(arg);
    return Init_InternalCombustionEngineStatus_cylinder_head_temperature(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_ignition_timing_deg
{
public:
  explicit Init_InternalCombustionEngineStatus_ignition_timing_deg(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_injection_time_ms ignition_timing_deg(::px4_msgs::msg::InternalCombustionEngineStatus::_ignition_timing_deg_type arg)
  {
    msg_.ignition_timing_deg = std::move(arg);
    return Init_InternalCombustionEngineStatus_injection_time_ms(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_spark_plug_usage
{
public:
  explicit Init_InternalCombustionEngineStatus_spark_plug_usage(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_ignition_timing_deg spark_plug_usage(::px4_msgs::msg::InternalCombustionEngineStatus::_spark_plug_usage_type arg)
  {
    msg_.spark_plug_usage = std::move(arg);
    return Init_InternalCombustionEngineStatus_ignition_timing_deg(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_ecu_index
{
public:
  explicit Init_InternalCombustionEngineStatus_ecu_index(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_spark_plug_usage ecu_index(::px4_msgs::msg::InternalCombustionEngineStatus::_ecu_index_type arg)
  {
    msg_.ecu_index = std::move(arg);
    return Init_InternalCombustionEngineStatus_spark_plug_usage(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_throttle_position_percent
{
public:
  explicit Init_InternalCombustionEngineStatus_throttle_position_percent(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_ecu_index throttle_position_percent(::px4_msgs::msg::InternalCombustionEngineStatus::_throttle_position_percent_type arg)
  {
    msg_.throttle_position_percent = std::move(arg);
    return Init_InternalCombustionEngineStatus_ecu_index(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_estimated_consumed_fuel_volume_cm3
{
public:
  explicit Init_InternalCombustionEngineStatus_estimated_consumed_fuel_volume_cm3(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_throttle_position_percent estimated_consumed_fuel_volume_cm3(::px4_msgs::msg::InternalCombustionEngineStatus::_estimated_consumed_fuel_volume_cm3_type arg)
  {
    msg_.estimated_consumed_fuel_volume_cm3 = std::move(arg);
    return Init_InternalCombustionEngineStatus_throttle_position_percent(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_fuel_consumption_rate_cm3pm
{
public:
  explicit Init_InternalCombustionEngineStatus_fuel_consumption_rate_cm3pm(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_estimated_consumed_fuel_volume_cm3 fuel_consumption_rate_cm3pm(::px4_msgs::msg::InternalCombustionEngineStatus::_fuel_consumption_rate_cm3pm_type arg)
  {
    msg_.fuel_consumption_rate_cm3pm = std::move(arg);
    return Init_InternalCombustionEngineStatus_estimated_consumed_fuel_volume_cm3(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_fuel_pressure
{
public:
  explicit Init_InternalCombustionEngineStatus_fuel_pressure(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_fuel_consumption_rate_cm3pm fuel_pressure(::px4_msgs::msg::InternalCombustionEngineStatus::_fuel_pressure_type arg)
  {
    msg_.fuel_pressure = std::move(arg);
    return Init_InternalCombustionEngineStatus_fuel_consumption_rate_cm3pm(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_oil_temperature
{
public:
  explicit Init_InternalCombustionEngineStatus_oil_temperature(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_fuel_pressure oil_temperature(::px4_msgs::msg::InternalCombustionEngineStatus::_oil_temperature_type arg)
  {
    msg_.oil_temperature = std::move(arg);
    return Init_InternalCombustionEngineStatus_fuel_pressure(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_oil_pressure
{
public:
  explicit Init_InternalCombustionEngineStatus_oil_pressure(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_oil_temperature oil_pressure(::px4_msgs::msg::InternalCombustionEngineStatus::_oil_pressure_type arg)
  {
    msg_.oil_pressure = std::move(arg);
    return Init_InternalCombustionEngineStatus_oil_temperature(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_coolant_temperature
{
public:
  explicit Init_InternalCombustionEngineStatus_coolant_temperature(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_oil_pressure coolant_temperature(::px4_msgs::msg::InternalCombustionEngineStatus::_coolant_temperature_type arg)
  {
    msg_.coolant_temperature = std::move(arg);
    return Init_InternalCombustionEngineStatus_oil_pressure(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_intake_manifold_temperature
{
public:
  explicit Init_InternalCombustionEngineStatus_intake_manifold_temperature(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_coolant_temperature intake_manifold_temperature(::px4_msgs::msg::InternalCombustionEngineStatus::_intake_manifold_temperature_type arg)
  {
    msg_.intake_manifold_temperature = std::move(arg);
    return Init_InternalCombustionEngineStatus_coolant_temperature(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_intake_manifold_pressure_kpa
{
public:
  explicit Init_InternalCombustionEngineStatus_intake_manifold_pressure_kpa(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_intake_manifold_temperature intake_manifold_pressure_kpa(::px4_msgs::msg::InternalCombustionEngineStatus::_intake_manifold_pressure_kpa_type arg)
  {
    msg_.intake_manifold_pressure_kpa = std::move(arg);
    return Init_InternalCombustionEngineStatus_intake_manifold_temperature(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_atmospheric_pressure_kpa
{
public:
  explicit Init_InternalCombustionEngineStatus_atmospheric_pressure_kpa(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_intake_manifold_pressure_kpa atmospheric_pressure_kpa(::px4_msgs::msg::InternalCombustionEngineStatus::_atmospheric_pressure_kpa_type arg)
  {
    msg_.atmospheric_pressure_kpa = std::move(arg);
    return Init_InternalCombustionEngineStatus_intake_manifold_pressure_kpa(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_spark_dwell_time_ms
{
public:
  explicit Init_InternalCombustionEngineStatus_spark_dwell_time_ms(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_atmospheric_pressure_kpa spark_dwell_time_ms(::px4_msgs::msg::InternalCombustionEngineStatus::_spark_dwell_time_ms_type arg)
  {
    msg_.spark_dwell_time_ms = std::move(arg);
    return Init_InternalCombustionEngineStatus_atmospheric_pressure_kpa(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_engine_speed_rpm
{
public:
  explicit Init_InternalCombustionEngineStatus_engine_speed_rpm(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_spark_dwell_time_ms engine_speed_rpm(::px4_msgs::msg::InternalCombustionEngineStatus::_engine_speed_rpm_type arg)
  {
    msg_.engine_speed_rpm = std::move(arg);
    return Init_InternalCombustionEngineStatus_spark_dwell_time_ms(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_engine_load_percent
{
public:
  explicit Init_InternalCombustionEngineStatus_engine_load_percent(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_engine_speed_rpm engine_load_percent(::px4_msgs::msg::InternalCombustionEngineStatus::_engine_load_percent_type arg)
  {
    msg_.engine_load_percent = std::move(arg);
    return Init_InternalCombustionEngineStatus_engine_speed_rpm(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_flags
{
public:
  explicit Init_InternalCombustionEngineStatus_flags(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_engine_load_percent flags(::px4_msgs::msg::InternalCombustionEngineStatus::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_InternalCombustionEngineStatus_engine_load_percent(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_state
{
public:
  explicit Init_InternalCombustionEngineStatus_state(::px4_msgs::msg::InternalCombustionEngineStatus & msg)
  : msg_(msg)
  {}
  Init_InternalCombustionEngineStatus_flags state(::px4_msgs::msg::InternalCombustionEngineStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_InternalCombustionEngineStatus_flags(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

class Init_InternalCombustionEngineStatus_timestamp
{
public:
  Init_InternalCombustionEngineStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InternalCombustionEngineStatus_state timestamp(::px4_msgs::msg::InternalCombustionEngineStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_InternalCombustionEngineStatus_state(msg_);
  }

private:
  ::px4_msgs::msg::InternalCombustionEngineStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::InternalCombustionEngineStatus>()
{
  return px4_msgs::msg::builder::Init_InternalCombustionEngineStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__INTERNAL_COMBUSTION_ENGINE_STATUS__BUILDER_HPP_
