// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/AutotuneAttitudeControlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/autotune_attitude_control_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AutotuneAttitudeControlStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: coeff
  {
    if (msg.coeff.size() == 0) {
      out << "coeff: []";
    } else {
      out << "coeff: [";
      size_t pending_items = msg.coeff.size();
      for (auto item : msg.coeff) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: coeff_var
  {
    if (msg.coeff_var.size() == 0) {
      out << "coeff_var: []";
    } else {
      out << "coeff_var: [";
      size_t pending_items = msg.coeff_var.size();
      for (auto item : msg.coeff_var) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fitness
  {
    out << "fitness: ";
    rosidl_generator_traits::value_to_yaml(msg.fitness, out);
    out << ", ";
  }

  // member: innov
  {
    out << "innov: ";
    rosidl_generator_traits::value_to_yaml(msg.innov, out);
    out << ", ";
  }

  // member: dt_model
  {
    out << "dt_model: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_model, out);
    out << ", ";
  }

  // member: kc
  {
    out << "kc: ";
    rosidl_generator_traits::value_to_yaml(msg.kc, out);
    out << ", ";
  }

  // member: ki
  {
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << ", ";
  }

  // member: kff
  {
    out << "kff: ";
    rosidl_generator_traits::value_to_yaml(msg.kff, out);
    out << ", ";
  }

  // member: att_p
  {
    out << "att_p: ";
    rosidl_generator_traits::value_to_yaml(msg.att_p, out);
    out << ", ";
  }

  // member: rate_sp
  {
    if (msg.rate_sp.size() == 0) {
      out << "rate_sp: []";
    } else {
      out << "rate_sp: [";
      size_t pending_items = msg.rate_sp.size();
      for (auto item : msg.rate_sp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: u_filt
  {
    out << "u_filt: ";
    rosidl_generator_traits::value_to_yaml(msg.u_filt, out);
    out << ", ";
  }

  // member: y_filt
  {
    out << "y_filt: ";
    rosidl_generator_traits::value_to_yaml(msg.y_filt, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AutotuneAttitudeControlStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: coeff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coeff.size() == 0) {
      out << "coeff: []\n";
    } else {
      out << "coeff:\n";
      for (auto item : msg.coeff) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: coeff_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coeff_var.size() == 0) {
      out << "coeff_var: []\n";
    } else {
      out << "coeff_var:\n";
      for (auto item : msg.coeff_var) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fitness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fitness: ";
    rosidl_generator_traits::value_to_yaml(msg.fitness, out);
    out << "\n";
  }

  // member: innov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innov: ";
    rosidl_generator_traits::value_to_yaml(msg.innov, out);
    out << "\n";
  }

  // member: dt_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt_model: ";
    rosidl_generator_traits::value_to_yaml(msg.dt_model, out);
    out << "\n";
  }

  // member: kc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kc: ";
    rosidl_generator_traits::value_to_yaml(msg.kc, out);
    out << "\n";
  }

  // member: ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << "\n";
  }

  // member: kff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kff: ";
    rosidl_generator_traits::value_to_yaml(msg.kff, out);
    out << "\n";
  }

  // member: att_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "att_p: ";
    rosidl_generator_traits::value_to_yaml(msg.att_p, out);
    out << "\n";
  }

  // member: rate_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rate_sp.size() == 0) {
      out << "rate_sp: []\n";
    } else {
      out << "rate_sp:\n";
      for (auto item : msg.rate_sp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: u_filt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_filt: ";
    rosidl_generator_traits::value_to_yaml(msg.u_filt, out);
    out << "\n";
  }

  // member: y_filt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_filt: ";
    rosidl_generator_traits::value_to_yaml(msg.y_filt, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AutotuneAttitudeControlStatus & msg, bool use_flow_style = false)
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

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::AutotuneAttitudeControlStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::AutotuneAttitudeControlStatus>()
{
  return "px4_msgs::msg::AutotuneAttitudeControlStatus";
}

template<>
inline const char * name<px4_msgs::msg::AutotuneAttitudeControlStatus>()
{
  return "px4_msgs/msg/AutotuneAttitudeControlStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::AutotuneAttitudeControlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::AutotuneAttitudeControlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::AutotuneAttitudeControlStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__TRAITS_HPP_
