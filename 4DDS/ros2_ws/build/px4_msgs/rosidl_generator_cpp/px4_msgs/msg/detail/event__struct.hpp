// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__EVENT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Event __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Event __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Event_
{
  using Type = Event_<ContainerAllocator>;

  explicit Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->id = 0ul;
      this->event_sequence = 0;
      std::fill<typename std::array<uint8_t, 25>::iterator, uint8_t>(this->arguments.begin(), this->arguments.end(), 0);
      this->log_levels = 0;
    }
  }

  explicit Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arguments(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->id = 0ul;
      this->event_sequence = 0;
      std::fill<typename std::array<uint8_t, 25>::iterator, uint8_t>(this->arguments.begin(), this->arguments.end(), 0);
      this->log_levels = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _id_type =
    uint32_t;
  _id_type id;
  using _event_sequence_type =
    uint16_t;
  _event_sequence_type event_sequence;
  using _arguments_type =
    std::array<uint8_t, 25>;
  _arguments_type arguments;
  using _log_levels_type =
    uint8_t;
  _log_levels_type log_levels;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__event_sequence(
    const uint16_t & _arg)
  {
    this->event_sequence = _arg;
    return *this;
  }
  Type & set__arguments(
    const std::array<uint8_t, 25> & _arg)
  {
    this->arguments = _arg;
    return *this;
  }
  Type & set__log_levels(
    const uint8_t & _arg)
  {
    this->log_levels = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Event
    std::shared_ptr<px4_msgs::msg::Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Event
    std::shared_ptr<px4_msgs::msg::Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Event_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->event_sequence != other.event_sequence) {
      return false;
    }
    if (this->arguments != other.arguments) {
      return false;
    }
    if (this->log_levels != other.log_levels) {
      return false;
    }
    return true;
  }
  bool operator!=(const Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Event_

// alias to use template instance with default allocator
using Event =
  px4_msgs::msg::Event_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Event_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__EVENT__STRUCT_HPP_
