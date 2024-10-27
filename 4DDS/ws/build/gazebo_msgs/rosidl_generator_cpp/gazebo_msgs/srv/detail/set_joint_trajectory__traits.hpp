// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/SetJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/srv/detail/set_joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__traits.hpp"
// Member 'model_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: model_name
  {
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << ", ";
  }

  // member: joint_trajectory
  {
    out << "joint_trajectory: ";
    to_flow_style_yaml(msg.joint_trajectory, out);
    out << ", ";
  }

  // member: model_pose
  {
    out << "model_pose: ";
    to_flow_style_yaml(msg.model_pose, out);
    out << ", ";
  }

  // member: set_model_pose
  {
    out << "set_model_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.set_model_pose, out);
    out << ", ";
  }

  // member: disable_physics_updates
  {
    out << "disable_physics_updates: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_physics_updates, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJointTrajectory_Request & msg,
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

  // member: joint_trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_trajectory:\n";
    to_block_style_yaml(msg.joint_trajectory, out, indentation + 2);
  }

  // member: model_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_pose:\n";
    to_block_style_yaml(msg.model_pose, out, indentation + 2);
  }

  // member: set_model_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_model_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.set_model_pose, out);
    out << "\n";
  }

  // member: disable_physics_updates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_physics_updates: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_physics_updates, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointTrajectory_Request & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::SetJointTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::SetJointTrajectory_Request & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::SetJointTrajectory_Request>()
{
  return "gazebo_msgs::srv::SetJointTrajectory_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::SetJointTrajectory_Request>()
{
  return "gazebo_msgs/srv/SetJointTrajectory_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetJointTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetJointTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::SetJointTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gazebo_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointTrajectory_Response & msg,
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
  const SetJointTrajectory_Response & msg,
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

inline std::string to_yaml(const SetJointTrajectory_Response & msg, bool use_flow_style = false)
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
  const gazebo_msgs::srv::SetJointTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::srv::SetJointTrajectory_Response & msg)
{
  return gazebo_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::srv::SetJointTrajectory_Response>()
{
  return "gazebo_msgs::srv::SetJointTrajectory_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::SetJointTrajectory_Response>()
{
  return "gazebo_msgs/srv/SetJointTrajectory_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetJointTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetJointTrajectory_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::SetJointTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetJointTrajectory>()
{
  return "gazebo_msgs::srv::SetJointTrajectory";
}

template<>
inline const char * name<gazebo_msgs::srv::SetJointTrajectory>()
{
  return "gazebo_msgs/srv/SetJointTrajectory";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetJointTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::SetJointTrajectory_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::SetJointTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetJointTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::SetJointTrajectory_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::SetJointTrajectory_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::SetJointTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::SetJointTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::SetJointTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__TRAITS_HPP_
