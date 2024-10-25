// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleLandDetected.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleLandDetected __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleLandDetected __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleLandDetected_
{
  using Type = VehicleLandDetected_<ContainerAllocator>;

  explicit VehicleLandDetected_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->freefall = false;
      this->ground_contact = false;
      this->maybe_landed = false;
      this->landed = false;
      this->in_ground_effect = false;
      this->in_descend = false;
      this->has_low_throttle = false;
      this->vertical_movement = false;
      this->horizontal_movement = false;
      this->rotational_movement = false;
      this->close_to_ground_or_skipped_check = false;
      this->at_rest = false;
    }
  }

  explicit VehicleLandDetected_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->freefall = false;
      this->ground_contact = false;
      this->maybe_landed = false;
      this->landed = false;
      this->in_ground_effect = false;
      this->in_descend = false;
      this->has_low_throttle = false;
      this->vertical_movement = false;
      this->horizontal_movement = false;
      this->rotational_movement = false;
      this->close_to_ground_or_skipped_check = false;
      this->at_rest = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _freefall_type =
    bool;
  _freefall_type freefall;
  using _ground_contact_type =
    bool;
  _ground_contact_type ground_contact;
  using _maybe_landed_type =
    bool;
  _maybe_landed_type maybe_landed;
  using _landed_type =
    bool;
  _landed_type landed;
  using _in_ground_effect_type =
    bool;
  _in_ground_effect_type in_ground_effect;
  using _in_descend_type =
    bool;
  _in_descend_type in_descend;
  using _has_low_throttle_type =
    bool;
  _has_low_throttle_type has_low_throttle;
  using _vertical_movement_type =
    bool;
  _vertical_movement_type vertical_movement;
  using _horizontal_movement_type =
    bool;
  _horizontal_movement_type horizontal_movement;
  using _rotational_movement_type =
    bool;
  _rotational_movement_type rotational_movement;
  using _close_to_ground_or_skipped_check_type =
    bool;
  _close_to_ground_or_skipped_check_type close_to_ground_or_skipped_check;
  using _at_rest_type =
    bool;
  _at_rest_type at_rest;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__freefall(
    const bool & _arg)
  {
    this->freefall = _arg;
    return *this;
  }
  Type & set__ground_contact(
    const bool & _arg)
  {
    this->ground_contact = _arg;
    return *this;
  }
  Type & set__maybe_landed(
    const bool & _arg)
  {
    this->maybe_landed = _arg;
    return *this;
  }
  Type & set__landed(
    const bool & _arg)
  {
    this->landed = _arg;
    return *this;
  }
  Type & set__in_ground_effect(
    const bool & _arg)
  {
    this->in_ground_effect = _arg;
    return *this;
  }
  Type & set__in_descend(
    const bool & _arg)
  {
    this->in_descend = _arg;
    return *this;
  }
  Type & set__has_low_throttle(
    const bool & _arg)
  {
    this->has_low_throttle = _arg;
    return *this;
  }
  Type & set__vertical_movement(
    const bool & _arg)
  {
    this->vertical_movement = _arg;
    return *this;
  }
  Type & set__horizontal_movement(
    const bool & _arg)
  {
    this->horizontal_movement = _arg;
    return *this;
  }
  Type & set__rotational_movement(
    const bool & _arg)
  {
    this->rotational_movement = _arg;
    return *this;
  }
  Type & set__close_to_ground_or_skipped_check(
    const bool & _arg)
  {
    this->close_to_ground_or_skipped_check = _arg;
    return *this;
  }
  Type & set__at_rest(
    const bool & _arg)
  {
    this->at_rest = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleLandDetected_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleLandDetected_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleLandDetected_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleLandDetected_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleLandDetected_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleLandDetected_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleLandDetected_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleLandDetected_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleLandDetected_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleLandDetected_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleLandDetected
    std::shared_ptr<px4_msgs::msg::VehicleLandDetected_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleLandDetected
    std::shared_ptr<px4_msgs::msg::VehicleLandDetected_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleLandDetected_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->freefall != other.freefall) {
      return false;
    }
    if (this->ground_contact != other.ground_contact) {
      return false;
    }
    if (this->maybe_landed != other.maybe_landed) {
      return false;
    }
    if (this->landed != other.landed) {
      return false;
    }
    if (this->in_ground_effect != other.in_ground_effect) {
      return false;
    }
    if (this->in_descend != other.in_descend) {
      return false;
    }
    if (this->has_low_throttle != other.has_low_throttle) {
      return false;
    }
    if (this->vertical_movement != other.vertical_movement) {
      return false;
    }
    if (this->horizontal_movement != other.horizontal_movement) {
      return false;
    }
    if (this->rotational_movement != other.rotational_movement) {
      return false;
    }
    if (this->close_to_ground_or_skipped_check != other.close_to_ground_or_skipped_check) {
      return false;
    }
    if (this->at_rest != other.at_rest) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleLandDetected_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleLandDetected_

// alias to use template instance with default allocator
using VehicleLandDetected =
  px4_msgs::msg::VehicleLandDetected_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__STRUCT_HPP_
