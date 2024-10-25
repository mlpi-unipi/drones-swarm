// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/HoverThrustEstimate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/hover_thrust_estimate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_HoverThrustEstimate_valid
{
public:
  explicit Init_HoverThrustEstimate_valid(::px4_msgs::msg::HoverThrustEstimate & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::HoverThrustEstimate valid(::px4_msgs::msg::HoverThrustEstimate::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::HoverThrustEstimate msg_;
};

class Init_HoverThrustEstimate_accel_noise_var
{
public:
  explicit Init_HoverThrustEstimate_accel_noise_var(::px4_msgs::msg::HoverThrustEstimate & msg)
  : msg_(msg)
  {}
  Init_HoverThrustEstimate_valid accel_noise_var(::px4_msgs::msg::HoverThrustEstimate::_accel_noise_var_type arg)
  {
    msg_.accel_noise_var = std::move(arg);
    return Init_HoverThrustEstimate_valid(msg_);
  }

private:
  ::px4_msgs::msg::HoverThrustEstimate msg_;
};

class Init_HoverThrustEstimate_accel_innov_test_ratio
{
public:
  explicit Init_HoverThrustEstimate_accel_innov_test_ratio(::px4_msgs::msg::HoverThrustEstimate & msg)
  : msg_(msg)
  {}
  Init_HoverThrustEstimate_accel_noise_var accel_innov_test_ratio(::px4_msgs::msg::HoverThrustEstimate::_accel_innov_test_ratio_type arg)
  {
    msg_.accel_innov_test_ratio = std::move(arg);
    return Init_HoverThrustEstimate_accel_noise_var(msg_);
  }

private:
  ::px4_msgs::msg::HoverThrustEstimate msg_;
};

class Init_HoverThrustEstimate_accel_innov_var
{
public:
  explicit Init_HoverThrustEstimate_accel_innov_var(::px4_msgs::msg::HoverThrustEstimate & msg)
  : msg_(msg)
  {}
  Init_HoverThrustEstimate_accel_innov_test_ratio accel_innov_var(::px4_msgs::msg::HoverThrustEstimate::_accel_innov_var_type arg)
  {
    msg_.accel_innov_var = std::move(arg);
    return Init_HoverThrustEstimate_accel_innov_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::HoverThrustEstimate msg_;
};

class Init_HoverThrustEstimate_accel_innov
{
public:
  explicit Init_HoverThrustEstimate_accel_innov(::px4_msgs::msg::HoverThrustEstimate & msg)
  : msg_(msg)
  {}
  Init_HoverThrustEstimate_accel_innov_var accel_innov(::px4_msgs::msg::HoverThrustEstimate::_accel_innov_type arg)
  {
    msg_.accel_innov = std::move(arg);
    return Init_HoverThrustEstimate_accel_innov_var(msg_);
  }

private:
  ::px4_msgs::msg::HoverThrustEstimate msg_;
};

class Init_HoverThrustEstimate_hover_thrust_var
{
public:
  explicit Init_HoverThrustEstimate_hover_thrust_var(::px4_msgs::msg::HoverThrustEstimate & msg)
  : msg_(msg)
  {}
  Init_HoverThrustEstimate_accel_innov hover_thrust_var(::px4_msgs::msg::HoverThrustEstimate::_hover_thrust_var_type arg)
  {
    msg_.hover_thrust_var = std::move(arg);
    return Init_HoverThrustEstimate_accel_innov(msg_);
  }

private:
  ::px4_msgs::msg::HoverThrustEstimate msg_;
};

class Init_HoverThrustEstimate_hover_thrust
{
public:
  explicit Init_HoverThrustEstimate_hover_thrust(::px4_msgs::msg::HoverThrustEstimate & msg)
  : msg_(msg)
  {}
  Init_HoverThrustEstimate_hover_thrust_var hover_thrust(::px4_msgs::msg::HoverThrustEstimate::_hover_thrust_type arg)
  {
    msg_.hover_thrust = std::move(arg);
    return Init_HoverThrustEstimate_hover_thrust_var(msg_);
  }

private:
  ::px4_msgs::msg::HoverThrustEstimate msg_;
};

class Init_HoverThrustEstimate_timestamp_sample
{
public:
  explicit Init_HoverThrustEstimate_timestamp_sample(::px4_msgs::msg::HoverThrustEstimate & msg)
  : msg_(msg)
  {}
  Init_HoverThrustEstimate_hover_thrust timestamp_sample(::px4_msgs::msg::HoverThrustEstimate::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_HoverThrustEstimate_hover_thrust(msg_);
  }

private:
  ::px4_msgs::msg::HoverThrustEstimate msg_;
};

class Init_HoverThrustEstimate_timestamp
{
public:
  Init_HoverThrustEstimate_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HoverThrustEstimate_timestamp_sample timestamp(::px4_msgs::msg::HoverThrustEstimate::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_HoverThrustEstimate_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::HoverThrustEstimate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::HoverThrustEstimate>()
{
  return px4_msgs::msg::builder::Init_HoverThrustEstimate_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__BUILDER_HPP_
