// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ConfigOverrides.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ConfigOverrides __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ConfigOverrides __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConfigOverrides_
{
  using Type = ConfigOverrides_<ContainerAllocator>;

  explicit ConfigOverrides_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->disable_auto_disarm = false;
      this->defer_failsafes = false;
      this->defer_failsafes_timeout_s = 0;
      this->source_type = 0;
      this->source_id = 0;
    }
  }

  explicit ConfigOverrides_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->disable_auto_disarm = false;
      this->defer_failsafes = false;
      this->defer_failsafes_timeout_s = 0;
      this->source_type = 0;
      this->source_id = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _disable_auto_disarm_type =
    bool;
  _disable_auto_disarm_type disable_auto_disarm;
  using _defer_failsafes_type =
    bool;
  _defer_failsafes_type defer_failsafes;
  using _defer_failsafes_timeout_s_type =
    int16_t;
  _defer_failsafes_timeout_s_type defer_failsafes_timeout_s;
  using _source_type_type =
    int8_t;
  _source_type_type source_type;
  using _source_id_type =
    uint8_t;
  _source_id_type source_id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__disable_auto_disarm(
    const bool & _arg)
  {
    this->disable_auto_disarm = _arg;
    return *this;
  }
  Type & set__defer_failsafes(
    const bool & _arg)
  {
    this->defer_failsafes = _arg;
    return *this;
  }
  Type & set__defer_failsafes_timeout_s(
    const int16_t & _arg)
  {
    this->defer_failsafes_timeout_s = _arg;
    return *this;
  }
  Type & set__source_type(
    const int8_t & _arg)
  {
    this->source_type = _arg;
    return *this;
  }
  Type & set__source_id(
    const uint8_t & _arg)
  {
    this->source_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SOURCE_TYPE_MODE =
    0;
  static constexpr int8_t SOURCE_TYPE_MODE_EXECUTOR =
    1;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ConfigOverrides_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ConfigOverrides_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ConfigOverrides_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ConfigOverrides_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ConfigOverrides_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ConfigOverrides_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ConfigOverrides_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ConfigOverrides_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ConfigOverrides_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ConfigOverrides_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ConfigOverrides
    std::shared_ptr<px4_msgs::msg::ConfigOverrides_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ConfigOverrides
    std::shared_ptr<px4_msgs::msg::ConfigOverrides_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigOverrides_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->disable_auto_disarm != other.disable_auto_disarm) {
      return false;
    }
    if (this->defer_failsafes != other.defer_failsafes) {
      return false;
    }
    if (this->defer_failsafes_timeout_s != other.defer_failsafes_timeout_s) {
      return false;
    }
    if (this->source_type != other.source_type) {
      return false;
    }
    if (this->source_id != other.source_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigOverrides_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigOverrides_

// alias to use template instance with default allocator
using ConfigOverrides =
  px4_msgs::msg::ConfigOverrides_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConfigOverrides_<ContainerAllocator>::SOURCE_TYPE_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ConfigOverrides_<ContainerAllocator>::SOURCE_TYPE_MODE_EXECUTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ConfigOverrides_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__STRUCT_HPP_
