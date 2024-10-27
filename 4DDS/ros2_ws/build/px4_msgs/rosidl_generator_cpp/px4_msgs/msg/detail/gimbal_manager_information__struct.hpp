// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GimbalManagerInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__GimbalManagerInformation __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GimbalManagerInformation __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbalManagerInformation_
{
  using Type = GimbalManagerInformation_<ContainerAllocator>;

  explicit GimbalManagerInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->cap_flags = 0ul;
      this->gimbal_device_id = 0;
      this->roll_min = 0.0f;
      this->roll_max = 0.0f;
      this->pitch_min = 0.0f;
      this->pitch_max = 0.0f;
      this->yaw_min = 0.0f;
      this->yaw_max = 0.0f;
    }
  }

  explicit GimbalManagerInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->cap_flags = 0ul;
      this->gimbal_device_id = 0;
      this->roll_min = 0.0f;
      this->roll_max = 0.0f;
      this->pitch_min = 0.0f;
      this->pitch_max = 0.0f;
      this->yaw_min = 0.0f;
      this->yaw_max = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _cap_flags_type =
    uint32_t;
  _cap_flags_type cap_flags;
  using _gimbal_device_id_type =
    uint8_t;
  _gimbal_device_id_type gimbal_device_id;
  using _roll_min_type =
    float;
  _roll_min_type roll_min;
  using _roll_max_type =
    float;
  _roll_max_type roll_max;
  using _pitch_min_type =
    float;
  _pitch_min_type pitch_min;
  using _pitch_max_type =
    float;
  _pitch_max_type pitch_max;
  using _yaw_min_type =
    float;
  _yaw_min_type yaw_min;
  using _yaw_max_type =
    float;
  _yaw_max_type yaw_max;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__cap_flags(
    const uint32_t & _arg)
  {
    this->cap_flags = _arg;
    return *this;
  }
  Type & set__gimbal_device_id(
    const uint8_t & _arg)
  {
    this->gimbal_device_id = _arg;
    return *this;
  }
  Type & set__roll_min(
    const float & _arg)
  {
    this->roll_min = _arg;
    return *this;
  }
  Type & set__roll_max(
    const float & _arg)
  {
    this->roll_max = _arg;
    return *this;
  }
  Type & set__pitch_min(
    const float & _arg)
  {
    this->pitch_min = _arg;
    return *this;
  }
  Type & set__pitch_max(
    const float & _arg)
  {
    this->pitch_max = _arg;
    return *this;
  }
  Type & set__yaw_min(
    const float & _arg)
  {
    this->yaw_min = _arg;
    return *this;
  }
  Type & set__yaw_max(
    const float & _arg)
  {
    this->yaw_max = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT =
    1u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL =
    2u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS =
    4u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW =
    8u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK =
    16u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS =
    32u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW =
    64u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK =
    128u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS =
    256u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW =
    512u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK =
    1024u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW =
    2048u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL =
    65536u;
  static constexpr uint32_t GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL =
    131072u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GimbalManagerInformation
    std::shared_ptr<px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GimbalManagerInformation
    std::shared_ptr<px4_msgs::msg::GimbalManagerInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbalManagerInformation_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->cap_flags != other.cap_flags) {
      return false;
    }
    if (this->gimbal_device_id != other.gimbal_device_id) {
      return false;
    }
    if (this->roll_min != other.roll_min) {
      return false;
    }
    if (this->roll_max != other.roll_max) {
      return false;
    }
    if (this->pitch_min != other.pitch_min) {
      return false;
    }
    if (this->pitch_max != other.pitch_max) {
      return false;
    }
    if (this->yaw_min != other.yaw_min) {
      return false;
    }
    if (this->yaw_max != other.yaw_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const GimbalManagerInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbalManagerInformation_

// alias to use template instance with default allocator
using GimbalManagerInformation =
  px4_msgs::msg::GimbalManagerInformation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalManagerInformation_<ContainerAllocator>::GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__STRUCT_HPP_
