// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SystemPower.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SystemPower __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SystemPower __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemPower_
{
  using Type = SystemPower_<ContainerAllocator>;

  explicit SystemPower_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->voltage5v_v = 0.0f;
      std::fill<typename std::array<float, 4>::iterator, float>(this->sensors3v3.begin(), this->sensors3v3.end(), 0.0f);
      this->sensors3v3_valid = 0;
      this->usb_connected = 0;
      this->brick_valid = 0;
      this->usb_valid = 0;
      this->servo_valid = 0;
      this->periph_5v_oc = 0;
      this->hipower_5v_oc = 0;
      this->comp_5v_valid = 0;
      this->can1_gps1_5v_valid = 0;
    }
  }

  explicit SystemPower_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensors3v3(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->voltage5v_v = 0.0f;
      std::fill<typename std::array<float, 4>::iterator, float>(this->sensors3v3.begin(), this->sensors3v3.end(), 0.0f);
      this->sensors3v3_valid = 0;
      this->usb_connected = 0;
      this->brick_valid = 0;
      this->usb_valid = 0;
      this->servo_valid = 0;
      this->periph_5v_oc = 0;
      this->hipower_5v_oc = 0;
      this->comp_5v_valid = 0;
      this->can1_gps1_5v_valid = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _voltage5v_v_type =
    float;
  _voltage5v_v_type voltage5v_v;
  using _sensors3v3_type =
    std::array<float, 4>;
  _sensors3v3_type sensors3v3;
  using _sensors3v3_valid_type =
    uint8_t;
  _sensors3v3_valid_type sensors3v3_valid;
  using _usb_connected_type =
    uint8_t;
  _usb_connected_type usb_connected;
  using _brick_valid_type =
    uint8_t;
  _brick_valid_type brick_valid;
  using _usb_valid_type =
    uint8_t;
  _usb_valid_type usb_valid;
  using _servo_valid_type =
    uint8_t;
  _servo_valid_type servo_valid;
  using _periph_5v_oc_type =
    uint8_t;
  _periph_5v_oc_type periph_5v_oc;
  using _hipower_5v_oc_type =
    uint8_t;
  _hipower_5v_oc_type hipower_5v_oc;
  using _comp_5v_valid_type =
    uint8_t;
  _comp_5v_valid_type comp_5v_valid;
  using _can1_gps1_5v_valid_type =
    uint8_t;
  _can1_gps1_5v_valid_type can1_gps1_5v_valid;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__voltage5v_v(
    const float & _arg)
  {
    this->voltage5v_v = _arg;
    return *this;
  }
  Type & set__sensors3v3(
    const std::array<float, 4> & _arg)
  {
    this->sensors3v3 = _arg;
    return *this;
  }
  Type & set__sensors3v3_valid(
    const uint8_t & _arg)
  {
    this->sensors3v3_valid = _arg;
    return *this;
  }
  Type & set__usb_connected(
    const uint8_t & _arg)
  {
    this->usb_connected = _arg;
    return *this;
  }
  Type & set__brick_valid(
    const uint8_t & _arg)
  {
    this->brick_valid = _arg;
    return *this;
  }
  Type & set__usb_valid(
    const uint8_t & _arg)
  {
    this->usb_valid = _arg;
    return *this;
  }
  Type & set__servo_valid(
    const uint8_t & _arg)
  {
    this->servo_valid = _arg;
    return *this;
  }
  Type & set__periph_5v_oc(
    const uint8_t & _arg)
  {
    this->periph_5v_oc = _arg;
    return *this;
  }
  Type & set__hipower_5v_oc(
    const uint8_t & _arg)
  {
    this->hipower_5v_oc = _arg;
    return *this;
  }
  Type & set__comp_5v_valid(
    const uint8_t & _arg)
  {
    this->comp_5v_valid = _arg;
    return *this;
  }
  Type & set__can1_gps1_5v_valid(
    const uint8_t & _arg)
  {
    this->can1_gps1_5v_valid = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BRICK1_VALID_SHIFTS =
    0u;
  static constexpr uint8_t BRICK1_VALID_MASK =
    1u;
  static constexpr uint8_t BRICK2_VALID_SHIFTS =
    1u;
  static constexpr uint8_t BRICK2_VALID_MASK =
    2u;
  static constexpr uint8_t BRICK3_VALID_SHIFTS =
    2u;
  static constexpr uint8_t BRICK3_VALID_MASK =
    4u;
  static constexpr uint8_t BRICK4_VALID_SHIFTS =
    3u;
  static constexpr uint8_t BRICK4_VALID_MASK =
    8u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::SystemPower_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SystemPower_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SystemPower_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SystemPower_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SystemPower_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SystemPower_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SystemPower_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SystemPower_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SystemPower_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SystemPower_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SystemPower
    std::shared_ptr<px4_msgs::msg::SystemPower_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SystemPower
    std::shared_ptr<px4_msgs::msg::SystemPower_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemPower_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->voltage5v_v != other.voltage5v_v) {
      return false;
    }
    if (this->sensors3v3 != other.sensors3v3) {
      return false;
    }
    if (this->sensors3v3_valid != other.sensors3v3_valid) {
      return false;
    }
    if (this->usb_connected != other.usb_connected) {
      return false;
    }
    if (this->brick_valid != other.brick_valid) {
      return false;
    }
    if (this->usb_valid != other.usb_valid) {
      return false;
    }
    if (this->servo_valid != other.servo_valid) {
      return false;
    }
    if (this->periph_5v_oc != other.periph_5v_oc) {
      return false;
    }
    if (this->hipower_5v_oc != other.hipower_5v_oc) {
      return false;
    }
    if (this->comp_5v_valid != other.comp_5v_valid) {
      return false;
    }
    if (this->can1_gps1_5v_valid != other.can1_gps1_5v_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemPower_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemPower_

// alias to use template instance with default allocator
using SystemPower =
  px4_msgs::msg::SystemPower_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemPower_<ContainerAllocator>::BRICK1_VALID_SHIFTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemPower_<ContainerAllocator>::BRICK1_VALID_MASK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemPower_<ContainerAllocator>::BRICK2_VALID_SHIFTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemPower_<ContainerAllocator>::BRICK2_VALID_MASK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemPower_<ContainerAllocator>::BRICK3_VALID_SHIFTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemPower_<ContainerAllocator>::BRICK3_VALID_MASK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemPower_<ContainerAllocator>::BRICK4_VALID_SHIFTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemPower_<ContainerAllocator>::BRICK4_VALID_MASK;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__STRUCT_HPP_
