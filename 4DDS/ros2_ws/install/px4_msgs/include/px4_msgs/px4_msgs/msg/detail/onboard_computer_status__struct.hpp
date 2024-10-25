// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/OnboardComputerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__OnboardComputerStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__OnboardComputerStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OnboardComputerStatus_
{
  using Type = OnboardComputerStatus_<ContainerAllocator>;

  explicit OnboardComputerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->uptime = 0ul;
      this->type = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->cpu_cores.begin(), this->cpu_cores.end(), 0);
      std::fill<typename std::array<uint8_t, 10>::iterator, uint8_t>(this->cpu_combined.begin(), this->cpu_combined.end(), 0);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->gpu_cores.begin(), this->gpu_cores.end(), 0);
      std::fill<typename std::array<uint8_t, 10>::iterator, uint8_t>(this->gpu_combined.begin(), this->gpu_combined.end(), 0);
      this->temperature_board = 0;
      std::fill<typename std::array<int8_t, 8>::iterator, int8_t>(this->temperature_core.begin(), this->temperature_core.end(), 0);
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->fan_speed.begin(), this->fan_speed.end(), 0);
      this->ram_usage = 0ul;
      this->ram_total = 0ul;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->storage_type.begin(), this->storage_type.end(), 0ul);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->storage_usage.begin(), this->storage_usage.end(), 0ul);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->storage_total.begin(), this->storage_total.end(), 0ul);
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->link_type.begin(), this->link_type.end(), 0ul);
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->link_tx_rate.begin(), this->link_tx_rate.end(), 0ul);
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->link_rx_rate.begin(), this->link_rx_rate.end(), 0ul);
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->link_tx_max.begin(), this->link_tx_max.end(), 0ul);
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->link_rx_max.begin(), this->link_rx_max.end(), 0ul);
    }
  }

  explicit OnboardComputerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cpu_cores(_alloc),
    cpu_combined(_alloc),
    gpu_cores(_alloc),
    gpu_combined(_alloc),
    temperature_core(_alloc),
    fan_speed(_alloc),
    storage_type(_alloc),
    storage_usage(_alloc),
    storage_total(_alloc),
    link_type(_alloc),
    link_tx_rate(_alloc),
    link_rx_rate(_alloc),
    link_tx_max(_alloc),
    link_rx_max(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->uptime = 0ul;
      this->type = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->cpu_cores.begin(), this->cpu_cores.end(), 0);
      std::fill<typename std::array<uint8_t, 10>::iterator, uint8_t>(this->cpu_combined.begin(), this->cpu_combined.end(), 0);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->gpu_cores.begin(), this->gpu_cores.end(), 0);
      std::fill<typename std::array<uint8_t, 10>::iterator, uint8_t>(this->gpu_combined.begin(), this->gpu_combined.end(), 0);
      this->temperature_board = 0;
      std::fill<typename std::array<int8_t, 8>::iterator, int8_t>(this->temperature_core.begin(), this->temperature_core.end(), 0);
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->fan_speed.begin(), this->fan_speed.end(), 0);
      this->ram_usage = 0ul;
      this->ram_total = 0ul;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->storage_type.begin(), this->storage_type.end(), 0ul);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->storage_usage.begin(), this->storage_usage.end(), 0ul);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->storage_total.begin(), this->storage_total.end(), 0ul);
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->link_type.begin(), this->link_type.end(), 0ul);
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->link_tx_rate.begin(), this->link_tx_rate.end(), 0ul);
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->link_rx_rate.begin(), this->link_rx_rate.end(), 0ul);
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->link_tx_max.begin(), this->link_tx_max.end(), 0ul);
      std::fill<typename std::array<uint32_t, 6>::iterator, uint32_t>(this->link_rx_max.begin(), this->link_rx_max.end(), 0ul);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _uptime_type =
    uint32_t;
  _uptime_type uptime;
  using _type_type =
    uint8_t;
  _type_type type;
  using _cpu_cores_type =
    std::array<uint8_t, 8>;
  _cpu_cores_type cpu_cores;
  using _cpu_combined_type =
    std::array<uint8_t, 10>;
  _cpu_combined_type cpu_combined;
  using _gpu_cores_type =
    std::array<uint8_t, 4>;
  _gpu_cores_type gpu_cores;
  using _gpu_combined_type =
    std::array<uint8_t, 10>;
  _gpu_combined_type gpu_combined;
  using _temperature_board_type =
    int8_t;
  _temperature_board_type temperature_board;
  using _temperature_core_type =
    std::array<int8_t, 8>;
  _temperature_core_type temperature_core;
  using _fan_speed_type =
    std::array<int16_t, 4>;
  _fan_speed_type fan_speed;
  using _ram_usage_type =
    uint32_t;
  _ram_usage_type ram_usage;
  using _ram_total_type =
    uint32_t;
  _ram_total_type ram_total;
  using _storage_type_type =
    std::array<uint32_t, 4>;
  _storage_type_type storage_type;
  using _storage_usage_type =
    std::array<uint32_t, 4>;
  _storage_usage_type storage_usage;
  using _storage_total_type =
    std::array<uint32_t, 4>;
  _storage_total_type storage_total;
  using _link_type_type =
    std::array<uint32_t, 6>;
  _link_type_type link_type;
  using _link_tx_rate_type =
    std::array<uint32_t, 6>;
  _link_tx_rate_type link_tx_rate;
  using _link_rx_rate_type =
    std::array<uint32_t, 6>;
  _link_rx_rate_type link_rx_rate;
  using _link_tx_max_type =
    std::array<uint32_t, 6>;
  _link_tx_max_type link_tx_max;
  using _link_rx_max_type =
    std::array<uint32_t, 6>;
  _link_rx_max_type link_rx_max;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__uptime(
    const uint32_t & _arg)
  {
    this->uptime = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__cpu_cores(
    const std::array<uint8_t, 8> & _arg)
  {
    this->cpu_cores = _arg;
    return *this;
  }
  Type & set__cpu_combined(
    const std::array<uint8_t, 10> & _arg)
  {
    this->cpu_combined = _arg;
    return *this;
  }
  Type & set__gpu_cores(
    const std::array<uint8_t, 4> & _arg)
  {
    this->gpu_cores = _arg;
    return *this;
  }
  Type & set__gpu_combined(
    const std::array<uint8_t, 10> & _arg)
  {
    this->gpu_combined = _arg;
    return *this;
  }
  Type & set__temperature_board(
    const int8_t & _arg)
  {
    this->temperature_board = _arg;
    return *this;
  }
  Type & set__temperature_core(
    const std::array<int8_t, 8> & _arg)
  {
    this->temperature_core = _arg;
    return *this;
  }
  Type & set__fan_speed(
    const std::array<int16_t, 4> & _arg)
  {
    this->fan_speed = _arg;
    return *this;
  }
  Type & set__ram_usage(
    const uint32_t & _arg)
  {
    this->ram_usage = _arg;
    return *this;
  }
  Type & set__ram_total(
    const uint32_t & _arg)
  {
    this->ram_total = _arg;
    return *this;
  }
  Type & set__storage_type(
    const std::array<uint32_t, 4> & _arg)
  {
    this->storage_type = _arg;
    return *this;
  }
  Type & set__storage_usage(
    const std::array<uint32_t, 4> & _arg)
  {
    this->storage_usage = _arg;
    return *this;
  }
  Type & set__storage_total(
    const std::array<uint32_t, 4> & _arg)
  {
    this->storage_total = _arg;
    return *this;
  }
  Type & set__link_type(
    const std::array<uint32_t, 6> & _arg)
  {
    this->link_type = _arg;
    return *this;
  }
  Type & set__link_tx_rate(
    const std::array<uint32_t, 6> & _arg)
  {
    this->link_tx_rate = _arg;
    return *this;
  }
  Type & set__link_rx_rate(
    const std::array<uint32_t, 6> & _arg)
  {
    this->link_rx_rate = _arg;
    return *this;
  }
  Type & set__link_tx_max(
    const std::array<uint32_t, 6> & _arg)
  {
    this->link_tx_max = _arg;
    return *this;
  }
  Type & set__link_rx_max(
    const std::array<uint32_t, 6> & _arg)
  {
    this->link_rx_max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__OnboardComputerStatus
    std::shared_ptr<px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__OnboardComputerStatus
    std::shared_ptr<px4_msgs::msg::OnboardComputerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OnboardComputerStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->uptime != other.uptime) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->cpu_cores != other.cpu_cores) {
      return false;
    }
    if (this->cpu_combined != other.cpu_combined) {
      return false;
    }
    if (this->gpu_cores != other.gpu_cores) {
      return false;
    }
    if (this->gpu_combined != other.gpu_combined) {
      return false;
    }
    if (this->temperature_board != other.temperature_board) {
      return false;
    }
    if (this->temperature_core != other.temperature_core) {
      return false;
    }
    if (this->fan_speed != other.fan_speed) {
      return false;
    }
    if (this->ram_usage != other.ram_usage) {
      return false;
    }
    if (this->ram_total != other.ram_total) {
      return false;
    }
    if (this->storage_type != other.storage_type) {
      return false;
    }
    if (this->storage_usage != other.storage_usage) {
      return false;
    }
    if (this->storage_total != other.storage_total) {
      return false;
    }
    if (this->link_type != other.link_type) {
      return false;
    }
    if (this->link_tx_rate != other.link_tx_rate) {
      return false;
    }
    if (this->link_rx_rate != other.link_rx_rate) {
      return false;
    }
    if (this->link_tx_max != other.link_tx_max) {
      return false;
    }
    if (this->link_rx_max != other.link_rx_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const OnboardComputerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OnboardComputerStatus_

// alias to use template instance with default allocator
using OnboardComputerStatus =
  px4_msgs::msg::OnboardComputerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ONBOARD_COMPUTER_STATUS__STRUCT_HPP_
