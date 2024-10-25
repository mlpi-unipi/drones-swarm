// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RtlTimeEstimate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RTL_TIME_ESTIMATE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RTL_TIME_ESTIMATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RtlTimeEstimate __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RtlTimeEstimate __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RtlTimeEstimate_
{
  using Type = RtlTimeEstimate_<ContainerAllocator>;

  explicit RtlTimeEstimate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->valid = false;
      this->time_estimate = 0.0f;
      this->safe_time_estimate = 0.0f;
    }
  }

  explicit RtlTimeEstimate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->valid = false;
      this->time_estimate = 0.0f;
      this->safe_time_estimate = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _valid_type =
    bool;
  _valid_type valid;
  using _time_estimate_type =
    float;
  _time_estimate_type time_estimate;
  using _safe_time_estimate_type =
    float;
  _safe_time_estimate_type safe_time_estimate;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__time_estimate(
    const float & _arg)
  {
    this->time_estimate = _arg;
    return *this;
  }
  Type & set__safe_time_estimate(
    const float & _arg)
  {
    this->safe_time_estimate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RtlTimeEstimate
    std::shared_ptr<px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RtlTimeEstimate
    std::shared_ptr<px4_msgs::msg::RtlTimeEstimate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RtlTimeEstimate_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->time_estimate != other.time_estimate) {
      return false;
    }
    if (this->safe_time_estimate != other.safe_time_estimate) {
      return false;
    }
    return true;
  }
  bool operator!=(const RtlTimeEstimate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RtlTimeEstimate_

// alias to use template instance with default allocator
using RtlTimeEstimate =
  px4_msgs::msg::RtlTimeEstimate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RTL_TIME_ESTIMATE__STRUCT_HPP_
