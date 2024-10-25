// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ParameterUpdate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__ParameterUpdate __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ParameterUpdate __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParameterUpdate_
{
  using Type = ParameterUpdate_<ContainerAllocator>;

  explicit ParameterUpdate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->instance = 0ul;
      this->get_count = 0ul;
      this->set_count = 0ul;
      this->find_count = 0ul;
      this->export_count = 0ul;
      this->active = 0;
      this->changed = 0;
      this->custom_default = 0;
    }
  }

  explicit ParameterUpdate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->instance = 0ul;
      this->get_count = 0ul;
      this->set_count = 0ul;
      this->find_count = 0ul;
      this->export_count = 0ul;
      this->active = 0;
      this->changed = 0;
      this->custom_default = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _instance_type =
    uint32_t;
  _instance_type instance;
  using _get_count_type =
    uint32_t;
  _get_count_type get_count;
  using _set_count_type =
    uint32_t;
  _set_count_type set_count;
  using _find_count_type =
    uint32_t;
  _find_count_type find_count;
  using _export_count_type =
    uint32_t;
  _export_count_type export_count;
  using _active_type =
    uint16_t;
  _active_type active;
  using _changed_type =
    uint16_t;
  _changed_type changed;
  using _custom_default_type =
    uint16_t;
  _custom_default_type custom_default;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__instance(
    const uint32_t & _arg)
  {
    this->instance = _arg;
    return *this;
  }
  Type & set__get_count(
    const uint32_t & _arg)
  {
    this->get_count = _arg;
    return *this;
  }
  Type & set__set_count(
    const uint32_t & _arg)
  {
    this->set_count = _arg;
    return *this;
  }
  Type & set__find_count(
    const uint32_t & _arg)
  {
    this->find_count = _arg;
    return *this;
  }
  Type & set__export_count(
    const uint32_t & _arg)
  {
    this->export_count = _arg;
    return *this;
  }
  Type & set__active(
    const uint16_t & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__changed(
    const uint16_t & _arg)
  {
    this->changed = _arg;
    return *this;
  }
  Type & set__custom_default(
    const uint16_t & _arg)
  {
    this->custom_default = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::ParameterUpdate_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ParameterUpdate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ParameterUpdate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ParameterUpdate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ParameterUpdate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ParameterUpdate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ParameterUpdate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ParameterUpdate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ParameterUpdate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ParameterUpdate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ParameterUpdate
    std::shared_ptr<px4_msgs::msg::ParameterUpdate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ParameterUpdate
    std::shared_ptr<px4_msgs::msg::ParameterUpdate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParameterUpdate_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->instance != other.instance) {
      return false;
    }
    if (this->get_count != other.get_count) {
      return false;
    }
    if (this->set_count != other.set_count) {
      return false;
    }
    if (this->find_count != other.find_count) {
      return false;
    }
    if (this->export_count != other.export_count) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->changed != other.changed) {
      return false;
    }
    if (this->custom_default != other.custom_default) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParameterUpdate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParameterUpdate_

// alias to use template instance with default allocator
using ParameterUpdate =
  px4_msgs::msg::ParameterUpdate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_UPDATE__STRUCT_HPP_
