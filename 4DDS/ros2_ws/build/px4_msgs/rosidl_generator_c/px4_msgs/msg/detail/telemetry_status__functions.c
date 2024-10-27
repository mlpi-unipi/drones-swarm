// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/TelemetryStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/telemetry_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__TelemetryStatus__init(px4_msgs__msg__TelemetryStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // type
  // mode
  // flow_control
  // forwarding
  // mavlink_v2
  // ftp
  // streams
  // data_rate
  // rate_multiplier
  // tx_rate_avg
  // tx_error_rate_avg
  // tx_message_count
  // tx_buffer_overruns
  // rx_rate_avg
  // rx_message_count
  // rx_message_lost_count
  // rx_buffer_overruns
  // rx_parse_errors
  // rx_packet_drop_count
  // rx_message_lost_rate
  // heartbeat_type_antenna_tracker
  // heartbeat_type_gcs
  // heartbeat_type_onboard_controller
  // heartbeat_type_gimbal
  // heartbeat_type_adsb
  // heartbeat_type_camera
  // heartbeat_type_parachute
  // heartbeat_type_open_drone_id
  // heartbeat_component_telemetry_radio
  // heartbeat_component_log
  // heartbeat_component_osd
  // heartbeat_component_obstacle_avoidance
  // heartbeat_component_vio
  // heartbeat_component_pairing_manager
  // heartbeat_component_udp_bridge
  // heartbeat_component_uart_bridge
  // avoidance_system_healthy
  // open_drone_id_system_healthy
  // parachute_system_healthy
  return true;
}

void
px4_msgs__msg__TelemetryStatus__fini(px4_msgs__msg__TelemetryStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // type
  // mode
  // flow_control
  // forwarding
  // mavlink_v2
  // ftp
  // streams
  // data_rate
  // rate_multiplier
  // tx_rate_avg
  // tx_error_rate_avg
  // tx_message_count
  // tx_buffer_overruns
  // rx_rate_avg
  // rx_message_count
  // rx_message_lost_count
  // rx_buffer_overruns
  // rx_parse_errors
  // rx_packet_drop_count
  // rx_message_lost_rate
  // heartbeat_type_antenna_tracker
  // heartbeat_type_gcs
  // heartbeat_type_onboard_controller
  // heartbeat_type_gimbal
  // heartbeat_type_adsb
  // heartbeat_type_camera
  // heartbeat_type_parachute
  // heartbeat_type_open_drone_id
  // heartbeat_component_telemetry_radio
  // heartbeat_component_log
  // heartbeat_component_osd
  // heartbeat_component_obstacle_avoidance
  // heartbeat_component_vio
  // heartbeat_component_pairing_manager
  // heartbeat_component_udp_bridge
  // heartbeat_component_uart_bridge
  // avoidance_system_healthy
  // open_drone_id_system_healthy
  // parachute_system_healthy
}

bool
px4_msgs__msg__TelemetryStatus__are_equal(const px4_msgs__msg__TelemetryStatus * lhs, const px4_msgs__msg__TelemetryStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // flow_control
  if (lhs->flow_control != rhs->flow_control) {
    return false;
  }
  // forwarding
  if (lhs->forwarding != rhs->forwarding) {
    return false;
  }
  // mavlink_v2
  if (lhs->mavlink_v2 != rhs->mavlink_v2) {
    return false;
  }
  // ftp
  if (lhs->ftp != rhs->ftp) {
    return false;
  }
  // streams
  if (lhs->streams != rhs->streams) {
    return false;
  }
  // data_rate
  if (lhs->data_rate != rhs->data_rate) {
    return false;
  }
  // rate_multiplier
  if (lhs->rate_multiplier != rhs->rate_multiplier) {
    return false;
  }
  // tx_rate_avg
  if (lhs->tx_rate_avg != rhs->tx_rate_avg) {
    return false;
  }
  // tx_error_rate_avg
  if (lhs->tx_error_rate_avg != rhs->tx_error_rate_avg) {
    return false;
  }
  // tx_message_count
  if (lhs->tx_message_count != rhs->tx_message_count) {
    return false;
  }
  // tx_buffer_overruns
  if (lhs->tx_buffer_overruns != rhs->tx_buffer_overruns) {
    return false;
  }
  // rx_rate_avg
  if (lhs->rx_rate_avg != rhs->rx_rate_avg) {
    return false;
  }
  // rx_message_count
  if (lhs->rx_message_count != rhs->rx_message_count) {
    return false;
  }
  // rx_message_lost_count
  if (lhs->rx_message_lost_count != rhs->rx_message_lost_count) {
    return false;
  }
  // rx_buffer_overruns
  if (lhs->rx_buffer_overruns != rhs->rx_buffer_overruns) {
    return false;
  }
  // rx_parse_errors
  if (lhs->rx_parse_errors != rhs->rx_parse_errors) {
    return false;
  }
  // rx_packet_drop_count
  if (lhs->rx_packet_drop_count != rhs->rx_packet_drop_count) {
    return false;
  }
  // rx_message_lost_rate
  if (lhs->rx_message_lost_rate != rhs->rx_message_lost_rate) {
    return false;
  }
  // heartbeat_type_antenna_tracker
  if (lhs->heartbeat_type_antenna_tracker != rhs->heartbeat_type_antenna_tracker) {
    return false;
  }
  // heartbeat_type_gcs
  if (lhs->heartbeat_type_gcs != rhs->heartbeat_type_gcs) {
    return false;
  }
  // heartbeat_type_onboard_controller
  if (lhs->heartbeat_type_onboard_controller != rhs->heartbeat_type_onboard_controller) {
    return false;
  }
  // heartbeat_type_gimbal
  if (lhs->heartbeat_type_gimbal != rhs->heartbeat_type_gimbal) {
    return false;
  }
  // heartbeat_type_adsb
  if (lhs->heartbeat_type_adsb != rhs->heartbeat_type_adsb) {
    return false;
  }
  // heartbeat_type_camera
  if (lhs->heartbeat_type_camera != rhs->heartbeat_type_camera) {
    return false;
  }
  // heartbeat_type_parachute
  if (lhs->heartbeat_type_parachute != rhs->heartbeat_type_parachute) {
    return false;
  }
  // heartbeat_type_open_drone_id
  if (lhs->heartbeat_type_open_drone_id != rhs->heartbeat_type_open_drone_id) {
    return false;
  }
  // heartbeat_component_telemetry_radio
  if (lhs->heartbeat_component_telemetry_radio != rhs->heartbeat_component_telemetry_radio) {
    return false;
  }
  // heartbeat_component_log
  if (lhs->heartbeat_component_log != rhs->heartbeat_component_log) {
    return false;
  }
  // heartbeat_component_osd
  if (lhs->heartbeat_component_osd != rhs->heartbeat_component_osd) {
    return false;
  }
  // heartbeat_component_obstacle_avoidance
  if (lhs->heartbeat_component_obstacle_avoidance != rhs->heartbeat_component_obstacle_avoidance) {
    return false;
  }
  // heartbeat_component_vio
  if (lhs->heartbeat_component_vio != rhs->heartbeat_component_vio) {
    return false;
  }
  // heartbeat_component_pairing_manager
  if (lhs->heartbeat_component_pairing_manager != rhs->heartbeat_component_pairing_manager) {
    return false;
  }
  // heartbeat_component_udp_bridge
  if (lhs->heartbeat_component_udp_bridge != rhs->heartbeat_component_udp_bridge) {
    return false;
  }
  // heartbeat_component_uart_bridge
  if (lhs->heartbeat_component_uart_bridge != rhs->heartbeat_component_uart_bridge) {
    return false;
  }
  // avoidance_system_healthy
  if (lhs->avoidance_system_healthy != rhs->avoidance_system_healthy) {
    return false;
  }
  // open_drone_id_system_healthy
  if (lhs->open_drone_id_system_healthy != rhs->open_drone_id_system_healthy) {
    return false;
  }
  // parachute_system_healthy
  if (lhs->parachute_system_healthy != rhs->parachute_system_healthy) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__TelemetryStatus__copy(
  const px4_msgs__msg__TelemetryStatus * input,
  px4_msgs__msg__TelemetryStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // type
  output->type = input->type;
  // mode
  output->mode = input->mode;
  // flow_control
  output->flow_control = input->flow_control;
  // forwarding
  output->forwarding = input->forwarding;
  // mavlink_v2
  output->mavlink_v2 = input->mavlink_v2;
  // ftp
  output->ftp = input->ftp;
  // streams
  output->streams = input->streams;
  // data_rate
  output->data_rate = input->data_rate;
  // rate_multiplier
  output->rate_multiplier = input->rate_multiplier;
  // tx_rate_avg
  output->tx_rate_avg = input->tx_rate_avg;
  // tx_error_rate_avg
  output->tx_error_rate_avg = input->tx_error_rate_avg;
  // tx_message_count
  output->tx_message_count = input->tx_message_count;
  // tx_buffer_overruns
  output->tx_buffer_overruns = input->tx_buffer_overruns;
  // rx_rate_avg
  output->rx_rate_avg = input->rx_rate_avg;
  // rx_message_count
  output->rx_message_count = input->rx_message_count;
  // rx_message_lost_count
  output->rx_message_lost_count = input->rx_message_lost_count;
  // rx_buffer_overruns
  output->rx_buffer_overruns = input->rx_buffer_overruns;
  // rx_parse_errors
  output->rx_parse_errors = input->rx_parse_errors;
  // rx_packet_drop_count
  output->rx_packet_drop_count = input->rx_packet_drop_count;
  // rx_message_lost_rate
  output->rx_message_lost_rate = input->rx_message_lost_rate;
  // heartbeat_type_antenna_tracker
  output->heartbeat_type_antenna_tracker = input->heartbeat_type_antenna_tracker;
  // heartbeat_type_gcs
  output->heartbeat_type_gcs = input->heartbeat_type_gcs;
  // heartbeat_type_onboard_controller
  output->heartbeat_type_onboard_controller = input->heartbeat_type_onboard_controller;
  // heartbeat_type_gimbal
  output->heartbeat_type_gimbal = input->heartbeat_type_gimbal;
  // heartbeat_type_adsb
  output->heartbeat_type_adsb = input->heartbeat_type_adsb;
  // heartbeat_type_camera
  output->heartbeat_type_camera = input->heartbeat_type_camera;
  // heartbeat_type_parachute
  output->heartbeat_type_parachute = input->heartbeat_type_parachute;
  // heartbeat_type_open_drone_id
  output->heartbeat_type_open_drone_id = input->heartbeat_type_open_drone_id;
  // heartbeat_component_telemetry_radio
  output->heartbeat_component_telemetry_radio = input->heartbeat_component_telemetry_radio;
  // heartbeat_component_log
  output->heartbeat_component_log = input->heartbeat_component_log;
  // heartbeat_component_osd
  output->heartbeat_component_osd = input->heartbeat_component_osd;
  // heartbeat_component_obstacle_avoidance
  output->heartbeat_component_obstacle_avoidance = input->heartbeat_component_obstacle_avoidance;
  // heartbeat_component_vio
  output->heartbeat_component_vio = input->heartbeat_component_vio;
  // heartbeat_component_pairing_manager
  output->heartbeat_component_pairing_manager = input->heartbeat_component_pairing_manager;
  // heartbeat_component_udp_bridge
  output->heartbeat_component_udp_bridge = input->heartbeat_component_udp_bridge;
  // heartbeat_component_uart_bridge
  output->heartbeat_component_uart_bridge = input->heartbeat_component_uart_bridge;
  // avoidance_system_healthy
  output->avoidance_system_healthy = input->avoidance_system_healthy;
  // open_drone_id_system_healthy
  output->open_drone_id_system_healthy = input->open_drone_id_system_healthy;
  // parachute_system_healthy
  output->parachute_system_healthy = input->parachute_system_healthy;
  return true;
}

px4_msgs__msg__TelemetryStatus *
px4_msgs__msg__TelemetryStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TelemetryStatus * msg = (px4_msgs__msg__TelemetryStatus *)allocator.allocate(sizeof(px4_msgs__msg__TelemetryStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__TelemetryStatus));
  bool success = px4_msgs__msg__TelemetryStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__TelemetryStatus__destroy(px4_msgs__msg__TelemetryStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__TelemetryStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__TelemetryStatus__Sequence__init(px4_msgs__msg__TelemetryStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TelemetryStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__TelemetryStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__TelemetryStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__TelemetryStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__TelemetryStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__TelemetryStatus__Sequence__fini(px4_msgs__msg__TelemetryStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__TelemetryStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__TelemetryStatus__Sequence *
px4_msgs__msg__TelemetryStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TelemetryStatus__Sequence * array = (px4_msgs__msg__TelemetryStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__TelemetryStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__TelemetryStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__TelemetryStatus__Sequence__destroy(px4_msgs__msg__TelemetryStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__TelemetryStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__TelemetryStatus__Sequence__are_equal(const px4_msgs__msg__TelemetryStatus__Sequence * lhs, const px4_msgs__msg__TelemetryStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__TelemetryStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__TelemetryStatus__Sequence__copy(
  const px4_msgs__msg__TelemetryStatus__Sequence * input,
  px4_msgs__msg__TelemetryStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__TelemetryStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__TelemetryStatus * data =
      (px4_msgs__msg__TelemetryStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__TelemetryStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__TelemetryStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__TelemetryStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
