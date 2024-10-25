// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/DistanceSensor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/distance_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_DistanceSensor_orientation
{
public:
  explicit Init_DistanceSensor_orientation(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::DistanceSensor orientation(::px4_msgs::msg::DistanceSensor::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_q
{
public:
  explicit Init_DistanceSensor_q(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  Init_DistanceSensor_orientation q(::px4_msgs::msg::DistanceSensor::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_DistanceSensor_orientation(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_v_fov
{
public:
  explicit Init_DistanceSensor_v_fov(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  Init_DistanceSensor_q v_fov(::px4_msgs::msg::DistanceSensor::_v_fov_type arg)
  {
    msg_.v_fov = std::move(arg);
    return Init_DistanceSensor_q(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_h_fov
{
public:
  explicit Init_DistanceSensor_h_fov(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  Init_DistanceSensor_v_fov h_fov(::px4_msgs::msg::DistanceSensor::_h_fov_type arg)
  {
    msg_.h_fov = std::move(arg);
    return Init_DistanceSensor_v_fov(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_type
{
public:
  explicit Init_DistanceSensor_type(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  Init_DistanceSensor_h_fov type(::px4_msgs::msg::DistanceSensor::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_DistanceSensor_h_fov(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_signal_quality
{
public:
  explicit Init_DistanceSensor_signal_quality(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  Init_DistanceSensor_type signal_quality(::px4_msgs::msg::DistanceSensor::_signal_quality_type arg)
  {
    msg_.signal_quality = std::move(arg);
    return Init_DistanceSensor_type(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_variance
{
public:
  explicit Init_DistanceSensor_variance(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  Init_DistanceSensor_signal_quality variance(::px4_msgs::msg::DistanceSensor::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return Init_DistanceSensor_signal_quality(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_current_distance
{
public:
  explicit Init_DistanceSensor_current_distance(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  Init_DistanceSensor_variance current_distance(::px4_msgs::msg::DistanceSensor::_current_distance_type arg)
  {
    msg_.current_distance = std::move(arg);
    return Init_DistanceSensor_variance(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_max_distance
{
public:
  explicit Init_DistanceSensor_max_distance(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  Init_DistanceSensor_current_distance max_distance(::px4_msgs::msg::DistanceSensor::_max_distance_type arg)
  {
    msg_.max_distance = std::move(arg);
    return Init_DistanceSensor_current_distance(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_min_distance
{
public:
  explicit Init_DistanceSensor_min_distance(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  Init_DistanceSensor_max_distance min_distance(::px4_msgs::msg::DistanceSensor::_min_distance_type arg)
  {
    msg_.min_distance = std::move(arg);
    return Init_DistanceSensor_max_distance(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_device_id
{
public:
  explicit Init_DistanceSensor_device_id(::px4_msgs::msg::DistanceSensor & msg)
  : msg_(msg)
  {}
  Init_DistanceSensor_min_distance device_id(::px4_msgs::msg::DistanceSensor::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_DistanceSensor_min_distance(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

class Init_DistanceSensor_timestamp
{
public:
  Init_DistanceSensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DistanceSensor_device_id timestamp(::px4_msgs::msg::DistanceSensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DistanceSensor_device_id(msg_);
  }

private:
  ::px4_msgs::msg::DistanceSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::DistanceSensor>()
{
  return px4_msgs::msg::builder::Init_DistanceSensor_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__BUILDER_HPP_
