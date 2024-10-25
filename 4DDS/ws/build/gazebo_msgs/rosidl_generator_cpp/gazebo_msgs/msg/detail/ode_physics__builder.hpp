// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/ode_physics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_ODEPhysics_max_contacts
{
public:
  explicit Init_ODEPhysics_max_contacts(::gazebo_msgs::msg::ODEPhysics & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::ODEPhysics max_contacts(::gazebo_msgs::msg::ODEPhysics::_max_contacts_type arg)
  {
    msg_.max_contacts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEPhysics msg_;
};

class Init_ODEPhysics_erp
{
public:
  explicit Init_ODEPhysics_erp(::gazebo_msgs::msg::ODEPhysics & msg)
  : msg_(msg)
  {}
  Init_ODEPhysics_max_contacts erp(::gazebo_msgs::msg::ODEPhysics::_erp_type arg)
  {
    msg_.erp = std::move(arg);
    return Init_ODEPhysics_max_contacts(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEPhysics msg_;
};

class Init_ODEPhysics_cfm
{
public:
  explicit Init_ODEPhysics_cfm(::gazebo_msgs::msg::ODEPhysics & msg)
  : msg_(msg)
  {}
  Init_ODEPhysics_erp cfm(::gazebo_msgs::msg::ODEPhysics::_cfm_type arg)
  {
    msg_.cfm = std::move(arg);
    return Init_ODEPhysics_erp(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEPhysics msg_;
};

class Init_ODEPhysics_contact_max_correcting_vel
{
public:
  explicit Init_ODEPhysics_contact_max_correcting_vel(::gazebo_msgs::msg::ODEPhysics & msg)
  : msg_(msg)
  {}
  Init_ODEPhysics_cfm contact_max_correcting_vel(::gazebo_msgs::msg::ODEPhysics::_contact_max_correcting_vel_type arg)
  {
    msg_.contact_max_correcting_vel = std::move(arg);
    return Init_ODEPhysics_cfm(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEPhysics msg_;
};

class Init_ODEPhysics_contact_surface_layer
{
public:
  explicit Init_ODEPhysics_contact_surface_layer(::gazebo_msgs::msg::ODEPhysics & msg)
  : msg_(msg)
  {}
  Init_ODEPhysics_contact_max_correcting_vel contact_surface_layer(::gazebo_msgs::msg::ODEPhysics::_contact_surface_layer_type arg)
  {
    msg_.contact_surface_layer = std::move(arg);
    return Init_ODEPhysics_contact_max_correcting_vel(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEPhysics msg_;
};

class Init_ODEPhysics_sor_pgs_rms_error_tol
{
public:
  explicit Init_ODEPhysics_sor_pgs_rms_error_tol(::gazebo_msgs::msg::ODEPhysics & msg)
  : msg_(msg)
  {}
  Init_ODEPhysics_contact_surface_layer sor_pgs_rms_error_tol(::gazebo_msgs::msg::ODEPhysics::_sor_pgs_rms_error_tol_type arg)
  {
    msg_.sor_pgs_rms_error_tol = std::move(arg);
    return Init_ODEPhysics_contact_surface_layer(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEPhysics msg_;
};

class Init_ODEPhysics_sor_pgs_w
{
public:
  explicit Init_ODEPhysics_sor_pgs_w(::gazebo_msgs::msg::ODEPhysics & msg)
  : msg_(msg)
  {}
  Init_ODEPhysics_sor_pgs_rms_error_tol sor_pgs_w(::gazebo_msgs::msg::ODEPhysics::_sor_pgs_w_type arg)
  {
    msg_.sor_pgs_w = std::move(arg);
    return Init_ODEPhysics_sor_pgs_rms_error_tol(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEPhysics msg_;
};

class Init_ODEPhysics_sor_pgs_iters
{
public:
  explicit Init_ODEPhysics_sor_pgs_iters(::gazebo_msgs::msg::ODEPhysics & msg)
  : msg_(msg)
  {}
  Init_ODEPhysics_sor_pgs_w sor_pgs_iters(::gazebo_msgs::msg::ODEPhysics::_sor_pgs_iters_type arg)
  {
    msg_.sor_pgs_iters = std::move(arg);
    return Init_ODEPhysics_sor_pgs_w(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEPhysics msg_;
};

class Init_ODEPhysics_sor_pgs_precon_iters
{
public:
  explicit Init_ODEPhysics_sor_pgs_precon_iters(::gazebo_msgs::msg::ODEPhysics & msg)
  : msg_(msg)
  {}
  Init_ODEPhysics_sor_pgs_iters sor_pgs_precon_iters(::gazebo_msgs::msg::ODEPhysics::_sor_pgs_precon_iters_type arg)
  {
    msg_.sor_pgs_precon_iters = std::move(arg);
    return Init_ODEPhysics_sor_pgs_iters(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEPhysics msg_;
};

class Init_ODEPhysics_auto_disable_bodies
{
public:
  Init_ODEPhysics_auto_disable_bodies()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ODEPhysics_sor_pgs_precon_iters auto_disable_bodies(::gazebo_msgs::msg::ODEPhysics::_auto_disable_bodies_type arg)
  {
    msg_.auto_disable_bodies = std::move(arg);
    return Init_ODEPhysics_sor_pgs_precon_iters(msg_);
  }

private:
  ::gazebo_msgs::msg::ODEPhysics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::ODEPhysics>()
{
  return gazebo_msgs::msg::builder::Init_ODEPhysics_auto_disable_bodies();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__BUILDER_HPP_
