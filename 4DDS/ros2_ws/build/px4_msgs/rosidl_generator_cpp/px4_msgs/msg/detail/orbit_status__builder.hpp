// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/OrbitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/orbit_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_OrbitStatus_yaw_behaviour
{
public:
  explicit Init_OrbitStatus_yaw_behaviour(::px4_msgs::msg::OrbitStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::OrbitStatus yaw_behaviour(::px4_msgs::msg::OrbitStatus::_yaw_behaviour_type arg)
  {
    msg_.yaw_behaviour = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::OrbitStatus msg_;
};

class Init_OrbitStatus_z
{
public:
  explicit Init_OrbitStatus_z(::px4_msgs::msg::OrbitStatus & msg)
  : msg_(msg)
  {}
  Init_OrbitStatus_yaw_behaviour z(::px4_msgs::msg::OrbitStatus::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_OrbitStatus_yaw_behaviour(msg_);
  }

private:
  ::px4_msgs::msg::OrbitStatus msg_;
};

class Init_OrbitStatus_y
{
public:
  explicit Init_OrbitStatus_y(::px4_msgs::msg::OrbitStatus & msg)
  : msg_(msg)
  {}
  Init_OrbitStatus_z y(::px4_msgs::msg::OrbitStatus::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_OrbitStatus_z(msg_);
  }

private:
  ::px4_msgs::msg::OrbitStatus msg_;
};

class Init_OrbitStatus_x
{
public:
  explicit Init_OrbitStatus_x(::px4_msgs::msg::OrbitStatus & msg)
  : msg_(msg)
  {}
  Init_OrbitStatus_y x(::px4_msgs::msg::OrbitStatus::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_OrbitStatus_y(msg_);
  }

private:
  ::px4_msgs::msg::OrbitStatus msg_;
};

class Init_OrbitStatus_frame
{
public:
  explicit Init_OrbitStatus_frame(::px4_msgs::msg::OrbitStatus & msg)
  : msg_(msg)
  {}
  Init_OrbitStatus_x frame(::px4_msgs::msg::OrbitStatus::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_OrbitStatus_x(msg_);
  }

private:
  ::px4_msgs::msg::OrbitStatus msg_;
};

class Init_OrbitStatus_radius
{
public:
  explicit Init_OrbitStatus_radius(::px4_msgs::msg::OrbitStatus & msg)
  : msg_(msg)
  {}
  Init_OrbitStatus_frame radius(::px4_msgs::msg::OrbitStatus::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_OrbitStatus_frame(msg_);
  }

private:
  ::px4_msgs::msg::OrbitStatus msg_;
};

class Init_OrbitStatus_timestamp
{
public:
  Init_OrbitStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrbitStatus_radius timestamp(::px4_msgs::msg::OrbitStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OrbitStatus_radius(msg_);
  }

private:
  ::px4_msgs::msg::OrbitStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::OrbitStatus>()
{
  return px4_msgs::msg::builder::Init_OrbitStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__BUILDER_HPP_
