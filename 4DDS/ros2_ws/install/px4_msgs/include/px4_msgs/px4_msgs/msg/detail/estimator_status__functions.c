// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EstimatorStatus__init(px4_msgs__msg__EstimatorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // output_tracking_error
  // gps_check_fail_flags
  // control_mode_flags
  // filter_fault_flags
  // pos_horiz_accuracy
  // pos_vert_accuracy
  // innovation_check_flags
  // mag_test_ratio
  // vel_test_ratio
  // pos_test_ratio
  // hgt_test_ratio
  // tas_test_ratio
  // hagl_test_ratio
  // beta_test_ratio
  // solution_status_flags
  // reset_count_vel_ne
  // reset_count_vel_d
  // reset_count_pos_ne
  // reset_count_pod_d
  // reset_count_quat
  // time_slip
  // pre_flt_fail_innov_heading
  // pre_flt_fail_innov_vel_horiz
  // pre_flt_fail_innov_vel_vert
  // pre_flt_fail_innov_height
  // pre_flt_fail_mag_field_disturbed
  // accel_device_id
  // gyro_device_id
  // baro_device_id
  // mag_device_id
  // health_flags
  // timeout_flags
  // mag_inclination_deg
  // mag_inclination_ref_deg
  // mag_strength_gs
  // mag_strength_ref_gs
  return true;
}

void
px4_msgs__msg__EstimatorStatus__fini(px4_msgs__msg__EstimatorStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // output_tracking_error
  // gps_check_fail_flags
  // control_mode_flags
  // filter_fault_flags
  // pos_horiz_accuracy
  // pos_vert_accuracy
  // innovation_check_flags
  // mag_test_ratio
  // vel_test_ratio
  // pos_test_ratio
  // hgt_test_ratio
  // tas_test_ratio
  // hagl_test_ratio
  // beta_test_ratio
  // solution_status_flags
  // reset_count_vel_ne
  // reset_count_vel_d
  // reset_count_pos_ne
  // reset_count_pod_d
  // reset_count_quat
  // time_slip
  // pre_flt_fail_innov_heading
  // pre_flt_fail_innov_vel_horiz
  // pre_flt_fail_innov_vel_vert
  // pre_flt_fail_innov_height
  // pre_flt_fail_mag_field_disturbed
  // accel_device_id
  // gyro_device_id
  // baro_device_id
  // mag_device_id
  // health_flags
  // timeout_flags
  // mag_inclination_deg
  // mag_inclination_ref_deg
  // mag_strength_gs
  // mag_strength_ref_gs
}

bool
px4_msgs__msg__EstimatorStatus__are_equal(const px4_msgs__msg__EstimatorStatus * lhs, const px4_msgs__msg__EstimatorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_sample
  if (lhs->timestamp_sample != rhs->timestamp_sample) {
    return false;
  }
  // output_tracking_error
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->output_tracking_error[i] != rhs->output_tracking_error[i]) {
      return false;
    }
  }
  // gps_check_fail_flags
  if (lhs->gps_check_fail_flags != rhs->gps_check_fail_flags) {
    return false;
  }
  // control_mode_flags
  if (lhs->control_mode_flags != rhs->control_mode_flags) {
    return false;
  }
  // filter_fault_flags
  if (lhs->filter_fault_flags != rhs->filter_fault_flags) {
    return false;
  }
  // pos_horiz_accuracy
  if (lhs->pos_horiz_accuracy != rhs->pos_horiz_accuracy) {
    return false;
  }
  // pos_vert_accuracy
  if (lhs->pos_vert_accuracy != rhs->pos_vert_accuracy) {
    return false;
  }
  // innovation_check_flags
  if (lhs->innovation_check_flags != rhs->innovation_check_flags) {
    return false;
  }
  // mag_test_ratio
  if (lhs->mag_test_ratio != rhs->mag_test_ratio) {
    return false;
  }
  // vel_test_ratio
  if (lhs->vel_test_ratio != rhs->vel_test_ratio) {
    return false;
  }
  // pos_test_ratio
  if (lhs->pos_test_ratio != rhs->pos_test_ratio) {
    return false;
  }
  // hgt_test_ratio
  if (lhs->hgt_test_ratio != rhs->hgt_test_ratio) {
    return false;
  }
  // tas_test_ratio
  if (lhs->tas_test_ratio != rhs->tas_test_ratio) {
    return false;
  }
  // hagl_test_ratio
  if (lhs->hagl_test_ratio != rhs->hagl_test_ratio) {
    return false;
  }
  // beta_test_ratio
  if (lhs->beta_test_ratio != rhs->beta_test_ratio) {
    return false;
  }
  // solution_status_flags
  if (lhs->solution_status_flags != rhs->solution_status_flags) {
    return false;
  }
  // reset_count_vel_ne
  if (lhs->reset_count_vel_ne != rhs->reset_count_vel_ne) {
    return false;
  }
  // reset_count_vel_d
  if (lhs->reset_count_vel_d != rhs->reset_count_vel_d) {
    return false;
  }
  // reset_count_pos_ne
  if (lhs->reset_count_pos_ne != rhs->reset_count_pos_ne) {
    return false;
  }
  // reset_count_pod_d
  if (lhs->reset_count_pod_d != rhs->reset_count_pod_d) {
    return false;
  }
  // reset_count_quat
  if (lhs->reset_count_quat != rhs->reset_count_quat) {
    return false;
  }
  // time_slip
  if (lhs->time_slip != rhs->time_slip) {
    return false;
  }
  // pre_flt_fail_innov_heading
  if (lhs->pre_flt_fail_innov_heading != rhs->pre_flt_fail_innov_heading) {
    return false;
  }
  // pre_flt_fail_innov_vel_horiz
  if (lhs->pre_flt_fail_innov_vel_horiz != rhs->pre_flt_fail_innov_vel_horiz) {
    return false;
  }
  // pre_flt_fail_innov_vel_vert
  if (lhs->pre_flt_fail_innov_vel_vert != rhs->pre_flt_fail_innov_vel_vert) {
    return false;
  }
  // pre_flt_fail_innov_height
  if (lhs->pre_flt_fail_innov_height != rhs->pre_flt_fail_innov_height) {
    return false;
  }
  // pre_flt_fail_mag_field_disturbed
  if (lhs->pre_flt_fail_mag_field_disturbed != rhs->pre_flt_fail_mag_field_disturbed) {
    return false;
  }
  // accel_device_id
  if (lhs->accel_device_id != rhs->accel_device_id) {
    return false;
  }
  // gyro_device_id
  if (lhs->gyro_device_id != rhs->gyro_device_id) {
    return false;
  }
  // baro_device_id
  if (lhs->baro_device_id != rhs->baro_device_id) {
    return false;
  }
  // mag_device_id
  if (lhs->mag_device_id != rhs->mag_device_id) {
    return false;
  }
  // health_flags
  if (lhs->health_flags != rhs->health_flags) {
    return false;
  }
  // timeout_flags
  if (lhs->timeout_flags != rhs->timeout_flags) {
    return false;
  }
  // mag_inclination_deg
  if (lhs->mag_inclination_deg != rhs->mag_inclination_deg) {
    return false;
  }
  // mag_inclination_ref_deg
  if (lhs->mag_inclination_ref_deg != rhs->mag_inclination_ref_deg) {
    return false;
  }
  // mag_strength_gs
  if (lhs->mag_strength_gs != rhs->mag_strength_gs) {
    return false;
  }
  // mag_strength_ref_gs
  if (lhs->mag_strength_ref_gs != rhs->mag_strength_ref_gs) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__EstimatorStatus__copy(
  const px4_msgs__msg__EstimatorStatus * input,
  px4_msgs__msg__EstimatorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // output_tracking_error
  for (size_t i = 0; i < 3; ++i) {
    output->output_tracking_error[i] = input->output_tracking_error[i];
  }
  // gps_check_fail_flags
  output->gps_check_fail_flags = input->gps_check_fail_flags;
  // control_mode_flags
  output->control_mode_flags = input->control_mode_flags;
  // filter_fault_flags
  output->filter_fault_flags = input->filter_fault_flags;
  // pos_horiz_accuracy
  output->pos_horiz_accuracy = input->pos_horiz_accuracy;
  // pos_vert_accuracy
  output->pos_vert_accuracy = input->pos_vert_accuracy;
  // innovation_check_flags
  output->innovation_check_flags = input->innovation_check_flags;
  // mag_test_ratio
  output->mag_test_ratio = input->mag_test_ratio;
  // vel_test_ratio
  output->vel_test_ratio = input->vel_test_ratio;
  // pos_test_ratio
  output->pos_test_ratio = input->pos_test_ratio;
  // hgt_test_ratio
  output->hgt_test_ratio = input->hgt_test_ratio;
  // tas_test_ratio
  output->tas_test_ratio = input->tas_test_ratio;
  // hagl_test_ratio
  output->hagl_test_ratio = input->hagl_test_ratio;
  // beta_test_ratio
  output->beta_test_ratio = input->beta_test_ratio;
  // solution_status_flags
  output->solution_status_flags = input->solution_status_flags;
  // reset_count_vel_ne
  output->reset_count_vel_ne = input->reset_count_vel_ne;
  // reset_count_vel_d
  output->reset_count_vel_d = input->reset_count_vel_d;
  // reset_count_pos_ne
  output->reset_count_pos_ne = input->reset_count_pos_ne;
  // reset_count_pod_d
  output->reset_count_pod_d = input->reset_count_pod_d;
  // reset_count_quat
  output->reset_count_quat = input->reset_count_quat;
  // time_slip
  output->time_slip = input->time_slip;
  // pre_flt_fail_innov_heading
  output->pre_flt_fail_innov_heading = input->pre_flt_fail_innov_heading;
  // pre_flt_fail_innov_vel_horiz
  output->pre_flt_fail_innov_vel_horiz = input->pre_flt_fail_innov_vel_horiz;
  // pre_flt_fail_innov_vel_vert
  output->pre_flt_fail_innov_vel_vert = input->pre_flt_fail_innov_vel_vert;
  // pre_flt_fail_innov_height
  output->pre_flt_fail_innov_height = input->pre_flt_fail_innov_height;
  // pre_flt_fail_mag_field_disturbed
  output->pre_flt_fail_mag_field_disturbed = input->pre_flt_fail_mag_field_disturbed;
  // accel_device_id
  output->accel_device_id = input->accel_device_id;
  // gyro_device_id
  output->gyro_device_id = input->gyro_device_id;
  // baro_device_id
  output->baro_device_id = input->baro_device_id;
  // mag_device_id
  output->mag_device_id = input->mag_device_id;
  // health_flags
  output->health_flags = input->health_flags;
  // timeout_flags
  output->timeout_flags = input->timeout_flags;
  // mag_inclination_deg
  output->mag_inclination_deg = input->mag_inclination_deg;
  // mag_inclination_ref_deg
  output->mag_inclination_ref_deg = input->mag_inclination_ref_deg;
  // mag_strength_gs
  output->mag_strength_gs = input->mag_strength_gs;
  // mag_strength_ref_gs
  output->mag_strength_ref_gs = input->mag_strength_ref_gs;
  return true;
}

px4_msgs__msg__EstimatorStatus *
px4_msgs__msg__EstimatorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorStatus * msg = (px4_msgs__msg__EstimatorStatus *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorStatus));
  bool success = px4_msgs__msg__EstimatorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorStatus__destroy(px4_msgs__msg__EstimatorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EstimatorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EstimatorStatus__Sequence__init(px4_msgs__msg__EstimatorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EstimatorStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EstimatorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorStatus__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorStatus__Sequence__fini(px4_msgs__msg__EstimatorStatus__Sequence * array)
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
      px4_msgs__msg__EstimatorStatus__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorStatus__Sequence *
px4_msgs__msg__EstimatorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorStatus__Sequence * array = (px4_msgs__msg__EstimatorStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorStatus__Sequence__destroy(px4_msgs__msg__EstimatorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EstimatorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EstimatorStatus__Sequence__are_equal(const px4_msgs__msg__EstimatorStatus__Sequence * lhs, const px4_msgs__msg__EstimatorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EstimatorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorStatus__Sequence__copy(
  const px4_msgs__msg__EstimatorStatus__Sequence * input,
  px4_msgs__msg__EstimatorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EstimatorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__EstimatorStatus * data =
      (px4_msgs__msg__EstimatorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EstimatorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EstimatorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__EstimatorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
