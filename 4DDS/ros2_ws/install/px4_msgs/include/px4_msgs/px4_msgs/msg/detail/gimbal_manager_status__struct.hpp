// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GimbalManagerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__GimbalManagerStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GimbalManagerStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GimbalManagerStatus_
{
  using Type = GimbalManagerStatus_<ContainerAllocator>;

  explicit GimbalManagerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->flags = 0ul;
      this->gimbal_device_id = 0;
      this->primary_control_sysid = 0;
      this->primary_control_compid = 0;
      this->secondary_control_sysid = 0;
      this->secondary_control_compid = 0;
    }
  }

  explicit GimbalManagerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->flags = 0ul;
      this->gimbal_device_id = 0;
      this->primary_control_sysid = 0;
      this->primary_control_compid = 0;
      this->secondary_control_sysid = 0;
      this->secondary_control_compid = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _flags_type =
    uint32_t;
  _flags_type flags;
  using _gimbal_device_id_type =
    uint8_t;
  _gimbal_device_id_type gimbal_device_id;
  using _primary_control_sysid_type =
    uint8_t;
  _primary_control_sysid_type primary_control_sysid;
  using _primary_control_compid_type =
    uint8_t;
  _primary_control_compid_type primary_control_compid;
  using _secondary_control_sysid_type =
    uint8_t;
  _secondary_control_sysid_type secondary_control_sysid;
  using _secondary_control_compid_type =
    uint8_t;
  _secondary_control_compid_type secondary_control_compid;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
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
  Type & set__primary_control_sysid(
    const uint8_t & _arg)
  {
    this->primary_control_sysid = _arg;
    return *this;
  }
  Type & set__primary_control_compid(
    const uint8_t & _arg)
  {
    this->primary_control_compid = _arg;
    return *this;
  }
  Type & set__secondary_control_sysid(
    const uint8_t & _arg)
  {
    this->secondary_control_sysid = _arg;
    return *this;
  }
  Type & set__secondary_control_compid(
    const uint8_t & _arg)
  {
    this->secondary_control_compid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GimbalManagerStatus
    std::shared_ptr<px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GimbalManagerStatus
    std::shared_ptr<px4_msgs::msg::GimbalManagerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GimbalManagerStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->gimbal_device_id != other.gimbal_device_id) {
      return false;
    }
    if (this->primary_control_sysid != other.primary_control_sysid) {
      return false;
    }
    if (this->primary_control_compid != other.primary_control_compid) {
      return false;
    }
    if (this->secondary_control_sysid != other.secondary_control_sysid) {
      return false;
    }
    if (this->secondary_control_compid != other.secondary_control_compid) {
      return false;
    }
    return true;
  }
  bool operator!=(const GimbalManagerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GimbalManagerStatus_

// alias to use template instance with default allocator
using GimbalManagerStatus =
  px4_msgs::msg::GimbalManagerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__STRUCT_HPP_
