// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorUwb.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_UWB__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_UWB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_uwb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorUwb_offset_z
{
public:
  explicit Init_SensorUwb_offset_z(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorUwb offset_z(::px4_msgs::msg::SensorUwb::_offset_z_type arg)
  {
    msg_.offset_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_offset_y
{
public:
  explicit Init_SensorUwb_offset_y(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_offset_z offset_y(::px4_msgs::msg::SensorUwb::_offset_y_type arg)
  {
    msg_.offset_y = std::move(arg);
    return Init_SensorUwb_offset_z(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_offset_x
{
public:
  explicit Init_SensorUwb_offset_x(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_offset_y offset_x(::px4_msgs::msg::SensorUwb::_offset_x_type arg)
  {
    msg_.offset_x = std::move(arg);
    return Init_SensorUwb_offset_y(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_orientation
{
public:
  explicit Init_SensorUwb_orientation(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_offset_x orientation(::px4_msgs::msg::SensorUwb::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_SensorUwb_offset_x(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_aoa_dest_elevation_fom
{
public:
  explicit Init_SensorUwb_aoa_dest_elevation_fom(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_orientation aoa_dest_elevation_fom(::px4_msgs::msg::SensorUwb::_aoa_dest_elevation_fom_type arg)
  {
    msg_.aoa_dest_elevation_fom = std::move(arg);
    return Init_SensorUwb_orientation(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_aoa_dest_azimuth_fom
{
public:
  explicit Init_SensorUwb_aoa_dest_azimuth_fom(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_aoa_dest_elevation_fom aoa_dest_azimuth_fom(::px4_msgs::msg::SensorUwb::_aoa_dest_azimuth_fom_type arg)
  {
    msg_.aoa_dest_azimuth_fom = std::move(arg);
    return Init_SensorUwb_aoa_dest_elevation_fom(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_aoa_elevation_fom
{
public:
  explicit Init_SensorUwb_aoa_elevation_fom(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_aoa_dest_azimuth_fom aoa_elevation_fom(::px4_msgs::msg::SensorUwb::_aoa_elevation_fom_type arg)
  {
    msg_.aoa_elevation_fom = std::move(arg);
    return Init_SensorUwb_aoa_dest_azimuth_fom(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_aoa_azimuth_fom
{
public:
  explicit Init_SensorUwb_aoa_azimuth_fom(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_aoa_elevation_fom aoa_azimuth_fom(::px4_msgs::msg::SensorUwb::_aoa_azimuth_fom_type arg)
  {
    msg_.aoa_azimuth_fom = std::move(arg);
    return Init_SensorUwb_aoa_elevation_fom(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_aoa_elevation_resp
{
public:
  explicit Init_SensorUwb_aoa_elevation_resp(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_aoa_azimuth_fom aoa_elevation_resp(::px4_msgs::msg::SensorUwb::_aoa_elevation_resp_type arg)
  {
    msg_.aoa_elevation_resp = std::move(arg);
    return Init_SensorUwb_aoa_azimuth_fom(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_aoa_azimuth_resp
{
public:
  explicit Init_SensorUwb_aoa_azimuth_resp(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_aoa_elevation_resp aoa_azimuth_resp(::px4_msgs::msg::SensorUwb::_aoa_azimuth_resp_type arg)
  {
    msg_.aoa_azimuth_resp = std::move(arg);
    return Init_SensorUwb_aoa_elevation_resp(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_aoa_elevation_dev
{
public:
  explicit Init_SensorUwb_aoa_elevation_dev(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_aoa_azimuth_resp aoa_elevation_dev(::px4_msgs::msg::SensorUwb::_aoa_elevation_dev_type arg)
  {
    msg_.aoa_elevation_dev = std::move(arg);
    return Init_SensorUwb_aoa_azimuth_resp(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_aoa_azimuth_dev
{
public:
  explicit Init_SensorUwb_aoa_azimuth_dev(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_aoa_elevation_dev aoa_azimuth_dev(::px4_msgs::msg::SensorUwb::_aoa_azimuth_dev_type arg)
  {
    msg_.aoa_azimuth_dev = std::move(arg);
    return Init_SensorUwb_aoa_elevation_dev(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_distance
{
public:
  explicit Init_SensorUwb_distance(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_aoa_azimuth_dev distance(::px4_msgs::msg::SensorUwb::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_SensorUwb_aoa_azimuth_dev(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_nlos
{
public:
  explicit Init_SensorUwb_nlos(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_distance nlos(::px4_msgs::msg::SensorUwb::_nlos_type arg)
  {
    msg_.nlos = std::move(arg);
    return Init_SensorUwb_distance(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_status
{
public:
  explicit Init_SensorUwb_status(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_nlos status(::px4_msgs::msg::SensorUwb::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SensorUwb_nlos(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_mac_dest
{
public:
  explicit Init_SensorUwb_mac_dest(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_status mac_dest(::px4_msgs::msg::SensorUwb::_mac_dest_type arg)
  {
    msg_.mac_dest = std::move(arg);
    return Init_SensorUwb_status(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_mac
{
public:
  explicit Init_SensorUwb_mac(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_mac_dest mac(::px4_msgs::msg::SensorUwb::_mac_type arg)
  {
    msg_.mac = std::move(arg);
    return Init_SensorUwb_mac_dest(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_counter
{
public:
  explicit Init_SensorUwb_counter(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_mac counter(::px4_msgs::msg::SensorUwb::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_SensorUwb_mac(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_time_offset
{
public:
  explicit Init_SensorUwb_time_offset(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_counter time_offset(::px4_msgs::msg::SensorUwb::_time_offset_type arg)
  {
    msg_.time_offset = std::move(arg);
    return Init_SensorUwb_counter(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_sessionid
{
public:
  explicit Init_SensorUwb_sessionid(::px4_msgs::msg::SensorUwb & msg)
  : msg_(msg)
  {}
  Init_SensorUwb_time_offset sessionid(::px4_msgs::msg::SensorUwb::_sessionid_type arg)
  {
    msg_.sessionid = std::move(arg);
    return Init_SensorUwb_time_offset(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

class Init_SensorUwb_timestamp
{
public:
  Init_SensorUwb_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorUwb_sessionid timestamp(::px4_msgs::msg::SensorUwb::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorUwb_sessionid(msg_);
  }

private:
  ::px4_msgs::msg::SensorUwb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorUwb>()
{
  return px4_msgs::msg::builder::Init_SensorUwb_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_UWB__BUILDER_HPP_
