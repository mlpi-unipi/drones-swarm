// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleCommandAck.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND_ACK__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND_ACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleCommandAck __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleCommandAck __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleCommandAck_
{
  using Type = VehicleCommandAck_<ContainerAllocator>;

  explicit VehicleCommandAck_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->command = 0ul;
      this->result = 0;
      this->result_param1 = 0;
      this->result_param2 = 0l;
      this->target_system = 0;
      this->target_component = 0;
      this->from_external = false;
    }
  }

  explicit VehicleCommandAck_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->command = 0ul;
      this->result = 0;
      this->result_param1 = 0;
      this->result_param2 = 0l;
      this->target_system = 0;
      this->target_component = 0;
      this->from_external = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _command_type =
    uint32_t;
  _command_type command;
  using _result_type =
    uint8_t;
  _result_type result;
  using _result_param1_type =
    uint8_t;
  _result_param1_type result_param1;
  using _result_param2_type =
    int32_t;
  _result_param2_type result_param2;
  using _target_system_type =
    uint8_t;
  _target_system_type target_system;
  using _target_component_type =
    uint16_t;
  _target_component_type target_component;
  using _from_external_type =
    bool;
  _from_external_type from_external;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__command(
    const uint32_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__result_param1(
    const uint8_t & _arg)
  {
    this->result_param1 = _arg;
    return *this;
  }
  Type & set__result_param2(
    const int32_t & _arg)
  {
    this->result_param2 = _arg;
    return *this;
  }
  Type & set__target_system(
    const uint8_t & _arg)
  {
    this->target_system = _arg;
    return *this;
  }
  Type & set__target_component(
    const uint16_t & _arg)
  {
    this->target_component = _arg;
    return *this;
  }
  Type & set__from_external(
    const bool & _arg)
  {
    this->from_external = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t VEHICLE_CMD_RESULT_ACCEPTED =
    0u;
  static constexpr uint8_t VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED =
    1u;
  static constexpr uint8_t VEHICLE_CMD_RESULT_DENIED =
    2u;
  static constexpr uint8_t VEHICLE_CMD_RESULT_UNSUPPORTED =
    3u;
  static constexpr uint8_t VEHICLE_CMD_RESULT_FAILED =
    4u;
  static constexpr uint8_t VEHICLE_CMD_RESULT_IN_PROGRESS =
    5u;
  static constexpr uint8_t VEHICLE_CMD_RESULT_CANCELLED =
    6u;
  static constexpr uint16_t ARM_AUTH_DENIED_REASON_GENERIC =
    0u;
  static constexpr uint16_t ARM_AUTH_DENIED_REASON_NONE =
    1u;
  static constexpr uint16_t ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT =
    2u;
  static constexpr uint16_t ARM_AUTH_DENIED_REASON_TIMEOUT =
    3u;
  static constexpr uint16_t ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE =
    4u;
  static constexpr uint16_t ARM_AUTH_DENIED_REASON_BAD_WEATHER =
    5u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleCommandAck_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleCommandAck_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleCommandAck_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleCommandAck_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleCommandAck_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleCommandAck_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleCommandAck_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleCommandAck_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleCommandAck_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleCommandAck_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleCommandAck
    std::shared_ptr<px4_msgs::msg::VehicleCommandAck_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleCommandAck
    std::shared_ptr<px4_msgs::msg::VehicleCommandAck_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleCommandAck_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->result_param1 != other.result_param1) {
      return false;
    }
    if (this->result_param2 != other.result_param2) {
      return false;
    }
    if (this->target_system != other.target_system) {
      return false;
    }
    if (this->target_component != other.target_component) {
      return false;
    }
    if (this->from_external != other.from_external) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleCommandAck_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleCommandAck_

// alias to use template instance with default allocator
using VehicleCommandAck =
  px4_msgs::msg::VehicleCommandAck_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleCommandAck_<ContainerAllocator>::VEHICLE_CMD_RESULT_ACCEPTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleCommandAck_<ContainerAllocator>::VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleCommandAck_<ContainerAllocator>::VEHICLE_CMD_RESULT_DENIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleCommandAck_<ContainerAllocator>::VEHICLE_CMD_RESULT_UNSUPPORTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleCommandAck_<ContainerAllocator>::VEHICLE_CMD_RESULT_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleCommandAck_<ContainerAllocator>::VEHICLE_CMD_RESULT_IN_PROGRESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleCommandAck_<ContainerAllocator>::VEHICLE_CMD_RESULT_CANCELLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleCommandAck_<ContainerAllocator>::ARM_AUTH_DENIED_REASON_GENERIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleCommandAck_<ContainerAllocator>::ARM_AUTH_DENIED_REASON_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleCommandAck_<ContainerAllocator>::ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleCommandAck_<ContainerAllocator>::ARM_AUTH_DENIED_REASON_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleCommandAck_<ContainerAllocator>::ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleCommandAck_<ContainerAllocator>::ARM_AUTH_DENIED_REASON_BAD_WEATHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleCommandAck_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND_ACK__STRUCT_HPP_
