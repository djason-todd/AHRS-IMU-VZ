// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/CurrentProfile.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/current_profile__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `system_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `velocity_data`
// Member `amplitude_data`
// Member `correlation_data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interfaces__msg__CurrentProfile__init(interfaces__msg__CurrentProfile * msg)
{
  if (!msg) {
    return false;
  }
  // system_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->system_timestamp)) {
    interfaces__msg__CurrentProfile__fini(msg);
    return false;
  }
  // posix_time
  // timestamp
  // microseconds
  // serial_number
  // sound_velocity
  // temperature
  // pressure
  // cell_size
  // blanking
  // number_of_cells
  // ambiguity_velocity
  // velocity_data
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->velocity_data, 0)) {
    interfaces__msg__CurrentProfile__fini(msg);
    return false;
  }
  // amplitude_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->amplitude_data, 0)) {
    interfaces__msg__CurrentProfile__fini(msg);
    return false;
  }
  // correlation_data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->correlation_data, 0)) {
    interfaces__msg__CurrentProfile__fini(msg);
    return false;
  }
  return true;
}

void
interfaces__msg__CurrentProfile__fini(interfaces__msg__CurrentProfile * msg)
{
  if (!msg) {
    return;
  }
  // system_timestamp
  builtin_interfaces__msg__Time__fini(&msg->system_timestamp);
  // posix_time
  // timestamp
  // microseconds
  // serial_number
  // sound_velocity
  // temperature
  // pressure
  // cell_size
  // blanking
  // number_of_cells
  // ambiguity_velocity
  // velocity_data
  rosidl_runtime_c__int16__Sequence__fini(&msg->velocity_data);
  // amplitude_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->amplitude_data);
  // correlation_data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->correlation_data);
}

bool
interfaces__msg__CurrentProfile__are_equal(const interfaces__msg__CurrentProfile * lhs, const interfaces__msg__CurrentProfile * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // system_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->system_timestamp), &(rhs->system_timestamp)))
  {
    return false;
  }
  // posix_time
  if (lhs->posix_time != rhs->posix_time) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // microseconds
  if (lhs->microseconds != rhs->microseconds) {
    return false;
  }
  // serial_number
  if (lhs->serial_number != rhs->serial_number) {
    return false;
  }
  // sound_velocity
  if (lhs->sound_velocity != rhs->sound_velocity) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // pressure
  if (lhs->pressure != rhs->pressure) {
    return false;
  }
  // cell_size
  if (lhs->cell_size != rhs->cell_size) {
    return false;
  }
  // blanking
  if (lhs->blanking != rhs->blanking) {
    return false;
  }
  // number_of_cells
  if (lhs->number_of_cells != rhs->number_of_cells) {
    return false;
  }
  // ambiguity_velocity
  if (lhs->ambiguity_velocity != rhs->ambiguity_velocity) {
    return false;
  }
  // velocity_data
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->velocity_data), &(rhs->velocity_data)))
  {
    return false;
  }
  // amplitude_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->amplitude_data), &(rhs->amplitude_data)))
  {
    return false;
  }
  // correlation_data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->correlation_data), &(rhs->correlation_data)))
  {
    return false;
  }
  return true;
}

bool
interfaces__msg__CurrentProfile__copy(
  const interfaces__msg__CurrentProfile * input,
  interfaces__msg__CurrentProfile * output)
{
  if (!input || !output) {
    return false;
  }
  // system_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->system_timestamp), &(output->system_timestamp)))
  {
    return false;
  }
  // posix_time
  output->posix_time = input->posix_time;
  // timestamp
  output->timestamp = input->timestamp;
  // microseconds
  output->microseconds = input->microseconds;
  // serial_number
  output->serial_number = input->serial_number;
  // sound_velocity
  output->sound_velocity = input->sound_velocity;
  // temperature
  output->temperature = input->temperature;
  // pressure
  output->pressure = input->pressure;
  // cell_size
  output->cell_size = input->cell_size;
  // blanking
  output->blanking = input->blanking;
  // number_of_cells
  output->number_of_cells = input->number_of_cells;
  // ambiguity_velocity
  output->ambiguity_velocity = input->ambiguity_velocity;
  // velocity_data
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->velocity_data), &(output->velocity_data)))
  {
    return false;
  }
  // amplitude_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->amplitude_data), &(output->amplitude_data)))
  {
    return false;
  }
  // correlation_data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->correlation_data), &(output->correlation_data)))
  {
    return false;
  }
  return true;
}

interfaces__msg__CurrentProfile *
interfaces__msg__CurrentProfile__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__CurrentProfile * msg = (interfaces__msg__CurrentProfile *)allocator.allocate(sizeof(interfaces__msg__CurrentProfile), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__CurrentProfile));
  bool success = interfaces__msg__CurrentProfile__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__CurrentProfile__destroy(interfaces__msg__CurrentProfile * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__CurrentProfile__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__CurrentProfile__Sequence__init(interfaces__msg__CurrentProfile__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__CurrentProfile * data = NULL;

  if (size) {
    data = (interfaces__msg__CurrentProfile *)allocator.zero_allocate(size, sizeof(interfaces__msg__CurrentProfile), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__CurrentProfile__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__CurrentProfile__fini(&data[i - 1]);
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
interfaces__msg__CurrentProfile__Sequence__fini(interfaces__msg__CurrentProfile__Sequence * array)
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
      interfaces__msg__CurrentProfile__fini(&array->data[i]);
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

interfaces__msg__CurrentProfile__Sequence *
interfaces__msg__CurrentProfile__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__CurrentProfile__Sequence * array = (interfaces__msg__CurrentProfile__Sequence *)allocator.allocate(sizeof(interfaces__msg__CurrentProfile__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__CurrentProfile__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__CurrentProfile__Sequence__destroy(interfaces__msg__CurrentProfile__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__CurrentProfile__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__CurrentProfile__Sequence__are_equal(const interfaces__msg__CurrentProfile__Sequence * lhs, const interfaces__msg__CurrentProfile__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__CurrentProfile__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__CurrentProfile__Sequence__copy(
  const interfaces__msg__CurrentProfile__Sequence * input,
  interfaces__msg__CurrentProfile__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__CurrentProfile);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__CurrentProfile * data =
      (interfaces__msg__CurrentProfile *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__CurrentProfile__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__CurrentProfile__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__CurrentProfile__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
