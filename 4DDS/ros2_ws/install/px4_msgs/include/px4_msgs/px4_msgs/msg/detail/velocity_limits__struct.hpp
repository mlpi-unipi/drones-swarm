// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VelocityLimits.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VELOCITY_LIMITS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VELOCITY_LIMITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VelocityLimits __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VelocityLimits __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelocityLimits_
{
  using Type = VelocityLimits_<ContainerAllocator>;

  explicit VelocityLimits_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->horizontal_velocity = 0.0f;
      this->vertical_velocity = 0.0f;
      this->yaw_rate = 0.0f;
    }
  }

  explicit VelocityLimits_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->horizontal_velocity = 0.0f;
      this->vertical_velocity = 0.0f;
      this->yaw_rate = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _horizontal_velocity_type =
    float;
  _horizontal_velocity_type horizontal_velocity;
  using _vertical_velocity_type =
    float;
  _vertical_velocity_type vertical_velocity;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__horizontal_velocity(
    const float & _arg)
  {
    this->horizontal_velocity = _arg;
    return *this;
  }
  Type & set__vertical_velocity(
    const float & _arg)
  {
    this->vertical_velocity = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VelocityLimits_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VelocityLimits_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VelocityLimits_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VelocityLimits_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VelocityLimits_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VelocityLimits_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VelocityLimits_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VelocityLimits_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VelocityLimits_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VelocityLimits_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VelocityLimits
    std::shared_ptr<px4_msgs::msg::VelocityLimits_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VelocityLimits
    std::shared_ptr<px4_msgs::msg::VelocityLimits_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelocityLimits_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->horizontal_velocity != other.horizontal_velocity) {
      return false;
    }
    if (this->vertical_velocity != other.vertical_velocity) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelocityLimits_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelocityLimits_

// alias to use template instance with default allocator
using VelocityLimits =
  px4_msgs::msg::VelocityLimits_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VELOCITY_LIMITS__STRUCT_HPP_
