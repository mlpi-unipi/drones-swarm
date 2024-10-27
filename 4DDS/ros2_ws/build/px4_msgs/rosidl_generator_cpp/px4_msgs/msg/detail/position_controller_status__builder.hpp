// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/PositionControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/position_controller_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionControllerStatus_type
{
public:
  explicit Init_PositionControllerStatus_type(::px4_msgs::msg::PositionControllerStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::PositionControllerStatus type(::px4_msgs::msg::PositionControllerStatus::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

class Init_PositionControllerStatus_altitude_acceptance
{
public:
  explicit Init_PositionControllerStatus_altitude_acceptance(::px4_msgs::msg::PositionControllerStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerStatus_type altitude_acceptance(::px4_msgs::msg::PositionControllerStatus::_altitude_acceptance_type arg)
  {
    msg_.altitude_acceptance = std::move(arg);
    return Init_PositionControllerStatus_type(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

class Init_PositionControllerStatus_yaw_acceptance
{
public:
  explicit Init_PositionControllerStatus_yaw_acceptance(::px4_msgs::msg::PositionControllerStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerStatus_altitude_acceptance yaw_acceptance(::px4_msgs::msg::PositionControllerStatus::_yaw_acceptance_type arg)
  {
    msg_.yaw_acceptance = std::move(arg);
    return Init_PositionControllerStatus_altitude_acceptance(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

class Init_PositionControllerStatus_acceptance_radius
{
public:
  explicit Init_PositionControllerStatus_acceptance_radius(::px4_msgs::msg::PositionControllerStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerStatus_yaw_acceptance acceptance_radius(::px4_msgs::msg::PositionControllerStatus::_acceptance_radius_type arg)
  {
    msg_.acceptance_radius = std::move(arg);
    return Init_PositionControllerStatus_yaw_acceptance(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

class Init_PositionControllerStatus_wp_dist
{
public:
  explicit Init_PositionControllerStatus_wp_dist(::px4_msgs::msg::PositionControllerStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerStatus_acceptance_radius wp_dist(::px4_msgs::msg::PositionControllerStatus::_wp_dist_type arg)
  {
    msg_.wp_dist = std::move(arg);
    return Init_PositionControllerStatus_acceptance_radius(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

class Init_PositionControllerStatus_xtrack_error
{
public:
  explicit Init_PositionControllerStatus_xtrack_error(::px4_msgs::msg::PositionControllerStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerStatus_wp_dist xtrack_error(::px4_msgs::msg::PositionControllerStatus::_xtrack_error_type arg)
  {
    msg_.xtrack_error = std::move(arg);
    return Init_PositionControllerStatus_wp_dist(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

class Init_PositionControllerStatus_target_bearing
{
public:
  explicit Init_PositionControllerStatus_target_bearing(::px4_msgs::msg::PositionControllerStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerStatus_xtrack_error target_bearing(::px4_msgs::msg::PositionControllerStatus::_target_bearing_type arg)
  {
    msg_.target_bearing = std::move(arg);
    return Init_PositionControllerStatus_xtrack_error(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

class Init_PositionControllerStatus_nav_bearing
{
public:
  explicit Init_PositionControllerStatus_nav_bearing(::px4_msgs::msg::PositionControllerStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerStatus_target_bearing nav_bearing(::px4_msgs::msg::PositionControllerStatus::_nav_bearing_type arg)
  {
    msg_.nav_bearing = std::move(arg);
    return Init_PositionControllerStatus_target_bearing(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

class Init_PositionControllerStatus_nav_pitch
{
public:
  explicit Init_PositionControllerStatus_nav_pitch(::px4_msgs::msg::PositionControllerStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerStatus_nav_bearing nav_pitch(::px4_msgs::msg::PositionControllerStatus::_nav_pitch_type arg)
  {
    msg_.nav_pitch = std::move(arg);
    return Init_PositionControllerStatus_nav_bearing(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

class Init_PositionControllerStatus_nav_roll
{
public:
  explicit Init_PositionControllerStatus_nav_roll(::px4_msgs::msg::PositionControllerStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerStatus_nav_pitch nav_roll(::px4_msgs::msg::PositionControllerStatus::_nav_roll_type arg)
  {
    msg_.nav_roll = std::move(arg);
    return Init_PositionControllerStatus_nav_pitch(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

class Init_PositionControllerStatus_timestamp
{
public:
  Init_PositionControllerStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionControllerStatus_nav_roll timestamp(::px4_msgs::msg::PositionControllerStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PositionControllerStatus_nav_roll(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::PositionControllerStatus>()
{
  return px4_msgs::msg::builder::Init_PositionControllerStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__BUILDER_HPP_
