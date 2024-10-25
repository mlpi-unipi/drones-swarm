// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleOpticalFlowVel.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW_VEL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW_VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_optical_flow_vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleOpticalFlowVel_ref_gyro
{
public:
  explicit Init_VehicleOpticalFlowVel_ref_gyro(::px4_msgs::msg::VehicleOpticalFlowVel & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleOpticalFlowVel ref_gyro(::px4_msgs::msg::VehicleOpticalFlowVel::_ref_gyro_type arg)
  {
    msg_.ref_gyro = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlowVel msg_;
};

class Init_VehicleOpticalFlowVel_gyro_bias
{
public:
  explicit Init_VehicleOpticalFlowVel_gyro_bias(::px4_msgs::msg::VehicleOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlowVel_ref_gyro gyro_bias(::px4_msgs::msg::VehicleOpticalFlowVel::_gyro_bias_type arg)
  {
    msg_.gyro_bias = std::move(arg);
    return Init_VehicleOpticalFlowVel_ref_gyro(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlowVel msg_;
};

class Init_VehicleOpticalFlowVel_gyro_rate
{
public:
  explicit Init_VehicleOpticalFlowVel_gyro_rate(::px4_msgs::msg::VehicleOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlowVel_gyro_bias gyro_rate(::px4_msgs::msg::VehicleOpticalFlowVel::_gyro_rate_type arg)
  {
    msg_.gyro_rate = std::move(arg);
    return Init_VehicleOpticalFlowVel_gyro_bias(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlowVel msg_;
};

class Init_VehicleOpticalFlowVel_flow_rate_compensated
{
public:
  explicit Init_VehicleOpticalFlowVel_flow_rate_compensated(::px4_msgs::msg::VehicleOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlowVel_gyro_rate flow_rate_compensated(::px4_msgs::msg::VehicleOpticalFlowVel::_flow_rate_compensated_type arg)
  {
    msg_.flow_rate_compensated = std::move(arg);
    return Init_VehicleOpticalFlowVel_gyro_rate(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlowVel msg_;
};

class Init_VehicleOpticalFlowVel_flow_rate_uncompensated
{
public:
  explicit Init_VehicleOpticalFlowVel_flow_rate_uncompensated(::px4_msgs::msg::VehicleOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlowVel_flow_rate_compensated flow_rate_uncompensated(::px4_msgs::msg::VehicleOpticalFlowVel::_flow_rate_uncompensated_type arg)
  {
    msg_.flow_rate_uncompensated = std::move(arg);
    return Init_VehicleOpticalFlowVel_flow_rate_compensated(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlowVel msg_;
};

class Init_VehicleOpticalFlowVel_vel_ne
{
public:
  explicit Init_VehicleOpticalFlowVel_vel_ne(::px4_msgs::msg::VehicleOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlowVel_flow_rate_uncompensated vel_ne(::px4_msgs::msg::VehicleOpticalFlowVel::_vel_ne_type arg)
  {
    msg_.vel_ne = std::move(arg);
    return Init_VehicleOpticalFlowVel_flow_rate_uncompensated(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlowVel msg_;
};

class Init_VehicleOpticalFlowVel_vel_body
{
public:
  explicit Init_VehicleOpticalFlowVel_vel_body(::px4_msgs::msg::VehicleOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlowVel_vel_ne vel_body(::px4_msgs::msg::VehicleOpticalFlowVel::_vel_body_type arg)
  {
    msg_.vel_body = std::move(arg);
    return Init_VehicleOpticalFlowVel_vel_ne(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlowVel msg_;
};

class Init_VehicleOpticalFlowVel_timestamp_sample
{
public:
  explicit Init_VehicleOpticalFlowVel_timestamp_sample(::px4_msgs::msg::VehicleOpticalFlowVel & msg)
  : msg_(msg)
  {}
  Init_VehicleOpticalFlowVel_vel_body timestamp_sample(::px4_msgs::msg::VehicleOpticalFlowVel::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleOpticalFlowVel_vel_body(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlowVel msg_;
};

class Init_VehicleOpticalFlowVel_timestamp
{
public:
  Init_VehicleOpticalFlowVel_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleOpticalFlowVel_timestamp_sample timestamp(::px4_msgs::msg::VehicleOpticalFlowVel::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleOpticalFlowVel_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleOpticalFlowVel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleOpticalFlowVel>()
{
  return px4_msgs::msg::builder::Init_VehicleOpticalFlowVel_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW_VEL__BUILDER_HPP_
