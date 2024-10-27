// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GimbalDeviceAttitudeStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_ATTITUDE_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_ATTITUDE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__GimbalDeviceAttitudeStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GimbalDeviceAttitudeStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbalDeviceAttitudeStatus_
{
  using Type = GimbalDeviceAttitudeStatus_<ContainerAllocator>;

  explicit GimbalDeviceAttitudeStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->target_system = 0;
      this->target_component = 0;
      this->device_flags = 0;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      this->angular_velocity_x = 0.0f;
      this->angular_velocity_y = 0.0f;
      this->angular_velocity_z = 0.0f;
      this->failure_flags = 0ul;
      this->received_from_mavlink = false;
    }
  }

  explicit GimbalDeviceAttitudeStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->target_system = 0;
      this->target_component = 0;
      this->device_flags = 0;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      this->angular_velocity_x = 0.0f;
      this->angular_velocity_y = 0.0f;
      this->angular_velocity_z = 0.0f;
      this->failure_flags = 0ul;
      this->received_from_mavlink = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _target_system_type =
    uint8_t;
  _target_system_type target_system;
  using _target_component_type =
    uint8_t;
  _target_component_type target_component;
  using _device_flags_type =
    uint16_t;
  _device_flags_type device_flags;
  using _q_type =
    std::array<float, 4>;
  _q_type q;
  using _angular_velocity_x_type =
    float;
  _angular_velocity_x_type angular_velocity_x;
  using _angular_velocity_y_type =
    float;
  _angular_velocity_y_type angular_velocity_y;
  using _angular_velocity_z_type =
    float;
  _angular_velocity_z_type angular_velocity_z;
  using _failure_flags_type =
    uint32_t;
  _failure_flags_type failure_flags;
  using _received_from_mavlink_type =
    bool;
  _received_from_mavlink_type received_from_mavlink;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__target_system(
    const uint8_t & _arg)
  {
    this->target_system = _arg;
    return *this;
  }
  Type & set__target_component(
    const uint8_t & _arg)
  {
    this->target_component = _arg;
    return *this;
  }
  Type & set__device_flags(
    const uint16_t & _arg)
  {
    this->device_flags = _arg;
    return *this;
  }
  Type & set__q(
    const std::array<float, 4> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__angular_velocity_x(
    const float & _arg)
  {
    this->angular_velocity_x = _arg;
    return *this;
  }
  Type & set__angular_velocity_y(
    const float & _arg)
  {
    this->angular_velocity_y = _arg;
    return *this;
  }
  Type & set__angular_velocity_z(
    const float & _arg)
  {
    this->angular_velocity_z = _arg;
    return *this;
  }
  Type & set__failure_flags(
    const uint32_t & _arg)
  {
    this->failure_flags = _arg;
    return *this;
  }
  Type & set__received_from_mavlink(
    const bool & _arg)
  {
    this->received_from_mavlink = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t DEVICE_FLAGS_RETRACT =
    1u;
  static constexpr uint16_t DEVICE_FLAGS_NEUTRAL =
    2u;
  static constexpr uint16_t DEVICE_FLAGS_ROLL_LOCK =
    4u;
  static constexpr uint16_t DEVICE_FLAGS_PITCH_LOCK =
    8u;
  static constexpr uint16_t DEVICE_FLAGS_YAW_LOCK =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GimbalDeviceAttitudeStatus
    std::shared_ptr<px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GimbalDeviceAttitudeStatus
    std::shared_ptr<px4_msgs::msg::GimbalDeviceAttitudeStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbalDeviceAttitudeStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->target_system != other.target_system) {
      return false;
    }
    if (this->target_component != other.target_component) {
      return false;
    }
    if (this->device_flags != other.device_flags) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->angular_velocity_x != other.angular_velocity_x) {
      return false;
    }
    if (this->angular_velocity_y != other.angular_velocity_y) {
      return false;
    }
    if (this->angular_velocity_z != other.angular_velocity_z) {
      return false;
    }
    if (this->failure_flags != other.failure_flags) {
      return false;
    }
    if (this->received_from_mavlink != other.received_from_mavlink) {
      return false;
    }
    return true;
  }
  bool operator!=(const GimbalDeviceAttitudeStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbalDeviceAttitudeStatus_

// alias to use template instance with default allocator
using GimbalDeviceAttitudeStatus =
  px4_msgs::msg::GimbalDeviceAttitudeStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GimbalDeviceAttitudeStatus_<ContainerAllocator>::DEVICE_FLAGS_RETRACT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GimbalDeviceAttitudeStatus_<ContainerAllocator>::DEVICE_FLAGS_NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GimbalDeviceAttitudeStatus_<ContainerAllocator>::DEVICE_FLAGS_ROLL_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GimbalDeviceAttitudeStatus_<ContainerAllocator>::DEVICE_FLAGS_PITCH_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t GimbalDeviceAttitudeStatus_<ContainerAllocator>::DEVICE_FLAGS_YAW_LOCK;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_ATTITUDE_STATUS__STRUCT_HPP_
