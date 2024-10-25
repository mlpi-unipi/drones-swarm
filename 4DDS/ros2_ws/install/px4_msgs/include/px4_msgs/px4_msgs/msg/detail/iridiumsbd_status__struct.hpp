// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/IridiumsbdStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__IridiumsbdStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__IridiumsbdStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IridiumsbdStatus_
{
  using Type = IridiumsbdStatus_<ContainerAllocator>;

  explicit IridiumsbdStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->last_heartbeat = 0ull;
      this->tx_buf_write_index = 0;
      this->rx_buf_read_index = 0;
      this->rx_buf_end_index = 0;
      this->failed_sbd_sessions = 0;
      this->successful_sbd_sessions = 0;
      this->num_tx_buf_reset = 0;
      this->signal_quality = 0;
      this->state = 0;
      this->ring_pending = false;
      this->tx_buf_write_pending = false;
      this->tx_session_pending = false;
      this->rx_read_pending = false;
      this->rx_session_pending = false;
    }
  }

  explicit IridiumsbdStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->last_heartbeat = 0ull;
      this->tx_buf_write_index = 0;
      this->rx_buf_read_index = 0;
      this->rx_buf_end_index = 0;
      this->failed_sbd_sessions = 0;
      this->successful_sbd_sessions = 0;
      this->num_tx_buf_reset = 0;
      this->signal_quality = 0;
      this->state = 0;
      this->ring_pending = false;
      this->tx_buf_write_pending = false;
      this->tx_session_pending = false;
      this->rx_read_pending = false;
      this->rx_session_pending = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _last_heartbeat_type =
    uint64_t;
  _last_heartbeat_type last_heartbeat;
  using _tx_buf_write_index_type =
    uint16_t;
  _tx_buf_write_index_type tx_buf_write_index;
  using _rx_buf_read_index_type =
    uint16_t;
  _rx_buf_read_index_type rx_buf_read_index;
  using _rx_buf_end_index_type =
    uint16_t;
  _rx_buf_end_index_type rx_buf_end_index;
  using _failed_sbd_sessions_type =
    uint16_t;
  _failed_sbd_sessions_type failed_sbd_sessions;
  using _successful_sbd_sessions_type =
    uint16_t;
  _successful_sbd_sessions_type successful_sbd_sessions;
  using _num_tx_buf_reset_type =
    uint16_t;
  _num_tx_buf_reset_type num_tx_buf_reset;
  using _signal_quality_type =
    uint8_t;
  _signal_quality_type signal_quality;
  using _state_type =
    uint8_t;
  _state_type state;
  using _ring_pending_type =
    bool;
  _ring_pending_type ring_pending;
  using _tx_buf_write_pending_type =
    bool;
  _tx_buf_write_pending_type tx_buf_write_pending;
  using _tx_session_pending_type =
    bool;
  _tx_session_pending_type tx_session_pending;
  using _rx_read_pending_type =
    bool;
  _rx_read_pending_type rx_read_pending;
  using _rx_session_pending_type =
    bool;
  _rx_session_pending_type rx_session_pending;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__last_heartbeat(
    const uint64_t & _arg)
  {
    this->last_heartbeat = _arg;
    return *this;
  }
  Type & set__tx_buf_write_index(
    const uint16_t & _arg)
  {
    this->tx_buf_write_index = _arg;
    return *this;
  }
  Type & set__rx_buf_read_index(
    const uint16_t & _arg)
  {
    this->rx_buf_read_index = _arg;
    return *this;
  }
  Type & set__rx_buf_end_index(
    const uint16_t & _arg)
  {
    this->rx_buf_end_index = _arg;
    return *this;
  }
  Type & set__failed_sbd_sessions(
    const uint16_t & _arg)
  {
    this->failed_sbd_sessions = _arg;
    return *this;
  }
  Type & set__successful_sbd_sessions(
    const uint16_t & _arg)
  {
    this->successful_sbd_sessions = _arg;
    return *this;
  }
  Type & set__num_tx_buf_reset(
    const uint16_t & _arg)
  {
    this->num_tx_buf_reset = _arg;
    return *this;
  }
  Type & set__signal_quality(
    const uint8_t & _arg)
  {
    this->signal_quality = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__ring_pending(
    const bool & _arg)
  {
    this->ring_pending = _arg;
    return *this;
  }
  Type & set__tx_buf_write_pending(
    const bool & _arg)
  {
    this->tx_buf_write_pending = _arg;
    return *this;
  }
  Type & set__tx_session_pending(
    const bool & _arg)
  {
    this->tx_session_pending = _arg;
    return *this;
  }
  Type & set__rx_read_pending(
    const bool & _arg)
  {
    this->rx_read_pending = _arg;
    return *this;
  }
  Type & set__rx_session_pending(
    const bool & _arg)
  {
    this->rx_session_pending = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__IridiumsbdStatus
    std::shared_ptr<px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__IridiumsbdStatus
    std::shared_ptr<px4_msgs::msg::IridiumsbdStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IridiumsbdStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->last_heartbeat != other.last_heartbeat) {
      return false;
    }
    if (this->tx_buf_write_index != other.tx_buf_write_index) {
      return false;
    }
    if (this->rx_buf_read_index != other.rx_buf_read_index) {
      return false;
    }
    if (this->rx_buf_end_index != other.rx_buf_end_index) {
      return false;
    }
    if (this->failed_sbd_sessions != other.failed_sbd_sessions) {
      return false;
    }
    if (this->successful_sbd_sessions != other.successful_sbd_sessions) {
      return false;
    }
    if (this->num_tx_buf_reset != other.num_tx_buf_reset) {
      return false;
    }
    if (this->signal_quality != other.signal_quality) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->ring_pending != other.ring_pending) {
      return false;
    }
    if (this->tx_buf_write_pending != other.tx_buf_write_pending) {
      return false;
    }
    if (this->tx_session_pending != other.tx_session_pending) {
      return false;
    }
    if (this->rx_read_pending != other.rx_read_pending) {
      return false;
    }
    if (this->rx_session_pending != other.rx_session_pending) {
      return false;
    }
    return true;
  }
  bool operator!=(const IridiumsbdStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IridiumsbdStatus_

// alias to use template instance with default allocator
using IridiumsbdStatus =
  px4_msgs::msg::IridiumsbdStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__STRUCT_HPP_
