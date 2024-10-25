// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TakeoffStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TAKEOFF_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TAKEOFF_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__TakeoffStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TakeoffStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TakeoffStatus_
{
  using Type = TakeoffStatus_<ContainerAllocator>;

  explicit TakeoffStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->takeoff_state = 0;
      this->tilt_limit = 0.0f;
    }
  }

  explicit TakeoffStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->takeoff_state = 0;
      this->tilt_limit = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _takeoff_state_type =
    uint8_t;
  _takeoff_state_type takeoff_state;
  using _tilt_limit_type =
    float;
  _tilt_limit_type tilt_limit;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__takeoff_state(
    const uint8_t & _arg)
  {
    this->takeoff_state = _arg;
    return *this;
  }
  Type & set__tilt_limit(
    const float & _arg)
  {
    this->tilt_limit = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TAKEOFF_STATE_UNINITIALIZED =
    0u;
  static constexpr uint8_t TAKEOFF_STATE_DISARMED =
    1u;
  static constexpr uint8_t TAKEOFF_STATE_SPOOLUP =
    2u;
  static constexpr uint8_t TAKEOFF_STATE_READY_FOR_TAKEOFF =
    3u;
  static constexpr uint8_t TAKEOFF_STATE_RAMPUP =
    4u;
  static constexpr uint8_t TAKEOFF_STATE_FLIGHT =
    5u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::TakeoffStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TakeoffStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TakeoffStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TakeoffStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TakeoffStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TakeoffStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TakeoffStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TakeoffStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TakeoffStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TakeoffStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TakeoffStatus
    std::shared_ptr<px4_msgs::msg::TakeoffStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TakeoffStatus
    std::shared_ptr<px4_msgs::msg::TakeoffStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeoffStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->takeoff_state != other.takeoff_state) {
      return false;
    }
    if (this->tilt_limit != other.tilt_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeoffStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeoffStatus_

// alias to use template instance with default allocator
using TakeoffStatus =
  px4_msgs::msg::TakeoffStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TakeoffStatus_<ContainerAllocator>::TAKEOFF_STATE_UNINITIALIZED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TakeoffStatus_<ContainerAllocator>::TAKEOFF_STATE_DISARMED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TakeoffStatus_<ContainerAllocator>::TAKEOFF_STATE_SPOOLUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TakeoffStatus_<ContainerAllocator>::TAKEOFF_STATE_READY_FOR_TAKEOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TakeoffStatus_<ContainerAllocator>::TAKEOFF_STATE_RAMPUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TakeoffStatus_<ContainerAllocator>::TAKEOFF_STATE_FLIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TAKEOFF_STATUS__STRUCT_HPP_
