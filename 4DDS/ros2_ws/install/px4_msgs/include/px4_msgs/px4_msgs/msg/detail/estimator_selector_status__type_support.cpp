// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorSelectorStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/estimator_selector_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EstimatorSelectorStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::EstimatorSelectorStatus(_init);
}

void EstimatorSelectorStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::EstimatorSelectorStatus *>(message_memory);
  typed_message->~EstimatorSelectorStatus();
}

size_t size_function__EstimatorSelectorStatus__combined_test_ratio(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__EstimatorSelectorStatus__combined_test_ratio(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSelectorStatus__combined_test_ratio(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorSelectorStatus__combined_test_ratio(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorSelectorStatus__combined_test_ratio(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorSelectorStatus__combined_test_ratio(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorSelectorStatus__combined_test_ratio(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__EstimatorSelectorStatus__relative_test_ratio(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__EstimatorSelectorStatus__relative_test_ratio(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSelectorStatus__relative_test_ratio(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorSelectorStatus__relative_test_ratio(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorSelectorStatus__relative_test_ratio(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorSelectorStatus__relative_test_ratio(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorSelectorStatus__relative_test_ratio(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__EstimatorSelectorStatus__healthy(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__EstimatorSelectorStatus__healthy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSelectorStatus__healthy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorSelectorStatus__healthy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__EstimatorSelectorStatus__healthy(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__EstimatorSelectorStatus__healthy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__EstimatorSelectorStatus__healthy(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__EstimatorSelectorStatus__accumulated_gyro_error(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__EstimatorSelectorStatus__accumulated_gyro_error(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSelectorStatus__accumulated_gyro_error(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorSelectorStatus__accumulated_gyro_error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorSelectorStatus__accumulated_gyro_error(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorSelectorStatus__accumulated_gyro_error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorSelectorStatus__accumulated_gyro_error(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__EstimatorSelectorStatus__accumulated_accel_error(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__EstimatorSelectorStatus__accumulated_accel_error(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSelectorStatus__accumulated_accel_error(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorSelectorStatus__accumulated_accel_error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorSelectorStatus__accumulated_accel_error(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorSelectorStatus__accumulated_accel_error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorSelectorStatus__accumulated_accel_error(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EstimatorSelectorStatus_message_member_array[16] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "primary_instance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, primary_instance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "instances_available",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, instances_available),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "instance_changed_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, instance_changed_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_instance_change",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, last_instance_change),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_device_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, accel_device_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "baro_device_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, baro_device_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_device_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, gyro_device_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mag_device_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, mag_device_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "combined_test_ratio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, combined_test_ratio),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSelectorStatus__combined_test_ratio,  // size() function pointer
    get_const_function__EstimatorSelectorStatus__combined_test_ratio,  // get_const(index) function pointer
    get_function__EstimatorSelectorStatus__combined_test_ratio,  // get(index) function pointer
    fetch_function__EstimatorSelectorStatus__combined_test_ratio,  // fetch(index, &value) function pointer
    assign_function__EstimatorSelectorStatus__combined_test_ratio,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "relative_test_ratio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, relative_test_ratio),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSelectorStatus__relative_test_ratio,  // size() function pointer
    get_const_function__EstimatorSelectorStatus__relative_test_ratio,  // get_const(index) function pointer
    get_function__EstimatorSelectorStatus__relative_test_ratio,  // get(index) function pointer
    fetch_function__EstimatorSelectorStatus__relative_test_ratio,  // fetch(index, &value) function pointer
    assign_function__EstimatorSelectorStatus__relative_test_ratio,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "healthy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, healthy),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSelectorStatus__healthy,  // size() function pointer
    get_const_function__EstimatorSelectorStatus__healthy,  // get_const(index) function pointer
    get_function__EstimatorSelectorStatus__healthy,  // get(index) function pointer
    fetch_function__EstimatorSelectorStatus__healthy,  // fetch(index, &value) function pointer
    assign_function__EstimatorSelectorStatus__healthy,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accumulated_gyro_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, accumulated_gyro_error),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSelectorStatus__accumulated_gyro_error,  // size() function pointer
    get_const_function__EstimatorSelectorStatus__accumulated_gyro_error,  // get_const(index) function pointer
    get_function__EstimatorSelectorStatus__accumulated_gyro_error,  // get(index) function pointer
    fetch_function__EstimatorSelectorStatus__accumulated_gyro_error,  // fetch(index, &value) function pointer
    assign_function__EstimatorSelectorStatus__accumulated_gyro_error,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accumulated_accel_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, accumulated_accel_error),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSelectorStatus__accumulated_accel_error,  // size() function pointer
    get_const_function__EstimatorSelectorStatus__accumulated_accel_error,  // get_const(index) function pointer
    get_function__EstimatorSelectorStatus__accumulated_accel_error,  // get(index) function pointer
    fetch_function__EstimatorSelectorStatus__accumulated_accel_error,  // fetch(index, &value) function pointer
    assign_function__EstimatorSelectorStatus__accumulated_accel_error,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_fault_detected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, gyro_fault_detected),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_fault_detected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSelectorStatus, accel_fault_detected),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EstimatorSelectorStatus_message_members = {
  "px4_msgs::msg",  // message namespace
  "EstimatorSelectorStatus",  // message name
  16,  // number of fields
  sizeof(px4_msgs::msg::EstimatorSelectorStatus),
  EstimatorSelectorStatus_message_member_array,  // message members
  EstimatorSelectorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  EstimatorSelectorStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EstimatorSelectorStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EstimatorSelectorStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::EstimatorSelectorStatus>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorSelectorStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, EstimatorSelectorStatus)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorSelectorStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
