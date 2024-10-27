// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RateCtrlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/rate_ctrl_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RateCtrlStatus_wheel_rate_integ
{
public:
  explicit Init_RateCtrlStatus_wheel_rate_integ(::px4_msgs::msg::RateCtrlStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RateCtrlStatus wheel_rate_integ(::px4_msgs::msg::RateCtrlStatus::_wheel_rate_integ_type arg)
  {
    msg_.wheel_rate_integ = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RateCtrlStatus msg_;
};

class Init_RateCtrlStatus_yawspeed_integ
{
public:
  explicit Init_RateCtrlStatus_yawspeed_integ(::px4_msgs::msg::RateCtrlStatus & msg)
  : msg_(msg)
  {}
  Init_RateCtrlStatus_wheel_rate_integ yawspeed_integ(::px4_msgs::msg::RateCtrlStatus::_yawspeed_integ_type arg)
  {
    msg_.yawspeed_integ = std::move(arg);
    return Init_RateCtrlStatus_wheel_rate_integ(msg_);
  }

private:
  ::px4_msgs::msg::RateCtrlStatus msg_;
};

class Init_RateCtrlStatus_pitchspeed_integ
{
public:
  explicit Init_RateCtrlStatus_pitchspeed_integ(::px4_msgs::msg::RateCtrlStatus & msg)
  : msg_(msg)
  {}
  Init_RateCtrlStatus_yawspeed_integ pitchspeed_integ(::px4_msgs::msg::RateCtrlStatus::_pitchspeed_integ_type arg)
  {
    msg_.pitchspeed_integ = std::move(arg);
    return Init_RateCtrlStatus_yawspeed_integ(msg_);
  }

private:
  ::px4_msgs::msg::RateCtrlStatus msg_;
};

class Init_RateCtrlStatus_rollspeed_integ
{
public:
  explicit Init_RateCtrlStatus_rollspeed_integ(::px4_msgs::msg::RateCtrlStatus & msg)
  : msg_(msg)
  {}
  Init_RateCtrlStatus_pitchspeed_integ rollspeed_integ(::px4_msgs::msg::RateCtrlStatus::_rollspeed_integ_type arg)
  {
    msg_.rollspeed_integ = std::move(arg);
    return Init_RateCtrlStatus_pitchspeed_integ(msg_);
  }

private:
  ::px4_msgs::msg::RateCtrlStatus msg_;
};

class Init_RateCtrlStatus_timestamp
{
public:
  Init_RateCtrlStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RateCtrlStatus_rollspeed_integ timestamp(::px4_msgs::msg::RateCtrlStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RateCtrlStatus_rollspeed_integ(msg_);
  }

private:
  ::px4_msgs::msg::RateCtrlStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RateCtrlStatus>()
{
  return px4_msgs::msg::builder::Init_RateCtrlStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__BUILDER_HPP_
