// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorCorrection __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorCorrection __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorCorrection_
{
  using Type = SensorCorrection_<ContainerAllocator>;

  explicit SensorCorrection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->accel_device_ids.begin(), this->accel_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->accel_temperature.begin(), this->accel_temperature.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_offset_0.begin(), this->accel_offset_0.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_offset_1.begin(), this->accel_offset_1.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_offset_2.begin(), this->accel_offset_2.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_offset_3.begin(), this->accel_offset_3.end(), 0.0f);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->gyro_device_ids.begin(), this->gyro_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->gyro_temperature.begin(), this->gyro_temperature.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_offset_0.begin(), this->gyro_offset_0.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_offset_1.begin(), this->gyro_offset_1.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_offset_2.begin(), this->gyro_offset_2.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_offset_3.begin(), this->gyro_offset_3.end(), 0.0f);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->mag_device_ids.begin(), this->mag_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->mag_temperature.begin(), this->mag_temperature.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_offset_0.begin(), this->mag_offset_0.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_offset_1.begin(), this->mag_offset_1.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_offset_2.begin(), this->mag_offset_2.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_offset_3.begin(), this->mag_offset_3.end(), 0.0f);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->baro_device_ids.begin(), this->baro_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->baro_temperature.begin(), this->baro_temperature.end(), 0.0f);
      this->baro_offset_0 = 0.0f;
      this->baro_offset_1 = 0.0f;
      this->baro_offset_2 = 0.0f;
      this->baro_offset_3 = 0.0f;
    }
  }

  explicit SensorCorrection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accel_device_ids(_alloc),
    accel_temperature(_alloc),
    accel_offset_0(_alloc),
    accel_offset_1(_alloc),
    accel_offset_2(_alloc),
    accel_offset_3(_alloc),
    gyro_device_ids(_alloc),
    gyro_temperature(_alloc),
    gyro_offset_0(_alloc),
    gyro_offset_1(_alloc),
    gyro_offset_2(_alloc),
    gyro_offset_3(_alloc),
    mag_device_ids(_alloc),
    mag_temperature(_alloc),
    mag_offset_0(_alloc),
    mag_offset_1(_alloc),
    mag_offset_2(_alloc),
    mag_offset_3(_alloc),
    baro_device_ids(_alloc),
    baro_temperature(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->accel_device_ids.begin(), this->accel_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->accel_temperature.begin(), this->accel_temperature.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_offset_0.begin(), this->accel_offset_0.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_offset_1.begin(), this->accel_offset_1.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_offset_2.begin(), this->accel_offset_2.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_offset_3.begin(), this->accel_offset_3.end(), 0.0f);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->gyro_device_ids.begin(), this->gyro_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->gyro_temperature.begin(), this->gyro_temperature.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_offset_0.begin(), this->gyro_offset_0.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_offset_1.begin(), this->gyro_offset_1.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_offset_2.begin(), this->gyro_offset_2.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_offset_3.begin(), this->gyro_offset_3.end(), 0.0f);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->mag_device_ids.begin(), this->mag_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->mag_temperature.begin(), this->mag_temperature.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_offset_0.begin(), this->mag_offset_0.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_offset_1.begin(), this->mag_offset_1.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_offset_2.begin(), this->mag_offset_2.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_offset_3.begin(), this->mag_offset_3.end(), 0.0f);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->baro_device_ids.begin(), this->baro_device_ids.end(), 0ul);
      std::fill<typename std::array<float, 4>::iterator, float>(this->baro_temperature.begin(), this->baro_temperature.end(), 0.0f);
      this->baro_offset_0 = 0.0f;
      this->baro_offset_1 = 0.0f;
      this->baro_offset_2 = 0.0f;
      this->baro_offset_3 = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _accel_device_ids_type =
    std::array<uint32_t, 4>;
  _accel_device_ids_type accel_device_ids;
  using _accel_temperature_type =
    std::array<float, 4>;
  _accel_temperature_type accel_temperature;
  using _accel_offset_0_type =
    std::array<float, 3>;
  _accel_offset_0_type accel_offset_0;
  using _accel_offset_1_type =
    std::array<float, 3>;
  _accel_offset_1_type accel_offset_1;
  using _accel_offset_2_type =
    std::array<float, 3>;
  _accel_offset_2_type accel_offset_2;
  using _accel_offset_3_type =
    std::array<float, 3>;
  _accel_offset_3_type accel_offset_3;
  using _gyro_device_ids_type =
    std::array<uint32_t, 4>;
  _gyro_device_ids_type gyro_device_ids;
  using _gyro_temperature_type =
    std::array<float, 4>;
  _gyro_temperature_type gyro_temperature;
  using _gyro_offset_0_type =
    std::array<float, 3>;
  _gyro_offset_0_type gyro_offset_0;
  using _gyro_offset_1_type =
    std::array<float, 3>;
  _gyro_offset_1_type gyro_offset_1;
  using _gyro_offset_2_type =
    std::array<float, 3>;
  _gyro_offset_2_type gyro_offset_2;
  using _gyro_offset_3_type =
    std::array<float, 3>;
  _gyro_offset_3_type gyro_offset_3;
  using _mag_device_ids_type =
    std::array<uint32_t, 4>;
  _mag_device_ids_type mag_device_ids;
  using _mag_temperature_type =
    std::array<float, 4>;
  _mag_temperature_type mag_temperature;
  using _mag_offset_0_type =
    std::array<float, 3>;
  _mag_offset_0_type mag_offset_0;
  using _mag_offset_1_type =
    std::array<float, 3>;
  _mag_offset_1_type mag_offset_1;
  using _mag_offset_2_type =
    std::array<float, 3>;
  _mag_offset_2_type mag_offset_2;
  using _mag_offset_3_type =
    std::array<float, 3>;
  _mag_offset_3_type mag_offset_3;
  using _baro_device_ids_type =
    std::array<uint32_t, 4>;
  _baro_device_ids_type baro_device_ids;
  using _baro_temperature_type =
    std::array<float, 4>;
  _baro_temperature_type baro_temperature;
  using _baro_offset_0_type =
    float;
  _baro_offset_0_type baro_offset_0;
  using _baro_offset_1_type =
    float;
  _baro_offset_1_type baro_offset_1;
  using _baro_offset_2_type =
    float;
  _baro_offset_2_type baro_offset_2;
  using _baro_offset_3_type =
    float;
  _baro_offset_3_type baro_offset_3;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__accel_device_ids(
    const std::array<uint32_t, 4> & _arg)
  {
    this->accel_device_ids = _arg;
    return *this;
  }
  Type & set__accel_temperature(
    const std::array<float, 4> & _arg)
  {
    this->accel_temperature = _arg;
    return *this;
  }
  Type & set__accel_offset_0(
    const std::array<float, 3> & _arg)
  {
    this->accel_offset_0 = _arg;
    return *this;
  }
  Type & set__accel_offset_1(
    const std::array<float, 3> & _arg)
  {
    this->accel_offset_1 = _arg;
    return *this;
  }
  Type & set__accel_offset_2(
    const std::array<float, 3> & _arg)
  {
    this->accel_offset_2 = _arg;
    return *this;
  }
  Type & set__accel_offset_3(
    const std::array<float, 3> & _arg)
  {
    this->accel_offset_3 = _arg;
    return *this;
  }
  Type & set__gyro_device_ids(
    const std::array<uint32_t, 4> & _arg)
  {
    this->gyro_device_ids = _arg;
    return *this;
  }
  Type & set__gyro_temperature(
    const std::array<float, 4> & _arg)
  {
    this->gyro_temperature = _arg;
    return *this;
  }
  Type & set__gyro_offset_0(
    const std::array<float, 3> & _arg)
  {
    this->gyro_offset_0 = _arg;
    return *this;
  }
  Type & set__gyro_offset_1(
    const std::array<float, 3> & _arg)
  {
    this->gyro_offset_1 = _arg;
    return *this;
  }
  Type & set__gyro_offset_2(
    const std::array<float, 3> & _arg)
  {
    this->gyro_offset_2 = _arg;
    return *this;
  }
  Type & set__gyro_offset_3(
    const std::array<float, 3> & _arg)
  {
    this->gyro_offset_3 = _arg;
    return *this;
  }
  Type & set__mag_device_ids(
    const std::array<uint32_t, 4> & _arg)
  {
    this->mag_device_ids = _arg;
    return *this;
  }
  Type & set__mag_temperature(
    const std::array<float, 4> & _arg)
  {
    this->mag_temperature = _arg;
    return *this;
  }
  Type & set__mag_offset_0(
    const std::array<float, 3> & _arg)
  {
    this->mag_offset_0 = _arg;
    return *this;
  }
  Type & set__mag_offset_1(
    const std::array<float, 3> & _arg)
  {
    this->mag_offset_1 = _arg;
    return *this;
  }
  Type & set__mag_offset_2(
    const std::array<float, 3> & _arg)
  {
    this->mag_offset_2 = _arg;
    return *this;
  }
  Type & set__mag_offset_3(
    const std::array<float, 3> & _arg)
  {
    this->mag_offset_3 = _arg;
    return *this;
  }
  Type & set__baro_device_ids(
    const std::array<uint32_t, 4> & _arg)
  {
    this->baro_device_ids = _arg;
    return *this;
  }
  Type & set__baro_temperature(
    const std::array<float, 4> & _arg)
  {
    this->baro_temperature = _arg;
    return *this;
  }
  Type & set__baro_offset_0(
    const float & _arg)
  {
    this->baro_offset_0 = _arg;
    return *this;
  }
  Type & set__baro_offset_1(
    const float & _arg)
  {
    this->baro_offset_1 = _arg;
    return *this;
  }
  Type & set__baro_offset_2(
    const float & _arg)
  {
    this->baro_offset_2 = _arg;
    return *this;
  }
  Type & set__baro_offset_3(
    const float & _arg)
  {
    this->baro_offset_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorCorrection_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorCorrection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorCorrection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorCorrection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorCorrection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorCorrection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorCorrection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorCorrection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorCorrection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorCorrection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorCorrection
    std::shared_ptr<px4_msgs::msg::SensorCorrection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorCorrection
    std::shared_ptr<px4_msgs::msg::SensorCorrection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorCorrection_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->accel_device_ids != other.accel_device_ids) {
      return false;
    }
    if (this->accel_temperature != other.accel_temperature) {
      return false;
    }
    if (this->accel_offset_0 != other.accel_offset_0) {
      return false;
    }
    if (this->accel_offset_1 != other.accel_offset_1) {
      return false;
    }
    if (this->accel_offset_2 != other.accel_offset_2) {
      return false;
    }
    if (this->accel_offset_3 != other.accel_offset_3) {
      return false;
    }
    if (this->gyro_device_ids != other.gyro_device_ids) {
      return false;
    }
    if (this->gyro_temperature != other.gyro_temperature) {
      return false;
    }
    if (this->gyro_offset_0 != other.gyro_offset_0) {
      return false;
    }
    if (this->gyro_offset_1 != other.gyro_offset_1) {
      return false;
    }
    if (this->gyro_offset_2 != other.gyro_offset_2) {
      return false;
    }
    if (this->gyro_offset_3 != other.gyro_offset_3) {
      return false;
    }
    if (this->mag_device_ids != other.mag_device_ids) {
      return false;
    }
    if (this->mag_temperature != other.mag_temperature) {
      return false;
    }
    if (this->mag_offset_0 != other.mag_offset_0) {
      return false;
    }
    if (this->mag_offset_1 != other.mag_offset_1) {
      return false;
    }
    if (this->mag_offset_2 != other.mag_offset_2) {
      return false;
    }
    if (this->mag_offset_3 != other.mag_offset_3) {
      return false;
    }
    if (this->baro_device_ids != other.baro_device_ids) {
      return false;
    }
    if (this->baro_temperature != other.baro_temperature) {
      return false;
    }
    if (this->baro_offset_0 != other.baro_offset_0) {
      return false;
    }
    if (this->baro_offset_1 != other.baro_offset_1) {
      return false;
    }
    if (this->baro_offset_2 != other.baro_offset_2) {
      return false;
    }
    if (this->baro_offset_3 != other.baro_offset_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorCorrection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorCorrection_

// alias to use template instance with default allocator
using SensorCorrection =
  px4_msgs::msg::SensorCorrection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__STRUCT_HPP_
