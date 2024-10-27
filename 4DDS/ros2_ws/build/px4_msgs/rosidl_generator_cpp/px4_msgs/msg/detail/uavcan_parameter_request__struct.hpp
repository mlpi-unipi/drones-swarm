// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/UavcanParameterRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__UavcanParameterRequest __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__UavcanParameterRequest __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UavcanParameterRequest_
{
  using Type = UavcanParameterRequest_<ContainerAllocator>;

  explicit UavcanParameterRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->message_type = 0;
      this->node_id = 0;
      std::fill<typename std::array<uint8_t, 17>::iterator, uint8_t>(this->param_id.begin(), this->param_id.end(), 0);
      this->param_index = 0;
      this->param_type = 0;
      this->int_value = 0ll;
      this->real_value = 0.0f;
    }
  }

  explicit UavcanParameterRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : param_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->message_type = 0;
      this->node_id = 0;
      std::fill<typename std::array<uint8_t, 17>::iterator, uint8_t>(this->param_id.begin(), this->param_id.end(), 0);
      this->param_index = 0;
      this->param_type = 0;
      this->int_value = 0ll;
      this->real_value = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _message_type_type =
    uint8_t;
  _message_type_type message_type;
  using _node_id_type =
    uint8_t;
  _node_id_type node_id;
  using _param_id_type =
    std::array<uint8_t, 17>;
  _param_id_type param_id;
  using _param_index_type =
    int16_t;
  _param_index_type param_index;
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
  Type & set__message_type(
    const uint8_t & _arg)
  {
    this->message_type = _arg;
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
  static constexpr uint8_t MESSAGE_TYPE_PARAM_REQUEST_READ =
    20u;
  static constexpr uint8_t MESSAGE_TYPE_PARAM_REQUEST_LIST =
    21u;
  static constexpr uint8_t MESSAGE_TYPE_PARAM_SET =
    23u;
  static constexpr uint8_t NODE_ID_ALL =
    0u;
  static constexpr uint8_t PARAM_TYPE_UINT8 =
    1u;
  static constexpr uint8_t PARAM_TYPE_INT64 =
    8u;
  static constexpr uint8_t PARAM_TYPE_REAL32 =
    9u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__UavcanParameterRequest
    std::shared_ptr<px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__UavcanParameterRequest
    std::shared_ptr<px4_msgs::msg::UavcanParameterRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UavcanParameterRequest_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->message_type != other.message_type) {
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
  bool operator!=(const UavcanParameterRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UavcanParameterRequest_

// alias to use template instance with default allocator
using UavcanParameterRequest =
  px4_msgs::msg::UavcanParameterRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavcanParameterRequest_<ContainerAllocator>::MESSAGE_TYPE_PARAM_REQUEST_READ;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavcanParameterRequest_<ContainerAllocator>::MESSAGE_TYPE_PARAM_REQUEST_LIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavcanParameterRequest_<ContainerAllocator>::MESSAGE_TYPE_PARAM_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavcanParameterRequest_<ContainerAllocator>::NODE_ID_ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavcanParameterRequest_<ContainerAllocator>::PARAM_TYPE_UINT8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavcanParameterRequest_<ContainerAllocator>::PARAM_TYPE_INT64;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavcanParameterRequest_<ContainerAllocator>::PARAM_TYPE_REAL32;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UavcanParameterRequest_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__STRUCT_HPP_
