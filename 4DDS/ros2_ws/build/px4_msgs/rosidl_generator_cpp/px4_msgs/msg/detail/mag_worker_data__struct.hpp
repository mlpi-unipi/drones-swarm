// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/MagWorkerData.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAG_WORKER_DATA__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__MAG_WORKER_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__MagWorkerData __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__MagWorkerData __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MagWorkerData_
{
  using Type = MagWorkerData_<ContainerAllocator>;

  explicit MagWorkerData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->done_count = 0ul;
      this->calibration_points_perside = 0ul;
      this->calibration_interval_perside_us = 0ull;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->calibration_counter_total.begin(), this->calibration_counter_total.end(), 0ul);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->side_data_collected.begin(), this->side_data_collected.end(), false);
      std::fill<typename std::array<float, 4>::iterator, float>(this->x.begin(), this->x.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->y.begin(), this->y.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->z.begin(), this->z.end(), 0.0f);
    }
  }

  explicit MagWorkerData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : calibration_counter_total(_alloc),
    side_data_collected(_alloc),
    x(_alloc),
    y(_alloc),
    z(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->done_count = 0ul;
      this->calibration_points_perside = 0ul;
      this->calibration_interval_perside_us = 0ull;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->calibration_counter_total.begin(), this->calibration_counter_total.end(), 0ul);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->side_data_collected.begin(), this->side_data_collected.end(), false);
      std::fill<typename std::array<float, 4>::iterator, float>(this->x.begin(), this->x.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->y.begin(), this->y.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->z.begin(), this->z.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _done_count_type =
    uint32_t;
  _done_count_type done_count;
  using _calibration_points_perside_type =
    uint32_t;
  _calibration_points_perside_type calibration_points_perside;
  using _calibration_interval_perside_us_type =
    uint64_t;
  _calibration_interval_perside_us_type calibration_interval_perside_us;
  using _calibration_counter_total_type =
    std::array<uint32_t, 4>;
  _calibration_counter_total_type calibration_counter_total;
  using _side_data_collected_type =
    std::array<bool, 4>;
  _side_data_collected_type side_data_collected;
  using _x_type =
    std::array<float, 4>;
  _x_type x;
  using _y_type =
    std::array<float, 4>;
  _y_type y;
  using _z_type =
    std::array<float, 4>;
  _z_type z;

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
  Type & set__done_count(
    const uint32_t & _arg)
  {
    this->done_count = _arg;
    return *this;
  }
  Type & set__calibration_points_perside(
    const uint32_t & _arg)
  {
    this->calibration_points_perside = _arg;
    return *this;
  }
  Type & set__calibration_interval_perside_us(
    const uint64_t & _arg)
  {
    this->calibration_interval_perside_us = _arg;
    return *this;
  }
  Type & set__calibration_counter_total(
    const std::array<uint32_t, 4> & _arg)
  {
    this->calibration_counter_total = _arg;
    return *this;
  }
  Type & set__side_data_collected(
    const std::array<bool, 4> & _arg)
  {
    this->side_data_collected = _arg;
    return *this;
  }
  Type & set__x(
    const std::array<float, 4> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::array<float, 4> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const std::array<float, 4> & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MAX_MAGS =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::MagWorkerData_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::MagWorkerData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::MagWorkerData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::MagWorkerData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::MagWorkerData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::MagWorkerData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::MagWorkerData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::MagWorkerData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::MagWorkerData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::MagWorkerData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__MagWorkerData
    std::shared_ptr<px4_msgs::msg::MagWorkerData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__MagWorkerData
    std::shared_ptr<px4_msgs::msg::MagWorkerData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MagWorkerData_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->done_count != other.done_count) {
      return false;
    }
    if (this->calibration_points_perside != other.calibration_points_perside) {
      return false;
    }
    if (this->calibration_interval_perside_us != other.calibration_interval_perside_us) {
      return false;
    }
    if (this->calibration_counter_total != other.calibration_counter_total) {
      return false;
    }
    if (this->side_data_collected != other.side_data_collected) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const MagWorkerData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MagWorkerData_

// alias to use template instance with default allocator
using MagWorkerData =
  px4_msgs::msg::MagWorkerData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MagWorkerData_<ContainerAllocator>::MAX_MAGS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MAG_WORKER_DATA__STRUCT_HPP_
