// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TiltrotorExtraControls.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TILTROTOR_EXTRA_CONTROLS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TILTROTOR_EXTRA_CONTROLS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__TiltrotorExtraControls __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TiltrotorExtraControls __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TiltrotorExtraControls_
{
  using Type = TiltrotorExtraControls_<ContainerAllocator>;

  explicit TiltrotorExtraControls_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->collective_tilt_normalized_setpoint = 0.0f;
      this->collective_thrust_normalized_setpoint = 0.0f;
    }
  }

  explicit TiltrotorExtraControls_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->collective_tilt_normalized_setpoint = 0.0f;
      this->collective_thrust_normalized_setpoint = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _collective_tilt_normalized_setpoint_type =
    float;
  _collective_tilt_normalized_setpoint_type collective_tilt_normalized_setpoint;
  using _collective_thrust_normalized_setpoint_type =
    float;
  _collective_thrust_normalized_setpoint_type collective_thrust_normalized_setpoint;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__collective_tilt_normalized_setpoint(
    const float & _arg)
  {
    this->collective_tilt_normalized_setpoint = _arg;
    return *this;
  }
  Type & set__collective_thrust_normalized_setpoint(
    const float & _arg)
  {
    this->collective_thrust_normalized_setpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TiltrotorExtraControls
    std::shared_ptr<px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TiltrotorExtraControls
    std::shared_ptr<px4_msgs::msg::TiltrotorExtraControls_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TiltrotorExtraControls_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->collective_tilt_normalized_setpoint != other.collective_tilt_normalized_setpoint) {
      return false;
    }
    if (this->collective_thrust_normalized_setpoint != other.collective_thrust_normalized_setpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const TiltrotorExtraControls_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TiltrotorExtraControls_

// alias to use template instance with default allocator
using TiltrotorExtraControls =
  px4_msgs::msg::TiltrotorExtraControls_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TILTROTOR_EXTRA_CONTROLS__STRUCT_HPP_
