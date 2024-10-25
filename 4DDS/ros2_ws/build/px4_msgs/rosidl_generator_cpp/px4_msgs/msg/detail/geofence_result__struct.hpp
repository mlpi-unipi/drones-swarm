// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GeofenceResult.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GEOFENCE_RESULT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__GEOFENCE_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__GeofenceResult __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GeofenceResult __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeofenceResult_
{
  using Type = GeofenceResult_<ContainerAllocator>;

  explicit GeofenceResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->geofence_max_dist_triggered = false;
      this->geofence_max_alt_triggered = false;
      this->geofence_custom_fence_triggered = false;
      this->geofence_action = 0;
    }
  }

  explicit GeofenceResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->geofence_max_dist_triggered = false;
      this->geofence_max_alt_triggered = false;
      this->geofence_custom_fence_triggered = false;
      this->geofence_action = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _geofence_max_dist_triggered_type =
    bool;
  _geofence_max_dist_triggered_type geofence_max_dist_triggered;
  using _geofence_max_alt_triggered_type =
    bool;
  _geofence_max_alt_triggered_type geofence_max_alt_triggered;
  using _geofence_custom_fence_triggered_type =
    bool;
  _geofence_custom_fence_triggered_type geofence_custom_fence_triggered;
  using _geofence_action_type =
    uint8_t;
  _geofence_action_type geofence_action;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__geofence_max_dist_triggered(
    const bool & _arg)
  {
    this->geofence_max_dist_triggered = _arg;
    return *this;
  }
  Type & set__geofence_max_alt_triggered(
    const bool & _arg)
  {
    this->geofence_max_alt_triggered = _arg;
    return *this;
  }
  Type & set__geofence_custom_fence_triggered(
    const bool & _arg)
  {
    this->geofence_custom_fence_triggered = _arg;
    return *this;
  }
  Type & set__geofence_action(
    const uint8_t & _arg)
  {
    this->geofence_action = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t GF_ACTION_NONE =
    0u;
  static constexpr uint8_t GF_ACTION_WARN =
    1u;
  static constexpr uint8_t GF_ACTION_LOITER =
    2u;
  static constexpr uint8_t GF_ACTION_RTL =
    3u;
  static constexpr uint8_t GF_ACTION_TERMINATE =
    4u;
  static constexpr uint8_t GF_ACTION_LAND =
    5u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::GeofenceResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GeofenceResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GeofenceResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GeofenceResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GeofenceResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GeofenceResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GeofenceResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GeofenceResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GeofenceResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GeofenceResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GeofenceResult
    std::shared_ptr<px4_msgs::msg::GeofenceResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GeofenceResult
    std::shared_ptr<px4_msgs::msg::GeofenceResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeofenceResult_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->geofence_max_dist_triggered != other.geofence_max_dist_triggered) {
      return false;
    }
    if (this->geofence_max_alt_triggered != other.geofence_max_alt_triggered) {
      return false;
    }
    if (this->geofence_custom_fence_triggered != other.geofence_custom_fence_triggered) {
      return false;
    }
    if (this->geofence_action != other.geofence_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeofenceResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeofenceResult_

// alias to use template instance with default allocator
using GeofenceResult =
  px4_msgs::msg::GeofenceResult_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeofenceResult_<ContainerAllocator>::GF_ACTION_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeofenceResult_<ContainerAllocator>::GF_ACTION_WARN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeofenceResult_<ContainerAllocator>::GF_ACTION_LOITER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeofenceResult_<ContainerAllocator>::GF_ACTION_RTL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeofenceResult_<ContainerAllocator>::GF_ACTION_TERMINATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeofenceResult_<ContainerAllocator>::GF_ACTION_LAND;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GEOFENCE_RESULT__STRUCT_HPP_
