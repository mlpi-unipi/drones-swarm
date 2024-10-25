// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleMagnetometer.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_MAGNETOMETER__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_MAGNETOMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleMagnetometer __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleMagnetometer __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleMagnetometer_
{
  using Type = VehicleMagnetometer_<ContainerAllocator>;

  explicit VehicleMagnetometer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      std::fill<typename std::array<float, 3>::iterator, float>(this->magnetometer_ga.begin(), this->magnetometer_ga.end(), 0.0f);
      this->calibration_count = 0;
    }
  }

  explicit VehicleMagnetometer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : magnetometer_ga(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      std::fill<typename std::array<float, 3>::iterator, float>(this->magnetometer_ga.begin(), this->magnetometer_ga.end(), 0.0f);
      this->calibration_count = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _magnetometer_ga_type =
    std::array<float, 3>;
  _magnetometer_ga_type magnetometer_ga;
  using _calibration_count_type =
    uint8_t;
  _calibration_count_type calibration_count;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__magnetometer_ga(
    const std::array<float, 3> & _arg)
  {
    this->magnetometer_ga = _arg;
    return *this;
  }
  Type & set__calibration_count(
    const uint8_t & _arg)
  {
    this->calibration_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleMagnetometer
    std::shared_ptr<px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleMagnetometer
    std::shared_ptr<px4_msgs::msg::VehicleMagnetometer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleMagnetometer_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->magnetometer_ga != other.magnetometer_ga) {
      return false;
    }
    if (this->calibration_count != other.calibration_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleMagnetometer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleMagnetometer_

// alias to use template instance with default allocator
using VehicleMagnetometer =
  px4_msgs::msg::VehicleMagnetometer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_MAGNETOMETER__STRUCT_HPP_
