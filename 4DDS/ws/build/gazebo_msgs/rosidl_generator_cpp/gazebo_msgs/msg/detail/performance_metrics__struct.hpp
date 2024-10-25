// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:msg/PerformanceMetrics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__STRUCT_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'sensors'
#include "gazebo_msgs/msg/detail/sensor_performance_metric__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__msg__PerformanceMetrics __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__msg__PerformanceMetrics __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerformanceMetrics_
{
  using Type = PerformanceMetrics_<ContainerAllocator>;

  explicit PerformanceMetrics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->real_time_factor = 0.0;
    }
  }

  explicit PerformanceMetrics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->real_time_factor = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _real_time_factor_type =
    double;
  _real_time_factor_type real_time_factor;
  using _sensors_type =
    std::vector<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator>>>;
  _sensors_type sensors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__real_time_factor(
    const double & _arg)
  {
    this->real_time_factor = _arg;
    return *this;
  }
  Type & set__sensors(
    const std::vector<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gazebo_msgs::msg::SensorPerformanceMetric_<ContainerAllocator>>> & _arg)
  {
    this->sensors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__msg__PerformanceMetrics
    std::shared_ptr<gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__msg__PerformanceMetrics
    std::shared_ptr<gazebo_msgs::msg::PerformanceMetrics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerformanceMetrics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->real_time_factor != other.real_time_factor) {
      return false;
    }
    if (this->sensors != other.sensors) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerformanceMetrics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerformanceMetrics_

// alias to use template instance with default allocator
using PerformanceMetrics =
  gazebo_msgs::msg::PerformanceMetrics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__STRUCT_HPP_
