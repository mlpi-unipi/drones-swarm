// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/SetLinkProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_LINK_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_LINK_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/srv/detail/set_link_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'com'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLinkProperties_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: link_name
  {
    out << "link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link_name, out);
    out << ", ";
  }

  // member: com
  {
    out << "com: ";
    to_flow_style_yaml(msg.com, out);
    out << ", ";
  }

  // member: gravity_mode
  {
    out << "gravity_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_mode, out);
    out << ", ";
  }

  // member: mass
  {
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << ", ";
  }

  // member: ixx
  {
    out << "ixx: ";
    rosidl_generator_traits::value_to_yaml(msg.ixx, out);
    out << ", ";
  }

  // member: ixy
  {
    out << "ixy: ";
    rosidl_generator_traits::value_to_yaml(msg.ixy, out);
    out << ", ";
  }

  // member: ixz
  {
    out << "ixz: ";
    rosidl_generator_traits::value_to_yaml(msg.ixz, out);
    out << ", ";
  }

  // member: iyy
  {
    out << "iyy: ";
    rosidl_generator_traits::value_to_yaml(msg.iyy, out);
    out << ", ";
  }

  // member: iyz
  {
    out << "iyz: ";
    rosidl_generator_traits::value_to_yaml(msg.iyz, out);
    out << ", ";
  }

  // member: izz
  {
    out << "izz: ";
    rosidl_generator_traits::value_to_yaml(msg.izz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLinkProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link_name, out);
    out << "\n";
  }

  // member: com
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "com:\n";
    to_block_style_yaml(msg.com, out, indentation + 2);
  }

  // member: gravity_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_mode, out);
    out << "\n";
  }

  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << "\n";
  }

  // member: ixx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixx: ";
    rosidl_generator_traits::value_to_yaml(msg.ixx, out);
    out << "\n";
  }

  // member: ixy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixy: ";
    rosidl_generator_traits::value_to_yaml(msg.ixy, out);
    out << "\n";
  }

  // member: ixz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ixz: ";
    rosidl_generator_traits::value_to_yaml(msg.ixz, out);
    out << "\n";
  }

  // member: iyy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iyy: ";
    rosidl_generator_traits::value_to_yaml(msg.iyy, out);
    out << "\n";
  }

  // member: iyz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iyz: ";
    rosidl_generator_traits::value_to_yaml(msg.iyz, out);
    out << "\n";
  }

  // member: izz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "izz: ";
    rosidl_generator_traits::value_to_yaml(msg.izz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLinkProperties_Request & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::SetLinkProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::SetLinkProperties_Request & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::SetLinkProperties_Request>()
{
  return "gazebo_msgs::srv::SetLinkProperties_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::SetLinkProperties_Request>()
{
  return "gazebo_msgs/srv/SetLinkProperties_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetLinkProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetLinkProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::SetLinkProperties_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLinkProperties_Response & msg,
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
  const SetLinkProperties_Response & msg,
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

inline std::string to_yaml(const SetLinkProperties_Response & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::SetLinkProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::SetLinkProperties_Response & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::SetLinkProperties_Response>()
{
  return "gazebo_msgs::srv::SetLinkProperties_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::SetLinkProperties_Response>()
{
  return "gazebo_msgs/srv/SetLinkProperties_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetLinkProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetLinkProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::SetLinkProperties_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetLinkProperties>()
{
  return "gazebo_msgs::srv::SetLinkProperties";
}

template<>
inline const char * name<gazebo_msgs::srv::SetLinkProperties>()
{
  return "gazebo_msgs/srv/SetLinkProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetLinkProperties>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::SetLinkProperties_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::SetLinkProperties_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetLinkProperties>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::SetLinkProperties_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::SetLinkProperties_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::SetLinkProperties>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::SetLinkProperties_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::SetLinkProperties_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_LINK_PROPERTIES__TRAITS_HPP_
