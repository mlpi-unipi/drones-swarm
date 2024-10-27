// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VtolVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vtol_vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VtolVehicleStatus_fixed_wing_system_failure
{
public:
  explicit Init_VtolVehicleStatus_fixed_wing_system_failure(::px4_msgs::msg::VtolVehicleStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VtolVehicleStatus fixed_wing_system_failure(::px4_msgs::msg::VtolVehicleStatus::_fixed_wing_system_failure_type arg)
  {
    msg_.fixed_wing_system_failure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VtolVehicleStatus msg_;
};

class Init_VtolVehicleStatus_vehicle_vtol_state
{
public:
  explicit Init_VtolVehicleStatus_vehicle_vtol_state(::px4_msgs::msg::VtolVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VtolVehicleStatus_fixed_wing_system_failure vehicle_vtol_state(::px4_msgs::msg::VtolVehicleStatus::_vehicle_vtol_state_type arg)
  {
    msg_.vehicle_vtol_state = std::move(arg);
    return Init_VtolVehicleStatus_fixed_wing_system_failure(msg_);
  }

private:
  ::px4_msgs::msg::VtolVehicleStatus msg_;
};

class Init_VtolVehicleStatus_timestamp
{
public:
  Init_VtolVehicleStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VtolVehicleStatus_vehicle_vtol_state timestamp(::px4_msgs::msg::VtolVehicleStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VtolVehicleStatus_vehicle_vtol_state(msg_);
  }

private:
  ::px4_msgs::msg::VtolVehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VtolVehicleStatus>()
{
  return px4_msgs::msg::builder::Init_VtolVehicleStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__BUILDER_HPP_
