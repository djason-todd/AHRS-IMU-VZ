// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/IMU.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "interfaces/msg/detail/imu__struct.h"
#include "interfaces/msg/detail/imu__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__imu__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[24];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interfaces.msg._imu.IMU", full_classname_dest, 23) == 0);
  }
  interfaces__msg__IMU * ros_message = _ros_message;
  {  // system_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->system_timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // posix_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "posix_time");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->posix_time = (Py_True == field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // microseconds
    PyObject * field = PyObject_GetAttrString(_pymsg, "microseconds");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->microseconds = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_data_path_overrun
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_data_path_overrun");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_data_path_overrun = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_flash_update_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_flash_update_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_flash_update_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_spi_com_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_spi_com_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_spi_com_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_low_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_low_voltage");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_low_voltage = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_sensor_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_sensor_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_sensor_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_memory_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_memory_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_memory_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_gyro_1_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_gyro_1_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_gyro_1_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_gyro_2_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_gyro_2_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_gyro_2_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_accelerometer_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_accelerometer_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_accelerometer_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accelerometer_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerometer_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accelerometer_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accelerometer_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerometer_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accelerometer_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accelerometer_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "accelerometer_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accelerometer_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__imu__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IMU */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._imu");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IMU");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__IMU * ros_message = (interfaces__msg__IMU *)raw_ros_message;
  {  // system_timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->system_timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posix_time
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->posix_time ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posix_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // microseconds
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->microseconds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "microseconds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_data_path_overrun
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_data_path_overrun ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_data_path_overrun", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_flash_update_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_flash_update_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_flash_update_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_spi_com_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_spi_com_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_spi_com_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_low_voltage
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_low_voltage ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_low_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_sensor_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_sensor_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_sensor_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_memory_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_memory_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_memory_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_gyro_1_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_gyro_1_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_gyro_1_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_gyro_2_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_gyro_2_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_gyro_2_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_accelerometer_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_accelerometer_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_accelerometer_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerometer_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accelerometer_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerometer_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerometer_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accelerometer_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerometer_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accelerometer_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accelerometer_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accelerometer_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
