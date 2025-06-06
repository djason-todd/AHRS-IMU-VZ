// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sbg_driver:msg/SbgUtcTime.idl
// generated code does not contain a copyright notice
#include "sbg_driver/msg/detail/sbg_utc_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `clock_status`
#include "sbg_driver/msg/detail/sbg_utc_time_status__functions.h"

bool
sbg_driver__msg__SbgUtcTime__init(sbg_driver__msg__SbgUtcTime * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sbg_driver__msg__SbgUtcTime__fini(msg);
    return false;
  }
  // time_stamp
  // clock_status
  if (!sbg_driver__msg__SbgUtcTimeStatus__init(&msg->clock_status)) {
    sbg_driver__msg__SbgUtcTime__fini(msg);
    return false;
  }
  // year
  // month
  // day
  // hour
  // min
  // sec
  // nanosec
  // gps_tow
  // clk_bias_std
  // clk_sf_error_std
  // clk_residual_error
  return true;
}

void
sbg_driver__msg__SbgUtcTime__fini(sbg_driver__msg__SbgUtcTime * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time_stamp
  // clock_status
  sbg_driver__msg__SbgUtcTimeStatus__fini(&msg->clock_status);
  // year
  // month
  // day
  // hour
  // min
  // sec
  // nanosec
  // gps_tow
  // clk_bias_std
  // clk_sf_error_std
  // clk_residual_error
}

bool
sbg_driver__msg__SbgUtcTime__are_equal(const sbg_driver__msg__SbgUtcTime * lhs, const sbg_driver__msg__SbgUtcTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  // clock_status
  if (!sbg_driver__msg__SbgUtcTimeStatus__are_equal(
      &(lhs->clock_status), &(rhs->clock_status)))
  {
    return false;
  }
  // year
  if (lhs->year != rhs->year) {
    return false;
  }
  // month
  if (lhs->month != rhs->month) {
    return false;
  }
  // day
  if (lhs->day != rhs->day) {
    return false;
  }
  // hour
  if (lhs->hour != rhs->hour) {
    return false;
  }
  // min
  if (lhs->min != rhs->min) {
    return false;
  }
  // sec
  if (lhs->sec != rhs->sec) {
    return false;
  }
  // nanosec
  if (lhs->nanosec != rhs->nanosec) {
    return false;
  }
  // gps_tow
  if (lhs->gps_tow != rhs->gps_tow) {
    return false;
  }
  // clk_bias_std
  if (lhs->clk_bias_std != rhs->clk_bias_std) {
    return false;
  }
  // clk_sf_error_std
  if (lhs->clk_sf_error_std != rhs->clk_sf_error_std) {
    return false;
  }
  // clk_residual_error
  if (lhs->clk_residual_error != rhs->clk_residual_error) {
    return false;
  }
  return true;
}

bool
sbg_driver__msg__SbgUtcTime__copy(
  const sbg_driver__msg__SbgUtcTime * input,
  sbg_driver__msg__SbgUtcTime * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // time_stamp
  output->time_stamp = input->time_stamp;
  // clock_status
  if (!sbg_driver__msg__SbgUtcTimeStatus__copy(
      &(input->clock_status), &(output->clock_status)))
  {
    return false;
  }
  // year
  output->year = input->year;
  // month
  output->month = input->month;
  // day
  output->day = input->day;
  // hour
  output->hour = input->hour;
  // min
  output->min = input->min;
  // sec
  output->sec = input->sec;
  // nanosec
  output->nanosec = input->nanosec;
  // gps_tow
  output->gps_tow = input->gps_tow;
  // clk_bias_std
  output->clk_bias_std = input->clk_bias_std;
  // clk_sf_error_std
  output->clk_sf_error_std = input->clk_sf_error_std;
  // clk_residual_error
  output->clk_residual_error = input->clk_residual_error;
  return true;
}

sbg_driver__msg__SbgUtcTime *
sbg_driver__msg__SbgUtcTime__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgUtcTime * msg = (sbg_driver__msg__SbgUtcTime *)allocator.allocate(sizeof(sbg_driver__msg__SbgUtcTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sbg_driver__msg__SbgUtcTime));
  bool success = sbg_driver__msg__SbgUtcTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sbg_driver__msg__SbgUtcTime__destroy(sbg_driver__msg__SbgUtcTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sbg_driver__msg__SbgUtcTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sbg_driver__msg__SbgUtcTime__Sequence__init(sbg_driver__msg__SbgUtcTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgUtcTime * data = NULL;

  if (size) {
    data = (sbg_driver__msg__SbgUtcTime *)allocator.zero_allocate(size, sizeof(sbg_driver__msg__SbgUtcTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sbg_driver__msg__SbgUtcTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sbg_driver__msg__SbgUtcTime__fini(&data[i - 1]);
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
sbg_driver__msg__SbgUtcTime__Sequence__fini(sbg_driver__msg__SbgUtcTime__Sequence * array)
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
      sbg_driver__msg__SbgUtcTime__fini(&array->data[i]);
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

sbg_driver__msg__SbgUtcTime__Sequence *
sbg_driver__msg__SbgUtcTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sbg_driver__msg__SbgUtcTime__Sequence * array = (sbg_driver__msg__SbgUtcTime__Sequence *)allocator.allocate(sizeof(sbg_driver__msg__SbgUtcTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sbg_driver__msg__SbgUtcTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sbg_driver__msg__SbgUtcTime__Sequence__destroy(sbg_driver__msg__SbgUtcTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sbg_driver__msg__SbgUtcTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sbg_driver__msg__SbgUtcTime__Sequence__are_equal(const sbg_driver__msg__SbgUtcTime__Sequence * lhs, const sbg_driver__msg__SbgUtcTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sbg_driver__msg__SbgUtcTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sbg_driver__msg__SbgUtcTime__Sequence__copy(
  const sbg_driver__msg__SbgUtcTime__Sequence * input,
  sbg_driver__msg__SbgUtcTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sbg_driver__msg__SbgUtcTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sbg_driver__msg__SbgUtcTime * data =
      (sbg_driver__msg__SbgUtcTime *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sbg_driver__msg__SbgUtcTime__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sbg_driver__msg__SbgUtcTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sbg_driver__msg__SbgUtcTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
