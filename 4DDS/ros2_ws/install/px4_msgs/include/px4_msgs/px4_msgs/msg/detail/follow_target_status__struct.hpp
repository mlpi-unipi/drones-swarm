// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FollowTargetStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FollowTargetStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FollowTargetStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FollowTargetStatus_
{
  using Type = FollowTargetStatus_<ContainerAllocator>;

  explicit FollowTargetStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->tracked_target_course = 0.0f;
      this->follow_angle = 0.0f;
      this->orbit_angle_setpoint = 0.0f;
      this->angular_rate_setpoint = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->desired_position_raw.begin(), this->desired_position_raw.end(), 0.0f);
      this->in_emergency_ascent = false;
      this->gimbal_pitch = 0.0f;
    }
  }

  explicit FollowTargetStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : desired_position_raw(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->tracked_target_course = 0.0f;
      this->follow_angle = 0.0f;
      this->orbit_angle_setpoint = 0.0f;
      this->angular_rate_setpoint = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->desired_position_raw.begin(), this->desired_position_raw.end(), 0.0f);
      this->in_emergency_ascent = false;
      this->gimbal_pitch = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _tracked_target_course_type =
    float;
  _tracked_target_course_type tracked_target_course;
  using _follow_angle_type =
    float;
  _follow_angle_type follow_angle;
  using _orbit_angle_setpoint_type =
    float;
  _orbit_angle_setpoint_type orbit_angle_setpoint;
  using _angular_rate_setpoint_type =
    float;
  _angular_rate_setpoint_type angular_rate_setpoint;
  using _desired_position_raw_type =
    std::array<float, 3>;
  _desired_position_raw_type desired_position_raw;
  using _in_emergency_ascent_type =
    bool;
  _in_emergency_ascent_type in_emergency_ascent;
  using _gimbal_pitch_type =
    float;
  _gimbal_pitch_type gimbal_pitch;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__tracked_target_course(
    const float & _arg)
  {
    this->tracked_target_course = _arg;
    return *this;
  }
  Type & set__follow_angle(
    const float & _arg)
  {
    this->follow_angle = _arg;
    return *this;
  }
  Type & set__orbit_angle_setpoint(
    const float & _arg)
  {
    this->orbit_angle_setpoint = _arg;
    return *this;
  }
  Type & set__angular_rate_setpoint(
    const float & _arg)
  {
    this->angular_rate_setpoint = _arg;
    return *this;
  }
  Type & set__desired_position_raw(
    const std::array<float, 3> & _arg)
  {
    this->desired_position_raw = _arg;
    return *this;
  }
  Type & set__in_emergency_ascent(
    const bool & _arg)
  {
    this->in_emergency_ascent = _arg;
    return *this;
  }
  Type & set__gimbal_pitch(
    const float & _arg)
  {
    this->gimbal_pitch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::FollowTargetStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FollowTargetStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FollowTargetStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FollowTargetStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FollowTargetStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FollowTargetStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FollowTargetStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FollowTargetStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FollowTargetStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FollowTargetStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FollowTargetStatus
    std::shared_ptr<px4_msgs::msg::FollowTargetStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FollowTargetStatus
    std::shared_ptr<px4_msgs::msg::FollowTargetStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTargetStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->tracked_target_course != other.tracked_target_course) {
      return false;
    }
    if (this->follow_angle != other.follow_angle) {
      return false;
    }
    if (this->orbit_angle_setpoint != other.orbit_angle_setpoint) {
      return false;
    }
    if (this->angular_rate_setpoint != other.angular_rate_setpoint) {
      return false;
    }
    if (this->desired_position_raw != other.desired_position_raw) {
      return false;
    }
    if (this->in_emergency_ascent != other.in_emergency_ascent) {
      return false;
    }
    if (this->gimbal_pitch != other.gimbal_pitch) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTargetStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTargetStatus_

// alias to use template instance with default allocator
using FollowTargetStatus =
  px4_msgs::msg::FollowTargetStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__STRUCT_HPP_
