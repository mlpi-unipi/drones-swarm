// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GeofenceStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GEOFENCE_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GEOFENCE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/geofence_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GeofenceStatus_status
{
public:
  explicit Init_GeofenceStatus_status(::px4_msgs::msg::GeofenceStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GeofenceStatus status(::px4_msgs::msg::GeofenceStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GeofenceStatus msg_;
};

class Init_GeofenceStatus_geofence_id
{
public:
  explicit Init_GeofenceStatus_geofence_id(::px4_msgs::msg::GeofenceStatus & msg)
  : msg_(msg)
  {}
  Init_GeofenceStatus_status geofence_id(::px4_msgs::msg::GeofenceStatus::_geofence_id_type arg)
  {
    msg_.geofence_id = std::move(arg);
    return Init_GeofenceStatus_status(msg_);
  }

private:
  ::px4_msgs::msg::GeofenceStatus msg_;
};

class Init_GeofenceStatus_timestamp
{
public:
  Init_GeofenceStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeofenceStatus_geofence_id timestamp(::px4_msgs::msg::GeofenceStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GeofenceStatus_geofence_id(msg_);
  }

private:
  ::px4_msgs::msg::GeofenceStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GeofenceStatus>()
{
  return px4_msgs::msg::builder::Init_GeofenceStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GEOFENCE_STATUS__BUILDER_HPP_
