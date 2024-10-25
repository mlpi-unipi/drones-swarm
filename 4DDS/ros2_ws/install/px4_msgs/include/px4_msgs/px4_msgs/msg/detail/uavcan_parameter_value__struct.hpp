// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/UavcanParameterValue.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_VALUE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__UavcanParameterValue __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__UavcanParameterValue __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UavcanParameterValue_
{
  using Type = UavcanParameterValue_<ContainerAllocator>;

  explicit UavcanParameterValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->node_id = 0;
      std::fill<typename std::array<uint8_t, 17>::iterator, uint8_t>(this->param_id.begin(), this->param_id.end(), 0);
      this->param_index = 0;
      this->param_count = 0;
      this->param_type = 0;
      this->int_value = 0ll;
      this->real_value = 0.0f;
    }
  }

  explicit UavcanParameterValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : param_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->node_id = 0;
      std::fill<typename std::array<uint8_t, 17>::iterator, uint8_t>(this->param_id.begin(), this->param_id.end(), 0);
      this->param_index = 0;
      this->param_count = 0;
      this->param_type = 0;
      this->int_value = 0ll;
      this->real_value = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _node_id_type =
    uint8_t;
  _node_id_type node_id;
  using _param_id_type =
    std::array<uint8_t, 17>;
  _param_id_type param_id;
  using _param_index_type =
    int16_t;
  _param_index_type param_index;
  using _param_count_type =
    uint16_t;
  _param_count_type param_count;
  using _param_type_type =
    uint8_t;
  _param_type_type param_type;
  using _int_value_type =
    int64_t;
  _int_value_type int_value;
  using _real_value_type =
    float;
  _real_value_type real_value;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__node_id(
    const uint8_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__param_id(
    const std::array<uint8_t, 17> & _arg)
  {
    this->param_id = _arg;
    return *this;
  }
  Type & set__param_index(
    const int16_t & _arg)
  {
    this->param_index = _arg;
    return *this;
  }
  Type & set__param_count(
    const uint16_t & _arg)
  {
    this->param_count = _arg;
    return *this;
  }
  Type & set__param_type(
    const uint8_t & _arg)
  {
    this->param_type = _arg;
    return *this;
  }
  Type & set__int_value(
    const int64_t & _arg)
  {
    this->int_value = _arg;
    return *this;
  }
  Type & set__real_value(
    const float & _arg)
  {
    this->real_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::UavcanParameterValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::UavcanParameterValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::UavcanParameterValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::UavcanParameterValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::UavcanParameterValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::UavcanParameterValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::UavcanParameterValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::UavcanParameterValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::UavcanParameterValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::UavcanParameterValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__UavcanParameterValue
    std::shared_ptr<px4_msgs::msg::UavcanParameterValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__UavcanParameterValue
    std::shared_ptr<px4_msgs::msg::UavcanParameterValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UavcanParameterValue_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->param_id != other.param_id) {
      return false;
    }
    if (this->param_index != other.param_index) {
      return false;
    }
    if (this->param_count != other.param_count) {
      return false;
    }
    if (this->param_type != other.param_type) {
      return false;
    }
    if (this->int_value != other.int_value) {
      return false;
    }
    if (this->real_value != other.real_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const UavcanParameterValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UavcanParameterValue_

// alias to use template instance with default allocator
using UavcanParameterValue =
  px4_msgs::msg::UavcanParameterValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_VALUE__STRUCT_HPP_
