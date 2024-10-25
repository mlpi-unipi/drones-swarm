// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GimbalDeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__GimbalDeviceInformation __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GimbalDeviceInformation __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbalDeviceInformation_
{
  using Type = GimbalDeviceInformation_<ContainerAllocator>;

  explicit GimbalDeviceInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->vendor_name.begin(), this->vendor_name.end(), 0);
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->model_name.begin(), this->model_name.end(), 0);
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->custom_name.begin(), this->custom_name.end(), 0);
      this->firmware_version = 0ul;
      this->hardware_version = 0ul;
      this->uid = 0ull;
      this->cap_flags = 0;
      this->custom_cap_flags = 0;
      this->roll_min = 0.0f;
      this->roll_max = 0.0f;
      this->pitch_min = 0.0f;
      this->pitch_max = 0.0f;
      this->yaw_min = 0.0f;
      this->yaw_max = 0.0f;
      this->gimbal_device_compid = 0;
    }
  }

  explicit GimbalDeviceInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vendor_name(_alloc),
    model_name(_alloc),
    custom_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->vendor_name.begin(), this->vendor_name.end(), 0);
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->model_name.begin(), this->model_name.end(), 0);
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->custom_name.begin(), this->custom_name.end(), 0);
      this->firmware_version = 0ul;
      this->hardware_version = 0ul;
      this->uid = 0ull;
      this->cap_flags = 0;
      this->custom_cap_flags = 0;
      this->roll_min = 0.0f;
      this->roll_max = 0.0f;
      this->pitch_min = 0.0f;
      this->pitch_max = 0.0f;
      this->yaw_min = 0.0f;
      this->yaw_max = 0.0f;
      this->gimbal_device_compid = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _vendor_name_type =
    std::array<uint8_t, 32>;
  _vendor_name_type vendor_name;
  using _model_name_type =
    std::array<uint8_t, 32>;
  _model_name_type model_name;
  using _custom_name_type =
    std::array<uint8_t, 32>;
  _custom_name_type custom_name;
  using _firmware_version_type =
    uint32_t;
  _firmware_version_type firmware_version;
  using _hardware_version_type =
    uint32_t;
  _hardware_version_type hardware_version;
  using _uid_type =
    uint64_t;
  _uid_type uid;
  using _cap_flags_type =
    uint16_t;
  _cap_flags_type cap_flags;
  using _custom_cap_flags_type =
    uint16_t;
  _custom_cap_flags_type custom_cap_flags;
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
  using _gimbal_device_compid_type =
    uint8_t;
  _gimbal_device_compid_type gimbal_device_compid;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__vendor_name(
    const std::array<uint8_t, 32> & _arg)
  {
    this->vendor_name = _arg;
    return *this;
  }
  Type & set__model_name(
    const std::array<uint8_t, 32> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__custom_name(
    const std::array<uint8_t, 32> & _arg)
  {
    this->custom_name = _arg;
    return *this;
  }
  Type & set__firmware_version(
    const uint32_t & _arg)
  {
    this->firmware_version = _arg;
    return *this;
  }
  Type & set__hardware_version(
    const uint32_t & _arg)
  {
    this->hardware_version = _arg;
    return *this;
  }
  Type & set__uid(
    const uint64_t & _arg)
  {
    this->uid = _arg;
    return *this;
  }
  Type & set__cap_flags(
    const uint16_t & _arg)
  {
    this->cap_flags = _arg;
    return *this;
  }
  Type & set__custom_cap_flags(
    const uint16_t & _arg)
  {
    this->custom_cap_flags = _arg;
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
  Type & set__gimbal_device_compid(
    const uint8_t & _arg)
  {
    this->gimbal_device_compid = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_RETRACT =
    1u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_NEUTRAL =
    2u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_AXIS =
    4u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_FOLLOW =
    8u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_LOCK =
    16u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_AXIS =
    32u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_FOLLOW =
    64u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_LOCK =
    128u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_AXIS =
    256u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_FOLLOW =
    512u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_LOCK =
    1024u;
  static constexpr uint32_t GIMBAL_DEVICE_CAP_FLAGS_SUPPORTS_INFINITE_YAW =
    2048u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GimbalDeviceInformation
    std::shared_ptr<px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GimbalDeviceInformation
    std::shared_ptr<px4_msgs::msg::GimbalDeviceInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbalDeviceInformation_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->vendor_name != other.vendor_name) {
      return false;
    }
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->custom_name != other.custom_name) {
      return false;
    }
    if (this->firmware_version != other.firmware_version) {
      return false;
    }
    if (this->hardware_version != other.hardware_version) {
      return false;
    }
    if (this->uid != other.uid) {
      return false;
    }
    if (this->cap_flags != other.cap_flags) {
      return false;
    }
    if (this->custom_cap_flags != other.custom_cap_flags) {
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
    if (this->gimbal_device_compid != other.gimbal_device_compid) {
      return false;
    }
    return true;
  }
  bool operator!=(const GimbalDeviceInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbalDeviceInformation_

// alias to use template instance with default allocator
using GimbalDeviceInformation =
  px4_msgs::msg::GimbalDeviceInformation_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_RETRACT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_AXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_AXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_AXIS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t GimbalDeviceInformation_<ContainerAllocator>::GIMBAL_DEVICE_CAP_FLAGS_SUPPORTS_INFINITE_YAW;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__STRUCT_HPP_
