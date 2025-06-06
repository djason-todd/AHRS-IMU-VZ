// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/FieldCalibration.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/field_calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `system_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
interfaces__msg__FieldCalibration__init(interfaces__msg__FieldCalibration * msg)
{
  if (!msg) {
    return false;
  }
  // system_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->system_timestamp)) {
    interfaces__msg__FieldCalibration__fini(msg);
    return false;
  }
  // posix_time
  // timestamp
  // microseconds
  // points_used_in_estimation
  // hard_iron_x
  // hard_iron_y
  // hard_iron_z
  // s_axis_0
  // s_axis_1
  // s_axis_2
  // s_axis_3
  // s_axis_4
  // s_axis_5
  // s_axis_6
  // s_axis_7
  // s_axis_8
  // new_point_x
  // new_point_y
  // new_point_z
  // fom_field_calibration
  // coverage
  return true;
}

void
interfaces__msg__FieldCalibration__fini(interfaces__msg__FieldCalibration * msg)
{
  if (!msg) {
    return;
  }
  // system_timestamp
  builtin_interfaces__msg__Time__fini(&msg->system_timestamp);
  // posix_time
  // timestamp
  // microseconds
  // points_used_in_estimation
  // hard_iron_x
  // hard_iron_y
  // hard_iron_z
  // s_axis_0
  // s_axis_1
  // s_axis_2
  // s_axis_3
  // s_axis_4
  // s_axis_5
  // s_axis_6
  // s_axis_7
  // s_axis_8
  // new_point_x
  // new_point_y
  // new_point_z
  // fom_field_calibration
  // coverage
}

bool
interfaces__msg__FieldCalibration__are_equal(const interfaces__msg__FieldCalibration * lhs, const interfaces__msg__FieldCalibration * rhs)
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
  // points_used_in_estimation
  if (lhs->points_used_in_estimation != rhs->points_used_in_estimation) {
    return false;
  }
  // hard_iron_x
  if (lhs->hard_iron_x != rhs->hard_iron_x) {
    return false;
  }
  // hard_iron_y
  if (lhs->hard_iron_y != rhs->hard_iron_y) {
    return false;
  }
  // hard_iron_z
  if (lhs->hard_iron_z != rhs->hard_iron_z) {
    return false;
  }
  // s_axis_0
  if (lhs->s_axis_0 != rhs->s_axis_0) {
    return false;
  }
  // s_axis_1
  if (lhs->s_axis_1 != rhs->s_axis_1) {
    return false;
  }
  // s_axis_2
  if (lhs->s_axis_2 != rhs->s_axis_2) {
    return false;
  }
  // s_axis_3
  if (lhs->s_axis_3 != rhs->s_axis_3) {
    return false;
  }
  // s_axis_4
  if (lhs->s_axis_4 != rhs->s_axis_4) {
    return false;
  }
  // s_axis_5
  if (lhs->s_axis_5 != rhs->s_axis_5) {
    return false;
  }
  // s_axis_6
  if (lhs->s_axis_6 != rhs->s_axis_6) {
    return false;
  }
  // s_axis_7
  if (lhs->s_axis_7 != rhs->s_axis_7) {
    return false;
  }
  // s_axis_8
  if (lhs->s_axis_8 != rhs->s_axis_8) {
    return false;
  }
  // new_point_x
  if (lhs->new_point_x != rhs->new_point_x) {
    return false;
  }
  // new_point_y
  if (lhs->new_point_y != rhs->new_point_y) {
    return false;
  }
  // new_point_z
  if (lhs->new_point_z != rhs->new_point_z) {
    return false;
  }
  // fom_field_calibration
  if (lhs->fom_field_calibration != rhs->fom_field_calibration) {
    return false;
  }
  // coverage
  if (lhs->coverage != rhs->coverage) {
    return false;
  }
  return true;
}

bool
interfaces__msg__FieldCalibration__copy(
  const interfaces__msg__FieldCalibration * input,
  interfaces__msg__FieldCalibration * output)
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
  // points_used_in_estimation
  output->points_used_in_estimation = input->points_used_in_estimation;
  // hard_iron_x
  output->hard_iron_x = input->hard_iron_x;
  // hard_iron_y
  output->hard_iron_y = input->hard_iron_y;
  // hard_iron_z
  output->hard_iron_z = input->hard_iron_z;
  // s_axis_0
  output->s_axis_0 = input->s_axis_0;
  // s_axis_1
  output->s_axis_1 = input->s_axis_1;
  // s_axis_2
  output->s_axis_2 = input->s_axis_2;
  // s_axis_3
  output->s_axis_3 = input->s_axis_3;
  // s_axis_4
  output->s_axis_4 = input->s_axis_4;
  // s_axis_5
  output->s_axis_5 = input->s_axis_5;
  // s_axis_6
  output->s_axis_6 = input->s_axis_6;
  // s_axis_7
  output->s_axis_7 = input->s_axis_7;
  // s_axis_8
  output->s_axis_8 = input->s_axis_8;
  // new_point_x
  output->new_point_x = input->new_point_x;
  // new_point_y
  output->new_point_y = input->new_point_y;
  // new_point_z
  output->new_point_z = input->new_point_z;
  // fom_field_calibration
  output->fom_field_calibration = input->fom_field_calibration;
  // coverage
  output->coverage = input->coverage;
  return true;
}

interfaces__msg__FieldCalibration *
interfaces__msg__FieldCalibration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__FieldCalibration * msg = (interfaces__msg__FieldCalibration *)allocator.allocate(sizeof(interfaces__msg__FieldCalibration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__FieldCalibration));
  bool success = interfaces__msg__FieldCalibration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__FieldCalibration__destroy(interfaces__msg__FieldCalibration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__FieldCalibration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__FieldCalibration__Sequence__init(interfaces__msg__FieldCalibration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__FieldCalibration * data = NULL;

  if (size) {
    data = (interfaces__msg__FieldCalibration *)allocator.zero_allocate(size, sizeof(interfaces__msg__FieldCalibration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__FieldCalibration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__FieldCalibration__fini(&data[i - 1]);
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
interfaces__msg__FieldCalibration__Sequence__fini(interfaces__msg__FieldCalibration__Sequence * array)
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
      interfaces__msg__FieldCalibration__fini(&array->data[i]);
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

interfaces__msg__FieldCalibration__Sequence *
interfaces__msg__FieldCalibration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__FieldCalibration__Sequence * array = (interfaces__msg__FieldCalibration__Sequence *)allocator.allocate(sizeof(interfaces__msg__FieldCalibration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__FieldCalibration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__FieldCalibration__Sequence__destroy(interfaces__msg__FieldCalibration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__FieldCalibration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__FieldCalibration__Sequence__are_equal(const interfaces__msg__FieldCalibration__Sequence * lhs, const interfaces__msg__FieldCalibration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__FieldCalibration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__FieldCalibration__Sequence__copy(
  const interfaces__msg__FieldCalibration__Sequence * input,
  interfaces__msg__FieldCalibration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__FieldCalibration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__FieldCalibration * data =
      (interfaces__msg__FieldCalibration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__FieldCalibration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__FieldCalibration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__FieldCalibration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
