// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FollowTargetEstimator.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/follow_target_estimator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FollowTargetEstimator_fusion_count
{
public:
  explicit Init_FollowTargetEstimator_fusion_count(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FollowTargetEstimator fusion_count(::px4_msgs::msg::FollowTargetEstimator::_fusion_count_type arg)
  {
    msg_.fusion_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_prediction_count
{
public:
  explicit Init_FollowTargetEstimator_prediction_count(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  Init_FollowTargetEstimator_fusion_count prediction_count(::px4_msgs::msg::FollowTargetEstimator::_prediction_count_type arg)
  {
    msg_.prediction_count = std::move(arg);
    return Init_FollowTargetEstimator_fusion_count(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_acc_est
{
public:
  explicit Init_FollowTargetEstimator_acc_est(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  Init_FollowTargetEstimator_prediction_count acc_est(::px4_msgs::msg::FollowTargetEstimator::_acc_est_type arg)
  {
    msg_.acc_est = std::move(arg);
    return Init_FollowTargetEstimator_prediction_count(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_vel_est
{
public:
  explicit Init_FollowTargetEstimator_vel_est(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  Init_FollowTargetEstimator_acc_est vel_est(::px4_msgs::msg::FollowTargetEstimator::_vel_est_type arg)
  {
    msg_.vel_est = std::move(arg);
    return Init_FollowTargetEstimator_acc_est(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_pos_est
{
public:
  explicit Init_FollowTargetEstimator_pos_est(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  Init_FollowTargetEstimator_vel_est pos_est(::px4_msgs::msg::FollowTargetEstimator::_pos_est_type arg)
  {
    msg_.pos_est = std::move(arg);
    return Init_FollowTargetEstimator_vel_est(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_alt_est
{
public:
  explicit Init_FollowTargetEstimator_alt_est(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  Init_FollowTargetEstimator_pos_est alt_est(::px4_msgs::msg::FollowTargetEstimator::_alt_est_type arg)
  {
    msg_.alt_est = std::move(arg);
    return Init_FollowTargetEstimator_pos_est(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_lon_est
{
public:
  explicit Init_FollowTargetEstimator_lon_est(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  Init_FollowTargetEstimator_alt_est lon_est(::px4_msgs::msg::FollowTargetEstimator::_lon_est_type arg)
  {
    msg_.lon_est = std::move(arg);
    return Init_FollowTargetEstimator_alt_est(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_lat_est
{
public:
  explicit Init_FollowTargetEstimator_lat_est(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  Init_FollowTargetEstimator_lon_est lat_est(::px4_msgs::msg::FollowTargetEstimator::_lat_est_type arg)
  {
    msg_.lat_est = std::move(arg);
    return Init_FollowTargetEstimator_lon_est(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_stale
{
public:
  explicit Init_FollowTargetEstimator_stale(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  Init_FollowTargetEstimator_lat_est stale(::px4_msgs::msg::FollowTargetEstimator::_stale_type arg)
  {
    msg_.stale = std::move(arg);
    return Init_FollowTargetEstimator_lat_est(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_valid
{
public:
  explicit Init_FollowTargetEstimator_valid(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  Init_FollowTargetEstimator_stale valid(::px4_msgs::msg::FollowTargetEstimator::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_FollowTargetEstimator_stale(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_last_filter_reset_timestamp
{
public:
  explicit Init_FollowTargetEstimator_last_filter_reset_timestamp(::px4_msgs::msg::FollowTargetEstimator & msg)
  : msg_(msg)
  {}
  Init_FollowTargetEstimator_valid last_filter_reset_timestamp(::px4_msgs::msg::FollowTargetEstimator::_last_filter_reset_timestamp_type arg)
  {
    msg_.last_filter_reset_timestamp = std::move(arg);
    return Init_FollowTargetEstimator_valid(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

class Init_FollowTargetEstimator_timestamp
{
public:
  Init_FollowTargetEstimator_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowTargetEstimator_last_filter_reset_timestamp timestamp(::px4_msgs::msg::FollowTargetEstimator::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FollowTargetEstimator_last_filter_reset_timestamp(msg_);
  }

private:
  ::px4_msgs::msg::FollowTargetEstimator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FollowTargetEstimator>()
{
  return px4_msgs::msg::builder::Init_FollowTargetEstimator_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__BUILDER_HPP_
