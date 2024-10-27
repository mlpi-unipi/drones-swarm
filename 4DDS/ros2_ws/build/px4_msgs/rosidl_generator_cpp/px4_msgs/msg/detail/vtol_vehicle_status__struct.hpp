// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VtolVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VtolVehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VtolVehicleStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VtolVehicleStatus_
{
  using Type = VtolVehicleStatus_<ContainerAllocator>;

  explicit VtolVehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->vehicle_vtol_state = 0;
      this->fixed_wing_system_failure = false;
    }
  }

  explicit VtolVehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->vehicle_vtol_state = 0;
      this->fixed_wing_system_failure = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _vehicle_vtol_state_type =
    uint8_t;
  _vehicle_vtol_state_type vehicle_vtol_state;
  using _fixed_wing_system_failure_type =
    bool;
  _fixed_wing_system_failure_type fixed_wing_system_failure;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__vehicle_vtol_state(
    const uint8_t & _arg)
  {
    this->vehicle_vtol_state = _arg;
    return *this;
  }
  Type & set__fixed_wing_system_failure(
    const bool & _arg)
  {
    this->fixed_wing_system_failure = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t VEHICLE_VTOL_STATE_UNDEFINED =
    0u;
  static constexpr uint8_t VEHICLE_VTOL_STATE_TRANSITION_TO_FW =
    1u;
  static constexpr uint8_t VEHICLE_VTOL_STATE_TRANSITION_TO_MC =
    2u;
  static constexpr uint8_t VEHICLE_VTOL_STATE_MC =
    3u;
  static constexpr uint8_t VEHICLE_VTOL_STATE_FW =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VtolVehicleStatus
    std::shared_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VtolVehicleStatus
    std::shared_ptr<px4_msgs::msg::VtolVehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VtolVehicleStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->vehicle_vtol_state != other.vehicle_vtol_state) {
      return false;
    }
    if (this->fixed_wing_system_failure != other.fixed_wing_system_failure) {
      return false;
    }
    return true;
  }
  bool operator!=(const VtolVehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VtolVehicleStatus_

// alias to use template instance with default allocator
using VtolVehicleStatus =
  px4_msgs::msg::VtolVehicleStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VtolVehicleStatus_<ContainerAllocator>::VEHICLE_VTOL_STATE_UNDEFINED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VtolVehicleStatus_<ContainerAllocator>::VEHICLE_VTOL_STATE_TRANSITION_TO_FW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VtolVehicleStatus_<ContainerAllocator>::VEHICLE_VTOL_STATE_TRANSITION_TO_MC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VtolVehicleStatus_<ContainerAllocator>::VEHICLE_VTOL_STATE_MC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VtolVehicleStatus_<ContainerAllocator>::VEHICLE_VTOL_STATE_FW;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__STRUCT_HPP_
