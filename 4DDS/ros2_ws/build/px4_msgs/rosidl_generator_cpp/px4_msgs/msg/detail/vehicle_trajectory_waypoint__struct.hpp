// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleTrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoints'
#include "px4_msgs/msg/detail/trajectory_waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleTrajectoryWaypoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleTrajectoryWaypoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleTrajectoryWaypoint_
{
  using Type = VehicleTrajectoryWaypoint_<ContainerAllocator>;

  explicit VehicleTrajectoryWaypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->waypoints.fill(px4_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>{_init});
    }
  }

  explicit VehicleTrajectoryWaypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waypoints(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->waypoints.fill(px4_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _type_type =
    uint8_t;
  _type_type type;
  using _waypoints_type =
    std::array<px4_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>, 5>;
  _waypoints_type waypoints;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::array<px4_msgs::msg::TrajectoryWaypoint_<ContainerAllocator>, 5> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS =
    0u;
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
    px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleTrajectoryWaypoint
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleTrajectoryWaypoint
    std::shared_ptr<px4_msgs::msg::VehicleTrajectoryWaypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleTrajectoryWaypoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleTrajectoryWaypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleTrajectoryWaypoint_

// alias to use template instance with default allocator
using VehicleTrajectoryWaypoint =
  px4_msgs::msg::VehicleTrajectoryWaypoint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypoint_<ContainerAllocator>::MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypoint_<ContainerAllocator>::POINT_0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypoint_<ContainerAllocator>::POINT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypoint_<ContainerAllocator>::POINT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypoint_<ContainerAllocator>::POINT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypoint_<ContainerAllocator>::POINT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleTrajectoryWaypoint_<ContainerAllocator>::NUMBER_POINTS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__STRUCT_HPP_
