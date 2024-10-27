// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ActionRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTION_REQUEST__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTION_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ActionRequest __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ActionRequest __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionRequest_
{
  using Type = ActionRequest_<ContainerAllocator>;

  explicit ActionRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->action = 0;
      this->source = 0;
      this->mode = 0;
    }
  }

  explicit ActionRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->action = 0;
      this->source = 0;
      this->mode = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _action_type =
    uint8_t;
  _action_type action;
  using _source_type =
    uint8_t;
  _source_type source;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACTION_DISARM =
    0u;
  static constexpr uint8_t ACTION_ARM =
    1u;
  static constexpr uint8_t ACTION_TOGGLE_ARMING =
    2u;
  static constexpr uint8_t ACTION_UNKILL =
    3u;
  static constexpr uint8_t ACTION_KILL =
    4u;
  static constexpr uint8_t ACTION_SWITCH_MODE =
    5u;
  static constexpr uint8_t ACTION_VTOL_TRANSITION_TO_MULTICOPTER =
    6u;
  static constexpr uint8_t ACTION_VTOL_TRANSITION_TO_FIXEDWING =
    7u;
  static constexpr uint8_t SOURCE_RC_STICK_GESTURE =
    0u;
  static constexpr uint8_t SOURCE_RC_SWITCH =
    1u;
  static constexpr uint8_t SOURCE_RC_BUTTON =
    2u;
  static constexpr uint8_t SOURCE_RC_MODE_SLOT =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ActionRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ActionRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ActionRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ActionRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActionRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActionRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActionRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActionRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ActionRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ActionRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ActionRequest
    std::shared_ptr<px4_msgs::msg::ActionRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ActionRequest
    std::shared_ptr<px4_msgs::msg::ActionRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionRequest_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionRequest_

// alias to use template instance with default allocator
using ActionRequest =
  px4_msgs::msg::ActionRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::ACTION_DISARM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::ACTION_ARM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::ACTION_TOGGLE_ARMING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::ACTION_UNKILL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::ACTION_KILL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::ACTION_SWITCH_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::ACTION_VTOL_TRANSITION_TO_MULTICOPTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::ACTION_VTOL_TRANSITION_TO_FIXEDWING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::SOURCE_RC_STICK_GESTURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::SOURCE_RC_SWITCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::SOURCE_RC_BUTTON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActionRequest_<ContainerAllocator>::SOURCE_RC_MODE_SLOT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTION_REQUEST__STRUCT_HPP_
