// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleRoi.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleRoi_yaw_offset
{
public:
  explicit Init_VehicleRoi_yaw_offset(::px4_msgs::msg::VehicleRoi & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleRoi yaw_offset(::px4_msgs::msg::VehicleRoi::_yaw_offset_type arg)
  {
    msg_.yaw_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleRoi msg_;
};

class Init_VehicleRoi_pitch_offset
{
public:
  explicit Init_VehicleRoi_pitch_offset(::px4_msgs::msg::VehicleRoi & msg)
  : msg_(msg)
  {}
  Init_VehicleRoi_yaw_offset pitch_offset(::px4_msgs::msg::VehicleRoi::_pitch_offset_type arg)
  {
    msg_.pitch_offset = std::move(arg);
    return Init_VehicleRoi_yaw_offset(msg_);
  }

private:
  ::px4_msgs::msg::VehicleRoi msg_;
};

class Init_VehicleRoi_roll_offset
{
public:
  explicit Init_VehicleRoi_roll_offset(::px4_msgs::msg::VehicleRoi & msg)
  : msg_(msg)
  {}
  Init_VehicleRoi_pitch_offset roll_offset(::px4_msgs::msg::VehicleRoi::_roll_offset_type arg)
  {
    msg_.roll_offset = std::move(arg);
    return Init_VehicleRoi_pitch_offset(msg_);
  }

private:
  ::px4_msgs::msg::VehicleRoi msg_;
};

class Init_VehicleRoi_alt
{
public:
  explicit Init_VehicleRoi_alt(::px4_msgs::msg::VehicleRoi & msg)
  : msg_(msg)
  {}
  Init_VehicleRoi_roll_offset alt(::px4_msgs::msg::VehicleRoi::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_VehicleRoi_roll_offset(msg_);
  }

private:
  ::px4_msgs::msg::VehicleRoi msg_;
};

class Init_VehicleRoi_lon
{
public:
  explicit Init_VehicleRoi_lon(::px4_msgs::msg::VehicleRoi & msg)
  : msg_(msg)
  {}
  Init_VehicleRoi_alt lon(::px4_msgs::msg::VehicleRoi::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_VehicleRoi_alt(msg_);
  }

private:
  ::px4_msgs::msg::VehicleRoi msg_;
};

class Init_VehicleRoi_lat
{
public:
  explicit Init_VehicleRoi_lat(::px4_msgs::msg::VehicleRoi & msg)
  : msg_(msg)
  {}
  Init_VehicleRoi_lon lat(::px4_msgs::msg::VehicleRoi::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_VehicleRoi_lon(msg_);
  }

private:
  ::px4_msgs::msg::VehicleRoi msg_;
};

class Init_VehicleRoi_mode
{
public:
  explicit Init_VehicleRoi_mode(::px4_msgs::msg::VehicleRoi & msg)
  : msg_(msg)
  {}
  Init_VehicleRoi_lat mode(::px4_msgs::msg::VehicleRoi::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_VehicleRoi_lat(msg_);
  }

private:
  ::px4_msgs::msg::VehicleRoi msg_;
};

class Init_VehicleRoi_timestamp
{
public:
  Init_VehicleRoi_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleRoi_mode timestamp(::px4_msgs::msg::VehicleRoi::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleRoi_mode(msg_);
  }

private:
  ::px4_msgs::msg::VehicleRoi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleRoi>()
{
  return px4_msgs::msg::builder::Init_VehicleRoi_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__BUILDER_HPP_
