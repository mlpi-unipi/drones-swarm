// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GpioConfig.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GPIO_CONFIG__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__GPIO_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__GpioConfig __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GpioConfig __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpioConfig_
{
  using Type = GpioConfig_<ContainerAllocator>;

  explicit GpioConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      this->mask = 0ul;
      this->state = 0ul;
      this->config = 0ul;
    }
  }

  explicit GpioConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->device_id = 0ul;
      this->mask = 0ul;
      this->state = 0ul;
      this->config = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _mask_type =
    uint32_t;
  _mask_type mask;
  using _state_type =
    uint32_t;
  _state_type state;
  using _config_type =
    uint32_t;
  _config_type config;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__mask(
    const uint32_t & _arg)
  {
    this->mask = _arg;
    return *this;
  }
  Type & set__state(
    const uint32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__config(
    const uint32_t & _arg)
  {
    this->config = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t INPUT =
    0u;
  static constexpr uint32_t OUTPUT =
    1u;
  static constexpr uint32_t PULLUP =
    16u;
  static constexpr uint32_t PULLDOWN =
    32u;
  static constexpr uint32_t OPENDRAIN =
    256u;
  static constexpr uint32_t INPUT_FLOATING =
    0u;
  static constexpr uint32_t INPUT_PULLUP =
    16u;
  static constexpr uint32_t INPUT_PULLDOWN =
    32u;
  static constexpr uint32_t OUTPUT_PUSHPULL =
    0u;
  static constexpr uint32_t OUTPUT_OPENDRAIN =
    256u;
  static constexpr uint32_t OUTPUT_OPENDRAIN_PULLUP =
    272u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::GpioConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GpioConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GpioConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GpioConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GpioConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GpioConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GpioConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GpioConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GpioConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GpioConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GpioConfig
    std::shared_ptr<px4_msgs::msg::GpioConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GpioConfig
    std::shared_ptr<px4_msgs::msg::GpioConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpioConfig_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->mask != other.mask) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->config != other.config) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpioConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpioConfig_

// alias to use template instance with default allocator
using GpioConfig =
  px4_msgs::msg::GpioConfig_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::INPUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::OUTPUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::PULLUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::PULLDOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::OPENDRAIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::INPUT_FLOATING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::INPUT_PULLUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::INPUT_PULLDOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::OUTPUT_PUSHPULL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::OUTPUT_OPENDRAIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GpioConfig_<ContainerAllocator>::OUTPUT_OPENDRAIN_PULLUP;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GPIO_CONFIG__STRUCT_HPP_
