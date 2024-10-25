// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorBias.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_bias__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorBias_innov_test_ratio
{
public:
  explicit Init_EstimatorBias_innov_test_ratio(::px4_msgs::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorBias innov_test_ratio(::px4_msgs::msg::EstimatorBias::_innov_test_ratio_type arg)
  {
    msg_.innov_test_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_innov_var
{
public:
  explicit Init_EstimatorBias_innov_var(::px4_msgs::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_innov_test_ratio innov_var(::px4_msgs::msg::EstimatorBias::_innov_var_type arg)
  {
    msg_.innov_var = std::move(arg);
    return Init_EstimatorBias_innov_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_innov
{
public:
  explicit Init_EstimatorBias_innov(::px4_msgs::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_innov_var innov(::px4_msgs::msg::EstimatorBias::_innov_type arg)
  {
    msg_.innov = std::move(arg);
    return Init_EstimatorBias_innov_var(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_bias_var
{
public:
  explicit Init_EstimatorBias_bias_var(::px4_msgs::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_innov bias_var(::px4_msgs::msg::EstimatorBias::_bias_var_type arg)
  {
    msg_.bias_var = std::move(arg);
    return Init_EstimatorBias_innov(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_bias
{
public:
  explicit Init_EstimatorBias_bias(::px4_msgs::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_bias_var bias(::px4_msgs::msg::EstimatorBias::_bias_type arg)
  {
    msg_.bias = std::move(arg);
    return Init_EstimatorBias_bias_var(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_device_id
{
public:
  explicit Init_EstimatorBias_device_id(::px4_msgs::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_bias device_id(::px4_msgs::msg::EstimatorBias::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_EstimatorBias_bias(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_timestamp_sample
{
public:
  explicit Init_EstimatorBias_timestamp_sample(::px4_msgs::msg::EstimatorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorBias_device_id timestamp_sample(::px4_msgs::msg::EstimatorBias::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorBias_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorBias msg_;
};

class Init_EstimatorBias_timestamp
{
public:
  Init_EstimatorBias_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorBias_timestamp_sample timestamp(::px4_msgs::msg::EstimatorBias::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorBias_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorBias msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorBias>()
{
  return px4_msgs::msg::builder::Init_EstimatorBias_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS__BUILDER_HPP_
