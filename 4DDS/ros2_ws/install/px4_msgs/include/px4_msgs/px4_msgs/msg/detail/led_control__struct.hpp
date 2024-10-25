// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/LedControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__LedControl __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__LedControl __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedControl_
{
  using Type = LedControl_<ContainerAllocator>;

  explicit LedControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->led_mask = 0;
      this->color = 0;
      this->mode = 0;
      this->num_blinks = 0;
      this->priority = 0;
    }
  }

  explicit LedControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->led_mask = 0;
      this->color = 0;
      this->mode = 0;
      this->num_blinks = 0;
      this->priority = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _led_mask_type =
    uint8_t;
  _led_mask_type led_mask;
  using _color_type =
    uint8_t;
  _color_type color;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _num_blinks_type =
    uint8_t;
  _num_blinks_type num_blinks;
  using _priority_type =
    uint8_t;
  _priority_type priority;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__led_mask(
    const uint8_t & _arg)
  {
    this->led_mask = _arg;
    return *this;
  }
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__num_blinks(
    const uint8_t & _arg)
  {
    this->num_blinks = _arg;
    return *this;
  }
  Type & set__priority(
    const uint8_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COLOR_OFF =
    0u;
  static constexpr uint8_t COLOR_RED =
    1u;
  static constexpr uint8_t COLOR_GREEN =
    2u;
  static constexpr uint8_t COLOR_BLUE =
    3u;
  static constexpr uint8_t COLOR_YELLOW =
    4u;
  static constexpr uint8_t COLOR_PURPLE =
    5u;
  static constexpr uint8_t COLOR_AMBER =
    6u;
  static constexpr uint8_t COLOR_CYAN =
    7u;
  static constexpr uint8_t COLOR_WHITE =
    8u;
  static constexpr uint8_t MODE_OFF =
    0u;
  static constexpr uint8_t MODE_ON =
    1u;
  static constexpr uint8_t MODE_DISABLED =
    2u;
  static constexpr uint8_t MODE_BLINK_SLOW =
    3u;
  static constexpr uint8_t MODE_BLINK_NORMAL =
    4u;
  static constexpr uint8_t MODE_BLINK_FAST =
    5u;
  static constexpr uint8_t MODE_BREATHE =
    6u;
  static constexpr uint8_t MODE_FLASH =
    7u;
  static constexpr uint8_t MAX_PRIORITY =
    2u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    8u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::LedControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::LedControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::LedControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::LedControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LedControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LedControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LedControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LedControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::LedControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::LedControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__LedControl
    std::shared_ptr<px4_msgs::msg::LedControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__LedControl
    std::shared_ptr<px4_msgs::msg::LedControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedControl_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->led_mask != other.led_mask) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->num_blinks != other.num_blinks) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedControl_

// alias to use template instance with default allocator
using LedControl =
  px4_msgs::msg::LedControl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::COLOR_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::COLOR_RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::COLOR_GREEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::COLOR_BLUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::COLOR_YELLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::COLOR_PURPLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::COLOR_AMBER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::COLOR_CYAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::COLOR_WHITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::MODE_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::MODE_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::MODE_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::MODE_BLINK_SLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::MODE_BLINK_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::MODE_BLINK_FAST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::MODE_BREATHE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::MODE_FLASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::MAX_PRIORITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LedControl_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_HPP_
