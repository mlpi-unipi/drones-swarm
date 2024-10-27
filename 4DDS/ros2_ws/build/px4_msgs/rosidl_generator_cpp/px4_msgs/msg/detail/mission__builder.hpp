// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MISSION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Mission_safe_points_id
{
public:
  explicit Init_Mission_safe_points_id(::px4_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Mission safe_points_id(::px4_msgs::msg::Mission::_safe_points_id_type arg)
  {
    msg_.safe_points_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

class Init_Mission_geofence_id
{
public:
  explicit Init_Mission_geofence_id(::px4_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_safe_points_id geofence_id(::px4_msgs::msg::Mission::_geofence_id_type arg)
  {
    msg_.geofence_id = std::move(arg);
    return Init_Mission_safe_points_id(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

class Init_Mission_mission_id
{
public:
  explicit Init_Mission_mission_id(::px4_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_geofence_id mission_id(::px4_msgs::msg::Mission::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_Mission_geofence_id(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

class Init_Mission_land_index
{
public:
  explicit Init_Mission_land_index(::px4_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_mission_id land_index(::px4_msgs::msg::Mission::_land_index_type arg)
  {
    msg_.land_index = std::move(arg);
    return Init_Mission_mission_id(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

class Init_Mission_land_start_index
{
public:
  explicit Init_Mission_land_start_index(::px4_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_land_index land_start_index(::px4_msgs::msg::Mission::_land_start_index_type arg)
  {
    msg_.land_start_index = std::move(arg);
    return Init_Mission_land_index(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

class Init_Mission_current_seq
{
public:
  explicit Init_Mission_current_seq(::px4_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_land_start_index current_seq(::px4_msgs::msg::Mission::_current_seq_type arg)
  {
    msg_.current_seq = std::move(arg);
    return Init_Mission_land_start_index(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

class Init_Mission_count
{
public:
  explicit Init_Mission_count(::px4_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_current_seq count(::px4_msgs::msg::Mission::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_Mission_current_seq(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

class Init_Mission_safepoint_dataman_id
{
public:
  explicit Init_Mission_safepoint_dataman_id(::px4_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_count safepoint_dataman_id(::px4_msgs::msg::Mission::_safepoint_dataman_id_type arg)
  {
    msg_.safepoint_dataman_id = std::move(arg);
    return Init_Mission_count(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

class Init_Mission_fence_dataman_id
{
public:
  explicit Init_Mission_fence_dataman_id(::px4_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_safepoint_dataman_id fence_dataman_id(::px4_msgs::msg::Mission::_fence_dataman_id_type arg)
  {
    msg_.fence_dataman_id = std::move(arg);
    return Init_Mission_safepoint_dataman_id(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

class Init_Mission_mission_dataman_id
{
public:
  explicit Init_Mission_mission_dataman_id(::px4_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_fence_dataman_id mission_dataman_id(::px4_msgs::msg::Mission::_mission_dataman_id_type arg)
  {
    msg_.mission_dataman_id = std::move(arg);
    return Init_Mission_fence_dataman_id(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

class Init_Mission_timestamp
{
public:
  Init_Mission_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_mission_dataman_id timestamp(::px4_msgs::msg::Mission::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Mission_mission_dataman_id(msg_);
  }

private:
  ::px4_msgs::msg::Mission msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Mission>()
{
  return px4_msgs::msg::builder::Init_Mission_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MISSION__BUILDER_HPP_
