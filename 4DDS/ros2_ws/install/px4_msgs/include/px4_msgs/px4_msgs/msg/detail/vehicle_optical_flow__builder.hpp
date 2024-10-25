// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleOpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_optical_flow__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleOpticalFlow_max_ground_distance
{
public:
  explicit Init_VehicleOpticalFlow_max_ground_distance(::px4_msgs::msg::VehicleOpticalFlow & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleOpticalFlow max_ground_distance(::px4_msgs::msg::VehicleOpticalFlow::_max_ground_distance_type arg)
  {
    msg_.max_ground_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

class Init_VehicleOpticalFlow_min_ground_distance
{
public:
  explicit Init_VehicleOpticalFlow_min_ground_distance(::px4_msgs::msg::VehicleOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlow_max_ground_distance min_ground_distance(::px4_msgs::msg::VehicleOpticalFlow::_min_ground_distance_type arg)
  {
    msg_.min_ground_distance = std::move(arg);
    return Init_VehicleOpticalFlow_max_ground_distance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

class Init_VehicleOpticalFlow_max_flow_rate
{
public:
  explicit Init_VehicleOpticalFlow_max_flow_rate(::px4_msgs::msg::VehicleOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlow_min_ground_distance max_flow_rate(::px4_msgs::msg::VehicleOpticalFlow::_max_flow_rate_type arg)
  {
    msg_.max_flow_rate = std::move(arg);
    return Init_VehicleOpticalFlow_min_ground_distance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

class Init_VehicleOpticalFlow_quality
{
public:
  explicit Init_VehicleOpticalFlow_quality(::px4_msgs::msg::VehicleOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlow_max_flow_rate quality(::px4_msgs::msg::VehicleOpticalFlow::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return Init_VehicleOpticalFlow_max_flow_rate(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

class Init_VehicleOpticalFlow_integration_timespan_us
{
public:
  explicit Init_VehicleOpticalFlow_integration_timespan_us(::px4_msgs::msg::VehicleOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlow_quality integration_timespan_us(::px4_msgs::msg::VehicleOpticalFlow::_integration_timespan_us_type arg)
  {
    msg_.integration_timespan_us = std::move(arg);
    return Init_VehicleOpticalFlow_quality(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

class Init_VehicleOpticalFlow_distance_m
{
public:
  explicit Init_VehicleOpticalFlow_distance_m(::px4_msgs::msg::VehicleOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlow_integration_timespan_us distance_m(::px4_msgs::msg::VehicleOpticalFlow::_distance_m_type arg)
  {
    msg_.distance_m = std::move(arg);
    return Init_VehicleOpticalFlow_integration_timespan_us(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

class Init_VehicleOpticalFlow_delta_angle
{
public:
  explicit Init_VehicleOpticalFlow_delta_angle(::px4_msgs::msg::VehicleOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlow_distance_m delta_angle(::px4_msgs::msg::VehicleOpticalFlow::_delta_angle_type arg)
  {
    msg_.delta_angle = std::move(arg);
    return Init_VehicleOpticalFlow_distance_m(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

class Init_VehicleOpticalFlow_pixel_flow
{
public:
  explicit Init_VehicleOpticalFlow_pixel_flow(::px4_msgs::msg::VehicleOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlow_delta_angle pixel_flow(::px4_msgs::msg::VehicleOpticalFlow::_pixel_flow_type arg)
  {
    msg_.pixel_flow = std::move(arg);
    return Init_VehicleOpticalFlow_delta_angle(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

class Init_VehicleOpticalFlow_device_id
{
public:
  explicit Init_VehicleOpticalFlow_device_id(::px4_msgs::msg::VehicleOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlow_pixel_flow device_id(::px4_msgs::msg::VehicleOpticalFlow::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_VehicleOpticalFlow_pixel_flow(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

class Init_VehicleOpticalFlow_timestamp_sample
{
public:
  explicit Init_VehicleOpticalFlow_timestamp_sample(::px4_msgs::msg::VehicleOpticalFlow & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlow_device_id timestamp_sample(::px4_msgs::msg::VehicleOpticalFlow::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleOpticalFlow_device_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

class Init_VehicleOpticalFlow_timestamp
{
public:
  Init_VehicleOpticalFlow_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleOpticalFlow_timestamp_sample timestamp(::px4_msgs::msg::VehicleOpticalFlow::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleOpticalFlow_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlow msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleOpticalFlow>()
{
  return px4_msgs::msg::builder::Init_VehicleOpticalFlow_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__BUILDER_HPP_
