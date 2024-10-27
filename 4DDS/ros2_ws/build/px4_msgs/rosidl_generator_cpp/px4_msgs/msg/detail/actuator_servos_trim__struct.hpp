// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ActuatorServosTrim.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS_TRIM__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS_TRIM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ActuatorServosTrim __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ActuatorServosTrim __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorServosTrim_
{
  using Type = ActuatorServosTrim_<ContainerAllocator>;

  explicit ActuatorServosTrim_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 8>::iterator, float>(this->trim.begin(), this->trim.end(), 0.0f);
    }
  }

  explicit ActuatorServosTrim_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trim(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 8>::iterator, float>(this->trim.begin(), this->trim.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _trim_type =
    std::array<float, 8>;
  _trim_type trim;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__trim(
    const std::array<float, 8> & _arg)
  {
    this->trim = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NUM_CONTROLS =
    8u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ActuatorServosTrim
    std::shared_ptr<px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ActuatorServosTrim
    std::shared_ptr<px4_msgs::msg::ActuatorServosTrim_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorServosTrim_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->trim != other.trim) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorServosTrim_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorServosTrim_

// alias to use template instance with default allocator
using ActuatorServosTrim =
  px4_msgs::msg::ActuatorServosTrim_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActuatorServosTrim_<ContainerAllocator>::NUM_CONTROLS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_SERVOS_TRIM__STRUCT_HPP_
