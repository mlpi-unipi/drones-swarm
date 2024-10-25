// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/LaunchDetectionStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LAUNCH_DETECTION_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__LAUNCH_DETECTION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__LaunchDetectionStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__LaunchDetectionStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaunchDetectionStatus_
{
  using Type = LaunchDetectionStatus_<ContainerAllocator>;

  explicit LaunchDetectionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->launch_detection_state = 0;
    }
  }

  explicit LaunchDetectionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->launch_detection_state = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _launch_detection_state_type =
    uint8_t;
  _launch_detection_state_type launch_detection_state;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__launch_detection_state(
    const uint8_t & _arg)
  {
    this->launch_detection_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_WAITING_FOR_LAUNCH =
    0u;
  static constexpr uint8_t STATE_LAUNCH_DETECTED_DISABLED_MOTOR =
    1u;
  static constexpr uint8_t STATE_FLYING =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__LaunchDetectionStatus
    std::shared_ptr<px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__LaunchDetectionStatus
    std::shared_ptr<px4_msgs::msg::LaunchDetectionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaunchDetectionStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->launch_detection_state != other.launch_detection_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaunchDetectionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaunchDetectionStatus_

// alias to use template instance with default allocator
using LaunchDetectionStatus =
  px4_msgs::msg::LaunchDetectionStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaunchDetectionStatus_<ContainerAllocator>::STATE_WAITING_FOR_LAUNCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaunchDetectionStatus_<ContainerAllocator>::STATE_LAUNCH_DETECTED_DISABLED_MOTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaunchDetectionStatus_<ContainerAllocator>::STATE_FLYING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__LAUNCH_DETECTION_STATUS__STRUCT_HPP_
