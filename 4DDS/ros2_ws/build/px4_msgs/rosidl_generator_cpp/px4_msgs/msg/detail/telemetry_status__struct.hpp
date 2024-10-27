// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TelemetryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__TelemetryStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TelemetryStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TelemetryStatus_
{
  using Type = TelemetryStatus_<ContainerAllocator>;

  explicit TelemetryStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->mode = 0;
      this->flow_control = false;
      this->forwarding = false;
      this->mavlink_v2 = false;
      this->ftp = false;
      this->streams = 0;
      this->data_rate = 0.0f;
      this->rate_multiplier = 0.0f;
      this->tx_rate_avg = 0.0f;
      this->tx_error_rate_avg = 0.0f;
      this->tx_message_count = 0ul;
      this->tx_buffer_overruns = 0ul;
      this->rx_rate_avg = 0.0f;
      this->rx_message_count = 0ul;
      this->rx_message_lost_count = 0ul;
      this->rx_buffer_overruns = 0ul;
      this->rx_parse_errors = 0ul;
      this->rx_packet_drop_count = 0ul;
      this->rx_message_lost_rate = 0.0f;
      this->heartbeat_type_antenna_tracker = false;
      this->heartbeat_type_gcs = false;
      this->heartbeat_type_onboard_controller = false;
      this->heartbeat_type_gimbal = false;
      this->heartbeat_type_adsb = false;
      this->heartbeat_type_camera = false;
      this->heartbeat_type_parachute = false;
      this->heartbeat_type_open_drone_id = false;
      this->heartbeat_component_telemetry_radio = false;
      this->heartbeat_component_log = false;
      this->heartbeat_component_osd = false;
      this->heartbeat_component_obstacle_avoidance = false;
      this->heartbeat_component_vio = false;
      this->heartbeat_component_pairing_manager = false;
      this->heartbeat_component_udp_bridge = false;
      this->heartbeat_component_uart_bridge = false;
      this->avoidance_system_healthy = false;
      this->open_drone_id_system_healthy = false;
      this->parachute_system_healthy = false;
    }
  }

  explicit TelemetryStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->type = 0;
      this->mode = 0;
      this->flow_control = false;
      this->forwarding = false;
      this->mavlink_v2 = false;
      this->ftp = false;
      this->streams = 0;
      this->data_rate = 0.0f;
      this->rate_multiplier = 0.0f;
      this->tx_rate_avg = 0.0f;
      this->tx_error_rate_avg = 0.0f;
      this->tx_message_count = 0ul;
      this->tx_buffer_overruns = 0ul;
      this->rx_rate_avg = 0.0f;
      this->rx_message_count = 0ul;
      this->rx_message_lost_count = 0ul;
      this->rx_buffer_overruns = 0ul;
      this->rx_parse_errors = 0ul;
      this->rx_packet_drop_count = 0ul;
      this->rx_message_lost_rate = 0.0f;
      this->heartbeat_type_antenna_tracker = false;
      this->heartbeat_type_gcs = false;
      this->heartbeat_type_onboard_controller = false;
      this->heartbeat_type_gimbal = false;
      this->heartbeat_type_adsb = false;
      this->heartbeat_type_camera = false;
      this->heartbeat_type_parachute = false;
      this->heartbeat_type_open_drone_id = false;
      this->heartbeat_component_telemetry_radio = false;
      this->heartbeat_component_log = false;
      this->heartbeat_component_osd = false;
      this->heartbeat_component_obstacle_avoidance = false;
      this->heartbeat_component_vio = false;
      this->heartbeat_component_pairing_manager = false;
      this->heartbeat_component_udp_bridge = false;
      this->heartbeat_component_uart_bridge = false;
      this->avoidance_system_healthy = false;
      this->open_drone_id_system_healthy = false;
      this->parachute_system_healthy = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _type_type =
    uint8_t;
  _type_type type;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _flow_control_type =
    bool;
  _flow_control_type flow_control;
  using _forwarding_type =
    bool;
  _forwarding_type forwarding;
  using _mavlink_v2_type =
    bool;
  _mavlink_v2_type mavlink_v2;
  using _ftp_type =
    bool;
  _ftp_type ftp;
  using _streams_type =
    uint8_t;
  _streams_type streams;
  using _data_rate_type =
    float;
  _data_rate_type data_rate;
  using _rate_multiplier_type =
    float;
  _rate_multiplier_type rate_multiplier;
  using _tx_rate_avg_type =
    float;
  _tx_rate_avg_type tx_rate_avg;
  using _tx_error_rate_avg_type =
    float;
  _tx_error_rate_avg_type tx_error_rate_avg;
  using _tx_message_count_type =
    uint32_t;
  _tx_message_count_type tx_message_count;
  using _tx_buffer_overruns_type =
    uint32_t;
  _tx_buffer_overruns_type tx_buffer_overruns;
  using _rx_rate_avg_type =
    float;
  _rx_rate_avg_type rx_rate_avg;
  using _rx_message_count_type =
    uint32_t;
  _rx_message_count_type rx_message_count;
  using _rx_message_lost_count_type =
    uint32_t;
  _rx_message_lost_count_type rx_message_lost_count;
  using _rx_buffer_overruns_type =
    uint32_t;
  _rx_buffer_overruns_type rx_buffer_overruns;
  using _rx_parse_errors_type =
    uint32_t;
  _rx_parse_errors_type rx_parse_errors;
  using _rx_packet_drop_count_type =
    uint32_t;
  _rx_packet_drop_count_type rx_packet_drop_count;
  using _rx_message_lost_rate_type =
    float;
  _rx_message_lost_rate_type rx_message_lost_rate;
  using _heartbeat_type_antenna_tracker_type =
    bool;
  _heartbeat_type_antenna_tracker_type heartbeat_type_antenna_tracker;
  using _heartbeat_type_gcs_type =
    bool;
  _heartbeat_type_gcs_type heartbeat_type_gcs;
  using _heartbeat_type_onboard_controller_type =
    bool;
  _heartbeat_type_onboard_controller_type heartbeat_type_onboard_controller;
  using _heartbeat_type_gimbal_type =
    bool;
  _heartbeat_type_gimbal_type heartbeat_type_gimbal;
  using _heartbeat_type_adsb_type =
    bool;
  _heartbeat_type_adsb_type heartbeat_type_adsb;
  using _heartbeat_type_camera_type =
    bool;
  _heartbeat_type_camera_type heartbeat_type_camera;
  using _heartbeat_type_parachute_type =
    bool;
  _heartbeat_type_parachute_type heartbeat_type_parachute;
  using _heartbeat_type_open_drone_id_type =
    bool;
  _heartbeat_type_open_drone_id_type heartbeat_type_open_drone_id;
  using _heartbeat_component_telemetry_radio_type =
    bool;
  _heartbeat_component_telemetry_radio_type heartbeat_component_telemetry_radio;
  using _heartbeat_component_log_type =
    bool;
  _heartbeat_component_log_type heartbeat_component_log;
  using _heartbeat_component_osd_type =
    bool;
  _heartbeat_component_osd_type heartbeat_component_osd;
  using _heartbeat_component_obstacle_avoidance_type =
    bool;
  _heartbeat_component_obstacle_avoidance_type heartbeat_component_obstacle_avoidance;
  using _heartbeat_component_vio_type =
    bool;
  _heartbeat_component_vio_type heartbeat_component_vio;
  using _heartbeat_component_pairing_manager_type =
    bool;
  _heartbeat_component_pairing_manager_type heartbeat_component_pairing_manager;
  using _heartbeat_component_udp_bridge_type =
    bool;
  _heartbeat_component_udp_bridge_type heartbeat_component_udp_bridge;
  using _heartbeat_component_uart_bridge_type =
    bool;
  _heartbeat_component_uart_bridge_type heartbeat_component_uart_bridge;
  using _avoidance_system_healthy_type =
    bool;
  _avoidance_system_healthy_type avoidance_system_healthy;
  using _open_drone_id_system_healthy_type =
    bool;
  _open_drone_id_system_healthy_type open_drone_id_system_healthy;
  using _parachute_system_healthy_type =
    bool;
  _parachute_system_healthy_type parachute_system_healthy;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__flow_control(
    const bool & _arg)
  {
    this->flow_control = _arg;
    return *this;
  }
  Type & set__forwarding(
    const bool & _arg)
  {
    this->forwarding = _arg;
    return *this;
  }
  Type & set__mavlink_v2(
    const bool & _arg)
  {
    this->mavlink_v2 = _arg;
    return *this;
  }
  Type & set__ftp(
    const bool & _arg)
  {
    this->ftp = _arg;
    return *this;
  }
  Type & set__streams(
    const uint8_t & _arg)
  {
    this->streams = _arg;
    return *this;
  }
  Type & set__data_rate(
    const float & _arg)
  {
    this->data_rate = _arg;
    return *this;
  }
  Type & set__rate_multiplier(
    const float & _arg)
  {
    this->rate_multiplier = _arg;
    return *this;
  }
  Type & set__tx_rate_avg(
    const float & _arg)
  {
    this->tx_rate_avg = _arg;
    return *this;
  }
  Type & set__tx_error_rate_avg(
    const float & _arg)
  {
    this->tx_error_rate_avg = _arg;
    return *this;
  }
  Type & set__tx_message_count(
    const uint32_t & _arg)
  {
    this->tx_message_count = _arg;
    return *this;
  }
  Type & set__tx_buffer_overruns(
    const uint32_t & _arg)
  {
    this->tx_buffer_overruns = _arg;
    return *this;
  }
  Type & set__rx_rate_avg(
    const float & _arg)
  {
    this->rx_rate_avg = _arg;
    return *this;
  }
  Type & set__rx_message_count(
    const uint32_t & _arg)
  {
    this->rx_message_count = _arg;
    return *this;
  }
  Type & set__rx_message_lost_count(
    const uint32_t & _arg)
  {
    this->rx_message_lost_count = _arg;
    return *this;
  }
  Type & set__rx_buffer_overruns(
    const uint32_t & _arg)
  {
    this->rx_buffer_overruns = _arg;
    return *this;
  }
  Type & set__rx_parse_errors(
    const uint32_t & _arg)
  {
    this->rx_parse_errors = _arg;
    return *this;
  }
  Type & set__rx_packet_drop_count(
    const uint32_t & _arg)
  {
    this->rx_packet_drop_count = _arg;
    return *this;
  }
  Type & set__rx_message_lost_rate(
    const float & _arg)
  {
    this->rx_message_lost_rate = _arg;
    return *this;
  }
  Type & set__heartbeat_type_antenna_tracker(
    const bool & _arg)
  {
    this->heartbeat_type_antenna_tracker = _arg;
    return *this;
  }
  Type & set__heartbeat_type_gcs(
    const bool & _arg)
  {
    this->heartbeat_type_gcs = _arg;
    return *this;
  }
  Type & set__heartbeat_type_onboard_controller(
    const bool & _arg)
  {
    this->heartbeat_type_onboard_controller = _arg;
    return *this;
  }
  Type & set__heartbeat_type_gimbal(
    const bool & _arg)
  {
    this->heartbeat_type_gimbal = _arg;
    return *this;
  }
  Type & set__heartbeat_type_adsb(
    const bool & _arg)
  {
    this->heartbeat_type_adsb = _arg;
    return *this;
  }
  Type & set__heartbeat_type_camera(
    const bool & _arg)
  {
    this->heartbeat_type_camera = _arg;
    return *this;
  }
  Type & set__heartbeat_type_parachute(
    const bool & _arg)
  {
    this->heartbeat_type_parachute = _arg;
    return *this;
  }
  Type & set__heartbeat_type_open_drone_id(
    const bool & _arg)
  {
    this->heartbeat_type_open_drone_id = _arg;
    return *this;
  }
  Type & set__heartbeat_component_telemetry_radio(
    const bool & _arg)
  {
    this->heartbeat_component_telemetry_radio = _arg;
    return *this;
  }
  Type & set__heartbeat_component_log(
    const bool & _arg)
  {
    this->heartbeat_component_log = _arg;
    return *this;
  }
  Type & set__heartbeat_component_osd(
    const bool & _arg)
  {
    this->heartbeat_component_osd = _arg;
    return *this;
  }
  Type & set__heartbeat_component_obstacle_avoidance(
    const bool & _arg)
  {
    this->heartbeat_component_obstacle_avoidance = _arg;
    return *this;
  }
  Type & set__heartbeat_component_vio(
    const bool & _arg)
  {
    this->heartbeat_component_vio = _arg;
    return *this;
  }
  Type & set__heartbeat_component_pairing_manager(
    const bool & _arg)
  {
    this->heartbeat_component_pairing_manager = _arg;
    return *this;
  }
  Type & set__heartbeat_component_udp_bridge(
    const bool & _arg)
  {
    this->heartbeat_component_udp_bridge = _arg;
    return *this;
  }
  Type & set__heartbeat_component_uart_bridge(
    const bool & _arg)
  {
    this->heartbeat_component_uart_bridge = _arg;
    return *this;
  }
  Type & set__avoidance_system_healthy(
    const bool & _arg)
  {
    this->avoidance_system_healthy = _arg;
    return *this;
  }
  Type & set__open_drone_id_system_healthy(
    const bool & _arg)
  {
    this->open_drone_id_system_healthy = _arg;
    return *this;
  }
  Type & set__parachute_system_healthy(
    const bool & _arg)
  {
    this->parachute_system_healthy = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LINK_TYPE_GENERIC =
    0u;
  static constexpr uint8_t LINK_TYPE_UBIQUITY_BULLET =
    1u;
  static constexpr uint8_t LINK_TYPE_WIRE =
    2u;
  static constexpr uint8_t LINK_TYPE_USB =
    3u;
  static constexpr uint8_t LINK_TYPE_IRIDIUM =
    4u;
  static constexpr uint64_t HEARTBEAT_TIMEOUT_US =
    2500000u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::TelemetryStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TelemetryStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TelemetryStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TelemetryStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TelemetryStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TelemetryStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TelemetryStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TelemetryStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TelemetryStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TelemetryStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TelemetryStatus
    std::shared_ptr<px4_msgs::msg::TelemetryStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TelemetryStatus
    std::shared_ptr<px4_msgs::msg::TelemetryStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TelemetryStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->flow_control != other.flow_control) {
      return false;
    }
    if (this->forwarding != other.forwarding) {
      return false;
    }
    if (this->mavlink_v2 != other.mavlink_v2) {
      return false;
    }
    if (this->ftp != other.ftp) {
      return false;
    }
    if (this->streams != other.streams) {
      return false;
    }
    if (this->data_rate != other.data_rate) {
      return false;
    }
    if (this->rate_multiplier != other.rate_multiplier) {
      return false;
    }
    if (this->tx_rate_avg != other.tx_rate_avg) {
      return false;
    }
    if (this->tx_error_rate_avg != other.tx_error_rate_avg) {
      return false;
    }
    if (this->tx_message_count != other.tx_message_count) {
      return false;
    }
    if (this->tx_buffer_overruns != other.tx_buffer_overruns) {
      return false;
    }
    if (this->rx_rate_avg != other.rx_rate_avg) {
      return false;
    }
    if (this->rx_message_count != other.rx_message_count) {
      return false;
    }
    if (this->rx_message_lost_count != other.rx_message_lost_count) {
      return false;
    }
    if (this->rx_buffer_overruns != other.rx_buffer_overruns) {
      return false;
    }
    if (this->rx_parse_errors != other.rx_parse_errors) {
      return false;
    }
    if (this->rx_packet_drop_count != other.rx_packet_drop_count) {
      return false;
    }
    if (this->rx_message_lost_rate != other.rx_message_lost_rate) {
      return false;
    }
    if (this->heartbeat_type_antenna_tracker != other.heartbeat_type_antenna_tracker) {
      return false;
    }
    if (this->heartbeat_type_gcs != other.heartbeat_type_gcs) {
      return false;
    }
    if (this->heartbeat_type_onboard_controller != other.heartbeat_type_onboard_controller) {
      return false;
    }
    if (this->heartbeat_type_gimbal != other.heartbeat_type_gimbal) {
      return false;
    }
    if (this->heartbeat_type_adsb != other.heartbeat_type_adsb) {
      return false;
    }
    if (this->heartbeat_type_camera != other.heartbeat_type_camera) {
      return false;
    }
    if (this->heartbeat_type_parachute != other.heartbeat_type_parachute) {
      return false;
    }
    if (this->heartbeat_type_open_drone_id != other.heartbeat_type_open_drone_id) {
      return false;
    }
    if (this->heartbeat_component_telemetry_radio != other.heartbeat_component_telemetry_radio) {
      return false;
    }
    if (this->heartbeat_component_log != other.heartbeat_component_log) {
      return false;
    }
    if (this->heartbeat_component_osd != other.heartbeat_component_osd) {
      return false;
    }
    if (this->heartbeat_component_obstacle_avoidance != other.heartbeat_component_obstacle_avoidance) {
      return false;
    }
    if (this->heartbeat_component_vio != other.heartbeat_component_vio) {
      return false;
    }
    if (this->heartbeat_component_pairing_manager != other.heartbeat_component_pairing_manager) {
      return false;
    }
    if (this->heartbeat_component_udp_bridge != other.heartbeat_component_udp_bridge) {
      return false;
    }
    if (this->heartbeat_component_uart_bridge != other.heartbeat_component_uart_bridge) {
      return false;
    }
    if (this->avoidance_system_healthy != other.avoidance_system_healthy) {
      return false;
    }
    if (this->open_drone_id_system_healthy != other.open_drone_id_system_healthy) {
      return false;
    }
    if (this->parachute_system_healthy != other.parachute_system_healthy) {
      return false;
    }
    return true;
  }
  bool operator!=(const TelemetryStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TelemetryStatus_

// alias to use template instance with default allocator
using TelemetryStatus =
  px4_msgs::msg::TelemetryStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TelemetryStatus_<ContainerAllocator>::LINK_TYPE_GENERIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TelemetryStatus_<ContainerAllocator>::LINK_TYPE_UBIQUITY_BULLET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TelemetryStatus_<ContainerAllocator>::LINK_TYPE_WIRE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TelemetryStatus_<ContainerAllocator>::LINK_TYPE_USB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TelemetryStatus_<ContainerAllocator>::LINK_TYPE_IRIDIUM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint64_t TelemetryStatus_<ContainerAllocator>::HEARTBEAT_TIMEOUT_US;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__STRUCT_HPP_
