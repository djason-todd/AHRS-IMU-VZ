// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/Magnetometer.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/magnetometer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `system_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
interfaces__msg__Magnetometer__init(interfaces__msg__Magnetometer * msg)
{
  if (!msg) {
    return false;
  }
  // system_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->system_timestamp)) {
    interfaces__msg__Magnetometer__fini(msg);
    return false;
  }
  // posix_time
  // timestamp
  // microseconds
  // is_compensated_for_hard_iron
  // dvl_active
  // dvl_acoustics_active
  // dvl_transmitter_active
  // magnetometer_x
  // magnetometer_y
  // magnetometer_z
  return true;
}

void
interfaces__msg__Magnetometer__fini(interfaces__msg__Magnetometer * msg)
{
  if (!msg) {
    return;
  }
  // system_timestamp
  builtin_interfaces__msg__Time__fini(&msg->system_timestamp);
  // posix_time
  // timestamp
  // microseconds
  // is_compensated_for_hard_iron
  // dvl_active
  // dvl_acoustics_active
  // dvl_transmitter_active
  // magnetometer_x
  // magnetometer_y
  // magnetometer_z
}

bool
interfaces__msg__Magnetometer__are_equal(const interfaces__msg__Magnetometer * lhs, const interfaces__msg__Magnetometer * rhs)
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
  // is_compensated_for_hard_iron
  if (lhs->is_compensated_for_hard_iron != rhs->is_compensated_for_hard_iron) {
    return false;
  }
  // dvl_active
  if (lhs->dvl_active != rhs->dvl_active) {
    return false;
  }
  // dvl_acoustics_active
  if (lhs->dvl_acoustics_active != rhs->dvl_acoustics_active) {
    return false;
  }
  // dvl_transmitter_active
  if (lhs->dvl_transmitter_active != rhs->dvl_transmitter_active) {
    return false;
  }
  // magnetometer_x
  if (lhs->magnetometer_x != rhs->magnetometer_x) {
    return false;
  }
  // magnetometer_y
  if (lhs->magnetometer_y != rhs->magnetometer_y) {
    return false;
  }
  // magnetometer_z
  if (lhs->magnetometer_z != rhs->magnetometer_z) {
    return false;
  }
  return true;
}

bool
interfaces__msg__Magnetometer__copy(
  const interfaces__msg__Magnetometer * input,
  interfaces__msg__Magnetometer * output)
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
  // is_compensated_for_hard_iron
  output->is_compensated_for_hard_iron = input->is_compensated_for_hard_iron;
  // dvl_active
  output->dvl_active = input->dvl_active;
  // dvl_acoustics_active
  output->dvl_acoustics_active = input->dvl_acoustics_active;
  // dvl_transmitter_active
  output->dvl_transmitter_active = input->dvl_transmitter_active;
  // magnetometer_x
  output->magnetometer_x = input->magnetometer_x;
  // magnetometer_y
  output->magnetometer_y = input->magnetometer_y;
  // magnetometer_z
  output->magnetometer_z = input->magnetometer_z;
  return true;
}

interfaces__msg__Magnetometer *
interfaces__msg__Magnetometer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Magnetometer * msg = (interfaces__msg__Magnetometer *)allocator.allocate(sizeof(interfaces__msg__Magnetometer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__Magnetometer));
  bool success = interfaces__msg__Magnetometer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__Magnetometer__destroy(interfaces__msg__Magnetometer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__Magnetometer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__Magnetometer__Sequence__init(interfaces__msg__Magnetometer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Magnetometer * data = NULL;

  if (size) {
    data = (interfaces__msg__Magnetometer *)allocator.zero_allocate(size, sizeof(interfaces__msg__Magnetometer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__Magnetometer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__Magnetometer__fini(&data[i - 1]);
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
interfaces__msg__Magnetometer__Sequence__fini(interfaces__msg__Magnetometer__Sequence * array)
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
      interfaces__msg__Magnetometer__fini(&array->data[i]);
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

interfaces__msg__Magnetometer__Sequence *
interfaces__msg__Magnetometer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__Magnetometer__Sequence * array = (interfaces__msg__Magnetometer__Sequence *)allocator.allocate(sizeof(interfaces__msg__Magnetometer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__Magnetometer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__Magnetometer__Sequence__destroy(interfaces__msg__Magnetometer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__Magnetometer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__Magnetometer__Sequence__are_equal(const interfaces__msg__Magnetometer__Sequence * lhs, const interfaces__msg__Magnetometer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__Magnetometer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__Magnetometer__Sequence__copy(
  const interfaces__msg__Magnetometer__Sequence * input,
  interfaces__msg__Magnetometer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__Magnetometer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__Magnetometer * data =
      (interfaces__msg__Magnetometer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__Magnetometer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__Magnetometer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__Magnetometer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
