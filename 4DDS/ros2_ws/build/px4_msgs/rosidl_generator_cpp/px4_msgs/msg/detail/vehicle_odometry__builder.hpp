// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_odometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleOdometry_quality
{
public:
  explicit Init_VehicleOdometry_quality(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleOdometry quality(::px4_msgs::msg::VehicleOdometry::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_reset_counter
{
public:
  explicit Init_VehicleOdometry_reset_counter(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_quality reset_counter(::px4_msgs::msg::VehicleOdometry::_reset_counter_type arg)
  {
    msg_.reset_counter = std::move(arg);
    return Init_VehicleOdometry_quality(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_velocity_variance
{
public:
  explicit Init_VehicleOdometry_velocity_variance(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_reset_counter velocity_variance(::px4_msgs::msg::VehicleOdometry::_velocity_variance_type arg)
  {
    msg_.velocity_variance = std::move(arg);
    return Init_VehicleOdometry_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_orientation_variance
{
public:
  explicit Init_VehicleOdometry_orientation_variance(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_velocity_variance orientation_variance(::px4_msgs::msg::VehicleOdometry::_orientation_variance_type arg)
  {
    msg_.orientation_variance = std::move(arg);
    return Init_VehicleOdometry_velocity_variance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_position_variance
{
public:
  explicit Init_VehicleOdometry_position_variance(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_orientation_variance position_variance(::px4_msgs::msg::VehicleOdometry::_position_variance_type arg)
  {
    msg_.position_variance = std::move(arg);
    return Init_VehicleOdometry_orientation_variance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_angular_velocity
{
public:
  explicit Init_VehicleOdometry_angular_velocity(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_position_variance angular_velocity(::px4_msgs::msg::VehicleOdometry::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_VehicleOdometry_position_variance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_velocity
{
public:
  explicit Init_VehicleOdometry_velocity(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_angular_velocity velocity(::px4_msgs::msg::VehicleOdometry::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_VehicleOdometry_angular_velocity(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_velocity_frame
{
public:
  explicit Init_VehicleOdometry_velocity_frame(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_velocity velocity_frame(::px4_msgs::msg::VehicleOdometry::_velocity_frame_type arg)
  {
    msg_.velocity_frame = std::move(arg);
    return Init_VehicleOdometry_velocity(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_q
{
public:
  explicit Init_VehicleOdometry_q(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_velocity_frame q(::px4_msgs::msg::VehicleOdometry::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_VehicleOdometry_velocity_frame(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_position
{
public:
  explicit Init_VehicleOdometry_position(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_q position(::px4_msgs::msg::VehicleOdometry::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_VehicleOdometry_q(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_pose_frame
{
public:
  explicit Init_VehicleOdometry_pose_frame(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_position pose_frame(::px4_msgs::msg::VehicleOdometry::_pose_frame_type arg)
  {
    msg_.pose_frame = std::move(arg);
    return Init_VehicleOdometry_position(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_timestamp_sample
{
public:
  explicit Init_VehicleOdometry_timestamp_sample(::px4_msgs::msg::VehicleOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleOdometry_pose_frame timestamp_sample(::px4_msgs::msg::VehicleOdometry::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleOdometry_pose_frame(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

class Init_VehicleOdometry_timestamp
{
public:
  Init_VehicleOdometry_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleOdometry_timestamp_sample timestamp(::px4_msgs::msg::VehicleOdometry::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleOdometry_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOdometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleOdometry>()
{
  return px4_msgs::msg::builder::Init_VehicleOdometry_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ODOMETRY__BUILDER_HPP_
