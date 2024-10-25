// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/ContactsState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/msg/detail/contacts_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'states'
#include "gazebo_msgs/msg/detail/contact_state__traits.hpp"

namespace gazebo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContactsState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: states
  {
    if (msg.states.size() == 0) {
      out << "states: []";
    } else {
      out << "states: [";
      size_t pending_items = msg.states.size();
      for (auto item : msg.states) {
        to_flow_style_yaml(item, out);
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
  const ContactsState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactsState & msg, bool use_flow_style = false)
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
  const gazebo_msgs::msg::ContactsState & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::msg::ContactsState & msg)
{
  return gazebo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::msg::ContactsState>()
{
  return "gazebo_msgs::msg::ContactsState";
}

template<>
inline const char * name<gazebo_msgs::msg::ContactsState>()
{
  return "gazebo_msgs/msg/ContactsState";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::ContactsState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::ContactsState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::msg::ContactsState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__TRAITS_HPP_
