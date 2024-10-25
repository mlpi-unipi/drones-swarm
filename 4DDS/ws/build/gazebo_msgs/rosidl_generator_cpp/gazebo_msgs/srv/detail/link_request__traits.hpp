// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/LinkRequest.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__LINK_REQUEST__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__LINK_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/srv/detail/link_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LinkRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: link_name
  {
    out << "link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.link_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinkRequest_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinkRequest_Request & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::LinkRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::LinkRequest_Request & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::LinkRequest_Request>()
{
  return "gazebo_msgs::srv::LinkRequest_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::LinkRequest_Request>()
{
  return "gazebo_msgs/srv/LinkRequest_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::LinkRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::LinkRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::LinkRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LinkRequest_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LinkRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LinkRequest_Response & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::LinkRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::LinkRequest_Response & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::LinkRequest_Response>()
{
  return "gazebo_msgs::srv::LinkRequest_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::LinkRequest_Response>()
{
  return "gazebo_msgs/srv/LinkRequest_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::LinkRequest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::LinkRequest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gazebo_msgs::srv::LinkRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::LinkRequest>()
{
  return "gazebo_msgs::srv::LinkRequest";
}

template<>
inline const char * name<gazebo_msgs::srv::LinkRequest>()
{
  return "gazebo_msgs/srv/LinkRequest";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::LinkRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::LinkRequest_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::LinkRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::LinkRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::LinkRequest_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::LinkRequest_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::LinkRequest>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::LinkRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::LinkRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__LINK_REQUEST__TRAITS_HPP_
