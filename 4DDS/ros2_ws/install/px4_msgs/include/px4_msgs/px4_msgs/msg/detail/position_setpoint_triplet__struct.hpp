// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PositionSetpointTriplet.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'previous'
// Member 'current'
// Member 'next'
#include "px4_msgs/msg/detail/position_setpoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PositionSetpointTriplet __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PositionSetpointTriplet __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionSetpointTriplet_
{
  using Type = PositionSetpointTriplet_<ContainerAllocator>;

  explicit PositionSetpointTriplet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : previous(_init),
    current(_init),
    next(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
    }
  }

  explicit PositionSetpointTriplet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : previous(_alloc, _init),
    current(_alloc, _init),
    next(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _previous_type =
    px4_msgs::msg::PositionSetpoint_<ContainerAllocator>;
  _previous_type previous;
  using _current_type =
    px4_msgs::msg::PositionSetpoint_<ContainerAllocator>;
  _current_type current;
  using _next_type =
    px4_msgs::msg::PositionSetpoint_<ContainerAllocator>;
  _next_type next;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__previous(
    const px4_msgs::msg::PositionSetpoint_<ContainerAllocator> & _arg)
  {
    this->previous = _arg;
    return *this;
  }
  Type & set__current(
    const px4_msgs::msg::PositionSetpoint_<ContainerAllocator> & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__next(
    const px4_msgs::msg::PositionSetpoint_<ContainerAllocator> & _arg)
  {
    this->next = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PositionSetpointTriplet
    std::shared_ptr<px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PositionSetpointTriplet
    std::shared_ptr<px4_msgs::msg::PositionSetpointTriplet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionSetpointTriplet_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->previous != other.previous) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->next != other.next) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionSetpointTriplet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionSetpointTriplet_

// alias to use template instance with default allocator
using PositionSetpointTriplet =
  px4_msgs::msg::PositionSetpointTriplet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__STRUCT_HPP_
