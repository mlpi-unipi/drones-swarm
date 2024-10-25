// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/SetLightProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_LIGHT_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_LIGHT_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/srv/detail/set_light_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'diffuse'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLightProperties_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: light_name
  {
    out << "light_name: ";
    rosidl_generator_traits::value_to_yaml(msg.light_name, out);
    out << ", ";
  }

  // member: diffuse
  {
    out << "diffuse: ";
    to_flow_style_yaml(msg.diffuse, out);
    out << ", ";
  }

  // member: attenuation_constant
  {
    out << "attenuation_constant: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_constant, out);
    out << ", ";
  }

  // member: attenuation_linear
  {
    out << "attenuation_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_linear, out);
    out << ", ";
  }

  // member: attenuation_quadratic
  {
    out << "attenuation_quadratic: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_quadratic, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLightProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: light_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "light_name: ";
    rosidl_generator_traits::value_to_yaml(msg.light_name, out);
    out << "\n";
  }

  // member: diffuse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diffuse:\n";
    to_block_style_yaml(msg.diffuse, out, indentation + 2);
  }

  // member: attenuation_constant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attenuation_constant: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_constant, out);
    out << "\n";
  }

  // member: attenuation_linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attenuation_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_linear, out);
    out << "\n";
  }

  // member: attenuation_quadratic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attenuation_quadratic: ";
    rosidl_generator_traits::value_to_yaml(msg.attenuation_quadratic, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLightProperties_Request & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::SetLightProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::SetLightProperties_Request & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::SetLightProperties_Request>()
{
  return "gazebo_msgs::srv::SetLightProperties_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::SetLightProperties_Request>()
{
  return "gazebo_msgs/srv/SetLightProperties_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetLightProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetLightProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::SetLightProperties_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLightProperties_Response & msg,
  std::ostream & out)
{
  out << "{";
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
  const SetLightProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const SetLightProperties_Response & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::SetLightProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::SetLightProperties_Response & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::SetLightProperties_Response>()
{
  return "gazebo_msgs::srv::SetLightProperties_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::SetLightProperties_Response>()
{
  return "gazebo_msgs/srv/SetLightProperties_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetLightProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetLightProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::SetLightProperties_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetLightProperties>()
{
  return "gazebo_msgs::srv::SetLightProperties";
}

template<>
inline const char * name<gazebo_msgs::srv::SetLightProperties>()
{
  return "gazebo_msgs/srv/SetLightProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetLightProperties>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::SetLightProperties_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::SetLightProperties_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetLightProperties>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::SetLightProperties_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::SetLightProperties_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::SetLightProperties>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::SetLightProperties_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::SetLightProperties_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_LIGHT_PROPERTIES__TRAITS_HPP_
