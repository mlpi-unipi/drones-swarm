// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/YawEstimatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/yaw_estimator_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_YawEstimatorStatus_weight
{
public:
  explicit Init_YawEstimatorStatus_weight(::px4_msgs::msg::YawEstimatorStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::YawEstimatorStatus weight(::px4_msgs::msg::YawEstimatorStatus::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::YawEstimatorStatus msg_;
};

class Init_YawEstimatorStatus_innov_ve
{
public:
  explicit Init_YawEstimatorStatus_innov_ve(::px4_msgs::msg::YawEstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_YawEstimatorStatus_weight innov_ve(::px4_msgs::msg::YawEstimatorStatus::_innov_ve_type arg)
  {
    msg_.innov_ve = std::move(arg);
    return Init_YawEstimatorStatus_weight(msg_);
  }

private:
  ::px4_msgs::msg::YawEstimatorStatus msg_;
};

class Init_YawEstimatorStatus_innov_vn
{
public:
  explicit Init_YawEstimatorStatus_innov_vn(::px4_msgs::msg::YawEstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_YawEstimatorStatus_innov_ve innov_vn(::px4_msgs::msg::YawEstimatorStatus::_innov_vn_type arg)
  {
    msg_.innov_vn = std::move(arg);
    return Init_YawEstimatorStatus_innov_ve(msg_);
  }

private:
  ::px4_msgs::msg::YawEstimatorStatus msg_;
};

class Init_YawEstimatorStatus_yaw
{
public:
  explicit Init_YawEstimatorStatus_yaw(::px4_msgs::msg::YawEstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_YawEstimatorStatus_innov_vn yaw(::px4_msgs::msg::YawEstimatorStatus::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_YawEstimatorStatus_innov_vn(msg_);
  }

private:
  ::px4_msgs::msg::YawEstimatorStatus msg_;
};

class Init_YawEstimatorStatus_yaw_composite_valid
{
public:
  explicit Init_YawEstimatorStatus_yaw_composite_valid(::px4_msgs::msg::YawEstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_YawEstimatorStatus_yaw yaw_composite_valid(::px4_msgs::msg::YawEstimatorStatus::_yaw_composite_valid_type arg)
  {
    msg_.yaw_composite_valid = std::move(arg);
    return Init_YawEstimatorStatus_yaw(msg_);
  }

private:
  ::px4_msgs::msg::YawEstimatorStatus msg_;
};

class Init_YawEstimatorStatus_yaw_variance
{
public:
  explicit Init_YawEstimatorStatus_yaw_variance(::px4_msgs::msg::YawEstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_YawEstimatorStatus_yaw_composite_valid yaw_variance(::px4_msgs::msg::YawEstimatorStatus::_yaw_variance_type arg)
  {
    msg_.yaw_variance = std::move(arg);
    return Init_YawEstimatorStatus_yaw_composite_valid(msg_);
  }

private:
  ::px4_msgs::msg::YawEstimatorStatus msg_;
};

class Init_YawEstimatorStatus_yaw_composite
{
public:
  explicit Init_YawEstimatorStatus_yaw_composite(::px4_msgs::msg::YawEstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_YawEstimatorStatus_yaw_variance yaw_composite(::px4_msgs::msg::YawEstimatorStatus::_yaw_composite_type arg)
  {
    msg_.yaw_composite = std::move(arg);
    return Init_YawEstimatorStatus_yaw_variance(msg_);
  }

private:
  ::px4_msgs::msg::YawEstimatorStatus msg_;
};

class Init_YawEstimatorStatus_timestamp_sample
{
public:
  explicit Init_YawEstimatorStatus_timestamp_sample(::px4_msgs::msg::YawEstimatorStatus & msg)
  : msg_(msg)
  {}
  Init_YawEstimatorStatus_yaw_composite timestamp_sample(::px4_msgs::msg::YawEstimatorStatus::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_YawEstimatorStatus_yaw_composite(msg_);
  }

private:
  ::px4_msgs::msg::YawEstimatorStatus msg_;
};

class Init_YawEstimatorStatus_timestamp
{
public:
  Init_YawEstimatorStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawEstimatorStatus_timestamp_sample timestamp(::px4_msgs::msg::YawEstimatorStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_YawEstimatorStatus_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::YawEstimatorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::YawEstimatorStatus>()
{
  return px4_msgs::msg::builder::Init_YawEstimatorStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__BUILDER_HPP_
