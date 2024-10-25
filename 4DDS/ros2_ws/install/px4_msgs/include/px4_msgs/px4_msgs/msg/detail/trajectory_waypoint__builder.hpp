// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/trajectory_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryWaypoint_type
{
public:
  explicit Init_TrajectoryWaypoint_type(::px4_msgs::msg::TrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TrajectoryWaypoint type(::px4_msgs::msg::TrajectoryWaypoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryWaypoint msg_;
};

class Init_TrajectoryWaypoint_point_valid
{
public:
  explicit Init_TrajectoryWaypoint_point_valid(::px4_msgs::msg::TrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryWaypoint_type point_valid(::px4_msgs::msg::TrajectoryWaypoint::_point_valid_type arg)
  {
    msg_.point_valid = std::move(arg);
    return Init_TrajectoryWaypoint_type(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryWaypoint msg_;
};

class Init_TrajectoryWaypoint_yaw_speed
{
public:
  explicit Init_TrajectoryWaypoint_yaw_speed(::px4_msgs::msg::TrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryWaypoint_point_valid yaw_speed(::px4_msgs::msg::TrajectoryWaypoint::_yaw_speed_type arg)
  {
    msg_.yaw_speed = std::move(arg);
    return Init_TrajectoryWaypoint_point_valid(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryWaypoint msg_;
};

class Init_TrajectoryWaypoint_yaw
{
public:
  explicit Init_TrajectoryWaypoint_yaw(::px4_msgs::msg::TrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryWaypoint_yaw_speed yaw(::px4_msgs::msg::TrajectoryWaypoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_TrajectoryWaypoint_yaw_speed(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryWaypoint msg_;
};

class Init_TrajectoryWaypoint_acceleration
{
public:
  explicit Init_TrajectoryWaypoint_acceleration(::px4_msgs::msg::TrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryWaypoint_yaw acceleration(::px4_msgs::msg::TrajectoryWaypoint::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TrajectoryWaypoint_yaw(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryWaypoint msg_;
};

class Init_TrajectoryWaypoint_velocity
{
public:
  explicit Init_TrajectoryWaypoint_velocity(::px4_msgs::msg::TrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryWaypoint_acceleration velocity(::px4_msgs::msg::TrajectoryWaypoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_TrajectoryWaypoint_acceleration(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryWaypoint msg_;
};

class Init_TrajectoryWaypoint_position
{
public:
  explicit Init_TrajectoryWaypoint_position(::px4_msgs::msg::TrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryWaypoint_velocity position(::px4_msgs::msg::TrajectoryWaypoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrajectoryWaypoint_velocity(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryWaypoint msg_;
};

class Init_TrajectoryWaypoint_timestamp
{
public:
  Init_TrajectoryWaypoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryWaypoint_position timestamp(::px4_msgs::msg::TrajectoryWaypoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TrajectoryWaypoint_position(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryWaypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TrajectoryWaypoint>()
{
  return px4_msgs::msg::builder::Init_TrajectoryWaypoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__BUILDER_HPP_
