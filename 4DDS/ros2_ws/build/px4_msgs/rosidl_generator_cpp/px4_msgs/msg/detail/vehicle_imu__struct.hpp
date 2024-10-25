// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleImu.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleImu __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleImu __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleImu_
{
  using Type = VehicleImu_<ContainerAllocator>;

  explicit VehicleImu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->accel_device_id = 0ul;
      this->gyro_device_id = 0ul;
      std::fill<typename std::array<float, 3>::iterator, float>(this->delta_angle.begin(), this->delta_angle.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->delta_velocity.begin(), this->delta_velocity.end(), 0.0f);
      this->delta_angle_dt = 0;
      this->delta_velocity_dt = 0;
      this->delta_angle_clipping = 0;
      this->delta_velocity_clipping = 0;
      this->accel_calibration_count = 0;
      this->gyro_calibration_count = 0;
    }
  }

  explicit VehicleImu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : delta_angle(_alloc),
    delta_velocity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->accel_device_id = 0ul;
      this->gyro_device_id = 0ul;
      std::fill<typename std::array<float, 3>::iterator, float>(this->delta_angle.begin(), this->delta_angle.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->delta_velocity.begin(), this->delta_velocity.end(), 0.0f);
      this->delta_angle_dt = 0;
      this->delta_velocity_dt = 0;
      this->delta_angle_clipping = 0;
      this->delta_velocity_clipping = 0;
      this->accel_calibration_count = 0;
      this->gyro_calibration_count = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _accel_device_id_type =
    uint32_t;
  _accel_device_id_type accel_device_id;
  using _gyro_device_id_type =
    uint32_t;
  _gyro_device_id_type gyro_device_id;
  using _delta_angle_type =
    std::array<float, 3>;
  _delta_angle_type delta_angle;
  using _delta_velocity_type =
    std::array<float, 3>;
  _delta_velocity_type delta_velocity;
  using _delta_angle_dt_type =
    uint16_t;
  _delta_angle_dt_type delta_angle_dt;
  using _delta_velocity_dt_type =
    uint16_t;
  _delta_velocity_dt_type delta_velocity_dt;
  using _delta_angle_clipping_type =
    uint8_t;
  _delta_angle_clipping_type delta_angle_clipping;
  using _delta_velocity_clipping_type =
    uint8_t;
  _delta_velocity_clipping_type delta_velocity_clipping;
  using _accel_calibration_count_type =
    uint8_t;
  _accel_calibration_count_type accel_calibration_count;
  using _gyro_calibration_count_type =
    uint8_t;
  _gyro_calibration_count_type gyro_calibration_count;

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
  Type & set__delta_angle(
    const std::array<float, 3> & _arg)
  {
    this->delta_angle = _arg;
    return *this;
  }
  Type & set__delta_velocity(
    const std::array<float, 3> & _arg)
  {
    this->delta_velocity = _arg;
    return *this;
  }
  Type & set__delta_angle_dt(
    const uint16_t & _arg)
  {
    this->delta_angle_dt = _arg;
    return *this;
  }
  Type & set__delta_velocity_dt(
    const uint16_t & _arg)
  {
    this->delta_velocity_dt = _arg;
    return *this;
  }
  Type & set__delta_angle_clipping(
    const uint8_t & _arg)
  {
    this->delta_angle_clipping = _arg;
    return *this;
  }
  Type & set__delta_velocity_clipping(
    const uint8_t & _arg)
  {
    this->delta_velocity_clipping = _arg;
    return *this;
  }
  Type & set__accel_calibration_count(
    const uint8_t & _arg)
  {
    this->accel_calibration_count = _arg;
    return *this;
  }
  Type & set__gyro_calibration_count(
    const uint8_t & _arg)
  {
    this->gyro_calibration_count = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CLIPPING_X =
    1u;
  static constexpr uint8_t CLIPPING_Y =
    2u;
  static constexpr uint8_t CLIPPING_Z =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleImu_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleImu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleImu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleImu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleImu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleImu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleImu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleImu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleImu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleImu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleImu
    std::shared_ptr<px4_msgs::msg::VehicleImu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleImu
    std::shared_ptr<px4_msgs::msg::VehicleImu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleImu_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->accel_device_id != other.accel_device_id) {
      return false;
    }
    if (this->gyro_device_id != other.gyro_device_id) {
      return false;
    }
    if (this->delta_angle != other.delta_angle) {
      return false;
    }
    if (this->delta_velocity != other.delta_velocity) {
      return false;
    }
    if (this->delta_angle_dt != other.delta_angle_dt) {
      return false;
    }
    if (this->delta_velocity_dt != other.delta_velocity_dt) {
      return false;
    }
    if (this->delta_angle_clipping != other.delta_angle_clipping) {
      return false;
    }
    if (this->delta_velocity_clipping != other.delta_velocity_clipping) {
      return false;
    }
    if (this->accel_calibration_count != other.accel_calibration_count) {
      return false;
    }
    if (this->gyro_calibration_count != other.gyro_calibration_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleImu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleImu_

// alias to use template instance with default allocator
using VehicleImu =
  px4_msgs::msg::VehicleImu_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleImu_<ContainerAllocator>::CLIPPING_X;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleImu_<ContainerAllocator>::CLIPPING_Y;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleImu_<ContainerAllocator>::CLIPPING_Z;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__STRUCT_HPP_
