// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/CameraStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAMERA_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__CAMERA_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/camera_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraStatus_active_comp_id
{
public:
  explicit Init_CameraStatus_active_comp_id(::px4_msgs::msg::CameraStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::CameraStatus active_comp_id(::px4_msgs::msg::CameraStatus::_active_comp_id_type arg)
  {
    msg_.active_comp_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::CameraStatus msg_;
};

class Init_CameraStatus_active_sys_id
{
public:
  explicit Init_CameraStatus_active_sys_id(::px4_msgs::msg::CameraStatus & msg)
  : msg_(msg)
  {}
  Init_CameraStatus_active_comp_id active_sys_id(::px4_msgs::msg::CameraStatus::_active_sys_id_type arg)
  {
    msg_.active_sys_id = std::move(arg);
    return Init_CameraStatus_active_comp_id(msg_);
  }

private:
  ::px4_msgs::msg::CameraStatus msg_;
};

class Init_CameraStatus_timestamp
{
public:
  Init_CameraStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraStatus_active_sys_id timestamp(::px4_msgs::msg::CameraStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CameraStatus_active_sys_id(msg_);
  }

private:
  ::px4_msgs::msg::CameraStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::CameraStatus>()
{
  return px4_msgs::msg::builder::Init_CameraStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CAMERA_STATUS__BUILDER_HPP_
