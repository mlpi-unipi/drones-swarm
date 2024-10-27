// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/LandingGear.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_GEAR__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__LANDING_GEAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__LandingGear __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__LandingGear __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandingGear_
{
  using Type = LandingGear_<ContainerAllocator>;

  explicit LandingGear_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->landing_gear = 0;
    }
  }

  explicit LandingGear_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->landing_gear = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _landing_gear_type =
    int8_t;
  _landing_gear_type landing_gear;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__landing_gear(
    const int8_t & _arg)
  {
    this->landing_gear = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t GEAR_UP =
    1;
  static constexpr int8_t GEAR_DOWN =
    -1;
  static constexpr int8_t GEAR_KEEP =
    0;

  // pointer types
  using RawPtr =
    px4_msgs::msg::LandingGear_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::LandingGear_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::LandingGear_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::LandingGear_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LandingGear_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LandingGear_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LandingGear_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LandingGear_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::LandingGear_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::LandingGear_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__LandingGear
    std::shared_ptr<px4_msgs::msg::LandingGear_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__LandingGear
    std::shared_ptr<px4_msgs::msg::LandingGear_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandingGear_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->landing_gear != other.landing_gear) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandingGear_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandingGear_

// alias to use template instance with default allocator
using LandingGear =
  px4_msgs::msg::LandingGear_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t LandingGear_<ContainerAllocator>::GEAR_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t LandingGear_<ContainerAllocator>::GEAR_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t LandingGear_<ContainerAllocator>::GEAR_KEEP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_GEAR__STRUCT_HPP_
