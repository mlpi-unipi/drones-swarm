// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GimbalDeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/gimbal_device_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalDeviceInformation_gimbal_device_compid
{
public:
  explicit Init_GimbalDeviceInformation_gimbal_device_compid(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GimbalDeviceInformation gimbal_device_compid(::px4_msgs::msg::GimbalDeviceInformation::_gimbal_device_compid_type arg)
  {
    msg_.gimbal_device_compid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_yaw_max
{
public:
  explicit Init_GimbalDeviceInformation_yaw_max(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_gimbal_device_compid yaw_max(::px4_msgs::msg::GimbalDeviceInformation::_yaw_max_type arg)
  {
    msg_.yaw_max = std::move(arg);
    return Init_GimbalDeviceInformation_gimbal_device_compid(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_yaw_min
{
public:
  explicit Init_GimbalDeviceInformation_yaw_min(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_yaw_max yaw_min(::px4_msgs::msg::GimbalDeviceInformation::_yaw_min_type arg)
  {
    msg_.yaw_min = std::move(arg);
    return Init_GimbalDeviceInformation_yaw_max(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_pitch_max
{
public:
  explicit Init_GimbalDeviceInformation_pitch_max(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_yaw_min pitch_max(::px4_msgs::msg::GimbalDeviceInformation::_pitch_max_type arg)
  {
    msg_.pitch_max = std::move(arg);
    return Init_GimbalDeviceInformation_yaw_min(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_pitch_min
{
public:
  explicit Init_GimbalDeviceInformation_pitch_min(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_pitch_max pitch_min(::px4_msgs::msg::GimbalDeviceInformation::_pitch_min_type arg)
  {
    msg_.pitch_min = std::move(arg);
    return Init_GimbalDeviceInformation_pitch_max(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_roll_max
{
public:
  explicit Init_GimbalDeviceInformation_roll_max(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_pitch_min roll_max(::px4_msgs::msg::GimbalDeviceInformation::_roll_max_type arg)
  {
    msg_.roll_max = std::move(arg);
    return Init_GimbalDeviceInformation_pitch_min(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_roll_min
{
public:
  explicit Init_GimbalDeviceInformation_roll_min(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_roll_max roll_min(::px4_msgs::msg::GimbalDeviceInformation::_roll_min_type arg)
  {
    msg_.roll_min = std::move(arg);
    return Init_GimbalDeviceInformation_roll_max(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_custom_cap_flags
{
public:
  explicit Init_GimbalDeviceInformation_custom_cap_flags(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_roll_min custom_cap_flags(::px4_msgs::msg::GimbalDeviceInformation::_custom_cap_flags_type arg)
  {
    msg_.custom_cap_flags = std::move(arg);
    return Init_GimbalDeviceInformation_roll_min(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_cap_flags
{
public:
  explicit Init_GimbalDeviceInformation_cap_flags(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_custom_cap_flags cap_flags(::px4_msgs::msg::GimbalDeviceInformation::_cap_flags_type arg)
  {
    msg_.cap_flags = std::move(arg);
    return Init_GimbalDeviceInformation_custom_cap_flags(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_uid
{
public:
  explicit Init_GimbalDeviceInformation_uid(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_cap_flags uid(::px4_msgs::msg::GimbalDeviceInformation::_uid_type arg)
  {
    msg_.uid = std::move(arg);
    return Init_GimbalDeviceInformation_cap_flags(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_hardware_version
{
public:
  explicit Init_GimbalDeviceInformation_hardware_version(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_uid hardware_version(::px4_msgs::msg::GimbalDeviceInformation::_hardware_version_type arg)
  {
    msg_.hardware_version = std::move(arg);
    return Init_GimbalDeviceInformation_uid(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_firmware_version
{
public:
  explicit Init_GimbalDeviceInformation_firmware_version(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_hardware_version firmware_version(::px4_msgs::msg::GimbalDeviceInformation::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_GimbalDeviceInformation_hardware_version(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_custom_name
{
public:
  explicit Init_GimbalDeviceInformation_custom_name(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_firmware_version custom_name(::px4_msgs::msg::GimbalDeviceInformation::_custom_name_type arg)
  {
    msg_.custom_name = std::move(arg);
    return Init_GimbalDeviceInformation_firmware_version(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_model_name
{
public:
  explicit Init_GimbalDeviceInformation_model_name(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_custom_name model_name(::px4_msgs::msg::GimbalDeviceInformation::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_GimbalDeviceInformation_custom_name(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_vendor_name
{
public:
  explicit Init_GimbalDeviceInformation_vendor_name(::px4_msgs::msg::GimbalDeviceInformation & msg)
  : msg_(msg)
  {}
  Init_GimbalDeviceInformation_model_name vendor_name(::px4_msgs::msg::GimbalDeviceInformation::_vendor_name_type arg)
  {
    msg_.vendor_name = std::move(arg);
    return Init_GimbalDeviceInformation_model_name(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

class Init_GimbalDeviceInformation_timestamp
{
public:
  Init_GimbalDeviceInformation_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalDeviceInformation_vendor_name timestamp(::px4_msgs::msg::GimbalDeviceInformation::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GimbalDeviceInformation_vendor_name(msg_);
  }

private:
  ::px4_msgs::msg::GimbalDeviceInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GimbalDeviceInformation>()
{
  return px4_msgs::msg::builder::Init_GimbalDeviceInformation_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__BUILDER_HPP_
