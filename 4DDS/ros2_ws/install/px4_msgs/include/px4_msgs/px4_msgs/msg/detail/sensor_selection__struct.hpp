// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorSelection.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_SELECTION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_SELECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorSelection __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorSelection __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorSelection_
{
  using Type = SensorSelection_<ContainerAllocator>;

  explicit SensorSelection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->accel_device_id = 0ul;
      this->gyro_device_id = 0ul;
    }
  }

  explicit SensorSelection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->accel_device_id = 0ul;
      this->gyro_device_id = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _accel_device_id_type =
    uint32_t;
  _accel_device_id_type accel_device_id;
  using _gyro_device_id_type =
    uint32_t;
  _gyro_device_id_type gyro_device_id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__accel_device_id(
    const uint32_t & _arg)
  {
    this->accel_device_id = _arg;
    return *this;
  }
  Type & set__gyro_device_id(
    const uint32_t & _arg)
  {
    this->gyro_device_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorSelection_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorSelection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorSelection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorSelection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorSelection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorSelection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorSelection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorSelection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorSelection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorSelection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorSelection
    std::shared_ptr<px4_msgs::msg::SensorSelection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorSelection
    std::shared_ptr<px4_msgs::msg::SensorSelection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorSelection_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->accel_device_id != other.accel_device_id) {
      return false;
    }
    if (this->gyro_device_id != other.gyro_device_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorSelection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorSelection_

// alias to use template instance with default allocator
using SensorSelection =
  px4_msgs::msg::SensorSelection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_SELECTION__STRUCT_HPP_
