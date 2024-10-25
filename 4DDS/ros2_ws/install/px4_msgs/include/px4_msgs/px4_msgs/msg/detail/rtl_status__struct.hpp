// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RtlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RTL_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RTL_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RtlStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RtlStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RtlStatus_
{
  using Type = RtlStatus_<ContainerAllocator>;

  explicit RtlStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->safe_points_id = 0ul;
      this->is_evaluation_pending = false;
      this->has_vtol_approach = false;
      this->rtl_type = 0;
      this->safe_point_index = 0;
    }
  }

  explicit RtlStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->safe_points_id = 0ul;
      this->is_evaluation_pending = false;
      this->has_vtol_approach = false;
      this->rtl_type = 0;
      this->safe_point_index = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _safe_points_id_type =
    uint32_t;
  _safe_points_id_type safe_points_id;
  using _is_evaluation_pending_type =
    bool;
  _is_evaluation_pending_type is_evaluation_pending;
  using _has_vtol_approach_type =
    bool;
  _has_vtol_approach_type has_vtol_approach;
  using _rtl_type_type =
    uint8_t;
  _rtl_type_type rtl_type;
  using _safe_point_index_type =
    uint8_t;
  _safe_point_index_type safe_point_index;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__safe_points_id(
    const uint32_t & _arg)
  {
    this->safe_points_id = _arg;
    return *this;
  }
  Type & set__is_evaluation_pending(
    const bool & _arg)
  {
    this->is_evaluation_pending = _arg;
    return *this;
  }
  Type & set__has_vtol_approach(
    const bool & _arg)
  {
    this->has_vtol_approach = _arg;
    return *this;
  }
  Type & set__rtl_type(
    const uint8_t & _arg)
  {
    this->rtl_type = _arg;
    return *this;
  }
  Type & set__safe_point_index(
    const uint8_t & _arg)
  {
    this->safe_point_index = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RTL_STATUS_TYPE_NONE =
    0u;
  static constexpr uint8_t RTL_STATUS_TYPE_DIRECT_SAFE_POINT =
    1u;
  static constexpr uint8_t RTL_STATUS_TYPE_DIRECT_MISSION_LAND =
    2u;
  static constexpr uint8_t RTL_STATUS_TYPE_FOLLOW_MISSION =
    3u;
  static constexpr uint8_t RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::RtlStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RtlStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RtlStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RtlStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RtlStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RtlStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RtlStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RtlStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RtlStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RtlStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RtlStatus
    std::shared_ptr<px4_msgs::msg::RtlStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RtlStatus
    std::shared_ptr<px4_msgs::msg::RtlStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RtlStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->safe_points_id != other.safe_points_id) {
      return false;
    }
    if (this->is_evaluation_pending != other.is_evaluation_pending) {
      return false;
    }
    if (this->has_vtol_approach != other.has_vtol_approach) {
      return false;
    }
    if (this->rtl_type != other.rtl_type) {
      return false;
    }
    if (this->safe_point_index != other.safe_point_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const RtlStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RtlStatus_

// alias to use template instance with default allocator
using RtlStatus =
  px4_msgs::msg::RtlStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtlStatus_<ContainerAllocator>::RTL_STATUS_TYPE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtlStatus_<ContainerAllocator>::RTL_STATUS_TYPE_DIRECT_SAFE_POINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtlStatus_<ContainerAllocator>::RTL_STATUS_TYPE_DIRECT_MISSION_LAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtlStatus_<ContainerAllocator>::RTL_STATUS_TYPE_FOLLOW_MISSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RtlStatus_<ContainerAllocator>::RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RTL_STATUS__STRUCT_HPP_
