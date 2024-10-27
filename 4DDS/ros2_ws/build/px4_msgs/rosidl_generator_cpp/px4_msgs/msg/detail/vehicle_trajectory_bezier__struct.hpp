// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleTrajectoryBezier.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_BEZIER__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_BEZIER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'control_points'
#include "px4_msgs/msg/detail/trajectory_bezier__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleTrajectoryBezier __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleTrajectoryBezier __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleTrajectoryBezier_
{
  using Type = VehicleTrajectoryBezier_<ContainerAllocator>;

  explicit VehicleTrajectoryBezier_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->control_points.fill(px4_msgs::msg::TrajectoryBezier_<ContainerAllocator>{_init});
      this->bezier_order = 0;
    }
  }

  explicit VehicleTrajectoryBezier_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control_points(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->control_points.fill(px4_msgs::msg::TrajectoryBezier_<ContainerAllocator>{_alloc, _init});
      this->bezier_order = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _control_points_type =
    std::array<px4_msgs::msg::TrajectoryBezier_<ContainerAllocator>, 5>;
  _control_points_type control_points;
  using _bezier_order_type =
    uint8_t;
  _bezier_order_type bezier_order;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__control_points(
    const std::array<px4_msgs::msg::TrajectoryBezier_<ContainerAllocator>, 5> & _arg)
  {
    this->control_points = _arg;
    return *this;
  }
  Type & set__bezier_order(
    const uint8_t & _arg)
  {
    this->bezier_order = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t POINT_0 =
    0u;
  static constexpr uint8_t POINT_1 =
    1u;
  static constexpr uint8_t POINT_2 =
    2u;
  static constexpr uint8_t POINT_3 =
    3u;
  static constexpr uint8_t POINT_4 =
    4u;
  static constexpr uint8_t NUMBER_POINTS =
    5u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleTrajectoryBezier
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleTrajectoryBezier
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryBezier_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleTrajectoryBezier_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->control_points != other.control_points) {
      return false;
    }
    if (this->bezier_order != other.bezier_order) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleTrajectoryBezier_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleTrajectoryBezier_

// alias to use template instance with default allocator
using VehicleTrajectoryBezier =
  px4_msgs::msg::VehicleTrajectoryBezier_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryBezier_<ContainerAllocator>::POINT_0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryBezier_<ContainerAllocator>::POINT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryBezier_<ContainerAllocator>::POINT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryBezier_<ContainerAllocator>::POINT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryBezier_<ContainerAllocator>::POINT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryBezier_<ContainerAllocator>::NUMBER_POINTS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_BEZIER__STRUCT_HPP_
