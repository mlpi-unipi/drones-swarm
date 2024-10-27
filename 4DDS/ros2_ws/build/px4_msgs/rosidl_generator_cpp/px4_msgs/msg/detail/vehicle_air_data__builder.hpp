// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleAirData.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_AIR_DATA__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_AIR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_air_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleAirData_calibration_count
{
public:
  explicit Init_VehicleAirData_calibration_count(::px4_msgs::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleAirData calibration_count(::px4_msgs::msg::VehicleAirData::_calibration_count_type arg)
  {
    msg_.calibration_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_eas2tas
{
public:
  explicit Init_VehicleAirData_eas2tas(::px4_msgs::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_calibration_count eas2tas(::px4_msgs::msg::VehicleAirData::_eas2tas_type arg)
  {
    msg_.eas2tas = std::move(arg);
    return Init_VehicleAirData_calibration_count(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_rho
{
public:
  explicit Init_VehicleAirData_rho(::px4_msgs::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_eas2tas rho(::px4_msgs::msg::VehicleAirData::_rho_type arg)
  {
    msg_.rho = std::move(arg);
    return Init_VehicleAirData_eas2tas(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_baro_pressure_pa
{
public:
  explicit Init_VehicleAirData_baro_pressure_pa(::px4_msgs::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_rho baro_pressure_pa(::px4_msgs::msg::VehicleAirData::_baro_pressure_pa_type arg)
  {
    msg_.baro_pressure_pa = std::move(arg);
    return Init_VehicleAirData_rho(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_baro_temp_celcius
{
public:
  explicit Init_VehicleAirData_baro_temp_celcius(::px4_msgs::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_baro_pressure_pa baro_temp_celcius(::px4_msgs::msg::VehicleAirData::_baro_temp_celcius_type arg)
  {
    msg_.baro_temp_celcius = std::move(arg);
    return Init_VehicleAirData_baro_pressure_pa(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_baro_alt_meter
{
public:
  explicit Init_VehicleAirData_baro_alt_meter(::px4_msgs::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_baro_temp_celcius baro_alt_meter(::px4_msgs::msg::VehicleAirData::_baro_alt_meter_type arg)
  {
    msg_.baro_alt_meter = std::move(arg);
    return Init_VehicleAirData_baro_temp_celcius(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_baro_device_id
{
public:
  explicit Init_VehicleAirData_baro_device_id(::px4_msgs::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_baro_alt_meter baro_device_id(::px4_msgs::msg::VehicleAirData::_baro_device_id_type arg)
  {
    msg_.baro_device_id = std::move(arg);
    return Init_VehicleAirData_baro_alt_meter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_timestamp_sample
{
public:
  explicit Init_VehicleAirData_timestamp_sample(::px4_msgs::msg::VehicleAirData & msg)
  : msg_(msg)
  {}
  Init_VehicleAirData_baro_device_id timestamp_sample(::px4_msgs::msg::VehicleAirData::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleAirData_baro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAirData msg_;
};

class Init_VehicleAirData_timestamp
{
public:
  Init_VehicleAirData_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleAirData_timestamp_sample timestamp(::px4_msgs::msg::VehicleAirData::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleAirData_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleAirData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleAirData>()
{
  return px4_msgs::msg::builder::Init_VehicleAirData_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_AIR_DATA__BUILDER_HPP_
