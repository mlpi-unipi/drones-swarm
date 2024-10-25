// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PositionControllerLandingStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PositionControllerLandingStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PositionControllerLandingStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionControllerLandingStatus_
{
  using Type = PositionControllerLandingStatus_<ContainerAllocator>;

  explicit PositionControllerLandingStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lateral_touchdown_offset = 0.0f;
      this->flaring = false;
      this->abort_status = 0;
    }
  }

  explicit PositionControllerLandingStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->lateral_touchdown_offset = 0.0f;
      this->flaring = false;
      this->abort_status = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _lateral_touchdown_offset_type =
    float;
  _lateral_touchdown_offset_type lateral_touchdown_offset;
  using _flaring_type =
    bool;
  _flaring_type flaring;
  using _abort_status_type =
    uint8_t;
  _abort_status_type abort_status;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__lateral_touchdown_offset(
    const float & _arg)
  {
    this->lateral_touchdown_offset = _arg;
    return *this;
  }
  Type & set__flaring(
    const bool & _arg)
  {
    this->flaring = _arg;
    return *this;
  }
  Type & set__abort_status(
    const uint8_t & _arg)
  {
    this->abort_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NOT_ABORTED =
    0u;
  static constexpr uint8_t ABORTED_BY_OPERATOR =
    1u;
  static constexpr uint8_t TERRAIN_NOT_FOUND =
    2u;
  static constexpr uint8_t TERRAIN_TIMEOUT =
    3u;
  static constexpr uint8_t UNKNOWN_ABORT_CRITERION =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PositionControllerLandingStatus
    std::shared_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PositionControllerLandingStatus
    std::shared_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionControllerLandingStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->lateral_touchdown_offset != other.lateral_touchdown_offset) {
      return false;
    }
    if (this->flaring != other.flaring) {
      return false;
    }
    if (this->abort_status != other.abort_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionControllerLandingStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionControllerLandingStatus_

// alias to use template instance with default allocator
using PositionControllerLandingStatus =
  px4_msgs::msg::PositionControllerLandingStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionControllerLandingStatus_<ContainerAllocator>::NOT_ABORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionControllerLandingStatus_<ContainerAllocator>::ABORTED_BY_OPERATOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionControllerLandingStatus_<ContainerAllocator>::TERRAIN_NOT_FOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionControllerLandingStatus_<ContainerAllocator>::TERRAIN_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PositionControllerLandingStatus_<ContainerAllocator>::UNKNOWN_ABORT_CRITERION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__STRUCT_HPP_
