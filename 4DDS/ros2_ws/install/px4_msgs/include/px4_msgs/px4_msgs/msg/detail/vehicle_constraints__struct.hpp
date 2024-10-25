// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleConstraints.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_CONSTRAINTS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_CONSTRAINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleConstraints __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleConstraints __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleConstraints_
{
  using Type = VehicleConstraints_<ContainerAllocator>;

  explicit VehicleConstraints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->speed_up = 0.0f;
      this->speed_down = 0.0f;
      this->want_takeoff = false;
    }
  }

  explicit VehicleConstraints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->speed_up = 0.0f;
      this->speed_down = 0.0f;
      this->want_takeoff = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _speed_up_type =
    float;
  _speed_up_type speed_up;
  using _speed_down_type =
    float;
  _speed_down_type speed_down;
  using _want_takeoff_type =
    bool;
  _want_takeoff_type want_takeoff;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__speed_up(
    const float & _arg)
  {
    this->speed_up = _arg;
    return *this;
  }
  Type & set__speed_down(
    const float & _arg)
  {
    this->speed_down = _arg;
    return *this;
  }
  Type & set__want_takeoff(
    const bool & _arg)
  {
    this->want_takeoff = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleConstraints_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleConstraints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleConstraints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleConstraints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleConstraints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleConstraints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleConstraints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleConstraints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleConstraints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleConstraints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleConstraints
    std::shared_ptr<px4_msgs::msg::VehicleConstraints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleConstraints
    std::shared_ptr<px4_msgs::msg::VehicleConstraints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleConstraints_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->speed_up != other.speed_up) {
      return false;
    }
    if (this->speed_down != other.speed_down) {
      return false;
    }
    if (this->want_takeoff != other.want_takeoff) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleConstraints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleConstraints_

// alias to use template instance with default allocator
using VehicleConstraints =
  px4_msgs::msg::VehicleConstraints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_CONSTRAINTS__STRUCT_HPP_
