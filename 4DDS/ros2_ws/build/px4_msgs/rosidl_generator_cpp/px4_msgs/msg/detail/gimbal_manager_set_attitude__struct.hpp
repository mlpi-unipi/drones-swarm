// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GimbalManagerSetAttitude.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_ATTITUDE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_ATTITUDE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__GimbalManagerSetAttitude __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GimbalManagerSetAttitude __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbalManagerSetAttitude_
{
  using Type = GimbalManagerSetAttitude_<ContainerAllocator>;

  explicit GimbalManagerSetAttitude_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->origin_sysid = 0;
      this->origin_compid = 0;
      this->target_system = 0;
      this->target_component = 0;
      this->flags = 0ul;
      this->gimbal_device_id = 0;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      this->angular_velocity_x = 0.0f;
      this->angular_velocity_y = 0.0f;
      this->angular_velocity_z = 0.0f;
    }
  }

  explicit GimbalManagerSetAttitude_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->origin_sysid = 0;
      this->origin_compid = 0;
      this->target_system = 0;
      this->target_component = 0;
      this->flags = 0ul;
      this->gimbal_device_id = 0;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      this->angular_velocity_x = 0.0f;
      this->angular_velocity_y = 0.0f;
      this->angular_velocity_z = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _origin_sysid_type =
    uint8_t;
  _origin_sysid_type origin_sysid;
  using _origin_compid_type =
    uint8_t;
  _origin_compid_type origin_compid;
  using _target_system_type =
    uint8_t;
  _target_system_type target_system;
  using _target_component_type =
    uint8_t;
  _target_component_type target_component;
  using _flags_type =
    uint32_t;
  _flags_type flags;
  using _gimbal_device_id_type =
    uint8_t;
  _gimbal_device_id_type gimbal_device_id;
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

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__origin_sysid(
    const uint8_t & _arg)
  {
    this->origin_sysid = _arg;
    return *this;
  }
  Type & set__origin_compid(
    const uint8_t & _arg)
  {
    this->origin_compid = _arg;
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
  Type & set__flags(
    const uint32_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__gimbal_device_id(
    const uint8_t & _arg)
  {
    this->gimbal_device_id = _arg;
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

  // constant declarations
  static constexpr uint32_t GIMBAL_MANAGER_FLAGS_RETRACT =
    1u;
  static constexpr uint32_t GIMBAL_MANAGER_FLAGS_NEUTRAL =
    2u;
  static constexpr uint32_t GIMBAL_MANAGER_FLAGS_ROLL_LOCK =
    4u;
  static constexpr uint32_t GIMBAL_MANAGER_FLAGS_PITCH_LOCK =
    8u;
  static constexpr uint32_t GIMBAL_MANAGER_FLAGS_YAW_LOCK =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GimbalManagerSetAttitude
    std::shared_ptr<px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GimbalManagerSetAttitude
    std::shared_ptr<px4_msgs::msg::GimbalManagerSetAttitude_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbalManagerSetAttitude_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->origin_sysid != other.origin_sysid) {
      return false;
    }
    if (this->origin_compid != other.origin_compid) {
      return false;
    }
    if (this->target_system != other.target_system) {
      return false;
    }
    if (this->target_component != other.target_component) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->gimbal_device_id != other.gimbal_device_id) {
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
    return true;
  }
  bool operator!=(const GimbalManagerSetAttitude_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbalManagerSetAttitude_

// alias to use template instance with default allocator
using GimbalManagerSetAttitude =
  px4_msgs::msg::GimbalManagerSetAttitude_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerSetAttitude_<ContainerAllocator>::GIMBAL_MANAGER_FLAGS_RETRACT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerSetAttitude_<ContainerAllocator>::GIMBAL_MANAGER_FLAGS_NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerSetAttitude_<ContainerAllocator>::GIMBAL_MANAGER_FLAGS_ROLL_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerSetAttitude_<ContainerAllocator>::GIMBAL_MANAGER_FLAGS_PITCH_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerSetAttitude_<ContainerAllocator>::GIMBAL_MANAGER_FLAGS_YAW_LOCK;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_ATTITUDE__STRUCT_HPP_
