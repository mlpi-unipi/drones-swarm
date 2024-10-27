// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/HomePosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HOME_POSITION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__HOME_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/home_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_HomePosition_update_count
{
public:
  explicit Init_HomePosition_update_count(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::HomePosition update_count(::px4_msgs::msg::HomePosition::_update_count_type arg)
  {
    msg_.update_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_manual_home
{
public:
  explicit Init_HomePosition_manual_home(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_update_count manual_home(::px4_msgs::msg::HomePosition::_manual_home_type arg)
  {
    msg_.manual_home = std::move(arg);
    return Init_HomePosition_update_count(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_valid_lpos
{
public:
  explicit Init_HomePosition_valid_lpos(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_manual_home valid_lpos(::px4_msgs::msg::HomePosition::_valid_lpos_type arg)
  {
    msg_.valid_lpos = std::move(arg);
    return Init_HomePosition_manual_home(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_valid_hpos
{
public:
  explicit Init_HomePosition_valid_hpos(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_valid_lpos valid_hpos(::px4_msgs::msg::HomePosition::_valid_hpos_type arg)
  {
    msg_.valid_hpos = std::move(arg);
    return Init_HomePosition_valid_lpos(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_valid_alt
{
public:
  explicit Init_HomePosition_valid_alt(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_valid_hpos valid_alt(::px4_msgs::msg::HomePosition::_valid_alt_type arg)
  {
    msg_.valid_alt = std::move(arg);
    return Init_HomePosition_valid_hpos(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_yaw
{
public:
  explicit Init_HomePosition_yaw(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_valid_alt yaw(::px4_msgs::msg::HomePosition::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_HomePosition_valid_alt(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_z
{
public:
  explicit Init_HomePosition_z(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_yaw z(::px4_msgs::msg::HomePosition::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_HomePosition_yaw(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_y
{
public:
  explicit Init_HomePosition_y(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_z y(::px4_msgs::msg::HomePosition::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_HomePosition_z(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_x
{
public:
  explicit Init_HomePosition_x(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_y x(::px4_msgs::msg::HomePosition::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_HomePosition_y(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_alt
{
public:
  explicit Init_HomePosition_alt(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_x alt(::px4_msgs::msg::HomePosition::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_HomePosition_x(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_lon
{
public:
  explicit Init_HomePosition_lon(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_alt lon(::px4_msgs::msg::HomePosition::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_HomePosition_alt(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_lat
{
public:
  explicit Init_HomePosition_lat(::px4_msgs::msg::HomePosition & msg)
  : msg_(msg)
  {}
  Init_HomePosition_lon lat(::px4_msgs::msg::HomePosition::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_HomePosition_lon(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

class Init_HomePosition_timestamp
{
public:
  Init_HomePosition_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HomePosition_lat timestamp(::px4_msgs::msg::HomePosition::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_HomePosition_lat(msg_);
  }

private:
  ::px4_msgs::msg::HomePosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::HomePosition>()
{
  return px4_msgs::msg::builder::Init_HomePosition_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__HOME_POSITION__BUILDER_HPP_
