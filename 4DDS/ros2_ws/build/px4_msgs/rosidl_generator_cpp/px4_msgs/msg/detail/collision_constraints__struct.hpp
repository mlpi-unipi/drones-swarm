// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/CollisionConstraints.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COLLISION_CONSTRAINTS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__COLLISION_CONSTRAINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__CollisionConstraints __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__CollisionConstraints __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionConstraints_
{
  using Type = CollisionConstraints_<ContainerAllocator>;

  explicit CollisionConstraints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 2>::iterator, float>(this->original_setpoint.begin(), this->original_setpoint.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->adapted_setpoint.begin(), this->adapted_setpoint.end(), 0.0f);
    }
  }

  explicit CollisionConstraints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : original_setpoint(_alloc),
    adapted_setpoint(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 2>::iterator, float>(this->original_setpoint.begin(), this->original_setpoint.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->adapted_setpoint.begin(), this->adapted_setpoint.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _original_setpoint_type =
    std::array<float, 2>;
  _original_setpoint_type original_setpoint;
  using _adapted_setpoint_type =
    std::array<float, 2>;
  _adapted_setpoint_type adapted_setpoint;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__original_setpoint(
    const std::array<float, 2> & _arg)
  {
    this->original_setpoint = _arg;
    return *this;
  }
  Type & set__adapted_setpoint(
    const std::array<float, 2> & _arg)
  {
    this->adapted_setpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::CollisionConstraints_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::CollisionConstraints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::CollisionConstraints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::CollisionConstraints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CollisionConstraints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CollisionConstraints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CollisionConstraints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CollisionConstraints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::CollisionConstraints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::CollisionConstraints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__CollisionConstraints
    std::shared_ptr<px4_msgs::msg::CollisionConstraints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__CollisionConstraints
    std::shared_ptr<px4_msgs::msg::CollisionConstraints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionConstraints_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->original_setpoint != other.original_setpoint) {
      return false;
    }
    if (this->adapted_setpoint != other.adapted_setpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionConstraints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionConstraints_

// alias to use template instance with default allocator
using CollisionConstraints =
  px4_msgs::msg::CollisionConstraints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__COLLISION_CONSTRAINTS__STRUCT_HPP_
