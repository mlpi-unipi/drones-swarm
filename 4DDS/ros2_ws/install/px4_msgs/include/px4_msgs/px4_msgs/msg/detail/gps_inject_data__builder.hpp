// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GpsInjectData.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GPS_INJECT_DATA__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GPS_INJECT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/gps_inject_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GpsInjectData_data
{
public:
  explicit Init_GpsInjectData_data(::px4_msgs::msg::GpsInjectData & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GpsInjectData data(::px4_msgs::msg::GpsInjectData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GpsInjectData msg_;
};

class Init_GpsInjectData_flags
{
public:
  explicit Init_GpsInjectData_flags(::px4_msgs::msg::GpsInjectData & msg)
  : msg_(msg)
  {}
  Init_GpsInjectData_data flags(::px4_msgs::msg::GpsInjectData::_flags_type arg)
  {
    msg_.flags = std::move(arg);
    return Init_GpsInjectData_data(msg_);
  }

private:
  ::px4_msgs::msg::GpsInjectData msg_;
};

class Init_GpsInjectData_len
{
public:
  explicit Init_GpsInjectData_len(::px4_msgs::msg::GpsInjectData & msg)
  : msg_(msg)
  {}
  Init_GpsInjectData_flags len(::px4_msgs::msg::GpsInjectData::_len_type arg)
  {
    msg_.len = std::move(arg);
    return Init_GpsInjectData_flags(msg_);
  }

private:
  ::px4_msgs::msg::GpsInjectData msg_;
};

class Init_GpsInjectData_device_id
{
public:
  explicit Init_GpsInjectData_device_id(::px4_msgs::msg::GpsInjectData & msg)
  : msg_(msg)
  {}
  Init_GpsInjectData_len device_id(::px4_msgs::msg::GpsInjectData::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_GpsInjectData_len(msg_);
  }

private:
  ::px4_msgs::msg::GpsInjectData msg_;
};

class Init_GpsInjectData_timestamp
{
public:
  Init_GpsInjectData_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpsInjectData_device_id timestamp(::px4_msgs::msg::GpsInjectData::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GpsInjectData_device_id(msg_);
  }

private:
  ::px4_msgs::msg::GpsInjectData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GpsInjectData>()
{
  return px4_msgs::msg::builder::Init_GpsInjectData_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GPS_INJECT_DATA__BUILDER_HPP_
