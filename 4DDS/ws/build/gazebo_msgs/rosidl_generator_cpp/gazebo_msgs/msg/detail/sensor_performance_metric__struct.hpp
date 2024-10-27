// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__STRUCT_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__msg__SensorPerformanceMetric __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__msg__SensorPerformanceMetric __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorPerformanceMetric_
{
  using Type = SensorPerformanceMetric_<ContainerAllocator>;

  explicit SensorPerformanceMetric_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->sim_update_rate = 0.0;
      this->real_update_rate = 0.0;
      this->fps = 0.0;
    }
  }

  explicit SensorPerformanceMetric_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->sim_update_rate = 0.0;
      this->real_update_rate = 0.0;
      this->fps = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _sim_update_rate_type =
    double;
  _sim_update_rate_type sim_update_rate;
  using _real_update_rate_type =
    double;
  _real_update_rate_type real_update_rate;
  using _fps_type =
    double;
  _fps_type fps;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__sim_update_rate(
    const double & _arg)
  {
    this->sim_update_rate = _arg;
    return *this;
  }
  Type & set__real_update_rate(
    const double & _arg)
  {
    this->real_update_rate = _arg;
    return *this;
  }
  Type & set__fps(
    const double & _arg)
  {
    this->fps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__msg__SensorPerformanceMetric
    std::shared_ptr<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__msg__SensorPerformanceMetric
    std::shared_ptr<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorPerformanceMetric_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->sim_update_rate != other.sim_update_rate) {
      return false;
    }
    if (this->real_update_rate != other.real_update_rate) {
      return false;
    }
    if (this->fps != other.fps) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorPerformanceMetric_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorPerformanceMetric_

// alias to use template instance with default allocator
using SensorPerformanceMetric =
  gazebo_msgs::msg::SensorPerformanceMetric_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__STRUCT_HPP_
