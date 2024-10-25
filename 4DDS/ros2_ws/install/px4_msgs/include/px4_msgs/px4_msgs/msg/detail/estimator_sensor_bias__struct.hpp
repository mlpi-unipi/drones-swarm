// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorSensorBias.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorSensorBias __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorSensorBias __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorSensorBias_
{
  using Type = EstimatorSensorBias_<ContainerAllocator>;

  explicit EstimatorSensorBias_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->gyro_device_id = 0ul;
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_bias.begin(), this->gyro_bias.end(), 0.0f);
      this->gyro_bias_limit = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_bias_variance.begin(), this->gyro_bias_variance.end(), 0.0f);
      this->gyro_bias_valid = false;
      this->gyro_bias_stable = false;
      this->accel_device_id = 0ul;
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_bias.begin(), this->accel_bias.end(), 0.0f);
      this->accel_bias_limit = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_bias_variance.begin(), this->accel_bias_variance.end(), 0.0f);
      this->accel_bias_valid = false;
      this->accel_bias_stable = false;
      this->mag_device_id = 0ul;
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_bias.begin(), this->mag_bias.end(), 0.0f);
      this->mag_bias_limit = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_bias_variance.begin(), this->mag_bias_variance.end(), 0.0f);
      this->mag_bias_valid = false;
      this->mag_bias_stable = false;
    }
  }

  explicit EstimatorSensorBias_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gyro_bias(_alloc),
    gyro_bias_variance(_alloc),
    accel_bias(_alloc),
    accel_bias_variance(_alloc),
    mag_bias(_alloc),
    mag_bias_variance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->gyro_device_id = 0ul;
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_bias.begin(), this->gyro_bias.end(), 0.0f);
      this->gyro_bias_limit = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro_bias_variance.begin(), this->gyro_bias_variance.end(), 0.0f);
      this->gyro_bias_valid = false;
      this->gyro_bias_stable = false;
      this->accel_device_id = 0ul;
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_bias.begin(), this->accel_bias.end(), 0.0f);
      this->accel_bias_limit = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel_bias_variance.begin(), this->accel_bias_variance.end(), 0.0f);
      this->accel_bias_valid = false;
      this->accel_bias_stable = false;
      this->mag_device_id = 0ul;
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_bias.begin(), this->mag_bias.end(), 0.0f);
      this->mag_bias_limit = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->mag_bias_variance.begin(), this->mag_bias_variance.end(), 0.0f);
      this->mag_bias_valid = false;
      this->mag_bias_stable = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _gyro_device_id_type =
    uint32_t;
  _gyro_device_id_type gyro_device_id;
  using _gyro_bias_type =
    std::array<float, 3>;
  _gyro_bias_type gyro_bias;
  using _gyro_bias_limit_type =
    float;
  _gyro_bias_limit_type gyro_bias_limit;
  using _gyro_bias_variance_type =
    std::array<float, 3>;
  _gyro_bias_variance_type gyro_bias_variance;
  using _gyro_bias_valid_type =
    bool;
  _gyro_bias_valid_type gyro_bias_valid;
  using _gyro_bias_stable_type =
    bool;
  _gyro_bias_stable_type gyro_bias_stable;
  using _accel_device_id_type =
    uint32_t;
  _accel_device_id_type accel_device_id;
  using _accel_bias_type =
    std::array<float, 3>;
  _accel_bias_type accel_bias;
  using _accel_bias_limit_type =
    float;
  _accel_bias_limit_type accel_bias_limit;
  using _accel_bias_variance_type =
    std::array<float, 3>;
  _accel_bias_variance_type accel_bias_variance;
  using _accel_bias_valid_type =
    bool;
  _accel_bias_valid_type accel_bias_valid;
  using _accel_bias_stable_type =
    bool;
  _accel_bias_stable_type accel_bias_stable;
  using _mag_device_id_type =
    uint32_t;
  _mag_device_id_type mag_device_id;
  using _mag_bias_type =
    std::array<float, 3>;
  _mag_bias_type mag_bias;
  using _mag_bias_limit_type =
    float;
  _mag_bias_limit_type mag_bias_limit;
  using _mag_bias_variance_type =
    std::array<float, 3>;
  _mag_bias_variance_type mag_bias_variance;
  using _mag_bias_valid_type =
    bool;
  _mag_bias_valid_type mag_bias_valid;
  using _mag_bias_stable_type =
    bool;
  _mag_bias_stable_type mag_bias_stable;

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
  Type & set__gyro_device_id(
    const uint32_t & _arg)
  {
    this->gyro_device_id = _arg;
    return *this;
  }
  Type & set__gyro_bias(
    const std::array<float, 3> & _arg)
  {
    this->gyro_bias = _arg;
    return *this;
  }
  Type & set__gyro_bias_limit(
    const float & _arg)
  {
    this->gyro_bias_limit = _arg;
    return *this;
  }
  Type & set__gyro_bias_variance(
    const std::array<float, 3> & _arg)
  {
    this->gyro_bias_variance = _arg;
    return *this;
  }
  Type & set__gyro_bias_valid(
    const bool & _arg)
  {
    this->gyro_bias_valid = _arg;
    return *this;
  }
  Type & set__gyro_bias_stable(
    const bool & _arg)
  {
    this->gyro_bias_stable = _arg;
    return *this;
  }
  Type & set__accel_device_id(
    const uint32_t & _arg)
  {
    this->accel_device_id = _arg;
    return *this;
  }
  Type & set__accel_bias(
    const std::array<float, 3> & _arg)
  {
    this->accel_bias = _arg;
    return *this;
  }
  Type & set__accel_bias_limit(
    const float & _arg)
  {
    this->accel_bias_limit = _arg;
    return *this;
  }
  Type & set__accel_bias_variance(
    const std::array<float, 3> & _arg)
  {
    this->accel_bias_variance = _arg;
    return *this;
  }
  Type & set__accel_bias_valid(
    const bool & _arg)
  {
    this->accel_bias_valid = _arg;
    return *this;
  }
  Type & set__accel_bias_stable(
    const bool & _arg)
  {
    this->accel_bias_stable = _arg;
    return *this;
  }
  Type & set__mag_device_id(
    const uint32_t & _arg)
  {
    this->mag_device_id = _arg;
    return *this;
  }
  Type & set__mag_bias(
    const std::array<float, 3> & _arg)
  {
    this->mag_bias = _arg;
    return *this;
  }
  Type & set__mag_bias_limit(
    const float & _arg)
  {
    this->mag_bias_limit = _arg;
    return *this;
  }
  Type & set__mag_bias_variance(
    const std::array<float, 3> & _arg)
  {
    this->mag_bias_variance = _arg;
    return *this;
  }
  Type & set__mag_bias_valid(
    const bool & _arg)
  {
    this->mag_bias_valid = _arg;
    return *this;
  }
  Type & set__mag_bias_stable(
    const bool & _arg)
  {
    this->mag_bias_stable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorSensorBias
    std::shared_ptr<px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorSensorBias
    std::shared_ptr<px4_msgs::msg::EstimatorSensorBias_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorSensorBias_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->gyro_device_id != other.gyro_device_id) {
      return false;
    }
    if (this->gyro_bias != other.gyro_bias) {
      return false;
    }
    if (this->gyro_bias_limit != other.gyro_bias_limit) {
      return false;
    }
    if (this->gyro_bias_variance != other.gyro_bias_variance) {
      return false;
    }
    if (this->gyro_bias_valid != other.gyro_bias_valid) {
      return false;
    }
    if (this->gyro_bias_stable != other.gyro_bias_stable) {
      return false;
    }
    if (this->accel_device_id != other.accel_device_id) {
      return false;
    }
    if (this->accel_bias != other.accel_bias) {
      return false;
    }
    if (this->accel_bias_limit != other.accel_bias_limit) {
      return false;
    }
    if (this->accel_bias_variance != other.accel_bias_variance) {
      return false;
    }
    if (this->accel_bias_valid != other.accel_bias_valid) {
      return false;
    }
    if (this->accel_bias_stable != other.accel_bias_stable) {
      return false;
    }
    if (this->mag_device_id != other.mag_device_id) {
      return false;
    }
    if (this->mag_bias != other.mag_bias) {
      return false;
    }
    if (this->mag_bias_limit != other.mag_bias_limit) {
      return false;
    }
    if (this->mag_bias_variance != other.mag_bias_variance) {
      return false;
    }
    if (this->mag_bias_valid != other.mag_bias_valid) {
      return false;
    }
    if (this->mag_bias_stable != other.mag_bias_stable) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorSensorBias_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorSensorBias_

// alias to use template instance with default allocator
using EstimatorSensorBias =
  px4_msgs::msg::EstimatorSensorBias_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__STRUCT_HPP_
