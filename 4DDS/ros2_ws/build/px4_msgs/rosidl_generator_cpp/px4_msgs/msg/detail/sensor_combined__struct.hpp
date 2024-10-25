// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorCombined.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorCombined __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorCombined __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorCombined_
{
  using Type = SensorCombined_<ContainerAllocator>;

  explicit SensorCombined_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_rad.begin(), this->gyro_rad.end(), 0.0f);
      this->gyro_integral_dt = 0ul;
      this->accelerometer_timestamp_relative = 0l;
      std::fill<typename std::array<float, 3>::iterator, float>(this->accelerometer_m_s2.begin(), this->accelerometer_m_s2.end(), 0.0f);
      this->accelerometer_integral_dt = 0ul;
      this->accelerometer_clipping = 0;
      this->gyro_clipping = 0;
      this->accel_calibration_count = 0;
      this->gyro_calibration_count = 0;
    }
  }

  explicit SensorCombined_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gyro_rad(_alloc),
    accelerometer_m_s2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_rad.begin(), this->gyro_rad.end(), 0.0f);
      this->gyro_integral_dt = 0ul;
      this->accelerometer_timestamp_relative = 0l;
      std::fill<typename std::array<float, 3>::iterator, float>(this->accelerometer_m_s2.begin(), this->accelerometer_m_s2.end(), 0.0f);
      this->accelerometer_integral_dt = 0ul;
      this->accelerometer_clipping = 0;
      this->gyro_clipping = 0;
      this->accel_calibration_count = 0;
      this->gyro_calibration_count = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _gyro_rad_type =
    std::array<float, 3>;
  _gyro_rad_type gyro_rad;
  using _gyro_integral_dt_type =
    uint32_t;
  _gyro_integral_dt_type gyro_integral_dt;
  using _accelerometer_timestamp_relative_type =
    int32_t;
  _accelerometer_timestamp_relative_type accelerometer_timestamp_relative;
  using _accelerometer_m_s2_type =
    std::array<float, 3>;
  _accelerometer_m_s2_type accelerometer_m_s2;
  using _accelerometer_integral_dt_type =
    uint32_t;
  _accelerometer_integral_dt_type accelerometer_integral_dt;
  using _accelerometer_clipping_type =
    uint8_t;
  _accelerometer_clipping_type accelerometer_clipping;
  using _gyro_clipping_type =
    uint8_t;
  _gyro_clipping_type gyro_clipping;
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
  Type & set__gyro_rad(
    const std::array<float, 3> & _arg)
  {
    this->gyro_rad = _arg;
    return *this;
  }
  Type & set__gyro_integral_dt(
    const uint32_t & _arg)
  {
    this->gyro_integral_dt = _arg;
    return *this;
  }
  Type & set__accelerometer_timestamp_relative(
    const int32_t & _arg)
  {
    this->accelerometer_timestamp_relative = _arg;
    return *this;
  }
  Type & set__accelerometer_m_s2(
    const std::array<float, 3> & _arg)
  {
    this->accelerometer_m_s2 = _arg;
    return *this;
  }
  Type & set__accelerometer_integral_dt(
    const uint32_t & _arg)
  {
    this->accelerometer_integral_dt = _arg;
    return *this;
  }
  Type & set__accelerometer_clipping(
    const uint8_t & _arg)
  {
    this->accelerometer_clipping = _arg;
    return *this;
  }
  Type & set__gyro_clipping(
    const uint8_t & _arg)
  {
    this->gyro_clipping = _arg;
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
  static constexpr int32_t RELATIVE_TIMESTAMP_INVALID =
    2147483647;
  static constexpr uint8_t CLIPPING_X =
    1u;
  static constexpr uint8_t CLIPPING_Y =
    2u;
  static constexpr uint8_t CLIPPING_Z =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorCombined_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorCombined_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorCombined_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorCombined_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorCombined_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorCombined_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorCombined_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorCombined_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorCombined_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorCombined_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorCombined
    std::shared_ptr<px4_msgs::msg::SensorCombined_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorCombined
    std::shared_ptr<px4_msgs::msg::SensorCombined_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorCombined_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->gyro_rad != other.gyro_rad) {
      return false;
    }
    if (this->gyro_integral_dt != other.gyro_integral_dt) {
      return false;
    }
    if (this->accelerometer_timestamp_relative != other.accelerometer_timestamp_relative) {
      return false;
    }
    if (this->accelerometer_m_s2 != other.accelerometer_m_s2) {
      return false;
    }
    if (this->accelerometer_integral_dt != other.accelerometer_integral_dt) {
      return false;
    }
    if (this->accelerometer_clipping != other.accelerometer_clipping) {
      return false;
    }
    if (this->gyro_clipping != other.gyro_clipping) {
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
  bool operator!=(const SensorCombined_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorCombined_

// alias to use template instance with default allocator
using SensorCombined =
  px4_msgs::msg::SensorCombined_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SensorCombined_<ContainerAllocator>::RELATIVE_TIMESTAMP_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorCombined_<ContainerAllocator>::CLIPPING_X;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorCombined_<ContainerAllocator>::CLIPPING_Y;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorCombined_<ContainerAllocator>::CLIPPING_Z;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__STRUCT_HPP_
