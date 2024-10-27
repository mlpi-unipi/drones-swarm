// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Ping.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PING__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__PING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Ping __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Ping __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ping_
{
  using Type = Ping_<ContainerAllocator>;

  explicit Ping_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->ping_time = 0ull;
      this->ping_sequence = 0ul;
      this->dropped_packets = 0ul;
      this->rtt_ms = 0.0f;
      this->system_id = 0;
      this->component_id = 0;
    }
  }

  explicit Ping_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->ping_time = 0ull;
      this->ping_sequence = 0ul;
      this->dropped_packets = 0ul;
      this->rtt_ms = 0.0f;
      this->system_id = 0;
      this->component_id = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _ping_time_type =
    uint64_t;
  _ping_time_type ping_time;
  using _ping_sequence_type =
    uint32_t;
  _ping_sequence_type ping_sequence;
  using _dropped_packets_type =
    uint32_t;
  _dropped_packets_type dropped_packets;
  using _rtt_ms_type =
    float;
  _rtt_ms_type rtt_ms;
  using _system_id_type =
    uint8_t;
  _system_id_type system_id;
  using _component_id_type =
    uint8_t;
  _component_id_type component_id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__ping_time(
    const uint64_t & _arg)
  {
    this->ping_time = _arg;
    return *this;
  }
  Type & set__ping_sequence(
    const uint32_t & _arg)
  {
    this->ping_sequence = _arg;
    return *this;
  }
  Type & set__dropped_packets(
    const uint32_t & _arg)
  {
    this->dropped_packets = _arg;
    return *this;
  }
  Type & set__rtt_ms(
    const float & _arg)
  {
    this->rtt_ms = _arg;
    return *this;
  }
  Type & set__system_id(
    const uint8_t & _arg)
  {
    this->system_id = _arg;
    return *this;
  }
  Type & set__component_id(
    const uint8_t & _arg)
  {
    this->component_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::Ping_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Ping_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Ping_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Ping_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Ping_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Ping_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Ping_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Ping_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Ping_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Ping_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Ping
    std::shared_ptr<px4_msgs::msg::Ping_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Ping
    std::shared_ptr<px4_msgs::msg::Ping_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ping_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->ping_time != other.ping_time) {
      return false;
    }
    if (this->ping_sequence != other.ping_sequence) {
      return false;
    }
    if (this->dropped_packets != other.dropped_packets) {
      return false;
    }
    if (this->rtt_ms != other.rtt_ms) {
      return false;
    }
    if (this->system_id != other.system_id) {
      return false;
    }
    if (this->component_id != other.component_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ping_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ping_

// alias to use template instance with default allocator
using Ping =
  px4_msgs::msg::Ping_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PING__STRUCT_HPP_
