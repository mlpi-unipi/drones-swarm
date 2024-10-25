// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/CollisionReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/collision_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_CollisionReport_horizontal_minimum_delta
{
public:
  explicit Init_CollisionReport_horizontal_minimum_delta(::px4_msgs::msg::CollisionReport & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::CollisionReport horizontal_minimum_delta(::px4_msgs::msg::CollisionReport::_horizontal_minimum_delta_type arg)
  {
    msg_.horizontal_minimum_delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::CollisionReport msg_;
};

class Init_CollisionReport_altitude_minimum_delta
{
public:
  explicit Init_CollisionReport_altitude_minimum_delta(::px4_msgs::msg::CollisionReport & msg)
  : msg_(msg)
  {}
  Init_CollisionReport_horizontal_minimum_delta altitude_minimum_delta(::px4_msgs::msg::CollisionReport::_altitude_minimum_delta_type arg)
  {
    msg_.altitude_minimum_delta = std::move(arg);
    return Init_CollisionReport_horizontal_minimum_delta(msg_);
  }

private:
  ::px4_msgs::msg::CollisionReport msg_;
};

class Init_CollisionReport_time_to_minimum_delta
{
public:
  explicit Init_CollisionReport_time_to_minimum_delta(::px4_msgs::msg::CollisionReport & msg)
  : msg_(msg)
  {}
  Init_CollisionReport_altitude_minimum_delta time_to_minimum_delta(::px4_msgs::msg::CollisionReport::_time_to_minimum_delta_type arg)
  {
    msg_.time_to_minimum_delta = std::move(arg);
    return Init_CollisionReport_altitude_minimum_delta(msg_);
  }

private:
  ::px4_msgs::msg::CollisionReport msg_;
};

class Init_CollisionReport_threat_level
{
public:
  explicit Init_CollisionReport_threat_level(::px4_msgs::msg::CollisionReport & msg)
  : msg_(msg)
  {}
  Init_CollisionReport_time_to_minimum_delta threat_level(::px4_msgs::msg::CollisionReport::_threat_level_type arg)
  {
    msg_.threat_level = std::move(arg);
    return Init_CollisionReport_time_to_minimum_delta(msg_);
  }

private:
  ::px4_msgs::msg::CollisionReport msg_;
};

class Init_CollisionReport_action
{
public:
  explicit Init_CollisionReport_action(::px4_msgs::msg::CollisionReport & msg)
  : msg_(msg)
  {}
  Init_CollisionReport_threat_level action(::px4_msgs::msg::CollisionReport::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_CollisionReport_threat_level(msg_);
  }

private:
  ::px4_msgs::msg::CollisionReport msg_;
};

class Init_CollisionReport_id
{
public:
  explicit Init_CollisionReport_id(::px4_msgs::msg::CollisionReport & msg)
  : msg_(msg)
  {}
  Init_CollisionReport_action id(::px4_msgs::msg::CollisionReport::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CollisionReport_action(msg_);
  }

private:
  ::px4_msgs::msg::CollisionReport msg_;
};

class Init_CollisionReport_src
{
public:
  explicit Init_CollisionReport_src(::px4_msgs::msg::CollisionReport & msg)
  : msg_(msg)
  {}
  Init_CollisionReport_id src(::px4_msgs::msg::CollisionReport::_src_type arg)
  {
    msg_.src = std::move(arg);
    return Init_CollisionReport_id(msg_);
  }

private:
  ::px4_msgs::msg::CollisionReport msg_;
};

class Init_CollisionReport_timestamp
{
public:
  Init_CollisionReport_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollisionReport_src timestamp(::px4_msgs::msg::CollisionReport::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CollisionReport_src(msg_);
  }

private:
  ::px4_msgs::msg::CollisionReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::CollisionReport>()
{
  return px4_msgs::msg::builder::Init_CollisionReport_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__BUILDER_HPP_
