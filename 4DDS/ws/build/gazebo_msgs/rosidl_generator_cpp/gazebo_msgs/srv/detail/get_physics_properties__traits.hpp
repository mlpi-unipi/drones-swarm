// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/GetPhysicsProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/srv/detail/get_physics_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPhysicsProperties_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPhysicsProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPhysicsProperties_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gazebo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gazebo_msgs::srv::GetPhysicsProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::GetPhysicsProperties_Request & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::GetPhysicsProperties_Request>()
{
  return "gazebo_msgs::srv::GetPhysicsProperties_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::GetPhysicsProperties_Request>()
{
  return "gazebo_msgs/srv/GetPhysicsProperties_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetPhysicsProperties_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetPhysicsProperties_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gazebo_msgs::srv::GetPhysicsProperties_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'gravity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'ode_config'
#include "gazebo_msgs/msg/detail/ode_physics__traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetPhysicsProperties_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_step
  {
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << ", ";
  }

  // member: pause
  {
    out << "pause: ";
    rosidl_generator_traits::value_to_yaml(msg.pause, out);
    out << ", ";
  }

  // member: max_update_rate
  {
    out << "max_update_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_update_rate, out);
    out << ", ";
  }

  // member: gravity
  {
    out << "gravity: ";
    to_flow_style_yaml(msg.gravity, out);
    out << ", ";
  }

  // member: ode_config
  {
    out << "ode_config: ";
    to_flow_style_yaml(msg.ode_config, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: status_message
  {
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetPhysicsProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << "\n";
  }

  // member: pause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pause: ";
    rosidl_generator_traits::value_to_yaml(msg.pause, out);
    out << "\n";
  }

  // member: max_update_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_update_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_update_rate, out);
    out << "\n";
  }

  // member: gravity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity:\n";
    to_block_style_yaml(msg.gravity, out, indentation + 2);
  }

  // member: ode_config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ode_config:\n";
    to_block_style_yaml(msg.ode_config, out, indentation + 2);
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: status_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetPhysicsProperties_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gazebo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gazebo_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gazebo_msgs::srv::GetPhysicsProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::GetPhysicsProperties_Response & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::GetPhysicsProperties_Response>()
{
  return "gazebo_msgs::srv::GetPhysicsProperties_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::GetPhysicsProperties_Response>()
{
  return "gazebo_msgs/srv/GetPhysicsProperties_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetPhysicsProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetPhysicsProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::GetPhysicsProperties_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetPhysicsProperties>()
{
  return "gazebo_msgs::srv::GetPhysicsProperties";
}

template<>
inline const char * name<gazebo_msgs::srv::GetPhysicsProperties>()
{
  return "gazebo_msgs/srv/GetPhysicsProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetPhysicsProperties>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::GetPhysicsProperties_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::GetPhysicsProperties_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetPhysicsProperties>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::GetPhysicsProperties_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::GetPhysicsProperties_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::GetPhysicsProperties>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::GetPhysicsProperties_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::GetPhysicsProperties_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__TRAITS_HPP_
