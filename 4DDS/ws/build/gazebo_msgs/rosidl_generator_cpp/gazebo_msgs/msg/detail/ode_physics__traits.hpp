// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/msg/detail/ode_physics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gazebo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ODEPhysics & msg,
  std::ostream & out)
{
  out << "{";
  // member: auto_disable_bodies
  {
    out << "auto_disable_bodies: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_disable_bodies, out);
    out << ", ";
  }

  // member: sor_pgs_precon_iters
  {
    out << "sor_pgs_precon_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.sor_pgs_precon_iters, out);
    out << ", ";
  }

  // member: sor_pgs_iters
  {
    out << "sor_pgs_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.sor_pgs_iters, out);
    out << ", ";
  }

  // member: sor_pgs_w
  {
    out << "sor_pgs_w: ";
    rosidl_generator_traits::value_to_yaml(msg.sor_pgs_w, out);
    out << ", ";
  }

  // member: sor_pgs_rms_error_tol
  {
    out << "sor_pgs_rms_error_tol: ";
    rosidl_generator_traits::value_to_yaml(msg.sor_pgs_rms_error_tol, out);
    out << ", ";
  }

  // member: contact_surface_layer
  {
    out << "contact_surface_layer: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_surface_layer, out);
    out << ", ";
  }

  // member: contact_max_correcting_vel
  {
    out << "contact_max_correcting_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_max_correcting_vel, out);
    out << ", ";
  }

  // member: cfm
  {
    out << "cfm: ";
    rosidl_generator_traits::value_to_yaml(msg.cfm, out);
    out << ", ";
  }

  // member: erp
  {
    out << "erp: ";
    rosidl_generator_traits::value_to_yaml(msg.erp, out);
    out << ", ";
  }

  // member: max_contacts
  {
    out << "max_contacts: ";
    rosidl_generator_traits::value_to_yaml(msg.max_contacts, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ODEPhysics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: auto_disable_bodies
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_disable_bodies: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_disable_bodies, out);
    out << "\n";
  }

  // member: sor_pgs_precon_iters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sor_pgs_precon_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.sor_pgs_precon_iters, out);
    out << "\n";
  }

  // member: sor_pgs_iters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sor_pgs_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.sor_pgs_iters, out);
    out << "\n";
  }

  // member: sor_pgs_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sor_pgs_w: ";
    rosidl_generator_traits::value_to_yaml(msg.sor_pgs_w, out);
    out << "\n";
  }

  // member: sor_pgs_rms_error_tol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sor_pgs_rms_error_tol: ";
    rosidl_generator_traits::value_to_yaml(msg.sor_pgs_rms_error_tol, out);
    out << "\n";
  }

  // member: contact_surface_layer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_surface_layer: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_surface_layer, out);
    out << "\n";
  }

  // member: contact_max_correcting_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_max_correcting_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_max_correcting_vel, out);
    out << "\n";
  }

  // member: cfm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cfm: ";
    rosidl_generator_traits::value_to_yaml(msg.cfm, out);
    out << "\n";
  }

  // member: erp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "erp: ";
    rosidl_generator_traits::value_to_yaml(msg.erp, out);
    out << "\n";
  }

  // member: max_contacts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_contacts: ";
    rosidl_generator_traits::value_to_yaml(msg.max_contacts, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ODEPhysics & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace gazebo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gazebo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gazebo_msgs::msg::ODEPhysics & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::msg::ODEPhysics & msg)
{
  return gazebo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::msg::ODEPhysics>()
{
  return "gazebo_msgs::msg::ODEPhysics";
}

template<>
inline const char * name<gazebo_msgs::msg::ODEPhysics>()
{
  return "gazebo_msgs/msg/ODEPhysics";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::ODEPhysics>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::ODEPhysics>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gazebo_msgs::msg::ODEPhysics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__TRAITS_HPP_
