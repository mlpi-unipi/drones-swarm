// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorGnssRelative.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_gnss_relative__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorGnssRelative_relative_position_normalized
{
public:
  explicit Init_SensorGnssRelative_relative_position_normalized(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorGnssRelative relative_position_normalized(::px4_msgs::msg::SensorGnssRelative::_relative_position_normalized_type arg)
  {
    msg_.relative_position_normalized = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_heading_valid
{
public:
  explicit Init_SensorGnssRelative_heading_valid(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_relative_position_normalized heading_valid(::px4_msgs::msg::SensorGnssRelative::_heading_valid_type arg)
  {
    msg_.heading_valid = std::move(arg);
    return Init_SensorGnssRelative_relative_position_normalized(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_reference_observations_miss
{
public:
  explicit Init_SensorGnssRelative_reference_observations_miss(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_heading_valid reference_observations_miss(::px4_msgs::msg::SensorGnssRelative::_reference_observations_miss_type arg)
  {
    msg_.reference_observations_miss = std::move(arg);
    return Init_SensorGnssRelative_heading_valid(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_reference_position_miss
{
public:
  explicit Init_SensorGnssRelative_reference_position_miss(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_reference_observations_miss reference_position_miss(::px4_msgs::msg::SensorGnssRelative::_reference_position_miss_type arg)
  {
    msg_.reference_position_miss = std::move(arg);
    return Init_SensorGnssRelative_reference_observations_miss(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_moving_base_mode
{
public:
  explicit Init_SensorGnssRelative_moving_base_mode(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_reference_position_miss moving_base_mode(::px4_msgs::msg::SensorGnssRelative::_moving_base_mode_type arg)
  {
    msg_.moving_base_mode = std::move(arg);
    return Init_SensorGnssRelative_reference_position_miss(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_carrier_solution_fixed
{
public:
  explicit Init_SensorGnssRelative_carrier_solution_fixed(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_moving_base_mode carrier_solution_fixed(::px4_msgs::msg::SensorGnssRelative::_carrier_solution_fixed_type arg)
  {
    msg_.carrier_solution_fixed = std::move(arg);
    return Init_SensorGnssRelative_moving_base_mode(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_carrier_solution_floating
{
public:
  explicit Init_SensorGnssRelative_carrier_solution_floating(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_carrier_solution_fixed carrier_solution_floating(::px4_msgs::msg::SensorGnssRelative::_carrier_solution_floating_type arg)
  {
    msg_.carrier_solution_floating = std::move(arg);
    return Init_SensorGnssRelative_carrier_solution_fixed(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_relative_position_valid
{
public:
  explicit Init_SensorGnssRelative_relative_position_valid(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_carrier_solution_floating relative_position_valid(::px4_msgs::msg::SensorGnssRelative::_relative_position_valid_type arg)
  {
    msg_.relative_position_valid = std::move(arg);
    return Init_SensorGnssRelative_carrier_solution_floating(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_differential_solution
{
public:
  explicit Init_SensorGnssRelative_differential_solution(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_relative_position_valid differential_solution(::px4_msgs::msg::SensorGnssRelative::_differential_solution_type arg)
  {
    msg_.differential_solution = std::move(arg);
    return Init_SensorGnssRelative_relative_position_valid(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_gnss_fix_ok
{
public:
  explicit Init_SensorGnssRelative_gnss_fix_ok(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_differential_solution gnss_fix_ok(::px4_msgs::msg::SensorGnssRelative::_gnss_fix_ok_type arg)
  {
    msg_.gnss_fix_ok = std::move(arg);
    return Init_SensorGnssRelative_differential_solution(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_accuracy_length
{
public:
  explicit Init_SensorGnssRelative_accuracy_length(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_gnss_fix_ok accuracy_length(::px4_msgs::msg::SensorGnssRelative::_accuracy_length_type arg)
  {
    msg_.accuracy_length = std::move(arg);
    return Init_SensorGnssRelative_gnss_fix_ok(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_position_length
{
public:
  explicit Init_SensorGnssRelative_position_length(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_accuracy_length position_length(::px4_msgs::msg::SensorGnssRelative::_position_length_type arg)
  {
    msg_.position_length = std::move(arg);
    return Init_SensorGnssRelative_accuracy_length(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_heading_accuracy
{
public:
  explicit Init_SensorGnssRelative_heading_accuracy(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_position_length heading_accuracy(::px4_msgs::msg::SensorGnssRelative::_heading_accuracy_type arg)
  {
    msg_.heading_accuracy = std::move(arg);
    return Init_SensorGnssRelative_position_length(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_heading
{
public:
  explicit Init_SensorGnssRelative_heading(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_heading_accuracy heading(::px4_msgs::msg::SensorGnssRelative::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_SensorGnssRelative_heading_accuracy(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_position_accuracy
{
public:
  explicit Init_SensorGnssRelative_position_accuracy(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_heading position_accuracy(::px4_msgs::msg::SensorGnssRelative::_position_accuracy_type arg)
  {
    msg_.position_accuracy = std::move(arg);
    return Init_SensorGnssRelative_heading(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_position
{
public:
  explicit Init_SensorGnssRelative_position(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_position_accuracy position(::px4_msgs::msg::SensorGnssRelative::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SensorGnssRelative_position_accuracy(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_reference_station_id
{
public:
  explicit Init_SensorGnssRelative_reference_station_id(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_position reference_station_id(::px4_msgs::msg::SensorGnssRelative::_reference_station_id_type arg)
  {
    msg_.reference_station_id = std::move(arg);
    return Init_SensorGnssRelative_position(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_time_utc_usec
{
public:
  explicit Init_SensorGnssRelative_time_utc_usec(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_reference_station_id time_utc_usec(::px4_msgs::msg::SensorGnssRelative::_time_utc_usec_type arg)
  {
    msg_.time_utc_usec = std::move(arg);
    return Init_SensorGnssRelative_reference_station_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_device_id
{
public:
  explicit Init_SensorGnssRelative_device_id(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_time_utc_usec device_id(::px4_msgs::msg::SensorGnssRelative::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SensorGnssRelative_time_utc_usec(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_timestamp_sample
{
public:
  explicit Init_SensorGnssRelative_timestamp_sample(::px4_msgs::msg::SensorGnssRelative & msg)
  : msg_(msg)
  {}
  Init_SensorGnssRelative_device_id timestamp_sample(::px4_msgs::msg::SensorGnssRelative::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_SensorGnssRelative_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

class Init_SensorGnssRelative_timestamp
{
public:
  Init_SensorGnssRelative_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorGnssRelative_timestamp_sample timestamp(::px4_msgs::msg::SensorGnssRelative::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorGnssRelative_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::SensorGnssRelative msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorGnssRelative>()
{
  return px4_msgs::msg::builder::Init_SensorGnssRelative_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__BUILDER_HPP_
