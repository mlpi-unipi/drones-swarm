// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleControlMode.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_control_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleControlMode_source_id
{
public:
  explicit Init_VehicleControlMode_source_id(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleControlMode source_id(::px4_msgs::msg::VehicleControlMode::_source_id_type arg)
  {
    msg_.source_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_termination_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_termination_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_source_id flag_control_termination_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_termination_enabled_type arg)
  {
    msg_.flag_control_termination_enabled = std::move(arg);
    return Init_VehicleControlMode_source_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_allocation_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_allocation_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_termination_enabled flag_control_allocation_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_allocation_enabled_type arg)
  {
    msg_.flag_control_allocation_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_termination_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_rates_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_rates_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_allocation_enabled flag_control_rates_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_rates_enabled_type arg)
  {
    msg_.flag_control_rates_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_allocation_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_attitude_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_attitude_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_rates_enabled flag_control_attitude_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_attitude_enabled_type arg)
  {
    msg_.flag_control_attitude_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_rates_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_acceleration_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_acceleration_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_attitude_enabled flag_control_acceleration_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_acceleration_enabled_type arg)
  {
    msg_.flag_control_acceleration_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_attitude_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_climb_rate_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_climb_rate_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_acceleration_enabled flag_control_climb_rate_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_climb_rate_enabled_type arg)
  {
    msg_.flag_control_climb_rate_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_acceleration_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_altitude_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_altitude_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_climb_rate_enabled flag_control_altitude_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_altitude_enabled_type arg)
  {
    msg_.flag_control_altitude_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_climb_rate_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_velocity_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_velocity_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_altitude_enabled flag_control_velocity_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_velocity_enabled_type arg)
  {
    msg_.flag_control_velocity_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_altitude_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_position_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_position_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_velocity_enabled flag_control_position_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_position_enabled_type arg)
  {
    msg_.flag_control_position_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_velocity_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_offboard_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_offboard_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_position_enabled flag_control_offboard_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_offboard_enabled_type arg)
  {
    msg_.flag_control_offboard_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_position_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_auto_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_auto_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_offboard_enabled flag_control_auto_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_auto_enabled_type arg)
  {
    msg_.flag_control_auto_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_offboard_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_control_manual_enabled
{
public:
  explicit Init_VehicleControlMode_flag_control_manual_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_auto_enabled flag_control_manual_enabled(::px4_msgs::msg::VehicleControlMode::_flag_control_manual_enabled_type arg)
  {
    msg_.flag_control_manual_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_auto_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_multicopter_position_control_enabled
{
public:
  explicit Init_VehicleControlMode_flag_multicopter_position_control_enabled(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_control_manual_enabled flag_multicopter_position_control_enabled(::px4_msgs::msg::VehicleControlMode::_flag_multicopter_position_control_enabled_type arg)
  {
    msg_.flag_multicopter_position_control_enabled = std::move(arg);
    return Init_VehicleControlMode_flag_control_manual_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_flag_armed
{
public:
  explicit Init_VehicleControlMode_flag_armed(::px4_msgs::msg::VehicleControlMode & msg)
  : msg_(msg)
  {}
  Init_VehicleControlMode_flag_multicopter_position_control_enabled flag_armed(::px4_msgs::msg::VehicleControlMode::_flag_armed_type arg)
  {
    msg_.flag_armed = std::move(arg);
    return Init_VehicleControlMode_flag_multicopter_position_control_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

class Init_VehicleControlMode_timestamp
{
public:
  Init_VehicleControlMode_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleControlMode_flag_armed timestamp(::px4_msgs::msg::VehicleControlMode::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleControlMode_flag_armed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleControlMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleControlMode>()
{
  return px4_msgs::msg::builder::Init_VehicleControlMode_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__BUILDER_HPP_
