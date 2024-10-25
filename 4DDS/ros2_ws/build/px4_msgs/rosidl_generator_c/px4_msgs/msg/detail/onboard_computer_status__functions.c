// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/OnboardComputerStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/onboard_computer_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__OnboardComputerStatus__init(px4_msgs__msg__OnboardComputerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // uptime
  // type
  // cpu_cores
  // cpu_combined
  // gpu_cores
  // gpu_combined
  // temperature_board
  // temperature_core
  // fan_speed
  // ram_usage
  // ram_total
  // storage_type
  // storage_usage
  // storage_total
  // link_type
  // link_tx_rate
  // link_rx_rate
  // link_tx_max
  // link_rx_max
  return true;
}

void
px4_msgs__msg__OnboardComputerStatus__fini(px4_msgs__msg__OnboardComputerStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // uptime
  // type
  // cpu_cores
  // cpu_combined
  // gpu_cores
  // gpu_combined
  // temperature_board
  // temperature_core
  // fan_speed
  // ram_usage
  // ram_total
  // storage_type
  // storage_usage
  // storage_total
  // link_type
  // link_tx_rate
  // link_rx_rate
  // link_tx_max
  // link_rx_max
}

bool
px4_msgs__msg__OnboardComputerStatus__are_equal(const px4_msgs__msg__OnboardComputerStatus * lhs, const px4_msgs__msg__OnboardComputerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // uptime
  if (lhs->uptime != rhs->uptime) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // cpu_cores
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->cpu_cores[i] != rhs->cpu_cores[i]) {
      return false;
    }
  }
  // cpu_combined
  for (size_t i = 0; i < 10; ++i) {
    if (lhs->cpu_combined[i] != rhs->cpu_combined[i]) {
      return false;
    }
  }
  // gpu_cores
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->gpu_cores[i] != rhs->gpu_cores[i]) {
      return false;
    }
  }
  // gpu_combined
  for (size_t i = 0; i < 10; ++i) {
    if (lhs->gpu_combined[i] != rhs->gpu_combined[i]) {
      return false;
    }
  }
  // temperature_board
  if (lhs->temperature_board != rhs->temperature_board) {
    return false;
  }
  // temperature_core
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->temperature_core[i] != rhs->temperature_core[i]) {
      return false;
    }
  }
  // fan_speed
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->fan_speed[i] != rhs->fan_speed[i]) {
      return false;
    }
  }
  // ram_usage
  if (lhs->ram_usage != rhs->ram_usage) {
    return false;
  }
  // ram_total
  if (lhs->ram_total != rhs->ram_total) {
    return false;
  }
  // storage_type
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->storage_type[i] != rhs->storage_type[i]) {
      return false;
    }
  }
  // storage_usage
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->storage_usage[i] != rhs->storage_usage[i]) {
      return false;
    }
  }
  // storage_total
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->storage_total[i] != rhs->storage_total[i]) {
      return false;
    }
  }
  // link_type
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->link_type[i] != rhs->link_type[i]) {
      return false;
    }
  }
  // link_tx_rate
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->link_tx_rate[i] != rhs->link_tx_rate[i]) {
      return false;
    }
  }
  // link_rx_rate
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->link_rx_rate[i] != rhs->link_rx_rate[i]) {
      return false;
    }
  }
  // link_tx_max
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->link_tx_max[i] != rhs->link_tx_max[i]) {
      return false;
    }
  }
  // link_rx_max
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->link_rx_max[i] != rhs->link_rx_max[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__OnboardComputerStatus__copy(
  const px4_msgs__msg__OnboardComputerStatus * input,
  px4_msgs__msg__OnboardComputerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // uptime
  output->uptime = input->uptime;
  // type
  output->type = input->type;
  // cpu_cores
  for (size_t i = 0; i < 8; ++i) {
    output->cpu_cores[i] = input->cpu_cores[i];
  }
  // cpu_combined
  for (size_t i = 0; i < 10; ++i) {
    output->cpu_combined[i] = input->cpu_combined[i];
  }
  // gpu_cores
  for (size_t i = 0; i < 4; ++i) {
    output->gpu_cores[i] = input->gpu_cores[i];
  }
  // gpu_combined
  for (size_t i = 0; i < 10; ++i) {
    output->gpu_combined[i] = input->gpu_combined[i];
  }
  // temperature_board
  output->temperature_board = input->temperature_board;
  // temperature_core
  for (size_t i = 0; i < 8; ++i) {
    output->temperature_core[i] = input->temperature_core[i];
  }
  // fan_speed
  for (size_t i = 0; i < 4; ++i) {
    output->fan_speed[i] = input->fan_speed[i];
  }
  // ram_usage
  output->ram_usage = input->ram_usage;
  // ram_total
  output->ram_total = input->ram_total;
  // storage_type
  for (size_t i = 0; i < 4; ++i) {
    output->storage_type[i] = input->storage_type[i];
  }
  // storage_usage
  for (size_t i = 0; i < 4; ++i) {
    output->storage_usage[i] = input->storage_usage[i];
  }
  // storage_total
  for (size_t i = 0; i < 4; ++i) {
    output->storage_total[i] = input->storage_total[i];
  }
  // link_type
  for (size_t i = 0; i < 6; ++i) {
    output->link_type[i] = input->link_type[i];
  }
  // link_tx_rate
  for (size_t i = 0; i < 6; ++i) {
    output->link_tx_rate[i] = input->link_tx_rate[i];
  }
  // link_rx_rate
  for (size_t i = 0; i < 6; ++i) {
    output->link_rx_rate[i] = input->link_rx_rate[i];
  }
  // link_tx_max
  for (size_t i = 0; i < 6; ++i) {
    output->link_tx_max[i] = input->link_tx_max[i];
  }
  // link_rx_max
  for (size_t i = 0; i < 6; ++i) {
    output->link_rx_max[i] = input->link_rx_max[i];
  }
  return true;
}

px4_msgs__msg__OnboardComputerStatus *
px4_msgs__msg__OnboardComputerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OnboardComputerStatus * msg = (px4_msgs__msg__OnboardComputerStatus *)allocator.allocate(sizeof(px4_msgs__msg__OnboardComputerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__OnboardComputerStatus));
  bool success = px4_msgs__msg__OnboardComputerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__OnboardComputerStatus__destroy(px4_msgs__msg__OnboardComputerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__OnboardComputerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__OnboardComputerStatus__Sequence__init(px4_msgs__msg__OnboardComputerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OnboardComputerStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__OnboardComputerStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__OnboardComputerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__OnboardComputerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__OnboardComputerStatus__fini(&data[i - 1]);
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
px4_msgs__msg__OnboardComputerStatus__Sequence__fini(px4_msgs__msg__OnboardComputerStatus__Sequence * array)
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
      px4_msgs__msg__OnboardComputerStatus__fini(&array->data[i]);
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

px4_msgs__msg__OnboardComputerStatus__Sequence *
px4_msgs__msg__OnboardComputerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OnboardComputerStatus__Sequence * array = (px4_msgs__msg__OnboardComputerStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__OnboardComputerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__OnboardComputerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__OnboardComputerStatus__Sequence__destroy(px4_msgs__msg__OnboardComputerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__OnboardComputerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__OnboardComputerStatus__Sequence__are_equal(const px4_msgs__msg__OnboardComputerStatus__Sequence * lhs, const px4_msgs__msg__OnboardComputerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__OnboardComputerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__OnboardComputerStatus__Sequence__copy(
  const px4_msgs__msg__OnboardComputerStatus__Sequence * input,
  px4_msgs__msg__OnboardComputerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__OnboardComputerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__OnboardComputerStatus * data =
      (px4_msgs__msg__OnboardComputerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__OnboardComputerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__OnboardComputerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__OnboardComputerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
