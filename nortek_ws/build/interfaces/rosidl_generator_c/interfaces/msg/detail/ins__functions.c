// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/INS.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/ins__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `system_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
interfaces__msg__INS__init(interfaces__msg__INS * msg)
{
  if (!msg) {
    return false;
  }
  // system_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->system_timestamp)) {
    interfaces__msg__INS__fini(msg);
    return false;
  }
  // posix_time
  // timestamp
  // microseconds
  // serial_number
  // operation_mode
  // fom_ahrs
  // fom_fc1
  // roll
  // pitch
  // heading
  // quaternion_w
  // quaternion_x
  // quaternion_y
  // quaternion_z
  // rotation_matrix_0
  // rotation_matrix_1
  // rotation_matrix_2
  // rotation_matrix_3
  // rotation_matrix_4
  // rotation_matrix_5
  // rotation_matrix_6
  // rotation_matrix_7
  // rotation_matrix_8
  // declination
  // depth
  // fom_ins
  // lat_long_is_valid
  // course_over_ground
  // temperature
  // pressure
  // altitude
  // latitude
  // longitude
  // position_frame_x
  // position_frame_y
  // position_frame_z
  // velocity_ned_x
  // velocity_ned_y
  // velocity_ned_z
  // velocity_nucleus_x
  // velocity_nucleus_y
  // velocity_nucleus_z
  // speed_over_ground
  // turn_rate_x
  // turn_rate_y
  // turn_rate_z
  return true;
}

void
interfaces__msg__INS__fini(interfaces__msg__INS * msg)
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
  // operation_mode
  // fom_ahrs
  // fom_fc1
  // roll
  // pitch
  // heading
  // quaternion_w
  // quaternion_x
  // quaternion_y
  // quaternion_z
  // rotation_matrix_0
  // rotation_matrix_1
  // rotation_matrix_2
  // rotation_matrix_3
  // rotation_matrix_4
  // rotation_matrix_5
  // rotation_matrix_6
  // rotation_matrix_7
  // rotation_matrix_8
  // declination
  // depth
  // fom_ins
  // lat_long_is_valid
  // course_over_ground
  // temperature
  // pressure
  // altitude
  // latitude
  // longitude
  // position_frame_x
  // position_frame_y
  // position_frame_z
  // velocity_ned_x
  // velocity_ned_y
  // velocity_ned_z
  // velocity_nucleus_x
  // velocity_nucleus_y
  // velocity_nucleus_z
  // speed_over_ground
  // turn_rate_x
  // turn_rate_y
  // turn_rate_z
}

bool
interfaces__msg__INS__are_equal(const interfaces__msg__INS * lhs, const interfaces__msg__INS * rhs)
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
  // operation_mode
  if (lhs->operation_mode != rhs->operation_mode) {
    return false;
  }
  // fom_ahrs
  if (lhs->fom_ahrs != rhs->fom_ahrs) {
    return false;
  }
  // fom_fc1
  if (lhs->fom_fc1 != rhs->fom_fc1) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // quaternion_w
  if (lhs->quaternion_w != rhs->quaternion_w) {
    return false;
  }
  // quaternion_x
  if (lhs->quaternion_x != rhs->quaternion_x) {
    return false;
  }
  // quaternion_y
  if (lhs->quaternion_y != rhs->quaternion_y) {
    return false;
  }
  // quaternion_z
  if (lhs->quaternion_z != rhs->quaternion_z) {
    return false;
  }
  // rotation_matrix_0
  if (lhs->rotation_matrix_0 != rhs->rotation_matrix_0) {
    return false;
  }
  // rotation_matrix_1
  if (lhs->rotation_matrix_1 != rhs->rotation_matrix_1) {
    return false;
  }
  // rotation_matrix_2
  if (lhs->rotation_matrix_2 != rhs->rotation_matrix_2) {
    return false;
  }
  // rotation_matrix_3
  if (lhs->rotation_matrix_3 != rhs->rotation_matrix_3) {
    return false;
  }
  // rotation_matrix_4
  if (lhs->rotation_matrix_4 != rhs->rotation_matrix_4) {
    return false;
  }
  // rotation_matrix_5
  if (lhs->rotation_matrix_5 != rhs->rotation_matrix_5) {
    return false;
  }
  // rotation_matrix_6
  if (lhs->rotation_matrix_6 != rhs->rotation_matrix_6) {
    return false;
  }
  // rotation_matrix_7
  if (lhs->rotation_matrix_7 != rhs->rotation_matrix_7) {
    return false;
  }
  // rotation_matrix_8
  if (lhs->rotation_matrix_8 != rhs->rotation_matrix_8) {
    return false;
  }
  // declination
  if (lhs->declination != rhs->declination) {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  // fom_ins
  if (lhs->fom_ins != rhs->fom_ins) {
    return false;
  }
  // lat_long_is_valid
  if (lhs->lat_long_is_valid != rhs->lat_long_is_valid) {
    return false;
  }
  // course_over_ground
  if (lhs->course_over_ground != rhs->course_over_ground) {
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
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // position_frame_x
  if (lhs->position_frame_x != rhs->position_frame_x) {
    return false;
  }
  // position_frame_y
  if (lhs->position_frame_y != rhs->position_frame_y) {
    return false;
  }
  // position_frame_z
  if (lhs->position_frame_z != rhs->position_frame_z) {
    return false;
  }
  // velocity_ned_x
  if (lhs->velocity_ned_x != rhs->velocity_ned_x) {
    return false;
  }
  // velocity_ned_y
  if (lhs->velocity_ned_y != rhs->velocity_ned_y) {
    return false;
  }
  // velocity_ned_z
  if (lhs->velocity_ned_z != rhs->velocity_ned_z) {
    return false;
  }
  // velocity_nucleus_x
  if (lhs->velocity_nucleus_x != rhs->velocity_nucleus_x) {
    return false;
  }
  // velocity_nucleus_y
  if (lhs->velocity_nucleus_y != rhs->velocity_nucleus_y) {
    return false;
  }
  // velocity_nucleus_z
  if (lhs->velocity_nucleus_z != rhs->velocity_nucleus_z) {
    return false;
  }
  // speed_over_ground
  if (lhs->speed_over_ground != rhs->speed_over_ground) {
    return false;
  }
  // turn_rate_x
  if (lhs->turn_rate_x != rhs->turn_rate_x) {
    return false;
  }
  // turn_rate_y
  if (lhs->turn_rate_y != rhs->turn_rate_y) {
    return false;
  }
  // turn_rate_z
  if (lhs->turn_rate_z != rhs->turn_rate_z) {
    return false;
  }
  return true;
}

bool
interfaces__msg__INS__copy(
  const interfaces__msg__INS * input,
  interfaces__msg__INS * output)
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
  // operation_mode
  output->operation_mode = input->operation_mode;
  // fom_ahrs
  output->fom_ahrs = input->fom_ahrs;
  // fom_fc1
  output->fom_fc1 = input->fom_fc1;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // heading
  output->heading = input->heading;
  // quaternion_w
  output->quaternion_w = input->quaternion_w;
  // quaternion_x
  output->quaternion_x = input->quaternion_x;
  // quaternion_y
  output->quaternion_y = input->quaternion_y;
  // quaternion_z
  output->quaternion_z = input->quaternion_z;
  // rotation_matrix_0
  output->rotation_matrix_0 = input->rotation_matrix_0;
  // rotation_matrix_1
  output->rotation_matrix_1 = input->rotation_matrix_1;
  // rotation_matrix_2
  output->rotation_matrix_2 = input->rotation_matrix_2;
  // rotation_matrix_3
  output->rotation_matrix_3 = input->rotation_matrix_3;
  // rotation_matrix_4
  output->rotation_matrix_4 = input->rotation_matrix_4;
  // rotation_matrix_5
  output->rotation_matrix_5 = input->rotation_matrix_5;
  // rotation_matrix_6
  output->rotation_matrix_6 = input->rotation_matrix_6;
  // rotation_matrix_7
  output->rotation_matrix_7 = input->rotation_matrix_7;
  // rotation_matrix_8
  output->rotation_matrix_8 = input->rotation_matrix_8;
  // declination
  output->declination = input->declination;
  // depth
  output->depth = input->depth;
  // fom_ins
  output->fom_ins = input->fom_ins;
  // lat_long_is_valid
  output->lat_long_is_valid = input->lat_long_is_valid;
  // course_over_ground
  output->course_over_ground = input->course_over_ground;
  // temperature
  output->temperature = input->temperature;
  // pressure
  output->pressure = input->pressure;
  // altitude
  output->altitude = input->altitude;
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // position_frame_x
  output->position_frame_x = input->position_frame_x;
  // position_frame_y
  output->position_frame_y = input->position_frame_y;
  // position_frame_z
  output->position_frame_z = input->position_frame_z;
  // velocity_ned_x
  output->velocity_ned_x = input->velocity_ned_x;
  // velocity_ned_y
  output->velocity_ned_y = input->velocity_ned_y;
  // velocity_ned_z
  output->velocity_ned_z = input->velocity_ned_z;
  // velocity_nucleus_x
  output->velocity_nucleus_x = input->velocity_nucleus_x;
  // velocity_nucleus_y
  output->velocity_nucleus_y = input->velocity_nucleus_y;
  // velocity_nucleus_z
  output->velocity_nucleus_z = input->velocity_nucleus_z;
  // speed_over_ground
  output->speed_over_ground = input->speed_over_ground;
  // turn_rate_x
  output->turn_rate_x = input->turn_rate_x;
  // turn_rate_y
  output->turn_rate_y = input->turn_rate_y;
  // turn_rate_z
  output->turn_rate_z = input->turn_rate_z;
  return true;
}

interfaces__msg__INS *
interfaces__msg__INS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__INS * msg = (interfaces__msg__INS *)allocator.allocate(sizeof(interfaces__msg__INS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__INS));
  bool success = interfaces__msg__INS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__INS__destroy(interfaces__msg__INS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__INS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__INS__Sequence__init(interfaces__msg__INS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__INS * data = NULL;

  if (size) {
    data = (interfaces__msg__INS *)allocator.zero_allocate(size, sizeof(interfaces__msg__INS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__INS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__INS__fini(&data[i - 1]);
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
interfaces__msg__INS__Sequence__fini(interfaces__msg__INS__Sequence * array)
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
      interfaces__msg__INS__fini(&array->data[i]);
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

interfaces__msg__INS__Sequence *
interfaces__msg__INS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__INS__Sequence * array = (interfaces__msg__INS__Sequence *)allocator.allocate(sizeof(interfaces__msg__INS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__INS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__INS__Sequence__destroy(interfaces__msg__INS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__INS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__INS__Sequence__are_equal(const interfaces__msg__INS__Sequence * lhs, const interfaces__msg__INS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__INS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__INS__Sequence__copy(
  const interfaces__msg__INS__Sequence * input,
  interfaces__msg__INS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__INS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__INS * data =
      (interfaces__msg__INS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__INS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__INS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__INS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
