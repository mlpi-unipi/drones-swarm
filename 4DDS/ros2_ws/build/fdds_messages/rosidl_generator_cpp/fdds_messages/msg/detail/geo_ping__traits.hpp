// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fdds_messages:msg/GeoPing.idl
// generated code does not contain a copyright notice

#ifndef FDDS_MESSAGES__MSG__DETAIL__GEO_PING__TRAITS_HPP_
#define FDDS_MESSAGES__MSG__DETAIL__GEO_PING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fdds_messages/msg/detail/geo_ping__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fdds_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeoPing & msg,
  std::ostream & out)
{
  out << "{";
  // member: vehicle_id
  {
    out << "vehicle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_id, out);
    out << ", ";
  }

  // member: latitude_m
  {
    out << "latitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_m, out);
    out << ", ";
  }

  // member: longitude_m
  {
    out << "longitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_m, out);
    out << ", ";
  }

  // member: speed_north_m_s
  {
    out << "speed_north_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_north_m_s, out);
    out << ", ";
  }

  // member: speed_east_m_s
  {
    out << "speed_east_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_east_m_s, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeoPing & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vehicle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_id, out);
    out << "\n";
  }

  // member: latitude_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_m, out);
    out << "\n";
  }

  // member: longitude_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_m, out);
    out << "\n";
  }

  // member: speed_north_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_north_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_north_m_s, out);
    out << "\n";
  }

  // member: speed_east_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_east_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_east_m_s, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeoPing & msg, bool use_flow_style = false)
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

}  // namespace fdds_messages

namespace rosidl_generator_traits
{

[[deprecated("use fdds_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fdds_messages::msg::GeoPing & msg,
  std::ostream & out, size_t indentation = 0)
{
  fdds_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fdds_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const fdds_messages::msg::GeoPing & msg)
{
  return fdds_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fdds_messages::msg::GeoPing>()
{
  return "fdds_messages::msg::GeoPing";
}

template<>
inline const char * name<fdds_messages::msg::GeoPing>()
{
  return "fdds_messages/msg/GeoPing";
}

template<>
struct has_fixed_size<fdds_messages::msg::GeoPing>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fdds_messages::msg::GeoPing>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fdds_messages::msg::GeoPing>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FDDS_MESSAGES__MSG__DETAIL__GEO_PING__TRAITS_HPP_
