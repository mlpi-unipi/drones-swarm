// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/LandingTargetInnovations.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_TARGET_INNOVATIONS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__LANDING_TARGET_INNOVATIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/landing_target_innovations__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_LandingTargetInnovations_innov_cov_y
{
public:
  explicit Init_LandingTargetInnovations_innov_cov_y(::px4_msgs::msg::LandingTargetInnovations & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::LandingTargetInnovations innov_cov_y(::px4_msgs::msg::LandingTargetInnovations::_innov_cov_y_type arg)
  {
    msg_.innov_cov_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::LandingTargetInnovations msg_;
};

class Init_LandingTargetInnovations_innov_cov_x
{
public:
  explicit Init_LandingTargetInnovations_innov_cov_x(::px4_msgs::msg::LandingTargetInnovations & msg)
  : msg_(msg)
  {}
  Init_LandingTargetInnovations_innov_cov_y innov_cov_x(::px4_msgs::msg::LandingTargetInnovations::_innov_cov_x_type arg)
  {
    msg_.innov_cov_x = std::move(arg);
    return Init_LandingTargetInnovations_innov_cov_y(msg_);
  }

private:
  ::px4_msgs::msg::LandingTargetInnovations msg_;
};

class Init_LandingTargetInnovations_innov_y
{
public:
  explicit Init_LandingTargetInnovations_innov_y(::px4_msgs::msg::LandingTargetInnovations & msg)
  : msg_(msg)
  {}
  Init_LandingTargetInnovations_innov_cov_x innov_y(::px4_msgs::msg::LandingTargetInnovations::_innov_y_type arg)
  {
    msg_.innov_y = std::move(arg);
    return Init_LandingTargetInnovations_innov_cov_x(msg_);
  }

private:
  ::px4_msgs::msg::LandingTargetInnovations msg_;
};

class Init_LandingTargetInnovations_innov_x
{
public:
  explicit Init_LandingTargetInnovations_innov_x(::px4_msgs::msg::LandingTargetInnovations & msg)
  : msg_(msg)
  {}
  Init_LandingTargetInnovations_innov_y innov_x(::px4_msgs::msg::LandingTargetInnovations::_innov_x_type arg)
  {
    msg_.innov_x = std::move(arg);
    return Init_LandingTargetInnovations_innov_y(msg_);
  }

private:
  ::px4_msgs::msg::LandingTargetInnovations msg_;
};

class Init_LandingTargetInnovations_timestamp
{
public:
  Init_LandingTargetInnovations_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandingTargetInnovations_innov_x timestamp(::px4_msgs::msg::LandingTargetInnovations::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LandingTargetInnovations_innov_x(msg_);
  }

private:
  ::px4_msgs::msg::LandingTargetInnovations msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::LandingTargetInnovations>()
{
  return px4_msgs::msg::builder::Init_LandingTargetInnovations_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_TARGET_INNOVATIONS__BUILDER_HPP_
