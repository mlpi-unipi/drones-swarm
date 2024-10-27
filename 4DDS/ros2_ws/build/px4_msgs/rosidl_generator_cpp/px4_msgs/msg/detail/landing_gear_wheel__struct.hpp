// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/LandingGearWheel.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_GEAR_WHEEL__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__LANDING_GEAR_WHEEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__LandingGearWheel __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__LandingGearWheel __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandingGearWheel_
{
  using Type = LandingGearWheel_<ContainerAllocator>;

  explicit LandingGearWheel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->normalized_wheel_setpoint = 0.0f;
    }
  }

  explicit LandingGearWheel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->normalized_wheel_setpoint = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _normalized_wheel_setpoint_type =
    float;
  _normalized_wheel_setpoint_type normalized_wheel_setpoint;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__normalized_wheel_setpoint(
    const float & _arg)
  {
    this->normalized_wheel_setpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::LandingGearWheel_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::LandingGearWheel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::LandingGearWheel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::LandingGearWheel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LandingGearWheel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LandingGearWheel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LandingGearWheel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LandingGearWheel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::LandingGearWheel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::LandingGearWheel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__LandingGearWheel
    std::shared_ptr<px4_msgs::msg::LandingGearWheel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__LandingGearWheel
    std::shared_ptr<px4_msgs::msg::LandingGearWheel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandingGearWheel_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->normalized_wheel_setpoint != other.normalized_wheel_setpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandingGearWheel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandingGearWheel_

// alias to use template instance with default allocator
using LandingGearWheel =
  px4_msgs::msg::LandingGearWheel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_GEAR_WHEEL__STRUCT_HPP_
