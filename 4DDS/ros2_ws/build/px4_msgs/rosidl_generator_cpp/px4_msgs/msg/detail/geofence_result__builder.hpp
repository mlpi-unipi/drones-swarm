// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GeofenceResult.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GEOFENCE_RESULT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GEOFENCE_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/geofence_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GeofenceResult_geofence_action
{
public:
  explicit Init_GeofenceResult_geofence_action(::px4_msgs::msg::GeofenceResult & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GeofenceResult geofence_action(::px4_msgs::msg::GeofenceResult::_geofence_action_type arg)
  {
    msg_.geofence_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GeofenceResult msg_;
};

class Init_GeofenceResult_geofence_custom_fence_triggered
{
public:
  explicit Init_GeofenceResult_geofence_custom_fence_triggered(::px4_msgs::msg::GeofenceResult & msg)
  : msg_(msg)
  {}
  Init_GeofenceResult_geofence_action geofence_custom_fence_triggered(::px4_msgs::msg::GeofenceResult::_geofence_custom_fence_triggered_type arg)
  {
    msg_.geofence_custom_fence_triggered = std::move(arg);
    return Init_GeofenceResult_geofence_action(msg_);
  }

private:
  ::px4_msgs::msg::GeofenceResult msg_;
};

class Init_GeofenceResult_geofence_max_alt_triggered
{
public:
  explicit Init_GeofenceResult_geofence_max_alt_triggered(::px4_msgs::msg::GeofenceResult & msg)
  : msg_(msg)
  {}
  Init_GeofenceResult_geofence_custom_fence_triggered geofence_max_alt_triggered(::px4_msgs::msg::GeofenceResult::_geofence_max_alt_triggered_type arg)
  {
    msg_.geofence_max_alt_triggered = std::move(arg);
    return Init_GeofenceResult_geofence_custom_fence_triggered(msg_);
  }

private:
  ::px4_msgs::msg::GeofenceResult msg_;
};

class Init_GeofenceResult_geofence_max_dist_triggered
{
public:
  explicit Init_GeofenceResult_geofence_max_dist_triggered(::px4_msgs::msg::GeofenceResult & msg)
  : msg_(msg)
  {}
  Init_GeofenceResult_geofence_max_alt_triggered geofence_max_dist_triggered(::px4_msgs::msg::GeofenceResult::_geofence_max_dist_triggered_type arg)
  {
    msg_.geofence_max_dist_triggered = std::move(arg);
    return Init_GeofenceResult_geofence_max_alt_triggered(msg_);
  }

private:
  ::px4_msgs::msg::GeofenceResult msg_;
};

class Init_GeofenceResult_timestamp
{
public:
  Init_GeofenceResult_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeofenceResult_geofence_max_dist_triggered timestamp(::px4_msgs::msg::GeofenceResult::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GeofenceResult_geofence_max_dist_triggered(msg_);
  }

private:
  ::px4_msgs::msg::GeofenceResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GeofenceResult>()
{
  return px4_msgs::msg::builder::Init_GeofenceResult_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GEOFENCE_RESULT__BUILDER_HPP_
