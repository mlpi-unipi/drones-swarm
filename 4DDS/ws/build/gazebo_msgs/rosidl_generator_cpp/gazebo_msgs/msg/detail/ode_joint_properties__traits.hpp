// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/msg/detail/ode_joint_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gazebo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ODEJointProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: damping
  {
    if (msg.damping.size() == 0) {
      out << "damping: []";
    } else {
      out << "damping: [";
      size_t pending_items = msg.damping.size();
      for (auto item : msg.damping) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hi_stop
  {
    if (msg.hi_stop.size() == 0) {
      out << "hi_stop: []";
    } else {
      out << "hi_stop: [";
      size_t pending_items = msg.hi_stop.size();
      for (auto item : msg.hi_stop) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lo_stop
  {
    if (msg.lo_stop.size() == 0) {
      out << "lo_stop: []";
    } else {
      out << "lo_stop: [";
      size_t pending_items = msg.lo_stop.size();
      for (auto item : msg.lo_stop) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: erp
  {
    if (msg.erp.size() == 0) {
      out << "erp: []";
    } else {
      out << "erp: [";
      size_t pending_items = msg.erp.size();
      for (auto item : msg.erp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cfm
  {
    if (msg.cfm.size() == 0) {
      out << "cfm: []";
    } else {
      out << "cfm: [";
      size_t pending_items = msg.cfm.size();
      for (auto item : msg.cfm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stop_erp
  {
    if (msg.stop_erp.size() == 0) {
      out << "stop_erp: []";
    } else {
      out << "stop_erp: [";
      size_t pending_items = msg.stop_erp.size();
      for (auto item : msg.stop_erp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stop_cfm
  {
    if (msg.stop_cfm.size() == 0) {
      out << "stop_cfm: []";
    } else {
      out << "stop_cfm: [";
      size_t pending_items = msg.stop_cfm.size();
      for (auto item : msg.stop_cfm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fudge_factor
  {
    if (msg.fudge_factor.size() == 0) {
      out << "fudge_factor: []";
    } else {
      out << "fudge_factor: [";
      size_t pending_items = msg.fudge_factor.size();
      for (auto item : msg.fudge_factor) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fmax
  {
    if (msg.fmax.size() == 0) {
      out << "fmax: []";
    } else {
      out << "fmax: [";
      size_t pending_items = msg.fmax.size();
      for (auto item : msg.fmax) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vel
  {
    if (msg.vel.size() == 0) {
      out << "vel: []";
    } else {
      out << "vel: [";
      size_t pending_items = msg.vel.size();
      for (auto item : msg.vel) {
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
  const ODEJointProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: damping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.damping.size() == 0) {
      out << "damping: []\n";
    } else {
      out << "damping:\n";
      for (auto item : msg.damping) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hi_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hi_stop.size() == 0) {
      out << "hi_stop: []\n";
    } else {
      out << "hi_stop:\n";
      for (auto item : msg.hi_stop) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lo_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lo_stop.size() == 0) {
      out << "lo_stop: []\n";
    } else {
      out << "lo_stop:\n";
      for (auto item : msg.lo_stop) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: erp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.erp.size() == 0) {
      out << "erp: []\n";
    } else {
      out << "erp:\n";
      for (auto item : msg.erp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cfm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cfm.size() == 0) {
      out << "cfm: []\n";
    } else {
      out << "cfm:\n";
      for (auto item : msg.cfm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stop_erp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop_erp.size() == 0) {
      out << "stop_erp: []\n";
    } else {
      out << "stop_erp:\n";
      for (auto item : msg.stop_erp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stop_cfm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop_cfm.size() == 0) {
      out << "stop_cfm: []\n";
    } else {
      out << "stop_cfm:\n";
      for (auto item : msg.stop_cfm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fudge_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fudge_factor.size() == 0) {
      out << "fudge_factor: []\n";
    } else {
      out << "fudge_factor:\n";
      for (auto item : msg.fudge_factor) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fmax.size() == 0) {
      out << "fmax: []\n";
    } else {
      out << "fmax:\n";
      for (auto item : msg.fmax) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vel.size() == 0) {
      out << "vel: []\n";
    } else {
      out << "vel:\n";
      for (auto item : msg.vel) {
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

inline std::string to_yaml(const ODEJointProperties & msg, bool use_flow_style = false)
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
  const gazebo_msgs::msg::ODEJointProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::msg::ODEJointProperties & msg)
{
  return gazebo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::msg::ODEJointProperties>()
{
  return "gazebo_msgs::msg::ODEJointProperties";
}

template<>
inline const char * name<gazebo_msgs::msg::ODEJointProperties>()
{
  return "gazebo_msgs/msg/ODEJointProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::ODEJointProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::ODEJointProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::msg::ODEJointProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__TRAITS_HPP_
