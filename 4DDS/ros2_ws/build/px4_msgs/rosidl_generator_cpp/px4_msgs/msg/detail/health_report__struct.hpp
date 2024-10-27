// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/HealthReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HEALTH_REPORT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__HEALTH_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__HealthReport __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__HealthReport __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HealthReport_
{
  using Type = HealthReport_<ContainerAllocator>;

  explicit HealthReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->can_arm_mode_flags = 0ull;
      this->can_run_mode_flags = 0ull;
      this->health_is_present_flags = 0ull;
      this->health_warning_flags = 0ull;
      this->health_error_flags = 0ull;
      this->arming_check_warning_flags = 0ull;
      this->arming_check_error_flags = 0ull;
    }
  }

  explicit HealthReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->can_arm_mode_flags = 0ull;
      this->can_run_mode_flags = 0ull;
      this->health_is_present_flags = 0ull;
      this->health_warning_flags = 0ull;
      this->health_error_flags = 0ull;
      this->arming_check_warning_flags = 0ull;
      this->arming_check_error_flags = 0ull;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _can_arm_mode_flags_type =
    uint64_t;
  _can_arm_mode_flags_type can_arm_mode_flags;
  using _can_run_mode_flags_type =
    uint64_t;
  _can_run_mode_flags_type can_run_mode_flags;
  using _health_is_present_flags_type =
    uint64_t;
  _health_is_present_flags_type health_is_present_flags;
  using _health_warning_flags_type =
    uint64_t;
  _health_warning_flags_type health_warning_flags;
  using _health_error_flags_type =
    uint64_t;
  _health_error_flags_type health_error_flags;
  using _arming_check_warning_flags_type =
    uint64_t;
  _arming_check_warning_flags_type arming_check_warning_flags;
  using _arming_check_error_flags_type =
    uint64_t;
  _arming_check_error_flags_type arming_check_error_flags;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__can_arm_mode_flags(
    const uint64_t & _arg)
  {
    this->can_arm_mode_flags = _arg;
    return *this;
  }
  Type & set__can_run_mode_flags(
    const uint64_t & _arg)
  {
    this->can_run_mode_flags = _arg;
    return *this;
  }
  Type & set__health_is_present_flags(
    const uint64_t & _arg)
  {
    this->health_is_present_flags = _arg;
    return *this;
  }
  Type & set__health_warning_flags(
    const uint64_t & _arg)
  {
    this->health_warning_flags = _arg;
    return *this;
  }
  Type & set__health_error_flags(
    const uint64_t & _arg)
  {
    this->health_error_flags = _arg;
    return *this;
  }
  Type & set__arming_check_warning_flags(
    const uint64_t & _arg)
  {
    this->arming_check_warning_flags = _arg;
    return *this;
  }
  Type & set__arming_check_error_flags(
    const uint64_t & _arg)
  {
    this->arming_check_error_flags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::HealthReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::HealthReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::HealthReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::HealthReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::HealthReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::HealthReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::HealthReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::HealthReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::HealthReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::HealthReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__HealthReport
    std::shared_ptr<px4_msgs::msg::HealthReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__HealthReport
    std::shared_ptr<px4_msgs::msg::HealthReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HealthReport_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->can_arm_mode_flags != other.can_arm_mode_flags) {
      return false;
    }
    if (this->can_run_mode_flags != other.can_run_mode_flags) {
      return false;
    }
    if (this->health_is_present_flags != other.health_is_present_flags) {
      return false;
    }
    if (this->health_warning_flags != other.health_warning_flags) {
      return false;
    }
    if (this->health_error_flags != other.health_error_flags) {
      return false;
    }
    if (this->arming_check_warning_flags != other.arming_check_warning_flags) {
      return false;
    }
    if (this->arming_check_error_flags != other.arming_check_error_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const HealthReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HealthReport_

// alias to use template instance with default allocator
using HealthReport =
  px4_msgs::msg::HealthReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__HEALTH_REPORT__STRUCT_HPP_
