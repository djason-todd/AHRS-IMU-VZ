// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/Magnetometer.idl
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
#include "interfaces/msg/detail/magnetometer__struct.h"
#include "interfaces/msg/detail/magnetometer__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__magnetometer__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("interfaces.msg._magnetometer.Magnetometer", full_classname_dest, 41) == 0);
  }
  interfaces__msg__Magnetometer * ros_message = _ros_message;
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
  {  // is_compensated_for_hard_iron
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_compensated_for_hard_iron");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_compensated_for_hard_iron = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dvl_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "dvl_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dvl_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dvl_acoustics_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "dvl_acoustics_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dvl_acoustics_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dvl_transmitter_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "dvl_transmitter_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dvl_transmitter_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // magnetometer_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "magnetometer_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->magnetometer_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // magnetometer_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "magnetometer_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->magnetometer_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // magnetometer_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "magnetometer_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->magnetometer_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__magnetometer__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Magnetometer */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._magnetometer");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Magnetometer");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__Magnetometer * ros_message = (interfaces__msg__Magnetometer *)raw_ros_message;
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
  {  // is_compensated_for_hard_iron
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_compensated_for_hard_iron ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_compensated_for_hard_iron", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dvl_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dvl_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dvl_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dvl_acoustics_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dvl_acoustics_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dvl_acoustics_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dvl_transmitter_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dvl_transmitter_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dvl_transmitter_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magnetometer_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->magnetometer_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magnetometer_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magnetometer_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->magnetometer_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magnetometer_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magnetometer_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->magnetometer_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magnetometer_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
