// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RadioStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RADIO_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RADIO_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RadioStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RadioStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadioStatus_
{
  using Type = RadioStatus_<ContainerAllocator>;

  explicit RadioStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rssi = 0;
      this->remote_rssi = 0;
      this->txbuf = 0;
      this->noise = 0;
      this->remote_noise = 0;
      this->rxerrors = 0;
      this->fix = 0;
    }
  }

  explicit RadioStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rssi = 0;
      this->remote_rssi = 0;
      this->txbuf = 0;
      this->noise = 0;
      this->remote_noise = 0;
      this->rxerrors = 0;
      this->fix = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _rssi_type =
    uint8_t;
  _rssi_type rssi;
  using _remote_rssi_type =
    uint8_t;
  _remote_rssi_type remote_rssi;
  using _txbuf_type =
    uint8_t;
  _txbuf_type txbuf;
  using _noise_type =
    uint8_t;
  _noise_type noise;
  using _remote_noise_type =
    uint8_t;
  _remote_noise_type remote_noise;
  using _rxerrors_type =
    uint16_t;
  _rxerrors_type rxerrors;
  using _fix_type =
    uint16_t;
  _fix_type fix;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__rssi(
    const uint8_t & _arg)
  {
    this->rssi = _arg;
    return *this;
  }
  Type & set__remote_rssi(
    const uint8_t & _arg)
  {
    this->remote_rssi = _arg;
    return *this;
  }
  Type & set__txbuf(
    const uint8_t & _arg)
  {
    this->txbuf = _arg;
    return *this;
  }
  Type & set__noise(
    const uint8_t & _arg)
  {
    this->noise = _arg;
    return *this;
  }
  Type & set__remote_noise(
    const uint8_t & _arg)
  {
    this->remote_noise = _arg;
    return *this;
  }
  Type & set__rxerrors(
    const uint16_t & _arg)
  {
    this->rxerrors = _arg;
    return *this;
  }
  Type & set__fix(
    const uint16_t & _arg)
  {
    this->fix = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::RadioStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RadioStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RadioStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RadioStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RadioStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RadioStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RadioStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RadioStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RadioStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RadioStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RadioStatus
    std::shared_ptr<px4_msgs::msg::RadioStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RadioStatus
    std::shared_ptr<px4_msgs::msg::RadioStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadioStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->rssi != other.rssi) {
      return false;
    }
    if (this->remote_rssi != other.remote_rssi) {
      return false;
    }
    if (this->txbuf != other.txbuf) {
      return false;
    }
    if (this->noise != other.noise) {
      return false;
    }
    if (this->remote_noise != other.remote_noise) {
      return false;
    }
    if (this->rxerrors != other.rxerrors) {
      return false;
    }
    if (this->fix != other.fix) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadioStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadioStatus_

// alias to use template instance with default allocator
using RadioStatus =
  px4_msgs::msg::RadioStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RADIO_STATUS__STRUCT_HPP_
