// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/FieldCalibration.idl
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
#include "interfaces/msg/detail/field_calibration__struct.h"
#include "interfaces/msg/detail/field_calibration__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__field_calibration__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("interfaces.msg._field_calibration.FieldCalibration", full_classname_dest, 50) == 0);
  }
  interfaces__msg__FieldCalibration * ros_message = _ros_message;
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
  {  // points_used_in_estimation
    PyObject * field = PyObject_GetAttrString(_pymsg, "points_used_in_estimation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->points_used_in_estimation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hard_iron_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "hard_iron_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hard_iron_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hard_iron_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "hard_iron_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hard_iron_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hard_iron_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "hard_iron_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hard_iron_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_axis_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_axis_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_axis_0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_axis_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_axis_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_axis_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_axis_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_axis_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_axis_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_axis_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_axis_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_axis_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_axis_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_axis_4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_axis_4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_axis_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_axis_5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_axis_5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_axis_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_axis_6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_axis_6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_axis_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_axis_7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_axis_7 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_axis_8
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_axis_8");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_axis_8 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // new_point_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_point_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->new_point_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // new_point_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_point_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->new_point_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // new_point_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_point_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->new_point_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fom_field_calibration
    PyObject * field = PyObject_GetAttrString(_pymsg, "fom_field_calibration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fom_field_calibration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // coverage
    PyObject * field = PyObject_GetAttrString(_pymsg, "coverage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->coverage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__field_calibration__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FieldCalibration */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._field_calibration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FieldCalibration");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__FieldCalibration * ros_message = (interfaces__msg__FieldCalibration *)raw_ros_message;
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
  {  // points_used_in_estimation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->points_used_in_estimation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "points_used_in_estimation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hard_iron_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hard_iron_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hard_iron_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hard_iron_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hard_iron_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hard_iron_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hard_iron_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hard_iron_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hard_iron_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_axis_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_axis_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_axis_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_axis_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_axis_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_axis_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_axis_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_axis_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_axis_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_axis_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_axis_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_axis_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_axis_4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_axis_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_axis_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_axis_5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_axis_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_axis_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_axis_6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_axis_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_axis_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_axis_7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_axis_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_axis_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_axis_8
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_axis_8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_axis_8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // new_point_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->new_point_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_point_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // new_point_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->new_point_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_point_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // new_point_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->new_point_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_point_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fom_field_calibration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fom_field_calibration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fom_field_calibration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coverage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->coverage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coverage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
