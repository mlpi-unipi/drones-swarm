// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/DebugVect.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEBUG_VECT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__DEBUG_VECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/debug_vect__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_DebugVect_z
{
public:
  explicit Init_DebugVect_z(::px4_msgs::msg::DebugVect & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::DebugVect z(::px4_msgs::msg::DebugVect::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::DebugVect msg_;
};

class Init_DebugVect_y
{
public:
  explicit Init_DebugVect_y(::px4_msgs::msg::DebugVect & msg)
  : msg_(msg)
  {}
  Init_DebugVect_z y(::px4_msgs::msg::DebugVect::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DebugVect_z(msg_);
  }

private:
  ::px4_msgs::msg::DebugVect msg_;
};

class Init_DebugVect_x
{
public:
  explicit Init_DebugVect_x(::px4_msgs::msg::DebugVect & msg)
  : msg_(msg)
  {}
  Init_DebugVect_y x(::px4_msgs::msg::DebugVect::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DebugVect_y(msg_);
  }

private:
  ::px4_msgs::msg::DebugVect msg_;
};

class Init_DebugVect_name
{
public:
  explicit Init_DebugVect_name(::px4_msgs::msg::DebugVect & msg)
  : msg_(msg)
  {}
  Init_DebugVect_x name(::px4_msgs::msg::DebugVect::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DebugVect_x(msg_);
  }

private:
  ::px4_msgs::msg::DebugVect msg_;
};

class Init_DebugVect_timestamp
{
public:
  Init_DebugVect_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugVect_name timestamp(::px4_msgs::msg::DebugVect::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DebugVect_name(msg_);
  }

private:
  ::px4_msgs::msg::DebugVect msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::DebugVect>()
{
  return px4_msgs::msg::builder::Init_DebugVect_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DEBUG_VECT__BUILDER_HPP_
