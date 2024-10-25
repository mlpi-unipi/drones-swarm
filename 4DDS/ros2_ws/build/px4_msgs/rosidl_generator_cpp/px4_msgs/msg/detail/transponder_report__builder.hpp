// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TransponderReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/transponder_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TransponderReport_uas_id
{
public:
  explicit Init_TransponderReport_uas_id(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TransponderReport uas_id(::px4_msgs::msg::TransponderReport::_uas_id_type arg)
  {
    msg_.uas_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_squawk
{
public:
  explicit Init_TransponderReport_squawk(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_uas_id squawk(::px4_msgs::msg::TransponderReport::_squawk_type arg)
  {
    msg_.squawk = std::move(arg);
    return Init_TransponderReport_uas_id(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_flags
{
public:
  explicit Init_TransponderReport_flags(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_squawk flags(::px4_msgs::msg::TransponderReport::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_TransponderReport_squawk(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_tslc
{
public:
  explicit Init_TransponderReport_tslc(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_flags tslc(::px4_msgs::msg::TransponderReport::_tslc_type arg)
  {
    msg_.tslc = std::move(arg);
    return Init_TransponderReport_flags(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_emitter_type
{
public:
  explicit Init_TransponderReport_emitter_type(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_tslc emitter_type(::px4_msgs::msg::TransponderReport::_emitter_type_type arg)
  {
    msg_.emitter_type = std::move(arg);
    return Init_TransponderReport_tslc(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_callsign
{
public:
  explicit Init_TransponderReport_callsign(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_emitter_type callsign(::px4_msgs::msg::TransponderReport::_callsign_type arg)
  {
    msg_.callsign = std::move(arg);
    return Init_TransponderReport_emitter_type(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_ver_velocity
{
public:
  explicit Init_TransponderReport_ver_velocity(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_callsign ver_velocity(::px4_msgs::msg::TransponderReport::_ver_velocity_type arg)
  {
    msg_.ver_velocity = std::move(arg);
    return Init_TransponderReport_callsign(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_hor_velocity
{
public:
  explicit Init_TransponderReport_hor_velocity(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_ver_velocity hor_velocity(::px4_msgs::msg::TransponderReport::_hor_velocity_type arg)
  {
    msg_.hor_velocity = std::move(arg);
    return Init_TransponderReport_ver_velocity(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_heading
{
public:
  explicit Init_TransponderReport_heading(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_hor_velocity heading(::px4_msgs::msg::TransponderReport::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_TransponderReport_hor_velocity(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_altitude
{
public:
  explicit Init_TransponderReport_altitude(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_heading altitude(::px4_msgs::msg::TransponderReport::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_TransponderReport_heading(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_altitude_type
{
public:
  explicit Init_TransponderReport_altitude_type(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_altitude altitude_type(::px4_msgs::msg::TransponderReport::_altitude_type_type arg)
  {
    msg_.altitude_type = std::move(arg);
    return Init_TransponderReport_altitude(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_lon
{
public:
  explicit Init_TransponderReport_lon(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_altitude_type lon(::px4_msgs::msg::TransponderReport::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_TransponderReport_altitude_type(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_lat
{
public:
  explicit Init_TransponderReport_lat(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_lon lat(::px4_msgs::msg::TransponderReport::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_TransponderReport_lon(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_icao_address
{
public:
  explicit Init_TransponderReport_icao_address(::px4_msgs::msg::TransponderReport & msg)
  : msg_(msg)
  {}
  Init_TransponderReport_lat icao_address(::px4_msgs::msg::TransponderReport::_icao_address_type arg)
  {
    msg_.icao_address = std::move(arg);
    return Init_TransponderReport_lat(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

class Init_TransponderReport_timestamp
{
public:
  Init_TransponderReport_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TransponderReport_icao_address timestamp(::px4_msgs::msg::TransponderReport::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TransponderReport_icao_address(msg_);
  }

private:
  ::px4_msgs::msg::TransponderReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TransponderReport>()
{
  return px4_msgs::msg::builder::Init_TransponderReport_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__BUILDER_HPP_
