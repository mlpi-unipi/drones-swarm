// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/NavigatorMissionItem.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/navigator_mission_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigatorMissionItem_vtol_back_transition
{
public:
  explicit Init_NavigatorMissionItem_vtol_back_transition(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::NavigatorMissionItem vtol_back_transition(::px4_msgs::msg::NavigatorMissionItem::_vtol_back_transition_type arg)
  {
    msg_.vtol_back_transition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_autocontinue
{
public:
  explicit Init_NavigatorMissionItem_autocontinue(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_vtol_back_transition autocontinue(::px4_msgs::msg::NavigatorMissionItem::_autocontinue_type arg)
  {
    msg_.autocontinue = std::move(arg);
    return Init_NavigatorMissionItem_vtol_back_transition(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_altitude_is_relative
{
public:
  explicit Init_NavigatorMissionItem_altitude_is_relative(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_autocontinue altitude_is_relative(::px4_msgs::msg::NavigatorMissionItem::_altitude_is_relative_type arg)
  {
    msg_.altitude_is_relative = std::move(arg);
    return Init_NavigatorMissionItem_autocontinue(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_force_heading
{
public:
  explicit Init_NavigatorMissionItem_force_heading(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_altitude_is_relative force_heading(::px4_msgs::msg::NavigatorMissionItem::_force_heading_type arg)
  {
    msg_.force_heading = std::move(arg);
    return Init_NavigatorMissionItem_altitude_is_relative(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_loiter_exit_xtrack
{
public:
  explicit Init_NavigatorMissionItem_loiter_exit_xtrack(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_force_heading loiter_exit_xtrack(::px4_msgs::msg::NavigatorMissionItem::_loiter_exit_xtrack_type arg)
  {
    msg_.loiter_exit_xtrack = std::move(arg);
    return Init_NavigatorMissionItem_force_heading(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_origin
{
public:
  explicit Init_NavigatorMissionItem_origin(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_loiter_exit_xtrack origin(::px4_msgs::msg::NavigatorMissionItem::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_NavigatorMissionItem_loiter_exit_xtrack(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_frame
{
public:
  explicit Init_NavigatorMissionItem_frame(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_origin frame(::px4_msgs::msg::NavigatorMissionItem::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_NavigatorMissionItem_origin(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_altitude
{
public:
  explicit Init_NavigatorMissionItem_altitude(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_frame altitude(::px4_msgs::msg::NavigatorMissionItem::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_NavigatorMissionItem_frame(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_yaw
{
public:
  explicit Init_NavigatorMissionItem_yaw(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_altitude yaw(::px4_msgs::msg::NavigatorMissionItem::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_NavigatorMissionItem_altitude(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_loiter_radius
{
public:
  explicit Init_NavigatorMissionItem_loiter_radius(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_yaw loiter_radius(::px4_msgs::msg::NavigatorMissionItem::_loiter_radius_type arg)
  {
    msg_.loiter_radius = std::move(arg);
    return Init_NavigatorMissionItem_yaw(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_acceptance_radius
{
public:
  explicit Init_NavigatorMissionItem_acceptance_radius(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_loiter_radius acceptance_radius(::px4_msgs::msg::NavigatorMissionItem::_acceptance_radius_type arg)
  {
    msg_.acceptance_radius = std::move(arg);
    return Init_NavigatorMissionItem_loiter_radius(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_time_inside
{
public:
  explicit Init_NavigatorMissionItem_time_inside(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_acceptance_radius time_inside(::px4_msgs::msg::NavigatorMissionItem::_time_inside_type arg)
  {
    msg_.time_inside = std::move(arg);
    return Init_NavigatorMissionItem_acceptance_radius(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_longitude
{
public:
  explicit Init_NavigatorMissionItem_longitude(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_time_inside longitude(::px4_msgs::msg::NavigatorMissionItem::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_NavigatorMissionItem_time_inside(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_latitude
{
public:
  explicit Init_NavigatorMissionItem_latitude(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_longitude latitude(::px4_msgs::msg::NavigatorMissionItem::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_NavigatorMissionItem_longitude(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_nav_cmd
{
public:
  explicit Init_NavigatorMissionItem_nav_cmd(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_latitude nav_cmd(::px4_msgs::msg::NavigatorMissionItem::_nav_cmd_type arg)
  {
    msg_.nav_cmd = std::move(arg);
    return Init_NavigatorMissionItem_latitude(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_sequence_current
{
public:
  explicit Init_NavigatorMissionItem_sequence_current(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_nav_cmd sequence_current(::px4_msgs::msg::NavigatorMissionItem::_sequence_current_type arg)
  {
    msg_.sequence_current = std::move(arg);
    return Init_NavigatorMissionItem_nav_cmd(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_instance_count
{
public:
  explicit Init_NavigatorMissionItem_instance_count(::px4_msgs::msg::NavigatorMissionItem & msg)
  : msg_(msg)
  {}
  Init_NavigatorMissionItem_sequence_current instance_count(::px4_msgs::msg::NavigatorMissionItem::_instance_count_type arg)
  {
    msg_.instance_count = std::move(arg);
    return Init_NavigatorMissionItem_sequence_current(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

class Init_NavigatorMissionItem_timestamp
{
public:
  Init_NavigatorMissionItem_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigatorMissionItem_instance_count timestamp(::px4_msgs::msg::NavigatorMissionItem::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NavigatorMissionItem_instance_count(msg_);
  }

private:
  ::px4_msgs::msg::NavigatorMissionItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::NavigatorMissionItem>()
{
  return px4_msgs::msg::builder::Init_NavigatorMissionItem_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__BUILDER_HPP_
