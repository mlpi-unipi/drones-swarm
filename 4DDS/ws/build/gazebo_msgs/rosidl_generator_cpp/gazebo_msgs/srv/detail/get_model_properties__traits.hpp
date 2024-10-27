// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/GetModelProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/srv/detail/get_model_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetModelProperties_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: model_name
  {
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetModelProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetModelProperties_Request & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::GetModelProperties_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::GetModelProperties_Request & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::GetModelProperties_Request>()
{
  return "gazebo_msgs::srv::GetModelProperties_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::GetModelProperties_Request>()
{
  return "gazebo_msgs/srv/GetModelProperties_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetModelProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetModelProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::GetModelProperties_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetModelProperties_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: parent_model_name
  {
    out << "parent_model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_model_name, out);
    out << ", ";
  }

  // member: canonical_body_name
  {
    out << "canonical_body_name: ";
    rosidl_generator_traits::value_to_yaml(msg.canonical_body_name, out);
    out << ", ";
  }

  // member: body_names
  {
    if (msg.body_names.size() == 0) {
      out << "body_names: []";
    } else {
      out << "body_names: [";
      size_t pending_items = msg.body_names.size();
      for (auto item : msg.body_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: geom_names
  {
    if (msg.geom_names.size() == 0) {
      out << "geom_names: []";
    } else {
      out << "geom_names: [";
      size_t pending_items = msg.geom_names.size();
      for (auto item : msg.geom_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_names
  {
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []";
    } else {
      out << "joint_names: [";
      size_t pending_items = msg.joint_names.size();
      for (auto item : msg.joint_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: child_model_names
  {
    if (msg.child_model_names.size() == 0) {
      out << "child_model_names: []";
    } else {
      out << "child_model_names: [";
      size_t pending_items = msg.child_model_names.size();
      for (auto item : msg.child_model_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_static
  {
    out << "is_static: ";
    rosidl_generator_traits::value_to_yaml(msg.is_static, out);
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
  const GetModelProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parent_model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_model_name, out);
    out << "\n";
  }

  // member: canonical_body_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "canonical_body_name: ";
    rosidl_generator_traits::value_to_yaml(msg.canonical_body_name, out);
    out << "\n";
  }

  // member: body_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.body_names.size() == 0) {
      out << "body_names: []\n";
    } else {
      out << "body_names:\n";
      for (auto item : msg.body_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: geom_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.geom_names.size() == 0) {
      out << "geom_names: []\n";
    } else {
      out << "geom_names:\n";
      for (auto item : msg.geom_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_names.size() == 0) {
      out << "joint_names: []\n";
    } else {
      out << "joint_names:\n";
      for (auto item : msg.joint_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: child_model_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.child_model_names.size() == 0) {
      out << "child_model_names: []\n";
    } else {
      out << "child_model_names:\n";
      for (auto item : msg.child_model_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_static
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_static: ";
    rosidl_generator_traits::value_to_yaml(msg.is_static, out);
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

inline std::string to_yaml(const GetModelProperties_Response & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::GetModelProperties_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::GetModelProperties_Response & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::GetModelProperties_Response>()
{
  return "gazebo_msgs::srv::GetModelProperties_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::GetModelProperties_Response>()
{
  return "gazebo_msgs/srv/GetModelProperties_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetModelProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetModelProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::GetModelProperties_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetModelProperties>()
{
  return "gazebo_msgs::srv::GetModelProperties";
}

template<>
inline const char * name<gazebo_msgs::srv::GetModelProperties>()
{
  return "gazebo_msgs/srv/GetModelProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetModelProperties>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::GetModelProperties_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::GetModelProperties_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetModelProperties>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::GetModelProperties_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::GetModelProperties_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::GetModelProperties>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::GetModelProperties_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::GetModelProperties_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__TRAITS_HPP_
