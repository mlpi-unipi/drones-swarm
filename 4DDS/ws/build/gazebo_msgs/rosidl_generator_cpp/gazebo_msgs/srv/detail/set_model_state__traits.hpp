// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/SetModelState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_STATE__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/srv/detail/set_model_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'model_state'
#include "gazebo_msgs/msg/detail/model_state__traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetModelState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: model_state
  {
    out << "model_state: ";
    to_flow_style_yaml(msg.model_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetModelState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_state:\n";
    to_block_style_yaml(msg.model_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetModelState_Request & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::SetModelState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::SetModelState_Request & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::SetModelState_Request>()
{
  return "gazebo_msgs::srv::SetModelState_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::SetModelState_Request>()
{
  return "gazebo_msgs/srv/SetModelState_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetModelState_Request>
  : std::integral_constant<bool, has_fixed_size<gazebo_msgs::msg::ModelState>::value> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetModelState_Request>
  : std::integral_constant<bool, has_bounded_size<gazebo_msgs::msg::ModelState>::value> {};

template<>
struct is_message<gazebo_msgs::srv::SetModelState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetModelState_Response & msg,
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
  const SetModelState_Response & msg,
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

inline std::string to_yaml(const SetModelState_Response & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::SetModelState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::SetModelState_Response & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::SetModelState_Response>()
{
  return "gazebo_msgs::srv::SetModelState_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::SetModelState_Response>()
{
  return "gazebo_msgs/srv/SetModelState_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetModelState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetModelState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::SetModelState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetModelState>()
{
  return "gazebo_msgs::srv::SetModelState";
}

template<>
inline const char * name<gazebo_msgs::srv::SetModelState>()
{
  return "gazebo_msgs/srv/SetModelState";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetModelState>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::SetModelState_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::SetModelState_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetModelState>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::SetModelState_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::SetModelState_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::SetModelState>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::SetModelState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::SetModelState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_STATE__TRAITS_HPP_
