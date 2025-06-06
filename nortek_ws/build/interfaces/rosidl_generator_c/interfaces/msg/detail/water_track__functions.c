// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/WaterTrack.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/water_track__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `system_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
interfaces__msg__WaterTrack__init(interfaces__msg__WaterTrack * msg)
{
  if (!msg) {
    return false;
  }
  // system_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->system_timestamp)) {
    interfaces__msg__WaterTrack__fini(msg);
    return false;
  }
  // posix_time
  // timestamp
  // microseconds
  // beam_1_velocity_valid
  // beam_2_velocity_valid
  // beam_3_velocity_valid
  // beam_1_distance_valid
  // beam_2_distance_valid
  // beam_3_distance_valid
  // beam_1_fom_valid
  // beam_2_fom_valid
  // beam_3_fom_valid
  // x_velocity_valid
  // y_velocity_valid
  // z_velocity_valid
  // x_fom_valid
  // y_fom_valid
  // z_fom_valid
  // serial_number
  // sound_speed
  // temperature
  // pressure
  // velocity_beam_1
  // velocity_beam_2
  // velocity_beam_3
  // distance_beam_1
  // distance_beam_2
  // distance_beam_3
  // fom_beam_1
  // fom_beam_2
  // fom_beam_3
  // dt_beam_1
  // dt_beam_2
  // dt_beam_3
  // time_vel_beam_1
  // time_vel_beam_2
  // time_vel_beam_3
  // velocity_x
  // velocity_y
  // velocity_z
  // fom_x
  // fom_y
  // fom_z
  // dt_xyz
  // time_vel_xyz
  return true;
}

void
interfaces__msg__WaterTrack__fini(interfaces__msg__WaterTrack * msg)
{
  if (!msg) {
    return;
  }
  // system_timestamp
  builtin_interfaces__msg__Time__fini(&msg->system_timestamp);
  // posix_time
  // timestamp
  // microseconds
  // beam_1_velocity_valid
  // beam_2_velocity_valid
  // beam_3_velocity_valid
  // beam_1_distance_valid
  // beam_2_distance_valid
  // beam_3_distance_valid
  // beam_1_fom_valid
  // beam_2_fom_valid
  // beam_3_fom_valid
  // x_velocity_valid
  // y_velocity_valid
  // z_velocity_valid
  // x_fom_valid
  // y_fom_valid
  // z_fom_valid
  // serial_number
  // sound_speed
  // temperature
  // pressure
  // velocity_beam_1
  // velocity_beam_2
  // velocity_beam_3
  // distance_beam_1
  // distance_beam_2
  // distance_beam_3
  // fom_beam_1
  // fom_beam_2
  // fom_beam_3
  // dt_beam_1
  // dt_beam_2
  // dt_beam_3
  // time_vel_beam_1
  // time_vel_beam_2
  // time_vel_beam_3
  // velocity_x
  // velocity_y
  // velocity_z
  // fom_x
  // fom_y
  // fom_z
  // dt_xyz
  // time_vel_xyz
}

bool
interfaces__msg__WaterTrack__are_equal(const interfaces__msg__WaterTrack * lhs, const interfaces__msg__WaterTrack * rhs)
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
  // beam_1_velocity_valid
  if (lhs->beam_1_velocity_valid != rhs->beam_1_velocity_valid) {
    return false;
  }
  // beam_2_velocity_valid
  if (lhs->beam_2_velocity_valid != rhs->beam_2_velocity_valid) {
    return false;
  }
  // beam_3_velocity_valid
  if (lhs->beam_3_velocity_valid != rhs->beam_3_velocity_valid) {
    return false;
  }
  // beam_1_distance_valid
  if (lhs->beam_1_distance_valid != rhs->beam_1_distance_valid) {
    return false;
  }
  // beam_2_distance_valid
  if (lhs->beam_2_distance_valid != rhs->beam_2_distance_valid) {
    return false;
  }
  // beam_3_distance_valid
  if (lhs->beam_3_distance_valid != rhs->beam_3_distance_valid) {
    return false;
  }
  // beam_1_fom_valid
  if (lhs->beam_1_fom_valid != rhs->beam_1_fom_valid) {
    return false;
  }
  // beam_2_fom_valid
  if (lhs->beam_2_fom_valid != rhs->beam_2_fom_valid) {
    return false;
  }
  // beam_3_fom_valid
  if (lhs->beam_3_fom_valid != rhs->beam_3_fom_valid) {
    return false;
  }
  // x_velocity_valid
  if (lhs->x_velocity_valid != rhs->x_velocity_valid) {
    return false;
  }
  // y_velocity_valid
  if (lhs->y_velocity_valid != rhs->y_velocity_valid) {
    return false;
  }
  // z_velocity_valid
  if (lhs->z_velocity_valid != rhs->z_velocity_valid) {
    return false;
  }
  // x_fom_valid
  if (lhs->x_fom_valid != rhs->x_fom_valid) {
    return false;
  }
  // y_fom_valid
  if (lhs->y_fom_valid != rhs->y_fom_valid) {
    return false;
  }
  // z_fom_valid
  if (lhs->z_fom_valid != rhs->z_fom_valid) {
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
  // velocity_beam_1
  if (lhs->velocity_beam_1 != rhs->velocity_beam_1) {
    return false;
  }
  // velocity_beam_2
  if (lhs->velocity_beam_2 != rhs->velocity_beam_2) {
    return false;
  }
  // velocity_beam_3
  if (lhs->velocity_beam_3 != rhs->velocity_beam_3) {
    return false;
  }
  // distance_beam_1
  if (lhs->distance_beam_1 != rhs->distance_beam_1) {
    return false;
  }
  // distance_beam_2
  if (lhs->distance_beam_2 != rhs->distance_beam_2) {
    return false;
  }
  // distance_beam_3
  if (lhs->distance_beam_3 != rhs->distance_beam_3) {
    return false;
  }
  // fom_beam_1
  if (lhs->fom_beam_1 != rhs->fom_beam_1) {
    return false;
  }
  // fom_beam_2
  if (lhs->fom_beam_2 != rhs->fom_beam_2) {
    return false;
  }
  // fom_beam_3
  if (lhs->fom_beam_3 != rhs->fom_beam_3) {
    return false;
  }
  // dt_beam_1
  if (lhs->dt_beam_1 != rhs->dt_beam_1) {
    return false;
  }
  // dt_beam_2
  if (lhs->dt_beam_2 != rhs->dt_beam_2) {
    return false;
  }
  // dt_beam_3
  if (lhs->dt_beam_3 != rhs->dt_beam_3) {
    return false;
  }
  // time_vel_beam_1
  if (lhs->time_vel_beam_1 != rhs->time_vel_beam_1) {
    return false;
  }
  // time_vel_beam_2
  if (lhs->time_vel_beam_2 != rhs->time_vel_beam_2) {
    return false;
  }
  // time_vel_beam_3
  if (lhs->time_vel_beam_3 != rhs->time_vel_beam_3) {
    return false;
  }
  // velocity_x
  if (lhs->velocity_x != rhs->velocity_x) {
    return false;
  }
  // velocity_y
  if (lhs->velocity_y != rhs->velocity_y) {
    return false;
  }
  // velocity_z
  if (lhs->velocity_z != rhs->velocity_z) {
    return false;
  }
  // fom_x
  if (lhs->fom_x != rhs->fom_x) {
    return false;
  }
  // fom_y
  if (lhs->fom_y != rhs->fom_y) {
    return false;
  }
  // fom_z
  if (lhs->fom_z != rhs->fom_z) {
    return false;
  }
  // dt_xyz
  if (lhs->dt_xyz != rhs->dt_xyz) {
    return false;
  }
  // time_vel_xyz
  if (lhs->time_vel_xyz != rhs->time_vel_xyz) {
    return false;
  }
  return true;
}

bool
interfaces__msg__WaterTrack__copy(
  const interfaces__msg__WaterTrack * input,
  interfaces__msg__WaterTrack * output)
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
  // beam_1_velocity_valid
  output->beam_1_velocity_valid = input->beam_1_velocity_valid;
  // beam_2_velocity_valid
  output->beam_2_velocity_valid = input->beam_2_velocity_valid;
  // beam_3_velocity_valid
  output->beam_3_velocity_valid = input->beam_3_velocity_valid;
  // beam_1_distance_valid
  output->beam_1_distance_valid = input->beam_1_distance_valid;
  // beam_2_distance_valid
  output->beam_2_distance_valid = input->beam_2_distance_valid;
  // beam_3_distance_valid
  output->beam_3_distance_valid = input->beam_3_distance_valid;
  // beam_1_fom_valid
  output->beam_1_fom_valid = input->beam_1_fom_valid;
  // beam_2_fom_valid
  output->beam_2_fom_valid = input->beam_2_fom_valid;
  // beam_3_fom_valid
  output->beam_3_fom_valid = input->beam_3_fom_valid;
  // x_velocity_valid
  output->x_velocity_valid = input->x_velocity_valid;
  // y_velocity_valid
  output->y_velocity_valid = input->y_velocity_valid;
  // z_velocity_valid
  output->z_velocity_valid = input->z_velocity_valid;
  // x_fom_valid
  output->x_fom_valid = input->x_fom_valid;
  // y_fom_valid
  output->y_fom_valid = input->y_fom_valid;
  // z_fom_valid
  output->z_fom_valid = input->z_fom_valid;
  // serial_number
  output->serial_number = input->serial_number;
  // sound_speed
  output->sound_speed = input->sound_speed;
  // temperature
  output->temperature = input->temperature;
  // pressure
  output->pressure = input->pressure;
  // velocity_beam_1
  output->velocity_beam_1 = input->velocity_beam_1;
  // velocity_beam_2
  output->velocity_beam_2 = input->velocity_beam_2;
  // velocity_beam_3
  output->velocity_beam_3 = input->velocity_beam_3;
  // distance_beam_1
  output->distance_beam_1 = input->distance_beam_1;
  // distance_beam_2
  output->distance_beam_2 = input->distance_beam_2;
  // distance_beam_3
  output->distance_beam_3 = input->distance_beam_3;
  // fom_beam_1
  output->fom_beam_1 = input->fom_beam_1;
  // fom_beam_2
  output->fom_beam_2 = input->fom_beam_2;
  // fom_beam_3
  output->fom_beam_3 = input->fom_beam_3;
  // dt_beam_1
  output->dt_beam_1 = input->dt_beam_1;
  // dt_beam_2
  output->dt_beam_2 = input->dt_beam_2;
  // dt_beam_3
  output->dt_beam_3 = input->dt_beam_3;
  // time_vel_beam_1
  output->time_vel_beam_1 = input->time_vel_beam_1;
  // time_vel_beam_2
  output->time_vel_beam_2 = input->time_vel_beam_2;
  // time_vel_beam_3
  output->time_vel_beam_3 = input->time_vel_beam_3;
  // velocity_x
  output->velocity_x = input->velocity_x;
  // velocity_y
  output->velocity_y = input->velocity_y;
  // velocity_z
  output->velocity_z = input->velocity_z;
  // fom_x
  output->fom_x = input->fom_x;
  // fom_y
  output->fom_y = input->fom_y;
  // fom_z
  output->fom_z = input->fom_z;
  // dt_xyz
  output->dt_xyz = input->dt_xyz;
  // time_vel_xyz
  output->time_vel_xyz = input->time_vel_xyz;
  return true;
}

interfaces__msg__WaterTrack *
interfaces__msg__WaterTrack__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__WaterTrack * msg = (interfaces__msg__WaterTrack *)allocator.allocate(sizeof(interfaces__msg__WaterTrack), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__WaterTrack));
  bool success = interfaces__msg__WaterTrack__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__WaterTrack__destroy(interfaces__msg__WaterTrack * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__WaterTrack__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__WaterTrack__Sequence__init(interfaces__msg__WaterTrack__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__WaterTrack * data = NULL;

  if (size) {
    data = (interfaces__msg__WaterTrack *)allocator.zero_allocate(size, sizeof(interfaces__msg__WaterTrack), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__WaterTrack__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__WaterTrack__fini(&data[i - 1]);
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
interfaces__msg__WaterTrack__Sequence__fini(interfaces__msg__WaterTrack__Sequence * array)
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
      interfaces__msg__WaterTrack__fini(&array->data[i]);
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

interfaces__msg__WaterTrack__Sequence *
interfaces__msg__WaterTrack__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__WaterTrack__Sequence * array = (interfaces__msg__WaterTrack__Sequence *)allocator.allocate(sizeof(interfaces__msg__WaterTrack__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__WaterTrack__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__WaterTrack__Sequence__destroy(interfaces__msg__WaterTrack__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__WaterTrack__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__WaterTrack__Sequence__are_equal(const interfaces__msg__WaterTrack__Sequence * lhs, const interfaces__msg__WaterTrack__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__WaterTrack__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__WaterTrack__Sequence__copy(
  const interfaces__msg__WaterTrack__Sequence * input,
  interfaces__msg__WaterTrack__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__WaterTrack);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__WaterTrack * data =
      (interfaces__msg__WaterTrack *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__WaterTrack__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__WaterTrack__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__WaterTrack__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
