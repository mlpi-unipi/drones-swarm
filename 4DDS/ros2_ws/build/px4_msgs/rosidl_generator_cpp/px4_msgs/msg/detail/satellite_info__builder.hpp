// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SatelliteInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/satellite_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SatelliteInfo_prn
{
public:
  explicit Init_SatelliteInfo_prn(::px4_msgs::msg::SatelliteInfo & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SatelliteInfo prn(::px4_msgs::msg::SatelliteInfo::_prn_type arg)
  {
    msg_.prn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SatelliteInfo msg_;
};

class Init_SatelliteInfo_snr
{
public:
  explicit Init_SatelliteInfo_snr(::px4_msgs::msg::SatelliteInfo & msg)
  : msg_(msg)
  {}
  Init_SatelliteInfo_prn snr(::px4_msgs::msg::SatelliteInfo::_snr_type arg)
  {
    msg_.snr = std::move(arg);
    return Init_SatelliteInfo_prn(msg_);
  }

private:
  ::px4_msgs::msg::SatelliteInfo msg_;
};

class Init_SatelliteInfo_azimuth
{
public:
  explicit Init_SatelliteInfo_azimuth(::px4_msgs::msg::SatelliteInfo & msg)
  : msg_(msg)
  {}
  Init_SatelliteInfo_snr azimuth(::px4_msgs::msg::SatelliteInfo::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_SatelliteInfo_snr(msg_);
  }

private:
  ::px4_msgs::msg::SatelliteInfo msg_;
};

class Init_SatelliteInfo_elevation
{
public:
  explicit Init_SatelliteInfo_elevation(::px4_msgs::msg::SatelliteInfo & msg)
  : msg_(msg)
  {}
  Init_SatelliteInfo_azimuth elevation(::px4_msgs::msg::SatelliteInfo::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_SatelliteInfo_azimuth(msg_);
  }

private:
  ::px4_msgs::msg::SatelliteInfo msg_;
};

class Init_SatelliteInfo_used
{
public:
  explicit Init_SatelliteInfo_used(::px4_msgs::msg::SatelliteInfo & msg)
  : msg_(msg)
  {}
  Init_SatelliteInfo_elevation used(::px4_msgs::msg::SatelliteInfo::_used_type arg)
  {
    msg_.used = std::move(arg);
    return Init_SatelliteInfo_elevation(msg_);
  }

private:
  ::px4_msgs::msg::SatelliteInfo msg_;
};

class Init_SatelliteInfo_svid
{
public:
  explicit Init_SatelliteInfo_svid(::px4_msgs::msg::SatelliteInfo & msg)
  : msg_(msg)
  {}
  Init_SatelliteInfo_used svid(::px4_msgs::msg::SatelliteInfo::_svid_type arg)
  {
    msg_.svid = std::move(arg);
    return Init_SatelliteInfo_used(msg_);
  }

private:
  ::px4_msgs::msg::SatelliteInfo msg_;
};

class Init_SatelliteInfo_count
{
public:
  explicit Init_SatelliteInfo_count(::px4_msgs::msg::SatelliteInfo & msg)
  : msg_(msg)
  {}
  Init_SatelliteInfo_svid count(::px4_msgs::msg::SatelliteInfo::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_SatelliteInfo_svid(msg_);
  }

private:
  ::px4_msgs::msg::SatelliteInfo msg_;
};

class Init_SatelliteInfo_timestamp
{
public:
  Init_SatelliteInfo_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SatelliteInfo_count timestamp(::px4_msgs::msg::SatelliteInfo::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SatelliteInfo_count(msg_);
  }

private:
  ::px4_msgs::msg::SatelliteInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SatelliteInfo>()
{
  return px4_msgs::msg::builder::Init_SatelliteInfo_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__BUILDER_HPP_
