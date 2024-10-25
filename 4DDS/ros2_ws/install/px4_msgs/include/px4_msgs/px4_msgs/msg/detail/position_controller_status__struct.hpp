// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PositionControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PositionControllerStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PositionControllerStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionControllerStatus_
{
  using Type = PositionControllerStatus_<ContainerAllocator>;

  explicit PositionControllerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->nav_roll = 0.0f;
      this->nav_pitch = 0.0f;
      this->nav_bearing = 0.0f;
      this->target_bearing = 0.0f;
      this->xtrack_error = 0.0f;
      this->wp_dist = 0.0f;
      this->acceptance_radius = 0.0f;
      this->yaw_acceptance = 0.0f;
      this->altitude_acceptance = 0.0f;
      this->type = 0;
    }
  }

  explicit PositionControllerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->nav_roll = 0.0f;
      this->nav_pitch = 0.0f;
      this->nav_bearing = 0.0f;
      this->target_bearing = 0.0f;
      this->xtrack_error = 0.0f;
      this->wp_dist = 0.0f;
      this->acceptance_radius = 0.0f;
      this->yaw_acceptance = 0.0f;
      this->altitude_acceptance = 0.0f;
      this->type = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _nav_roll_type =
    float;
  _nav_roll_type nav_roll;
  using _nav_pitch_type =
    float;
  _nav_pitch_type nav_pitch;
  using _nav_bearing_type =
    float;
  _nav_bearing_type nav_bearing;
  using _target_bearing_type =
    float;
  _target_bearing_type target_bearing;
  using _xtrack_error_type =
    float;
  _xtrack_error_type xtrack_error;
  using _wp_dist_type =
    float;
  _wp_dist_type wp_dist;
  using _acceptance_radius_type =
    float;
  _acceptance_radius_type acceptance_radius;
  using _yaw_acceptance_type =
    float;
  _yaw_acceptance_type yaw_acceptance;
  using _altitude_acceptance_type =
    float;
  _altitude_acceptance_type altitude_acceptance;
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__nav_roll(
    const float & _arg)
  {
    this->nav_roll = _arg;
    return *this;
  }
  Type & set__nav_pitch(
    const float & _arg)
  {
    this->nav_pitch = _arg;
    return *this;
  }
  Type & set__nav_bearing(
    const float & _arg)
  {
    this->nav_bearing = _arg;
    return *this;
  }
  Type & set__target_bearing(
    const float & _arg)
  {
    this->target_bearing = _arg;
    return *this;
  }
  Type & set__xtrack_error(
    const float & _arg)
  {
    this->xtrack_error = _arg;
    return *this;
  }
  Type & set__wp_dist(
    const float & _arg)
  {
    this->wp_dist = _arg;
    return *this;
  }
  Type & set__acceptance_radius(
    const float & _arg)
  {
    this->acceptance_radius = _arg;
    return *this;
  }
  Type & set__yaw_acceptance(
    const float & _arg)
  {
    this->yaw_acceptance = _arg;
    return *this;
  }
  Type & set__altitude_acceptance(
    const float & _arg)
  {
    this->altitude_acceptance = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::PositionControllerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PositionControllerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionControllerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionControllerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionControllerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionControllerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionControllerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionControllerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionControllerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionControllerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PositionControllerStatus
    std::shared_ptr<px4_msgs::msg::PositionControllerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PositionControllerStatus
    std::shared_ptr<px4_msgs::msg::PositionControllerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionControllerStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->nav_roll != other.nav_roll) {
      return false;
    }
    if (this->nav_pitch != other.nav_pitch) {
      return false;
    }
    if (this->nav_bearing != other.nav_bearing) {
      return false;
    }
    if (this->target_bearing != other.target_bearing) {
      return false;
    }
    if (this->xtrack_error != other.xtrack_error) {
      return false;
    }
    if (this->wp_dist != other.wp_dist) {
      return false;
    }
    if (this->acceptance_radius != other.acceptance_radius) {
      return false;
    }
    if (this->yaw_acceptance != other.yaw_acceptance) {
      return false;
    }
    if (this->altitude_acceptance != other.altitude_acceptance) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionControllerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionControllerStatus_

// alias to use template instance with default allocator
using PositionControllerStatus =
  px4_msgs::msg::PositionControllerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__STRUCT_HPP_
