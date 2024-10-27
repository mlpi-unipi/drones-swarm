// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_global_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleGlobalPosition_dead_reckoning
{
public:
  explicit Init_VehicleGlobalPosition_dead_reckoning(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleGlobalPosition dead_reckoning(::px4_msgs::msg::VehicleGlobalPosition::_dead_reckoning_type arg)
  {
    msg_.dead_reckoning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_terrain_alt_valid
{
public:
  explicit Init_VehicleGlobalPosition_terrain_alt_valid(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_dead_reckoning terrain_alt_valid(::px4_msgs::msg::VehicleGlobalPosition::_terrain_alt_valid_type arg)
  {
    msg_.terrain_alt_valid = std::move(arg);
    return Init_VehicleGlobalPosition_dead_reckoning(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_terrain_alt
{
public:
  explicit Init_VehicleGlobalPosition_terrain_alt(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_terrain_alt_valid terrain_alt(::px4_msgs::msg::VehicleGlobalPosition::_terrain_alt_type arg)
  {
    msg_.terrain_alt = std::move(arg);
    return Init_VehicleGlobalPosition_terrain_alt_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_epv
{
public:
  explicit Init_VehicleGlobalPosition_epv(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_terrain_alt epv(::px4_msgs::msg::VehicleGlobalPosition::_epv_type arg)
  {
    msg_.epv = std::move(arg);
    return Init_VehicleGlobalPosition_terrain_alt(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_eph
{
public:
  explicit Init_VehicleGlobalPosition_eph(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_epv eph(::px4_msgs::msg::VehicleGlobalPosition::_eph_type arg)
  {
    msg_.eph = std::move(arg);
    return Init_VehicleGlobalPosition_epv(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_alt_reset_counter
{
public:
  explicit Init_VehicleGlobalPosition_alt_reset_counter(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_eph alt_reset_counter(::px4_msgs::msg::VehicleGlobalPosition::_alt_reset_counter_type arg)
  {
    msg_.alt_reset_counter = std::move(arg);
    return Init_VehicleGlobalPosition_eph(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_lat_lon_reset_counter
{
public:
  explicit Init_VehicleGlobalPosition_lat_lon_reset_counter(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_alt_reset_counter lat_lon_reset_counter(::px4_msgs::msg::VehicleGlobalPosition::_lat_lon_reset_counter_type arg)
  {
    msg_.lat_lon_reset_counter = std::move(arg);
    return Init_VehicleGlobalPosition_alt_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_delta_alt
{
public:
  explicit Init_VehicleGlobalPosition_delta_alt(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_lat_lon_reset_counter delta_alt(::px4_msgs::msg::VehicleGlobalPosition::_delta_alt_type arg)
  {
    msg_.delta_alt = std::move(arg);
    return Init_VehicleGlobalPosition_lat_lon_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_alt_ellipsoid
{
public:
  explicit Init_VehicleGlobalPosition_alt_ellipsoid(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_delta_alt alt_ellipsoid(::px4_msgs::msg::VehicleGlobalPosition::_alt_ellipsoid_type arg)
  {
    msg_.alt_ellipsoid = std::move(arg);
    return Init_VehicleGlobalPosition_delta_alt(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_alt
{
public:
  explicit Init_VehicleGlobalPosition_alt(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_alt_ellipsoid alt(::px4_msgs::msg::VehicleGlobalPosition::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_VehicleGlobalPosition_alt_ellipsoid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_lon
{
public:
  explicit Init_VehicleGlobalPosition_lon(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_alt lon(::px4_msgs::msg::VehicleGlobalPosition::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_VehicleGlobalPosition_alt(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_lat
{
public:
  explicit Init_VehicleGlobalPosition_lat(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_lon lat(::px4_msgs::msg::VehicleGlobalPosition::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_VehicleGlobalPosition_lon(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_timestamp_sample
{
public:
  explicit Init_VehicleGlobalPosition_timestamp_sample(::px4_msgs::msg::VehicleGlobalPosition & msg)
  : msg_(msg)
  {}
  Init_VehicleGlobalPosition_lat timestamp_sample(::px4_msgs::msg::VehicleGlobalPosition::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleGlobalPosition_lat(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

class Init_VehicleGlobalPosition_timestamp
{
public:
  Init_VehicleGlobalPosition_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleGlobalPosition_timestamp_sample timestamp(::px4_msgs::msg::VehicleGlobalPosition::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleGlobalPosition_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleGlobalPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleGlobalPosition>()
{
  return px4_msgs::msg::builder::Init_VehicleGlobalPosition_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__BUILDER_HPP_
