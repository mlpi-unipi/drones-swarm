// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleStatus__init(px4_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // armed_time
  // takeoff_time
  // arming_state
  // latest_arming_reason
  // latest_disarming_reason
  // nav_state_timestamp
  // nav_state_user_intention
  // nav_state
  // executor_in_charge
  // valid_nav_states_mask
  // can_set_nav_states_mask
  // failure_detector_status
  // hil_state
  // vehicle_type
  // failsafe
  // failsafe_and_user_took_over
  // failsafe_defer_state
  // gcs_connection_lost
  // gcs_connection_lost_counter
  // high_latency_data_link_lost
  // is_vtol
  // is_vtol_tailsitter
  // in_transition_mode
  // in_transition_to_fw
  // system_type
  // system_id
  // component_id
  // safety_button_available
  // safety_off
  // power_input_valid
  // usb_connected
  // open_drone_id_system_present
  // open_drone_id_system_healthy
  // parachute_system_present
  // parachute_system_healthy
  // avoidance_system_required
  // avoidance_system_valid
  // rc_calibration_in_progress
  // calibration_enabled
  // pre_flight_checks_pass
  return true;
}

void
px4_msgs__msg__VehicleStatus__fini(px4_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // armed_time
  // takeoff_time
  // arming_state
  // latest_arming_reason
  // latest_disarming_reason
  // nav_state_timestamp
  // nav_state_user_intention
  // nav_state
  // executor_in_charge
  // valid_nav_states_mask
  // can_set_nav_states_mask
  // failure_detector_status
  // hil_state
  // vehicle_type
  // failsafe
  // failsafe_and_user_took_over
  // failsafe_defer_state
  // gcs_connection_lost
  // gcs_connection_lost_counter
  // high_latency_data_link_lost
  // is_vtol
  // is_vtol_tailsitter
  // in_transition_mode
  // in_transition_to_fw
  // system_type
  // system_id
  // component_id
  // safety_button_available
  // safety_off
  // power_input_valid
  // usb_connected
  // open_drone_id_system_present
  // open_drone_id_system_healthy
  // parachute_system_present
  // parachute_system_healthy
  // avoidance_system_required
  // avoidance_system_valid
  // rc_calibration_in_progress
  // calibration_enabled
  // pre_flight_checks_pass
}

bool
px4_msgs__msg__VehicleStatus__are_equal(const px4_msgs__msg__VehicleStatus * lhs, const px4_msgs__msg__VehicleStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // armed_time
  if (lhs->armed_time != rhs->armed_time) {
    return false;
  }
  // takeoff_time
  if (lhs->takeoff_time != rhs->takeoff_time) {
    return false;
  }
  // arming_state
  if (lhs->arming_state != rhs->arming_state) {
    return false;
  }
  // latest_arming_reason
  if (lhs->latest_arming_reason != rhs->latest_arming_reason) {
    return false;
  }
  // latest_disarming_reason
  if (lhs->latest_disarming_reason != rhs->latest_disarming_reason) {
    return false;
  }
  // nav_state_timestamp
  if (lhs->nav_state_timestamp != rhs->nav_state_timestamp) {
    return false;
  }
  // nav_state_user_intention
  if (lhs->nav_state_user_intention != rhs->nav_state_user_intention) {
    return false;
  }
  // nav_state
  if (lhs->nav_state != rhs->nav_state) {
    return false;
  }
  // executor_in_charge
  if (lhs->executor_in_charge != rhs->executor_in_charge) {
    return false;
  }
  // valid_nav_states_mask
  if (lhs->valid_nav_states_mask != rhs->valid_nav_states_mask) {
    return false;
  }
  // can_set_nav_states_mask
  if (lhs->can_set_nav_states_mask != rhs->can_set_nav_states_mask) {
    return false;
  }
  // failure_detector_status
  if (lhs->failure_detector_status != rhs->failure_detector_status) {
    return false;
  }
  // hil_state
  if (lhs->hil_state != rhs->hil_state) {
    return false;
  }
  // vehicle_type
  if (lhs->vehicle_type != rhs->vehicle_type) {
    return false;
  }
  // failsafe
  if (lhs->failsafe != rhs->failsafe) {
    return false;
  }
  // failsafe_and_user_took_over
  if (lhs->failsafe_and_user_took_over != rhs->failsafe_and_user_took_over) {
    return false;
  }
  // failsafe_defer_state
  if (lhs->failsafe_defer_state != rhs->failsafe_defer_state) {
    return false;
  }
  // gcs_connection_lost
  if (lhs->gcs_connection_lost != rhs->gcs_connection_lost) {
    return false;
  }
  // gcs_connection_lost_counter
  if (lhs->gcs_connection_lost_counter != rhs->gcs_connection_lost_counter) {
    return false;
  }
  // high_latency_data_link_lost
  if (lhs->high_latency_data_link_lost != rhs->high_latency_data_link_lost) {
    return false;
  }
  // is_vtol
  if (lhs->is_vtol != rhs->is_vtol) {
    return false;
  }
  // is_vtol_tailsitter
  if (lhs->is_vtol_tailsitter != rhs->is_vtol_tailsitter) {
    return false;
  }
  // in_transition_mode
  if (lhs->in_transition_mode != rhs->in_transition_mode) {
    return false;
  }
  // in_transition_to_fw
  if (lhs->in_transition_to_fw != rhs->in_transition_to_fw) {
    return false;
  }
  // system_type
  if (lhs->system_type != rhs->system_type) {
    return false;
  }
  // system_id
  if (lhs->system_id != rhs->system_id) {
    return false;
  }
  // component_id
  if (lhs->component_id != rhs->component_id) {
    return false;
  }
  // safety_button_available
  if (lhs->safety_button_available != rhs->safety_button_available) {
    return false;
  }
  // safety_off
  if (lhs->safety_off != rhs->safety_off) {
    return false;
  }
  // power_input_valid
  if (lhs->power_input_valid != rhs->power_input_valid) {
    return false;
  }
  // usb_connected
  if (lhs->usb_connected != rhs->usb_connected) {
    return false;
  }
  // open_drone_id_system_present
  if (lhs->open_drone_id_system_present != rhs->open_drone_id_system_present) {
    return false;
  }
  // open_drone_id_system_healthy
  if (lhs->open_drone_id_system_healthy != rhs->open_drone_id_system_healthy) {
    return false;
  }
  // parachute_system_present
  if (lhs->parachute_system_present != rhs->parachute_system_present) {
    return false;
  }
  // parachute_system_healthy
  if (lhs->parachute_system_healthy != rhs->parachute_system_healthy) {
    return false;
  }
  // avoidance_system_required
  if (lhs->avoidance_system_required != rhs->avoidance_system_required) {
    return false;
  }
  // avoidance_system_valid
  if (lhs->avoidance_system_valid != rhs->avoidance_system_valid) {
    return false;
  }
  // rc_calibration_in_progress
  if (lhs->rc_calibration_in_progress != rhs->rc_calibration_in_progress) {
    return false;
  }
  // calibration_enabled
  if (lhs->calibration_enabled != rhs->calibration_enabled) {
    return false;
  }
  // pre_flight_checks_pass
  if (lhs->pre_flight_checks_pass != rhs->pre_flight_checks_pass) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleStatus__copy(
  const px4_msgs__msg__VehicleStatus * input,
  px4_msgs__msg__VehicleStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // armed_time
  output->armed_time = input->armed_time;
  // takeoff_time
  output->takeoff_time = input->takeoff_time;
  // arming_state
  output->arming_state = input->arming_state;
  // latest_arming_reason
  output->latest_arming_reason = input->latest_arming_reason;
  // latest_disarming_reason
  output->latest_disarming_reason = input->latest_disarming_reason;
  // nav_state_timestamp
  output->nav_state_timestamp = input->nav_state_timestamp;
  // nav_state_user_intention
  output->nav_state_user_intention = input->nav_state_user_intention;
  // nav_state
  output->nav_state = input->nav_state;
  // executor_in_charge
  output->executor_in_charge = input->executor_in_charge;
  // valid_nav_states_mask
  output->valid_nav_states_mask = input->valid_nav_states_mask;
  // can_set_nav_states_mask
  output->can_set_nav_states_mask = input->can_set_nav_states_mask;
  // failure_detector_status
  output->failure_detector_status = input->failure_detector_status;
  // hil_state
  output->hil_state = input->hil_state;
  // vehicle_type
  output->vehicle_type = input->vehicle_type;
  // failsafe
  output->failsafe = input->failsafe;
  // failsafe_and_user_took_over
  output->failsafe_and_user_took_over = input->failsafe_and_user_took_over;
  // failsafe_defer_state
  output->failsafe_defer_state = input->failsafe_defer_state;
  // gcs_connection_lost
  output->gcs_connection_lost = input->gcs_connection_lost;
  // gcs_connection_lost_counter
  output->gcs_connection_lost_counter = input->gcs_connection_lost_counter;
  // high_latency_data_link_lost
  output->high_latency_data_link_lost = input->high_latency_data_link_lost;
  // is_vtol
  output->is_vtol = input->is_vtol;
  // is_vtol_tailsitter
  output->is_vtol_tailsitter = input->is_vtol_tailsitter;
  // in_transition_mode
  output->in_transition_mode = input->in_transition_mode;
  // in_transition_to_fw
  output->in_transition_to_fw = input->in_transition_to_fw;
  // system_type
  output->system_type = input->system_type;
  // system_id
  output->system_id = input->system_id;
  // component_id
  output->component_id = input->component_id;
  // safety_button_available
  output->safety_button_available = input->safety_button_available;
  // safety_off
  output->safety_off = input->safety_off;
  // power_input_valid
  output->power_input_valid = input->power_input_valid;
  // usb_connected
  output->usb_connected = input->usb_connected;
  // open_drone_id_system_present
  output->open_drone_id_system_present = input->open_drone_id_system_present;
  // open_drone_id_system_healthy
  output->open_drone_id_system_healthy = input->open_drone_id_system_healthy;
  // parachute_system_present
  output->parachute_system_present = input->parachute_system_present;
  // parachute_system_healthy
  output->parachute_system_healthy = input->parachute_system_healthy;
  // avoidance_system_required
  output->avoidance_system_required = input->avoidance_system_required;
  // avoidance_system_valid
  output->avoidance_system_valid = input->avoidance_system_valid;
  // rc_calibration_in_progress
  output->rc_calibration_in_progress = input->rc_calibration_in_progress;
  // calibration_enabled
  output->calibration_enabled = input->calibration_enabled;
  // pre_flight_checks_pass
  output->pre_flight_checks_pass = input->pre_flight_checks_pass;
  return true;
}

px4_msgs__msg__VehicleStatus *
px4_msgs__msg__VehicleStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatus * msg = (px4_msgs__msg__VehicleStatus *)allocator.allocate(sizeof(px4_msgs__msg__VehicleStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleStatus));
  bool success = px4_msgs__msg__VehicleStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleStatus__destroy(px4_msgs__msg__VehicleStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleStatus__Sequence__init(px4_msgs__msg__VehicleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleStatus__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleStatus__Sequence__fini(px4_msgs__msg__VehicleStatus__Sequence * array)
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
      px4_msgs__msg__VehicleStatus__fini(&array->data[i]);
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

px4_msgs__msg__VehicleStatus__Sequence *
px4_msgs__msg__VehicleStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatus__Sequence * array = (px4_msgs__msg__VehicleStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleStatus__Sequence__destroy(px4_msgs__msg__VehicleStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleStatus__Sequence__are_equal(const px4_msgs__msg__VehicleStatus__Sequence * lhs, const px4_msgs__msg__VehicleStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleStatus__Sequence__copy(
  const px4_msgs__msg__VehicleStatus__Sequence * input,
  px4_msgs__msg__VehicleStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleStatus * data =
      (px4_msgs__msg__VehicleStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
