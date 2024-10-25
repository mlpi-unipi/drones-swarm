// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EscStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESC_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'esc'
#include "px4_msgs/msg/detail/esc_report__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EscStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EscStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EscStatus_
{
  using Type = EscStatus_<ContainerAllocator>;

  explicit EscStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->counter = 0;
      this->esc_count = 0;
      this->esc_connectiontype = 0;
      this->esc_online_flags = 0;
      this->esc_armed_flags = 0;
      this->esc.fill(px4_msgs::msg::EscReport_<ContainerAllocator>{_init});
    }
  }

  explicit EscStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : esc(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->counter = 0;
      this->esc_count = 0;
      this->esc_connectiontype = 0;
      this->esc_online_flags = 0;
      this->esc_armed_flags = 0;
      this->esc.fill(px4_msgs::msg::EscReport_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _counter_type =
    uint16_t;
  _counter_type counter;
  using _esc_count_type =
    uint8_t;
  _esc_count_type esc_count;
  using _esc_connectiontype_type =
    uint8_t;
  _esc_connectiontype_type esc_connectiontype;
  using _esc_online_flags_type =
    uint8_t;
  _esc_online_flags_type esc_online_flags;
  using _esc_armed_flags_type =
    uint8_t;
  _esc_armed_flags_type esc_armed_flags;
  using _esc_type =
    std::array<px4_msgs::msg::EscReport_<ContainerAllocator>, 8>;
  _esc_type esc;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__counter(
    const uint16_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__esc_count(
    const uint8_t & _arg)
  {
    this->esc_count = _arg;
    return *this;
  }
  Type & set__esc_connectiontype(
    const uint8_t & _arg)
  {
    this->esc_connectiontype = _arg;
    return *this;
  }
  Type & set__esc_online_flags(
    const uint8_t & _arg)
  {
    this->esc_online_flags = _arg;
    return *this;
  }
  Type & set__esc_armed_flags(
    const uint8_t & _arg)
  {
    this->esc_armed_flags = _arg;
    return *this;
  }
  Type & set__esc(
    const std::array<px4_msgs::msg::EscReport_<ContainerAllocator>, 8> & _arg)
  {
    this->esc = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONNECTED_ESC_MAX =
    8u;
  static constexpr uint8_t ESC_CONNECTION_TYPE_PPM =
    0u;
  static constexpr uint8_t ESC_CONNECTION_TYPE_SERIAL =
    1u;
  static constexpr uint8_t ESC_CONNECTION_TYPE_ONESHOT =
    2u;
  static constexpr uint8_t ESC_CONNECTION_TYPE_I2C =
    3u;
  static constexpr uint8_t ESC_CONNECTION_TYPE_CAN =
    4u;
  static constexpr uint8_t ESC_CONNECTION_TYPE_DSHOT =
    5u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::EscStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EscStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EscStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EscStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EscStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EscStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EscStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EscStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EscStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EscStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EscStatus
    std::shared_ptr<px4_msgs::msg::EscStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EscStatus
    std::shared_ptr<px4_msgs::msg::EscStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EscStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->esc_count != other.esc_count) {
      return false;
    }
    if (this->esc_connectiontype != other.esc_connectiontype) {
      return false;
    }
    if (this->esc_online_flags != other.esc_online_flags) {
      return false;
    }
    if (this->esc_armed_flags != other.esc_armed_flags) {
      return false;
    }
    if (this->esc != other.esc) {
      return false;
    }
    return true;
  }
  bool operator!=(const EscStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EscStatus_

// alias to use template instance with default allocator
using EscStatus =
  px4_msgs::msg::EscStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscStatus_<ContainerAllocator>::CONNECTED_ESC_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscStatus_<ContainerAllocator>::ESC_CONNECTION_TYPE_PPM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscStatus_<ContainerAllocator>::ESC_CONNECTION_TYPE_SERIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscStatus_<ContainerAllocator>::ESC_CONNECTION_TYPE_ONESHOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscStatus_<ContainerAllocator>::ESC_CONNECTION_TYPE_I2C;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscStatus_<ContainerAllocator>::ESC_CONNECTION_TYPE_CAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EscStatus_<ContainerAllocator>::ESC_CONNECTION_TYPE_DSHOT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESC_STATUS__STRUCT_HPP_
