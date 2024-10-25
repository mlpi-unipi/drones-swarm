// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/DatamanResponse.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DATAMAN_RESPONSE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__DATAMAN_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__DatamanResponse __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__DatamanResponse __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DatamanResponse_
{
  using Type = DatamanResponse_<ContainerAllocator>;

  explicit DatamanResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->client_id = 0;
      this->request_type = 0;
      this->item = 0;
      this->index = 0ul;
      std::fill<typename std::array<uint8_t, 56>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->status = 0;
    }
  }

  explicit DatamanResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->client_id = 0;
      this->request_type = 0;
      this->item = 0;
      this->index = 0ul;
      std::fill<typename std::array<uint8_t, 56>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->status = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _client_id_type =
    uint8_t;
  _client_id_type client_id;
  using _request_type_type =
    uint8_t;
  _request_type_type request_type;
  using _item_type =
    uint8_t;
  _item_type item;
  using _index_type =
    uint32_t;
  _index_type index;
  using _data_type =
    std::array<uint8_t, 56>;
  _data_type data;
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__client_id(
    const uint8_t & _arg)
  {
    this->client_id = _arg;
    return *this;
  }
  Type & set__request_type(
    const uint8_t & _arg)
  {
    this->request_type = _arg;
    return *this;
  }
  Type & set__item(
    const uint8_t & _arg)
  {
    this->item = _arg;
    return *this;
  }
  Type & set__index(
    const uint32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 56> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_SUCCESS =
    0u;
  static constexpr uint8_t STATUS_FAILURE_ID_ERR =
    1u;
  static constexpr uint8_t STATUS_FAILURE_NO_DATA =
    2u;
  static constexpr uint8_t STATUS_FAILURE_READ_FAILED =
    3u;
  static constexpr uint8_t STATUS_FAILURE_WRITE_FAILED =
    4u;
  static constexpr uint8_t STATUS_FAILURE_CLEAR_FAILED =
    5u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::DatamanResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::DatamanResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::DatamanResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::DatamanResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DatamanResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DatamanResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DatamanResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DatamanResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::DatamanResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::DatamanResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__DatamanResponse
    std::shared_ptr<px4_msgs::msg::DatamanResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__DatamanResponse
    std::shared_ptr<px4_msgs::msg::DatamanResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DatamanResponse_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->client_id != other.client_id) {
      return false;
    }
    if (this->request_type != other.request_type) {
      return false;
    }
    if (this->item != other.item) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DatamanResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DatamanResponse_

// alias to use template instance with default allocator
using DatamanResponse =
  px4_msgs::msg::DatamanResponse_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DatamanResponse_<ContainerAllocator>::STATUS_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DatamanResponse_<ContainerAllocator>::STATUS_FAILURE_ID_ERR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DatamanResponse_<ContainerAllocator>::STATUS_FAILURE_NO_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DatamanResponse_<ContainerAllocator>::STATUS_FAILURE_READ_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DatamanResponse_<ContainerAllocator>::STATUS_FAILURE_WRITE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DatamanResponse_<ContainerAllocator>::STATUS_FAILURE_CLEAR_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__DATAMAN_RESPONSE__STRUCT_HPP_
