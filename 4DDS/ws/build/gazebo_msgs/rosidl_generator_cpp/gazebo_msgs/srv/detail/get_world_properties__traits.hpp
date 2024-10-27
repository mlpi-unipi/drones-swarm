// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/GetWorldProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_WORLD_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_WORLD_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/srv/detail/get_world_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWorldProperties_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetWorldProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetWorldProperties_Request & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::GetWorldProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::GetWorldProperties_Request & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::GetWorldProperties_Request>()
{
  return "gazebo_msgs::srv::GetWorldProperties_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::GetWorldProperties_Request>()
{
  return "gazebo_msgs/srv/GetWorldProperties_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetWorldProperties_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetWorldProperties_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gazebo_msgs::srv::GetWorldProperties_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetWorldProperties_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sim_time
  {
    out << "sim_time: ";
    rosidl_generator_traits::value_to_yaml(msg.sim_time, out);
    out << ", ";
  }

  // member: model_names
  {
    if (msg.model_names.size() == 0) {
      out << "model_names: []";
    } else {
      out << "model_names: [";
      size_t pending_items = msg.model_names.size();
      for (auto item : msg.model_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rendering_enabled
  {
    out << "rendering_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.rendering_enabled, out);
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
  const GetWorldProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sim_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sim_time: ";
    rosidl_generator_traits::value_to_yaml(msg.sim_time, out);
    out << "\n";
  }

  // member: model_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.model_names.size() == 0) {
      out << "model_names: []\n";
    } else {
      out << "model_names:\n";
      for (auto item : msg.model_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rendering_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rendering_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.rendering_enabled, out);
    out << "\n";
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

inline std::string to_yaml(const GetWorldProperties_Response & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::GetWorldProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::GetWorldProperties_Response & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::GetWorldProperties_Response>()
{
  return "gazebo_msgs::srv::GetWorldProperties_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::GetWorldProperties_Response>()
{
  return "gazebo_msgs/srv/GetWorldProperties_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetWorldProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetWorldProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::GetWorldProperties_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetWorldProperties>()
{
  return "gazebo_msgs::srv::GetWorldProperties";
}

template<>
inline const char * name<gazebo_msgs::srv::GetWorldProperties>()
{
  return "gazebo_msgs/srv/GetWorldProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetWorldProperties>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::GetWorldProperties_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::GetWorldProperties_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetWorldProperties>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::GetWorldProperties_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::GetWorldProperties_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::GetWorldProperties>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::GetWorldProperties_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::GetWorldProperties_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_WORLD_PROPERTIES__TRAITS_HPP_
