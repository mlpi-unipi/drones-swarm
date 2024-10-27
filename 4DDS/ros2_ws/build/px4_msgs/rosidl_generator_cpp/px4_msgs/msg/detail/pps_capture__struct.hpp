// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PpsCapture.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PpsCapture __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PpsCapture __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PpsCapture_
{
  using Type = PpsCapture_<ContainerAllocator>;

  explicit PpsCapture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rtc_timestamp = 0ull;
      this->pps_rate_exceeded_counter = 0;
    }
  }

  explicit PpsCapture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rtc_timestamp = 0ull;
      this->pps_rate_exceeded_counter = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _rtc_timestamp_type =
    uint64_t;
  _rtc_timestamp_type rtc_timestamp;
  using _pps_rate_exceeded_counter_type =
    uint8_t;
  _pps_rate_exceeded_counter_type pps_rate_exceeded_counter;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__rtc_timestamp(
    const uint64_t & _arg)
  {
    this->rtc_timestamp = _arg;
    return *this;
  }
  Type & set__pps_rate_exceeded_counter(
    const uint8_t & _arg)
  {
    this->pps_rate_exceeded_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::PpsCapture_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PpsCapture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PpsCapture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PpsCapture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PpsCapture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PpsCapture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PpsCapture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PpsCapture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PpsCapture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PpsCapture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PpsCapture
    std::shared_ptr<px4_msgs::msg::PpsCapture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PpsCapture
    std::shared_ptr<px4_msgs::msg::PpsCapture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PpsCapture_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->rtc_timestamp != other.rtc_timestamp) {
      return false;
    }
    if (this->pps_rate_exceeded_counter != other.pps_rate_exceeded_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const PpsCapture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PpsCapture_

// alias to use template instance with default allocator
using PpsCapture =
  px4_msgs::msg::PpsCapture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__STRUCT_HPP_
