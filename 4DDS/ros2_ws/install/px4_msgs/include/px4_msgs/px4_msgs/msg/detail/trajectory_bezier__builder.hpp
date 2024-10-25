// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TrajectoryBezier.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRAJECTORY_BEZIER__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TRAJECTORY_BEZIER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/trajectory_bezier__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryBezier_delta
{
public:
  explicit Init_TrajectoryBezier_delta(::px4_msgs::msg::TrajectoryBezier & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TrajectoryBezier delta(::px4_msgs::msg::TrajectoryBezier::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryBezier msg_;
};

class Init_TrajectoryBezier_yaw
{
public:
  explicit Init_TrajectoryBezier_yaw(::px4_msgs::msg::TrajectoryBezier & msg)
  : msg_(msg)
  {}
  Init_TrajectoryBezier_delta yaw(::px4_msgs::msg::TrajectoryBezier::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_TrajectoryBezier_delta(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryBezier msg_;
};

class Init_TrajectoryBezier_position
{
public:
  explicit Init_TrajectoryBezier_position(::px4_msgs::msg::TrajectoryBezier & msg)
  : msg_(msg)
  {}
  Init_TrajectoryBezier_yaw position(::px4_msgs::msg::TrajectoryBezier::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrajectoryBezier_yaw(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryBezier msg_;
};

class Init_TrajectoryBezier_timestamp
{
public:
  Init_TrajectoryBezier_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryBezier_position timestamp(::px4_msgs::msg::TrajectoryBezier::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TrajectoryBezier_position(msg_);
  }

private:
  ::px4_msgs::msg::TrajectoryBezier msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TrajectoryBezier>()
{
  return px4_msgs::msg::builder::Init_TrajectoryBezier_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TRAJECTORY_BEZIER__BUILDER_HPP_
