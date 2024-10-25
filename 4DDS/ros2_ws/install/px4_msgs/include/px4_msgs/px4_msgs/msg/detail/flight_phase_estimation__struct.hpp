// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FlightPhaseEstimation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FLIGHT_PHASE_ESTIMATION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FLIGHT_PHASE_ESTIMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FlightPhaseEstimation __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FlightPhaseEstimation __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FlightPhaseEstimation_
{
  using Type = FlightPhaseEstimation_<ContainerAllocator>;

  explicit FlightPhaseEstimation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->flight_phase = 0;
    }
  }

  explicit FlightPhaseEstimation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->flight_phase = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _flight_phase_type =
    uint8_t;
  _flight_phase_type flight_phase;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__flight_phase(
    const uint8_t & _arg)
  {
    this->flight_phase = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FLIGHT_PHASE_UNKNOWN =
    0u;
  static constexpr uint8_t FLIGHT_PHASE_LEVEL =
    1u;
  static constexpr uint8_t FLIGHT_PHASE_DESCEND =
    2u;
  static constexpr uint8_t FLIGHT_PHASE_CLIMB =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FlightPhaseEstimation
    std::shared_ptr<px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FlightPhaseEstimation
    std::shared_ptr<px4_msgs::msg::FlightPhaseEstimation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FlightPhaseEstimation_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->flight_phase != other.flight_phase) {
      return false;
    }
    return true;
  }
  bool operator!=(const FlightPhaseEstimation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FlightPhaseEstimation_

// alias to use template instance with default allocator
using FlightPhaseEstimation =
  px4_msgs::msg::FlightPhaseEstimation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FlightPhaseEstimation_<ContainerAllocator>::FLIGHT_PHASE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FlightPhaseEstimation_<ContainerAllocator>::FLIGHT_PHASE_LEVEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FlightPhaseEstimation_<ContainerAllocator>::FLIGHT_PHASE_DESCEND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FlightPhaseEstimation_<ContainerAllocator>::FLIGHT_PHASE_CLIMB;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FLIGHT_PHASE_ESTIMATION__STRUCT_HPP_
