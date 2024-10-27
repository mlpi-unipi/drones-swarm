// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ControlAllocatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/control_allocator_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlAllocatorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: torque_setpoint_achieved
  {
    out << "torque_setpoint_achieved: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_setpoint_achieved, out);
    out << ", ";
  }

  // member: unallocated_torque
  {
    if (msg.unallocated_torque.size() == 0) {
      out << "unallocated_torque: []";
    } else {
      out << "unallocated_torque: [";
      size_t pending_items = msg.unallocated_torque.size();
      for (auto item : msg.unallocated_torque) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: thrust_setpoint_achieved
  {
    out << "thrust_setpoint_achieved: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust_setpoint_achieved, out);
    out << ", ";
  }

  // member: unallocated_thrust
  {
    if (msg.unallocated_thrust.size() == 0) {
      out << "unallocated_thrust: []";
    } else {
      out << "unallocated_thrust: [";
      size_t pending_items = msg.unallocated_thrust.size();
      for (auto item : msg.unallocated_thrust) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: actuator_saturation
  {
    if (msg.actuator_saturation.size() == 0) {
      out << "actuator_saturation: []";
    } else {
      out << "actuator_saturation: [";
      size_t pending_items = msg.actuator_saturation.size();
      for (auto item : msg.actuator_saturation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: handled_motor_failure_mask
  {
    out << "handled_motor_failure_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.handled_motor_failure_mask, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlAllocatorStatus & msg,
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

  // member: torque_setpoint_achieved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_setpoint_achieved: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_setpoint_achieved, out);
    out << "\n";
  }

  // member: unallocated_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unallocated_torque.size() == 0) {
      out << "unallocated_torque: []\n";
    } else {
      out << "unallocated_torque:\n";
      for (auto item : msg.unallocated_torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: thrust_setpoint_achieved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thrust_setpoint_achieved: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust_setpoint_achieved, out);
    out << "\n";
  }

  // member: unallocated_thrust
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unallocated_thrust.size() == 0) {
      out << "unallocated_thrust: []\n";
    } else {
      out << "unallocated_thrust:\n";
      for (auto item : msg.unallocated_thrust) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actuator_saturation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actuator_saturation.size() == 0) {
      out << "actuator_saturation: []\n";
    } else {
      out << "actuator_saturation:\n";
      for (auto item : msg.actuator_saturation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: handled_motor_failure_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "handled_motor_failure_mask: ";
    rosidl_generator_traits::value_to_yaml(msg.handled_motor_failure_mask, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlAllocatorStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::ControlAllocatorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::ControlAllocatorStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::ControlAllocatorStatus>()
{
  return "px4_msgs::msg::ControlAllocatorStatus";
}

template<>
inline const char * name<px4_msgs::msg::ControlAllocatorStatus>()
{
  return "px4_msgs/msg/ControlAllocatorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::ControlAllocatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ControlAllocatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ControlAllocatorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__CONTROL_ALLOCATOR_STATUS__TRAITS_HPP_
