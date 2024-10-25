// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RcParameterMap.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RcParameterMap __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RcParameterMap __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RcParameterMap_
{
  using Type = RcParameterMap_<ContainerAllocator>;

  explicit RcParameterMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->valid.begin(), this->valid.end(), false);
      std::fill<typename std::array<int32_t, 3>::iterator, int32_t>(this->param_index.begin(), this->param_index.end(), 0l);
      std::fill<typename std::array<uint8_t, 51>::iterator, uint8_t>(this->param_id.begin(), this->param_id.end(), 0);
      std::fill<typename std::array<float, 3>::iterator, float>(this->scale.begin(), this->scale.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->value0.begin(), this->value0.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->value_min.begin(), this->value_min.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->value_max.begin(), this->value_max.end(), 0.0f);
    }
  }

  explicit RcParameterMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : valid(_alloc),
    param_index(_alloc),
    param_id(_alloc),
    scale(_alloc),
    value0(_alloc),
    value_min(_alloc),
    value_max(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->valid.begin(), this->valid.end(), false);
      std::fill<typename std::array<int32_t, 3>::iterator, int32_t>(this->param_index.begin(), this->param_index.end(), 0l);
      std::fill<typename std::array<uint8_t, 51>::iterator, uint8_t>(this->param_id.begin(), this->param_id.end(), 0);
      std::fill<typename std::array<float, 3>::iterator, float>(this->scale.begin(), this->scale.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->value0.begin(), this->value0.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->value_min.begin(), this->value_min.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->value_max.begin(), this->value_max.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _valid_type =
    std::array<bool, 3>;
  _valid_type valid;
  using _param_index_type =
    std::array<int32_t, 3>;
  _param_index_type param_index;
  using _param_id_type =
    std::array<uint8_t, 51>;
  _param_id_type param_id;
  using _scale_type =
    std::array<float, 3>;
  _scale_type scale;
  using _value0_type =
    std::array<float, 3>;
  _value0_type value0;
  using _value_min_type =
    std::array<float, 3>;
  _value_min_type value_min;
  using _value_max_type =
    std::array<float, 3>;
  _value_max_type value_max;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__valid(
    const std::array<bool, 3> & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__param_index(
    const std::array<int32_t, 3> & _arg)
  {
    this->param_index = _arg;
    return *this;
  }
  Type & set__param_id(
    const std::array<uint8_t, 51> & _arg)
  {
    this->param_id = _arg;
    return *this;
  }
  Type & set__scale(
    const std::array<float, 3> & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__value0(
    const std::array<float, 3> & _arg)
  {
    this->value0 = _arg;
    return *this;
  }
  Type & set__value_min(
    const std::array<float, 3> & _arg)
  {
    this->value_min = _arg;
    return *this;
  }
  Type & set__value_max(
    const std::array<float, 3> & _arg)
  {
    this->value_max = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RC_PARAM_MAP_NCHAN =
    3u;
  static constexpr uint8_t PARAM_ID_LEN =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::RcParameterMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RcParameterMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RcParameterMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RcParameterMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RcParameterMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RcParameterMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RcParameterMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RcParameterMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RcParameterMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RcParameterMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RcParameterMap
    std::shared_ptr<px4_msgs::msg::RcParameterMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RcParameterMap
    std::shared_ptr<px4_msgs::msg::RcParameterMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RcParameterMap_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->param_index != other.param_index) {
      return false;
    }
    if (this->param_id != other.param_id) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->value0 != other.value0) {
      return false;
    }
    if (this->value_min != other.value_min) {
      return false;
    }
    if (this->value_max != other.value_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const RcParameterMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RcParameterMap_

// alias to use template instance with default allocator
using RcParameterMap =
  px4_msgs::msg::RcParameterMap_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcParameterMap_<ContainerAllocator>::RC_PARAM_MAP_NCHAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcParameterMap_<ContainerAllocator>::PARAM_ID_LEN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__STRUCT_HPP_
