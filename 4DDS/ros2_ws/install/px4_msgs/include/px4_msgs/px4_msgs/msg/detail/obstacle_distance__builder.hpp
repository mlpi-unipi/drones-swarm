// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/obstacle_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleDistance_angle_offset
{
public:
  explicit Init_ObstacleDistance_angle_offset(::px4_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ObstacleDistance angle_offset(::px4_msgs::msg::ObstacleDistance::_angle_offset_type arg)
  {
    msg_.angle_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_max_distance
{
public:
  explicit Init_ObstacleDistance_max_distance(::px4_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_angle_offset max_distance(::px4_msgs::msg::ObstacleDistance::_max_distance_type arg)
  {
    msg_.max_distance = std::move(arg);
    return Init_ObstacleDistance_angle_offset(msg_);
  }

private:
  ::px4_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_min_distance
{
public:
  explicit Init_ObstacleDistance_min_distance(::px4_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_max_distance min_distance(::px4_msgs::msg::ObstacleDistance::_min_distance_type arg)
  {
    msg_.min_distance = std::move(arg);
    return Init_ObstacleDistance_max_distance(msg_);
  }

private:
  ::px4_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_increment
{
public:
  explicit Init_ObstacleDistance_increment(::px4_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_min_distance increment(::px4_msgs::msg::ObstacleDistance::_increment_type arg)
  {
    msg_.increment = std::move(arg);
    return Init_ObstacleDistance_min_distance(msg_);
  }

private:
  ::px4_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_distances
{
public:
  explicit Init_ObstacleDistance_distances(::px4_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_increment distances(::px4_msgs::msg::ObstacleDistance::_distances_type arg)
  {
    msg_.distances = std::move(arg);
    return Init_ObstacleDistance_increment(msg_);
  }

private:
  ::px4_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_sensor_type
{
public:
  explicit Init_ObstacleDistance_sensor_type(::px4_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_distances sensor_type(::px4_msgs::msg::ObstacleDistance::_sensor_type_type arg)
  {
    msg_.sensor_type = std::move(arg);
    return Init_ObstacleDistance_distances(msg_);
  }

private:
  ::px4_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_frame
{
public:
  explicit Init_ObstacleDistance_frame(::px4_msgs::msg::ObstacleDistance & msg)
  : msg_(msg)
  {}
  Init_ObstacleDistance_sensor_type frame(::px4_msgs::msg::ObstacleDistance::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_ObstacleDistance_sensor_type(msg_);
  }

private:
  ::px4_msgs::msg::ObstacleDistance msg_;
};

class Init_ObstacleDistance_timestamp
{
public:
  Init_ObstacleDistance_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleDistance_frame timestamp(::px4_msgs::msg::ObstacleDistance::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ObstacleDistance_frame(msg_);
  }

private:
  ::px4_msgs::msg::ObstacleDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ObstacleDistance>()
{
  return px4_msgs::msg::builder::Init_ObstacleDistance_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__BUILDER_HPP_
