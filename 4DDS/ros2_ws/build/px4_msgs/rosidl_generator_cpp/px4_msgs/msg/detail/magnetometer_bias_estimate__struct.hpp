// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/MagnetometerBiasEstimate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAGNETOMETER_BIAS_ESTIMATE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__MAGNETOMETER_BIAS_ESTIMATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__MagnetometerBiasEstimate __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__MagnetometerBiasEstimate __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MagnetometerBiasEstimate_
{
  using Type = MagnetometerBiasEstimate_<ContainerAllocator>;

  explicit MagnetometerBiasEstimate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 4>::iterator, float>(this->bias_x.begin(), this->bias_x.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->bias_y.begin(), this->bias_y.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->bias_z.begin(), this->bias_z.end(), 0.0f);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->valid.begin(), this->valid.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->stable.begin(), this->stable.end(), false);
    }
  }

  explicit MagnetometerBiasEstimate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bias_x(_alloc),
    bias_y(_alloc),
    bias_z(_alloc),
    valid(_alloc),
    stable(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 4>::iterator, float>(this->bias_x.begin(), this->bias_x.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->bias_y.begin(), this->bias_y.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->bias_z.begin(), this->bias_z.end(), 0.0f);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->valid.begin(), this->valid.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->stable.begin(), this->stable.end(), false);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _bias_x_type =
    std::array<float, 4>;
  _bias_x_type bias_x;
  using _bias_y_type =
    std::array<float, 4>;
  _bias_y_type bias_y;
  using _bias_z_type =
    std::array<float, 4>;
  _bias_z_type bias_z;
  using _valid_type =
    std::array<bool, 4>;
  _valid_type valid;
  using _stable_type =
    std::array<bool, 4>;
  _stable_type stable;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__bias_x(
    const std::array<float, 4> & _arg)
  {
    this->bias_x = _arg;
    return *this;
  }
  Type & set__bias_y(
    const std::array<float, 4> & _arg)
  {
    this->bias_y = _arg;
    return *this;
  }
  Type & set__bias_z(
    const std::array<float, 4> & _arg)
  {
    this->bias_z = _arg;
    return *this;
  }
  Type & set__valid(
    const std::array<bool, 4> & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__stable(
    const std::array<bool, 4> & _arg)
  {
    this->stable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__MagnetometerBiasEstimate
    std::shared_ptr<px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__MagnetometerBiasEstimate
    std::shared_ptr<px4_msgs::msg::MagnetometerBiasEstimate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MagnetometerBiasEstimate_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->bias_x != other.bias_x) {
      return false;
    }
    if (this->bias_y != other.bias_y) {
      return false;
    }
    if (this->bias_z != other.bias_z) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->stable != other.stable) {
      return false;
    }
    return true;
  }
  bool operator!=(const MagnetometerBiasEstimate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MagnetometerBiasEstimate_

// alias to use template instance with default allocator
using MagnetometerBiasEstimate =
  px4_msgs::msg::MagnetometerBiasEstimate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MAGNETOMETER_BIAS_ESTIMATE__STRUCT_HPP_
