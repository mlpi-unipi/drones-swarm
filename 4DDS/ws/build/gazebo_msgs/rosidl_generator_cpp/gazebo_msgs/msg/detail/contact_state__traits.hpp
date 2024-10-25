// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/ContactState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/msg/detail/contact_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'wrenches'
// Member 'total_wrench'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"
// Member 'contact_positions'
// Member 'contact_normals'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace gazebo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContactState & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << ", ";
  }

  // member: collision1_name
  {
    out << "collision1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.collision1_name, out);
    out << ", ";
  }

  // member: collision2_name
  {
    out << "collision2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.collision2_name, out);
    out << ", ";
  }

  // member: wrenches
  {
    if (msg.wrenches.size() == 0) {
      out << "wrenches: []";
    } else {
      out << "wrenches: [";
      size_t pending_items = msg.wrenches.size();
      for (auto item : msg.wrenches) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: total_wrench
  {
    out << "total_wrench: ";
    to_flow_style_yaml(msg.total_wrench, out);
    out << ", ";
  }

  // member: contact_positions
  {
    if (msg.contact_positions.size() == 0) {
      out << "contact_positions: []";
    } else {
      out << "contact_positions: [";
      size_t pending_items = msg.contact_positions.size();
      for (auto item : msg.contact_positions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: contact_normals
  {
    if (msg.contact_normals.size() == 0) {
      out << "contact_normals: []";
    } else {
      out << "contact_normals: [";
      size_t pending_items = msg.contact_normals.size();
      for (auto item : msg.contact_normals) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: depths
  {
    if (msg.depths.size() == 0) {
      out << "depths: []";
    } else {
      out << "depths: [";
      size_t pending_items = msg.depths.size();
      for (auto item : msg.depths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContactState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }

  // member: collision1_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision1_name: ";
    rosidl_generator_traits::value_to_yaml(msg.collision1_name, out);
    out << "\n";
  }

  // member: collision2_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision2_name: ";
    rosidl_generator_traits::value_to_yaml(msg.collision2_name, out);
    out << "\n";
  }

  // member: wrenches
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wrenches.size() == 0) {
      out << "wrenches: []\n";
    } else {
      out << "wrenches:\n";
      for (auto item : msg.wrenches) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: total_wrench
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_wrench:\n";
    to_block_style_yaml(msg.total_wrench, out, indentation + 2);
  }

  // member: contact_positions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contact_positions.size() == 0) {
      out << "contact_positions: []\n";
    } else {
      out << "contact_positions:\n";
      for (auto item : msg.contact_positions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: contact_normals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contact_normals.size() == 0) {
      out << "contact_normals: []\n";
    } else {
      out << "contact_normals:\n";
      for (auto item : msg.contact_normals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: depths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.depths.size() == 0) {
      out << "depths: []\n";
    } else {
      out << "depths:\n";
      for (auto item : msg.depths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactState & msg, bool use_flow_style = false)
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
  const gazebo_msgs::msg::ContactState & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::msg::ContactState & msg)
{
  return gazebo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::msg::ContactState>()
{
  return "gazebo_msgs::msg::ContactState";
}

template<>
inline const char * name<gazebo_msgs::msg::ContactState>()
{
  return "gazebo_msgs/msg/ContactState";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::ContactState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::ContactState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::msg::ContactState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__TRAITS_HPP_
