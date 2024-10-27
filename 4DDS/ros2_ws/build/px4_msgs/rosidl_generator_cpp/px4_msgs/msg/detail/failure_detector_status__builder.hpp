// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FailureDetectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/failure_detector_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FailureDetectorStatus_motor_failure_mask
{
public:
  explicit Init_FailureDetectorStatus_motor_failure_mask(::px4_msgs::msg::FailureDetectorStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FailureDetectorStatus motor_failure_mask(::px4_msgs::msg::FailureDetectorStatus::_motor_failure_mask_type arg)
  {
    msg_.motor_failure_mask = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

class Init_FailureDetectorStatus_imbalanced_prop_metric
{
public:
  explicit Init_FailureDetectorStatus_imbalanced_prop_metric(::px4_msgs::msg::FailureDetectorStatus & msg)
  : msg_(msg)
  {}
  Init_FailureDetectorStatus_motor_failure_mask imbalanced_prop_metric(::px4_msgs::msg::FailureDetectorStatus::_imbalanced_prop_metric_type arg)
  {
    msg_.imbalanced_prop_metric = std::move(arg);
    return Init_FailureDetectorStatus_motor_failure_mask(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

class Init_FailureDetectorStatus_fd_motor
{
public:
  explicit Init_FailureDetectorStatus_fd_motor(::px4_msgs::msg::FailureDetectorStatus & msg)
  : msg_(msg)
  {}
  Init_FailureDetectorStatus_imbalanced_prop_metric fd_motor(::px4_msgs::msg::FailureDetectorStatus::_fd_motor_type arg)
  {
    msg_.fd_motor = std::move(arg);
    return Init_FailureDetectorStatus_imbalanced_prop_metric(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

class Init_FailureDetectorStatus_fd_imbalanced_prop
{
public:
  explicit Init_FailureDetectorStatus_fd_imbalanced_prop(::px4_msgs::msg::FailureDetectorStatus & msg)
  : msg_(msg)
  {}
  Init_FailureDetectorStatus_fd_motor fd_imbalanced_prop(::px4_msgs::msg::FailureDetectorStatus::_fd_imbalanced_prop_type arg)
  {
    msg_.fd_imbalanced_prop = std::move(arg);
    return Init_FailureDetectorStatus_fd_motor(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

class Init_FailureDetectorStatus_fd_battery
{
public:
  explicit Init_FailureDetectorStatus_fd_battery(::px4_msgs::msg::FailureDetectorStatus & msg)
  : msg_(msg)
  {}
  Init_FailureDetectorStatus_fd_imbalanced_prop fd_battery(::px4_msgs::msg::FailureDetectorStatus::_fd_battery_type arg)
  {
    msg_.fd_battery = std::move(arg);
    return Init_FailureDetectorStatus_fd_imbalanced_prop(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

class Init_FailureDetectorStatus_fd_arm_escs
{
public:
  explicit Init_FailureDetectorStatus_fd_arm_escs(::px4_msgs::msg::FailureDetectorStatus & msg)
  : msg_(msg)
  {}
  Init_FailureDetectorStatus_fd_battery fd_arm_escs(::px4_msgs::msg::FailureDetectorStatus::_fd_arm_escs_type arg)
  {
    msg_.fd_arm_escs = std::move(arg);
    return Init_FailureDetectorStatus_fd_battery(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

class Init_FailureDetectorStatus_fd_ext
{
public:
  explicit Init_FailureDetectorStatus_fd_ext(::px4_msgs::msg::FailureDetectorStatus & msg)
  : msg_(msg)
  {}
  Init_FailureDetectorStatus_fd_arm_escs fd_ext(::px4_msgs::msg::FailureDetectorStatus::_fd_ext_type arg)
  {
    msg_.fd_ext = std::move(arg);
    return Init_FailureDetectorStatus_fd_arm_escs(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

class Init_FailureDetectorStatus_fd_alt
{
public:
  explicit Init_FailureDetectorStatus_fd_alt(::px4_msgs::msg::FailureDetectorStatus & msg)
  : msg_(msg)
  {}
  Init_FailureDetectorStatus_fd_ext fd_alt(::px4_msgs::msg::FailureDetectorStatus::_fd_alt_type arg)
  {
    msg_.fd_alt = std::move(arg);
    return Init_FailureDetectorStatus_fd_ext(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

class Init_FailureDetectorStatus_fd_pitch
{
public:
  explicit Init_FailureDetectorStatus_fd_pitch(::px4_msgs::msg::FailureDetectorStatus & msg)
  : msg_(msg)
  {}
  Init_FailureDetectorStatus_fd_alt fd_pitch(::px4_msgs::msg::FailureDetectorStatus::_fd_pitch_type arg)
  {
    msg_.fd_pitch = std::move(arg);
    return Init_FailureDetectorStatus_fd_alt(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

class Init_FailureDetectorStatus_fd_roll
{
public:
  explicit Init_FailureDetectorStatus_fd_roll(::px4_msgs::msg::FailureDetectorStatus & msg)
  : msg_(msg)
  {}
  Init_FailureDetectorStatus_fd_pitch fd_roll(::px4_msgs::msg::FailureDetectorStatus::_fd_roll_type arg)
  {
    msg_.fd_roll = std::move(arg);
    return Init_FailureDetectorStatus_fd_pitch(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

class Init_FailureDetectorStatus_timestamp
{
public:
  Init_FailureDetectorStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FailureDetectorStatus_fd_roll timestamp(::px4_msgs::msg::FailureDetectorStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FailureDetectorStatus_fd_roll(msg_);
  }

private:
  ::px4_msgs::msg::FailureDetectorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FailureDetectorStatus>()
{
  return px4_msgs::msg::builder::Init_FailureDetectorStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__BUILDER_HPP_
