// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/OrbitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__OrbitStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__OrbitStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OrbitStatus_
{
  using Type = OrbitStatus_<ContainerAllocator>;

  explicit OrbitStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->radius = 0.0f;
      this->frame = 0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0f;
      this->yaw_behaviour = 0;
    }
  }

  explicit OrbitStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->radius = 0.0f;
      this->frame = 0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0f;
      this->yaw_behaviour = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _radius_type =
    float;
  _radius_type radius;
  using _frame_type =
    uint8_t;
  _frame_type frame;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _yaw_behaviour_type =
    uint8_t;
  _yaw_behaviour_type yaw_behaviour;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__frame(
    const uint8_t & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__yaw_behaviour(
    const uint8_t & _arg)
  {
    this->yaw_behaviour = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER =
    0u;
  static constexpr uint8_t ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING =
    1u;
  static constexpr uint8_t ORBIT_YAW_BEHAVIOUR_UNCONTROLLED =
    2u;
  static constexpr uint8_t ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE =
    3u;
  static constexpr uint8_t ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::OrbitStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::OrbitStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::OrbitStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::OrbitStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OrbitStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OrbitStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OrbitStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OrbitStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::OrbitStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::OrbitStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__OrbitStatus
    std::shared_ptr<px4_msgs::msg::OrbitStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__OrbitStatus
    std::shared_ptr<px4_msgs::msg::OrbitStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrbitStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->yaw_behaviour != other.yaw_behaviour) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrbitStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrbitStatus_

// alias to use template instance with default allocator
using OrbitStatus =
  px4_msgs::msg::OrbitStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrbitStatus_<ContainerAllocator>::ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrbitStatus_<ContainerAllocator>::ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrbitStatus_<ContainerAllocator>::ORBIT_YAW_BEHAVIOUR_UNCONTROLLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrbitStatus_<ContainerAllocator>::ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OrbitStatus_<ContainerAllocator>::ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__STRUCT_HPP_
