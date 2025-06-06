// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/IMU.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `system_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
interfaces__msg__IMU__init(interfaces__msg__IMU * msg)
{
  if (!msg) {
    return false;
  }
  // system_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->system_timestamp)) {
    interfaces__msg__IMU__fini(msg);
    return false;
  }
  // posix_time
  // timestamp
  // microseconds
  // is_valid
  // has_data_path_overrun
  // has_flash_update_failure
  // has_spi_com_error
  // has_low_voltage
  // has_sensor_failure
  // has_memory_failure
  // has_gyro_1_failure
  // has_gyro_2_failure
  // has_accelerometer_failure
  // accelerometer_x
  // accelerometer_y
  // accelerometer_z
  // gyro_x
  // gyro_y
  // gyro_z
  // temperature
  return true;
}

void
interfaces__msg__IMU__fini(interfaces__msg__IMU * msg)
{
  if (!msg) {
    return;
  }
  // system_timestamp
  builtin_interfaces__msg__Time__fini(&msg->system_timestamp);
  // posix_time
  // timestamp
  // microseconds
  // is_valid
  // has_data_path_overrun
  // has_flash_update_failure
  // has_spi_com_error
  // has_low_voltage
  // has_sensor_failure
  // has_memory_failure
  // has_gyro_1_failure
  // has_gyro_2_failure
  // has_accelerometer_failure
  // accelerometer_x
  // accelerometer_y
  // accelerometer_z
  // gyro_x
  // gyro_y
  // gyro_z
  // temperature
}

bool
interfaces__msg__IMU__are_equal(const interfaces__msg__IMU * lhs, const interfaces__msg__IMU * rhs)
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
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  // has_data_path_overrun
  if (lhs->has_data_path_overrun != rhs->has_data_path_overrun) {
    return false;
  }
  // has_flash_update_failure
  if (lhs->has_flash_update_failure != rhs->has_flash_update_failure) {
    return false;
  }
  // has_spi_com_error
  if (lhs->has_spi_com_error != rhs->has_spi_com_error) {
    return false;
  }
  // has_low_voltage
  if (lhs->has_low_voltage != rhs->has_low_voltage) {
    return false;
  }
  // has_sensor_failure
  if (lhs->has_sensor_failure != rhs->has_sensor_failure) {
    return false;
  }
  // has_memory_failure
  if (lhs->has_memory_failure != rhs->has_memory_failure) {
    return false;
  }
  // has_gyro_1_failure
  if (lhs->has_gyro_1_failure != rhs->has_gyro_1_failure) {
    return false;
  }
  // has_gyro_2_failure
  if (lhs->has_gyro_2_failure != rhs->has_gyro_2_failure) {
    return false;
  }
  // has_accelerometer_failure
  if (lhs->has_accelerometer_failure != rhs->has_accelerometer_failure) {
    return false;
  }
  // accelerometer_x
  if (lhs->accelerometer_x != rhs->accelerometer_x) {
    return false;
  }
  // accelerometer_y
  if (lhs->accelerometer_y != rhs->accelerometer_y) {
    return false;
  }
  // accelerometer_z
  if (lhs->accelerometer_z != rhs->accelerometer_z) {
    return false;
  }
  // gyro_x
  if (lhs->gyro_x != rhs->gyro_x) {
    return false;
  }
  // gyro_y
  if (lhs->gyro_y != rhs->gyro_y) {
    return false;
  }
  // gyro_z
  if (lhs->gyro_z != rhs->gyro_z) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  return true;
}

bool
interfaces__msg__IMU__copy(
  const interfaces__msg__IMU * input,
  interfaces__msg__IMU * output)
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
  // is_valid
  output->is_valid = input->is_valid;
  // has_data_path_overrun
  output->has_data_path_overrun = input->has_data_path_overrun;
  // has_flash_update_failure
  output->has_flash_update_failure = input->has_flash_update_failure;
  // has_spi_com_error
  output->has_spi_com_error = input->has_spi_com_error;
  // has_low_voltage
  output->has_low_voltage = input->has_low_voltage;
  // has_sensor_failure
  output->has_sensor_failure = input->has_sensor_failure;
  // has_memory_failure
  output->has_memory_failure = input->has_memory_failure;
  // has_gyro_1_failure
  output->has_gyro_1_failure = input->has_gyro_1_failure;
  // has_gyro_2_failure
  output->has_gyro_2_failure = input->has_gyro_2_failure;
  // has_accelerometer_failure
  output->has_accelerometer_failure = input->has_accelerometer_failure;
  // accelerometer_x
  output->accelerometer_x = input->accelerometer_x;
  // accelerometer_y
  output->accelerometer_y = input->accelerometer_y;
  // accelerometer_z
  output->accelerometer_z = input->accelerometer_z;
  // gyro_x
  output->gyro_x = input->gyro_x;
  // gyro_y
  output->gyro_y = input->gyro_y;
  // gyro_z
  output->gyro_z = input->gyro_z;
  // temperature
  output->temperature = input->temperature;
  return true;
}

interfaces__msg__IMU *
interfaces__msg__IMU__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__IMU * msg = (interfaces__msg__IMU *)allocator.allocate(sizeof(interfaces__msg__IMU), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__IMU));
  bool success = interfaces__msg__IMU__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__IMU__destroy(interfaces__msg__IMU * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__IMU__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__IMU__Sequence__init(interfaces__msg__IMU__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__IMU * data = NULL;

  if (size) {
    data = (interfaces__msg__IMU *)allocator.zero_allocate(size, sizeof(interfaces__msg__IMU), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__IMU__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__IMU__fini(&data[i - 1]);
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
interfaces__msg__IMU__Sequence__fini(interfaces__msg__IMU__Sequence * array)
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
      interfaces__msg__IMU__fini(&array->data[i]);
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

interfaces__msg__IMU__Sequence *
interfaces__msg__IMU__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__IMU__Sequence * array = (interfaces__msg__IMU__Sequence *)allocator.allocate(sizeof(interfaces__msg__IMU__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__IMU__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__IMU__Sequence__destroy(interfaces__msg__IMU__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__IMU__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__IMU__Sequence__are_equal(const interfaces__msg__IMU__Sequence * lhs, const interfaces__msg__IMU__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__IMU__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__IMU__Sequence__copy(
  const interfaces__msg__IMU__Sequence * input,
  interfaces__msg__IMU__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__IMU);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__IMU * data =
      (interfaces__msg__IMU *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__IMU__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__IMU__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__IMU__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
