// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GimbalManagerSetManualControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/gimbal_manager_set_manual_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalManagerSetManualControl_yaw_rate
{
public:
  explicit Init_GimbalManagerSetManualControl_yaw_rate(::px4_msgs::msg::GimbalManagerSetManualControl & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GimbalManagerSetManualControl yaw_rate(::px4_msgs::msg::GimbalManagerSetManualControl::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

class Init_GimbalManagerSetManualControl_pitch_rate
{
public:
  explicit Init_GimbalManagerSetManualControl_pitch_rate(::px4_msgs::msg::GimbalManagerSetManualControl & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerSetManualControl_yaw_rate pitch_rate(::px4_msgs::msg::GimbalManagerSetManualControl::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_GimbalManagerSetManualControl_yaw_rate(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

class Init_GimbalManagerSetManualControl_yaw
{
public:
  explicit Init_GimbalManagerSetManualControl_yaw(::px4_msgs::msg::GimbalManagerSetManualControl & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerSetManualControl_pitch_rate yaw(::px4_msgs::msg::GimbalManagerSetManualControl::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GimbalManagerSetManualControl_pitch_rate(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

class Init_GimbalManagerSetManualControl_pitch
{
public:
  explicit Init_GimbalManagerSetManualControl_pitch(::px4_msgs::msg::GimbalManagerSetManualControl & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerSetManualControl_yaw pitch(::px4_msgs::msg::GimbalManagerSetManualControl::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_GimbalManagerSetManualControl_yaw(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

class Init_GimbalManagerSetManualControl_gimbal_device_id
{
public:
  explicit Init_GimbalManagerSetManualControl_gimbal_device_id(::px4_msgs::msg::GimbalManagerSetManualControl & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerSetManualControl_pitch gimbal_device_id(::px4_msgs::msg::GimbalManagerSetManualControl::_gimbal_device_id_type arg)
  {
    msg_.gimbal_device_id = std::move(arg);
    return Init_GimbalManagerSetManualControl_pitch(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

class Init_GimbalManagerSetManualControl_flags
{
public:
  explicit Init_GimbalManagerSetManualControl_flags(::px4_msgs::msg::GimbalManagerSetManualControl & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerSetManualControl_gimbal_device_id flags(::px4_msgs::msg::GimbalManagerSetManualControl::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_GimbalManagerSetManualControl_gimbal_device_id(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

class Init_GimbalManagerSetManualControl_target_component
{
public:
  explicit Init_GimbalManagerSetManualControl_target_component(::px4_msgs::msg::GimbalManagerSetManualControl & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerSetManualControl_flags target_component(::px4_msgs::msg::GimbalManagerSetManualControl::_target_component_type arg)
  {
    msg_.target_component = std::move(arg);
    return Init_GimbalManagerSetManualControl_flags(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

class Init_GimbalManagerSetManualControl_target_system
{
public:
  explicit Init_GimbalManagerSetManualControl_target_system(::px4_msgs::msg::GimbalManagerSetManualControl & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerSetManualControl_target_component target_system(::px4_msgs::msg::GimbalManagerSetManualControl::_target_system_type arg)
  {
    msg_.target_system = std::move(arg);
    return Init_GimbalManagerSetManualControl_target_component(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

class Init_GimbalManagerSetManualControl_origin_compid
{
public:
  explicit Init_GimbalManagerSetManualControl_origin_compid(::px4_msgs::msg::GimbalManagerSetManualControl & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerSetManualControl_target_system origin_compid(::px4_msgs::msg::GimbalManagerSetManualControl::_origin_compid_type arg)
  {
    msg_.origin_compid = std::move(arg);
    return Init_GimbalManagerSetManualControl_target_system(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

class Init_GimbalManagerSetManualControl_origin_sysid
{
public:
  explicit Init_GimbalManagerSetManualControl_origin_sysid(::px4_msgs::msg::GimbalManagerSetManualControl & msg)
  : msg_(msg)
  {}
  Init_GimbalManagerSetManualControl_origin_compid origin_sysid(::px4_msgs::msg::GimbalManagerSetManualControl::_origin_sysid_type arg)
  {
    msg_.origin_sysid = std::move(arg);
    return Init_GimbalManagerSetManualControl_origin_compid(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

class Init_GimbalManagerSetManualControl_timestamp
{
public:
  Init_GimbalManagerSetManualControl_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalManagerSetManualControl_origin_sysid timestamp(::px4_msgs::msg::GimbalManagerSetManualControl::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GimbalManagerSetManualControl_origin_sysid(msg_);
  }

private:
  ::px4_msgs::msg::GimbalManagerSetManualControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GimbalManagerSetManualControl>()
{
  return px4_msgs::msg::builder::Init_GimbalManagerSetManualControl_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__BUILDER_HPP_
