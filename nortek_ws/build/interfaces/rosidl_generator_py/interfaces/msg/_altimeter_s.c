// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/Altimeter.idl
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
#include "interfaces/msg/detail/altimeter__struct.h"
#include "interfaces/msg/detail/altimeter__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__altimeter__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("interfaces.msg._altimeter.Altimeter", full_classname_dest, 35) == 0);
  }
  interfaces__msg__Altimeter * ros_message = _ros_message;
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
  {  // altimeter_distance_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "altimeter_distance_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->altimeter_distance_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // altimeter_quality_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "altimeter_quality_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->altimeter_quality_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pressure_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "pressure_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pressure_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // temperature_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->temperature_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // serial_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->serial_number = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sound_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "sound_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sound_speed = (float)PyFloat_AS_DOUBLE(field);
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
  {  // pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altimeter_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "altimeter_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altimeter_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altimeter_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "altimeter_quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->altimeter_quality = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__altimeter__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Altimeter */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._altimeter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Altimeter");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__Altimeter * ros_message = (interfaces__msg__Altimeter *)raw_ros_message;
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
  {  // altimeter_distance_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->altimeter_distance_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altimeter_distance_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altimeter_quality_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->altimeter_quality_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altimeter_quality_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pressure_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pressure_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pressure_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->temperature_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serial_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->serial_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serial_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sound_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sound_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sound_speed", field);
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
  {  // pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altimeter_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altimeter_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altimeter_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altimeter_quality
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->altimeter_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altimeter_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
