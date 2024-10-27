// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/CanInterfaceStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__CanInterfaceStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__CanInterfaceStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanInterfaceStatus_
{
  using Type = CanInterfaceStatus_<ContainerAllocator>;

  explicit CanInterfaceStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->interface = 0;
      this->io_errors = 0ull;
      this->frames_tx = 0ull;
      this->frames_rx = 0ull;
    }
  }

  explicit CanInterfaceStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->interface = 0;
      this->io_errors = 0ull;
      this->frames_tx = 0ull;
      this->frames_rx = 0ull;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _interface_type =
    uint8_t;
  _interface_type interface;
  using _io_errors_type =
    uint64_t;
  _io_errors_type io_errors;
  using _frames_tx_type =
    uint64_t;
  _frames_tx_type frames_tx;
  using _frames_rx_type =
    uint64_t;
  _frames_rx_type frames_rx;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__interface(
    const uint8_t & _arg)
  {
    this->interface = _arg;
    return *this;
  }
  Type & set__io_errors(
    const uint64_t & _arg)
  {
    this->io_errors = _arg;
    return *this;
  }
  Type & set__frames_tx(
    const uint64_t & _arg)
  {
    this->frames_tx = _arg;
    return *this;
  }
  Type & set__frames_rx(
    const uint64_t & _arg)
  {
    this->frames_rx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__CanInterfaceStatus
    std::shared_ptr<px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__CanInterfaceStatus
    std::shared_ptr<px4_msgs::msg::CanInterfaceStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanInterfaceStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->interface != other.interface) {
      return false;
    }
    if (this->io_errors != other.io_errors) {
      return false;
    }
    if (this->frames_tx != other.frames_tx) {
      return false;
    }
    if (this->frames_rx != other.frames_rx) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanInterfaceStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanInterfaceStatus_

// alias to use template instance with default allocator
using CanInterfaceStatus =
  px4_msgs::msg::CanInterfaceStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__STRUCT_HPP_
