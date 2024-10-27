// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/OffboardControlMode.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__OffboardControlMode __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__OffboardControlMode __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OffboardControlMode_
{
  using Type = OffboardControlMode_<ContainerAllocator>;

  explicit OffboardControlMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->position = false;
      this->velocity = false;
      this->acceleration = false;
      this->attitude = false;
      this->body_rate = false;
      this->thrust_and_torque = false;
      this->direct_actuator = false;
    }
  }

  explicit OffboardControlMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->position = false;
      this->velocity = false;
      this->acceleration = false;
      this->attitude = false;
      this->body_rate = false;
      this->thrust_and_torque = false;
      this->direct_actuator = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _position_type =
    bool;
  _position_type position;
  using _velocity_type =
    bool;
  _velocity_type velocity;
  using _acceleration_type =
    bool;
  _acceleration_type acceleration;
  using _attitude_type =
    bool;
  _attitude_type attitude;
  using _body_rate_type =
    bool;
  _body_rate_type body_rate;
  using _thrust_and_torque_type =
    bool;
  _thrust_and_torque_type thrust_and_torque;
  using _direct_actuator_type =
    bool;
  _direct_actuator_type direct_actuator;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__position(
    const bool & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const bool & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const bool & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__attitude(
    const bool & _arg)
  {
    this->attitude = _arg;
    return *this;
  }
  Type & set__body_rate(
    const bool & _arg)
  {
    this->body_rate = _arg;
    return *this;
  }
  Type & set__thrust_and_torque(
    const bool & _arg)
  {
    this->thrust_and_torque = _arg;
    return *this;
  }
  Type & set__direct_actuator(
    const bool & _arg)
  {
    this->direct_actuator = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::OffboardControlMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::OffboardControlMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::OffboardControlMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::OffboardControlMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OffboardControlMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OffboardControlMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OffboardControlMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OffboardControlMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::OffboardControlMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::OffboardControlMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__OffboardControlMode
    std::shared_ptr<px4_msgs::msg::OffboardControlMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__OffboardControlMode
    std::shared_ptr<px4_msgs::msg::OffboardControlMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OffboardControlMode_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->attitude != other.attitude) {
      return false;
    }
    if (this->body_rate != other.body_rate) {
      return false;
    }
    if (this->thrust_and_torque != other.thrust_and_torque) {
      return false;
    }
    if (this->direct_actuator != other.direct_actuator) {
      return false;
    }
    return true;
  }
  bool operator!=(const OffboardControlMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OffboardControlMode_

// alias to use template instance with default allocator
using OffboardControlMode =
  px4_msgs::msg::OffboardControlMode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__STRUCT_HPP_
