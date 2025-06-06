// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/Altimeter.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/altimeter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `system_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
interfaces__msg__Altimeter__init(interfaces__msg__Altimeter * msg)
{
  if (!msg) {
    return false;
  }
  // system_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->system_timestamp)) {
    interfaces__msg__Altimeter__fini(msg);
    return false;
  }
  // posix_time
  // timestamp
  // microseconds
  // altimeter_distance_valid
  // altimeter_quality_valid
  // pressure_valid
  // temperature_valid
  // serial_number
  // sound_speed
  // temperature
  // pressure
  // altimeter_distance
  // altimeter_quality
  return true;
}

void
interfaces__msg__Altimeter__fini(interfaces__msg__Altimeter * msg)
{
  if (!msg) {
    return;
  }
  // system_timestamp
  builtin_interfaces__msg__Time__fini(&msg->system_timestamp);
  // posix_time
  // timestamp
  // microseconds
  // altimeter_distance_valid
  // altimeter_quality_valid
  // pressure_valid
  // temperature_valid
  // serial_number
  // sound_speed
  // temperature
  // pressure
  // altimeter_distance
  // altimeter_quality
}

bool
interfaces__msg__Altimeter__are_equal(const interfaces__msg__Altimeter * lhs, const interfaces__msg__Altimeter * rhs)
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
  // altimeter_distance_valid
  if (lhs->altimeter_distance_valid != rhs->altimeter_distance_valid) {
    return false;
  }
  // altimeter_quality_valid
  if (lhs->altimeter_quality_valid != rhs->altimeter_quality_valid) {
    return false;
  }
  // pressure_valid
  if (lhs->pressure_valid != rhs->pressure_valid) {
    return false;
  }
  // temperature_valid
  if (lhs->temperature_valid != rhs->temperature_valid) {
    return false;
  }
  // serial_number
  if (lhs->serial_number != rhs->serial_number) {
    return false;
  }
  // sound_speed
  if (lhs->sound_speed != rhs->sound_speed) {
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
  // altimeter_distance
  if (lhs->altimeter_distance != rhs->altimeter_distance) {
    return false;
  }
  // altimeter_quality
  if (lhs->altimeter_quality != rhs->altimeter_quality) {
    return false;
  }
  return true;
}

bool
interfaces__msg__Altimeter__copy(
  const interfaces__msg__Altimeter * input,
  interfaces__msg__Altimeter * output)
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
  // altimeter_distance_valid
  output->altimeter_distance_valid = input->altimeter_distance_valid;
  // altimeter_quality_valid
  output->altimeter_quality_valid = input->altimeter_quality_valid;
  // pressure_valid
  output->pressure_valid = input->pressure_valid;
  // temperature_valid
  output->temperature_valid = input->temperature_valid;
  // serial_number
  output->serial_number = input->serial_number;
  // sound_speed
  output->sound_speed = input->sound_speed;
  // temperature
  output->temperature = input->temperature;
  // pressure
  output->pressure = input->pressure;
  // altimeter_distance
  output->altimeter_distance = input->altimeter_distance;
  // altimeter_quality
  output->altimeter_quality = input->altimeter_quality;
  return true;
}

interfaces__msg__Altimeter *
interfaces__msg__Altimeter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Altimeter * msg = (interfaces__msg__Altimeter *)allocator.allocate(sizeof(interfaces__msg__Altimeter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__Altimeter));
  bool success = interfaces__msg__Altimeter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__Altimeter__destroy(interfaces__msg__Altimeter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__Altimeter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__Altimeter__Sequence__init(interfaces__msg__Altimeter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Altimeter * data = NULL;

  if (size) {
    data = (interfaces__msg__Altimeter *)allocator.zero_allocate(size, sizeof(interfaces__msg__Altimeter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__Altimeter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__Altimeter__fini(&data[i - 1]);
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
interfaces__msg__Altimeter__Sequence__fini(interfaces__msg__Altimeter__Sequence * array)
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
      interfaces__msg__Altimeter__fini(&array->data[i]);
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

interfaces__msg__Altimeter__Sequence *
interfaces__msg__Altimeter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Altimeter__Sequence * array = (interfaces__msg__Altimeter__Sequence *)allocator.allocate(sizeof(interfaces__msg__Altimeter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__Altimeter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__Altimeter__Sequence__destroy(interfaces__msg__Altimeter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__Altimeter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__Altimeter__Sequence__are_equal(const interfaces__msg__Altimeter__Sequence * lhs, const interfaces__msg__Altimeter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__Altimeter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__Altimeter__Sequence__copy(
  const interfaces__msg__Altimeter__Sequence * input,
  interfaces__msg__Altimeter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__Altimeter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__Altimeter * data =
      (interfaces__msg__Altimeter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__Altimeter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__Altimeter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__Altimeter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
