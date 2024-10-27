// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/CameraStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAMERA_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__CAMERA_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__CameraStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__CameraStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraStatus_
{
  using Type = CameraStatus_<ContainerAllocator>;

  explicit CameraStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->active_sys_id = 0;
      this->active_comp_id = 0;
    }
  }

  explicit CameraStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->active_sys_id = 0;
      this->active_comp_id = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _active_sys_id_type =
    uint8_t;
  _active_sys_id_type active_sys_id;
  using _active_comp_id_type =
    uint8_t;
  _active_comp_id_type active_comp_id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__active_sys_id(
    const uint8_t & _arg)
  {
    this->active_sys_id = _arg;
    return *this;
  }
  Type & set__active_comp_id(
    const uint8_t & _arg)
  {
    this->active_comp_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::CameraStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::CameraStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::CameraStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::CameraStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CameraStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CameraStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CameraStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CameraStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::CameraStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::CameraStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__CameraStatus
    std::shared_ptr<px4_msgs::msg::CameraStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__CameraStatus
    std::shared_ptr<px4_msgs::msg::CameraStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->active_sys_id != other.active_sys_id) {
      return false;
    }
    if (this->active_comp_id != other.active_comp_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraStatus_

// alias to use template instance with default allocator
using CameraStatus =
  px4_msgs::msg::CameraStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CAMERA_STATUS__STRUCT_HPP_
