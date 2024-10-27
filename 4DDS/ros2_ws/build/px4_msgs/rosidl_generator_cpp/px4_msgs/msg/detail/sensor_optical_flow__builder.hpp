// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorOpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_OPTICAL_FLOW__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_OPTICAL_FLOW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_optical_flow__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorOpticalFlow_mode
{
public:
  explicit Init_SensorOpticalFlow_mode(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorOpticalFlow mode(::px4_msgs::msg::SensorOpticalFlow::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_max_ground_distance
{
public:
  explicit Init_SensorOpticalFlow_max_ground_distance(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_mode max_ground_distance(::px4_msgs::msg::SensorOpticalFlow::_max_ground_distance_type arg)
  {
    msg_.max_ground_distance = std::move(arg);
    return Init_SensorOpticalFlow_mode(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_min_ground_distance
{
public:
  explicit Init_SensorOpticalFlow_min_ground_distance(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_max_ground_distance min_ground_distance(::px4_msgs::msg::SensorOpticalFlow::_min_ground_distance_type arg)
  {
    msg_.min_ground_distance = std::move(arg);
    return Init_SensorOpticalFlow_max_ground_distance(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_max_flow_rate
{
public:
  explicit Init_SensorOpticalFlow_max_flow_rate(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_min_ground_distance max_flow_rate(::px4_msgs::msg::SensorOpticalFlow::_max_flow_rate_type arg)
  {
    msg_.max_flow_rate = std::move(arg);
    return Init_SensorOpticalFlow_min_ground_distance(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_error_count
{
public:
  explicit Init_SensorOpticalFlow_error_count(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_max_flow_rate error_count(::px4_msgs::msg::SensorOpticalFlow::_error_count_type arg)
  {
    msg_.error_count = std::move(arg);
    return Init_SensorOpticalFlow_max_flow_rate(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_quality
{
public:
  explicit Init_SensorOpticalFlow_quality(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_error_count quality(::px4_msgs::msg::SensorOpticalFlow::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return Init_SensorOpticalFlow_error_count(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_integration_timespan_us
{
public:
  explicit Init_SensorOpticalFlow_integration_timespan_us(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_quality integration_timespan_us(::px4_msgs::msg::SensorOpticalFlow::_integration_timespan_us_type arg)
  {
    msg_.integration_timespan_us = std::move(arg);
    return Init_SensorOpticalFlow_quality(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_distance_available
{
public:
  explicit Init_SensorOpticalFlow_distance_available(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_integration_timespan_us distance_available(::px4_msgs::msg::SensorOpticalFlow::_distance_available_type arg)
  {
    msg_.distance_available = std::move(arg);
    return Init_SensorOpticalFlow_integration_timespan_us(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_distance_m
{
public:
  explicit Init_SensorOpticalFlow_distance_m(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_distance_available distance_m(::px4_msgs::msg::SensorOpticalFlow::_distance_m_type arg)
  {
    msg_.distance_m = std::move(arg);
    return Init_SensorOpticalFlow_distance_available(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_delta_angle_available
{
public:
  explicit Init_SensorOpticalFlow_delta_angle_available(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_distance_m delta_angle_available(::px4_msgs::msg::SensorOpticalFlow::_delta_angle_available_type arg)
  {
    msg_.delta_angle_available = std::move(arg);
    return Init_SensorOpticalFlow_distance_m(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_delta_angle
{
public:
  explicit Init_SensorOpticalFlow_delta_angle(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_delta_angle_available delta_angle(::px4_msgs::msg::SensorOpticalFlow::_delta_angle_type arg)
  {
    msg_.delta_angle = std::move(arg);
    return Init_SensorOpticalFlow_delta_angle_available(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_pixel_flow
{
public:
  explicit Init_SensorOpticalFlow_pixel_flow(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_delta_angle pixel_flow(::px4_msgs::msg::SensorOpticalFlow::_pixel_flow_type arg)
  {
    msg_.pixel_flow = std::move(arg);
    return Init_SensorOpticalFlow_delta_angle(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_device_id
{
public:
  explicit Init_SensorOpticalFlow_device_id(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_pixel_flow device_id(::px4_msgs::msg::SensorOpticalFlow::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SensorOpticalFlow_pixel_flow(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_timestamp_sample
{
public:
  explicit Init_SensorOpticalFlow_timestamp_sample(::px4_msgs::msg::SensorOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_SensorOpticalFlow_device_id timestamp_sample(::px4_msgs::msg::SensorOpticalFlow::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_SensorOpticalFlow_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

class Init_SensorOpticalFlow_timestamp
{
public:
  Init_SensorOpticalFlow_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorOpticalFlow_timestamp_sample timestamp(::px4_msgs::msg::SensorOpticalFlow::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorOpticalFlow_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::SensorOpticalFlow msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorOpticalFlow>()
{
  return px4_msgs::msg::builder::Init_SensorOpticalFlow_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_OPTICAL_FLOW__BUILDER_HPP_
