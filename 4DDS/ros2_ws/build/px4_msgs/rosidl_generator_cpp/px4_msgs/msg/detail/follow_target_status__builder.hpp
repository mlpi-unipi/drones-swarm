// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FollowTargetStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/follow_target_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FollowTargetStatus_gimbal_pitch
{
public:
  explicit Init_FollowTargetStatus_gimbal_pitch(::px4_msgs::msg::FollowTargetStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FollowTargetStatus gimbal_pitch(::px4_msgs::msg::FollowTargetStatus::_gimbal_pitch_type arg)
  {
    msg_.gimbal_pitch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetStatus msg_;
};

class Init_FollowTargetStatus_in_emergency_ascent
{
public:
  explicit Init_FollowTargetStatus_in_emergency_ascent(::px4_msgs::msg::FollowTargetStatus & msg)
  : msg_(msg)
  {}
  Init_FollowTargetStatus_gimbal_pitch in_emergency_ascent(::px4_msgs::msg::FollowTargetStatus::_in_emergency_ascent_type arg)
  {
    msg_.in_emergency_ascent = std::move(arg);
    return Init_FollowTargetStatus_gimbal_pitch(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetStatus msg_;
};

class Init_FollowTargetStatus_desired_position_raw
{
public:
  explicit Init_FollowTargetStatus_desired_position_raw(::px4_msgs::msg::FollowTargetStatus & msg)
  : msg_(msg)
  {}
  Init_FollowTargetStatus_in_emergency_ascent desired_position_raw(::px4_msgs::msg::FollowTargetStatus::_desired_position_raw_type arg)
  {
    msg_.desired_position_raw = std::move(arg);
    return Init_FollowTargetStatus_in_emergency_ascent(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetStatus msg_;
};

class Init_FollowTargetStatus_angular_rate_setpoint
{
public:
  explicit Init_FollowTargetStatus_angular_rate_setpoint(::px4_msgs::msg::FollowTargetStatus & msg)
  : msg_(msg)
  {}
  Init_FollowTargetStatus_desired_position_raw angular_rate_setpoint(::px4_msgs::msg::FollowTargetStatus::_angular_rate_setpoint_type arg)
  {
    msg_.angular_rate_setpoint = std::move(arg);
    return Init_FollowTargetStatus_desired_position_raw(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetStatus msg_;
};

class Init_FollowTargetStatus_orbit_angle_setpoint
{
public:
  explicit Init_FollowTargetStatus_orbit_angle_setpoint(::px4_msgs::msg::FollowTargetStatus & msg)
  : msg_(msg)
  {}
  Init_FollowTargetStatus_angular_rate_setpoint orbit_angle_setpoint(::px4_msgs::msg::FollowTargetStatus::_orbit_angle_setpoint_type arg)
  {
    msg_.orbit_angle_setpoint = std::move(arg);
    return Init_FollowTargetStatus_angular_rate_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetStatus msg_;
};

class Init_FollowTargetStatus_follow_angle
{
public:
  explicit Init_FollowTargetStatus_follow_angle(::px4_msgs::msg::FollowTargetStatus & msg)
  : msg_(msg)
  {}
  Init_FollowTargetStatus_orbit_angle_setpoint follow_angle(::px4_msgs::msg::FollowTargetStatus::_follow_angle_type arg)
  {
    msg_.follow_angle = std::move(arg);
    return Init_FollowTargetStatus_orbit_angle_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetStatus msg_;
};

class Init_FollowTargetStatus_tracked_target_course
{
public:
  explicit Init_FollowTargetStatus_tracked_target_course(::px4_msgs::msg::FollowTargetStatus & msg)
  : msg_(msg)
  {}
  Init_FollowTargetStatus_follow_angle tracked_target_course(::px4_msgs::msg::FollowTargetStatus::_tracked_target_course_type arg)
  {
    msg_.tracked_target_course = std::move(arg);
    return Init_FollowTargetStatus_follow_angle(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetStatus msg_;
};

class Init_FollowTargetStatus_timestamp
{
public:
  Init_FollowTargetStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTargetStatus_tracked_target_course timestamp(::px4_msgs::msg::FollowTargetStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FollowTargetStatus_tracked_target_course(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FollowTargetStatus>()
{
  return px4_msgs::msg::builder::Init_FollowTargetStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__BUILDER_HPP_
