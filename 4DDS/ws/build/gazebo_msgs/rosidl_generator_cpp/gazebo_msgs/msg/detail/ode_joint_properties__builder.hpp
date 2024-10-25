// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/ode_joint_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_ODEJointProperties_vel
{
public:
  explicit Init_ODEJointProperties_vel(::gazebo_msgs::msg::ODEJointProperties & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::ODEJointProperties vel(::gazebo_msgs::msg::ODEJointProperties::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEJointProperties msg_;
};

class Init_ODEJointProperties_fmax
{
public:
  explicit Init_ODEJointProperties_fmax(::gazebo_msgs::msg::ODEJointProperties & msg)
  : msg_(msg)
  {}
  Init_ODEJointProperties_vel fmax(::gazebo_msgs::msg::ODEJointProperties::_fmax_type arg)
  {
    msg_.fmax = std::move(arg);
    return Init_ODEJointProperties_vel(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEJointProperties msg_;
};

class Init_ODEJointProperties_fudge_factor
{
public:
  explicit Init_ODEJointProperties_fudge_factor(::gazebo_msgs::msg::ODEJointProperties & msg)
  : msg_(msg)
  {}
  Init_ODEJointProperties_fmax fudge_factor(::gazebo_msgs::msg::ODEJointProperties::_fudge_factor_type arg)
  {
    msg_.fudge_factor = std::move(arg);
    return Init_ODEJointProperties_fmax(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEJointProperties msg_;
};

class Init_ODEJointProperties_stop_cfm
{
public:
  explicit Init_ODEJointProperties_stop_cfm(::gazebo_msgs::msg::ODEJointProperties & msg)
  : msg_(msg)
  {}
  Init_ODEJointProperties_fudge_factor stop_cfm(::gazebo_msgs::msg::ODEJointProperties::_stop_cfm_type arg)
  {
    msg_.stop_cfm = std::move(arg);
    return Init_ODEJointProperties_fudge_factor(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEJointProperties msg_;
};

class Init_ODEJointProperties_stop_erp
{
public:
  explicit Init_ODEJointProperties_stop_erp(::gazebo_msgs::msg::ODEJointProperties & msg)
  : msg_(msg)
  {}
  Init_ODEJointProperties_stop_cfm stop_erp(::gazebo_msgs::msg::ODEJointProperties::_stop_erp_type arg)
  {
    msg_.stop_erp = std::move(arg);
    return Init_ODEJointProperties_stop_cfm(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEJointProperties msg_;
};

class Init_ODEJointProperties_cfm
{
public:
  explicit Init_ODEJointProperties_cfm(::gazebo_msgs::msg::ODEJointProperties & msg)
  : msg_(msg)
  {}
  Init_ODEJointProperties_stop_erp cfm(::gazebo_msgs::msg::ODEJointProperties::_cfm_type arg)
  {
    msg_.cfm = std::move(arg);
    return Init_ODEJointProperties_stop_erp(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEJointProperties msg_;
};

class Init_ODEJointProperties_erp
{
public:
  explicit Init_ODEJointProperties_erp(::gazebo_msgs::msg::ODEJointProperties & msg)
  : msg_(msg)
  {}
  Init_ODEJointProperties_cfm erp(::gazebo_msgs::msg::ODEJointProperties::_erp_type arg)
  {
    msg_.erp = std::move(arg);
    return Init_ODEJointProperties_cfm(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEJointProperties msg_;
};

class Init_ODEJointProperties_lo_stop
{
public:
  explicit Init_ODEJointProperties_lo_stop(::gazebo_msgs::msg::ODEJointProperties & msg)
  : msg_(msg)
  {}
  Init_ODEJointProperties_erp lo_stop(::gazebo_msgs::msg::ODEJointProperties::_lo_stop_type arg)
  {
    msg_.lo_stop = std::move(arg);
    return Init_ODEJointProperties_erp(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEJointProperties msg_;
};

class Init_ODEJointProperties_hi_stop
{
public:
  explicit Init_ODEJointProperties_hi_stop(::gazebo_msgs::msg::ODEJointProperties & msg)
  : msg_(msg)
  {}
  Init_ODEJointProperties_lo_stop hi_stop(::gazebo_msgs::msg::ODEJointProperties::_hi_stop_type arg)
  {
    msg_.hi_stop = std::move(arg);
    return Init_ODEJointProperties_lo_stop(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEJointProperties msg_;
};

class Init_ODEJointProperties_damping
{
public:
  Init_ODEJointProperties_damping()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ODEJointProperties_hi_stop damping(::gazebo_msgs::msg::ODEJointProperties::_damping_type arg)
  {
    msg_.damping = std::move(arg);
    return Init_ODEJointProperties_hi_stop(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEJointProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::ODEJointProperties>()
{
  return gazebo_msgs::msg::builder::Init_ODEJointProperties_damping();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__BUILDER_HPP_
