// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/Cpuload.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CPULOAD__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__CPULOAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__Cpuload __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__Cpuload __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Cpuload_
{
  using Type = Cpuload_<ContainerAllocator>;

  explicit Cpuload_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->load = 0.0f;
      this->ram_usage = 0.0f;
    }
  }

  explicit Cpuload_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->load = 0.0f;
      this->ram_usage = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _load_type =
    float;
  _load_type load;
  using _ram_usage_type =
    float;
  _ram_usage_type ram_usage;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__load(
    const float & _arg)
  {
    this->load = _arg;
    return *this;
  }
  Type & set__ram_usage(
    const float & _arg)
  {
    this->ram_usage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::Cpuload_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::Cpuload_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::Cpuload_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::Cpuload_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Cpuload_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Cpuload_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::Cpuload_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::Cpuload_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::Cpuload_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::Cpuload_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__Cpuload
    std::shared_ptr<px4_msgs::msg::Cpuload_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__Cpuload
    std::shared_ptr<px4_msgs::msg::Cpuload_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cpuload_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->load != other.load) {
      return false;
    }
    if (this->ram_usage != other.ram_usage) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cpuload_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cpuload_

// alias to use template instance with default allocator
using Cpuload =
  px4_msgs::msg::Cpuload_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CPULOAD__STRUCT_HPP_
