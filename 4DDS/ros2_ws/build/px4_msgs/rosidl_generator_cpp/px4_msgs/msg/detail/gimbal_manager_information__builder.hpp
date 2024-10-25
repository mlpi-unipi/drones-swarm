// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GimbalManagerInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/gimbal_manager_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalManagerInformation_yaw_max
{
public:
  explicit Init_GimbalManagerInformation_yaw_max(::px4_msgs::msg::GimbalManagerInformation & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GimbalManagerInformation yaw_max(::px4_msgs::msg::GimbalManagerInformation::_yaw_max_type arg)
  {
    msg_.yaw_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerInformation msg_;
};

class Init_GimbalManagerInformation_yaw_min
{
public:
  explicit Init_GimbalManagerInformation_yaw_min(::px4_msgs::msg::GimbalManagerInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerInformation_yaw_max yaw_min(::px4_msgs::msg::GimbalManagerInformation::_yaw_min_type arg)
  {
    msg_.yaw_min = std::move(arg);
    return Init_GimbalManagerInformation_yaw_max(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerInformation msg_;
};

class Init_GimbalManagerInformation_pitch_max
{
public:
  explicit Init_GimbalManagerInformation_pitch_max(::px4_msgs::msg::GimbalManagerInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerInformation_yaw_min pitch_max(::px4_msgs::msg::GimbalManagerInformation::_pitch_max_type arg)
  {
    msg_.pitch_max = std::move(arg);
    return Init_GimbalManagerInformation_yaw_min(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerInformation msg_;
};

class Init_GimbalManagerInformation_pitch_min
{
public:
  explicit Init_GimbalManagerInformation_pitch_min(::px4_msgs::msg::GimbalManagerInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerInformation_pitch_max pitch_min(::px4_msgs::msg::GimbalManagerInformation::_pitch_min_type arg)
  {
    msg_.pitch_min = std::move(arg);
    return Init_GimbalManagerInformation_pitch_max(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerInformation msg_;
};

class Init_GimbalManagerInformation_roll_max
{
public:
  explicit Init_GimbalManagerInformation_roll_max(::px4_msgs::msg::GimbalManagerInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerInformation_pitch_min roll_max(::px4_msgs::msg::GimbalManagerInformation::_roll_max_type arg)
  {
    msg_.roll_max = std::move(arg);
    return Init_GimbalManagerInformation_pitch_min(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerInformation msg_;
};

class Init_GimbalManagerInformation_roll_min
{
public:
  explicit Init_GimbalManagerInformation_roll_min(::px4_msgs::msg::GimbalManagerInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerInformation_roll_max roll_min(::px4_msgs::msg::GimbalManagerInformation::_roll_min_type arg)
  {
    msg_.roll_min = std::move(arg);
    return Init_GimbalManagerInformation_roll_max(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerInformation msg_;
};

class Init_GimbalManagerInformation_gimbal_device_id
{
public:
  explicit Init_GimbalManagerInformation_gimbal_device_id(::px4_msgs::msg::GimbalManagerInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerInformation_roll_min gimbal_device_id(::px4_msgs::msg::GimbalManagerInformation::_gimbal_device_id_type arg)
  {
    msg_.gimbal_device_id = std::move(arg);
    return Init_GimbalManagerInformation_roll_min(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerInformation msg_;
};

class Init_GimbalManagerInformation_cap_flags
{
public:
  explicit Init_GimbalManagerInformation_cap_flags(::px4_msgs::msg::GimbalManagerInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerInformation_gimbal_device_id cap_flags(::px4_msgs::msg::GimbalManagerInformation::_cap_flags_type arg)
  {
    msg_.cap_flags = std::move(arg);
    return Init_GimbalManagerInformation_gimbal_device_id(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerInformation msg_;
};

class Init_GimbalManagerInformation_timestamp
{
public:
  Init_GimbalManagerInformation_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalManagerInformation_cap_flags timestamp(::px4_msgs::msg::GimbalManagerInformation::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GimbalManagerInformation_cap_flags(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GimbalManagerInformation>()
{
  return px4_msgs::msg::builder::Init_GimbalManagerInformation_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__BUILDER_HPP_
