// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/BottomTrack.idl
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
#include "interfaces/msg/detail/bottom_track__struct.h"
#include "interfaces/msg/detail/bottom_track__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__bottom_track__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("interfaces.msg._bottom_track.BottomTrack", full_classname_dest, 40) == 0);
  }
  interfaces__msg__BottomTrack * ros_message = _ros_message;
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
  {  // beam_1_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_1_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_1_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beam_2_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_2_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_2_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beam_3_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_3_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_3_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beam_1_distance_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_1_distance_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_1_distance_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beam_2_distance_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_2_distance_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_2_distance_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beam_3_distance_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_3_distance_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_3_distance_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beam_1_fom_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_1_fom_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_1_fom_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beam_2_fom_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_2_fom_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_2_fom_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // beam_3_fom_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_3_fom_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->beam_3_fom_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // x_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->x_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // y_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->y_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // z_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->z_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // x_fom_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_fom_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->x_fom_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // y_fom_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_fom_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->y_fom_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // z_fom_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_fom_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->z_fom_valid = (Py_True == field);
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
  {  // velocity_beam_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_beam_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_beam_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_beam_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_beam_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_beam_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_beam_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_beam_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_beam_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_beam_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_beam_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_beam_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_beam_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_beam_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_beam_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_beam_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_beam_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_beam_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fom_beam_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "fom_beam_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fom_beam_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fom_beam_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "fom_beam_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fom_beam_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fom_beam_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "fom_beam_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fom_beam_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_beam_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_beam_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_beam_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_beam_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_beam_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_beam_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_beam_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_beam_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_beam_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_vel_beam_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_vel_beam_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_vel_beam_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_vel_beam_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_vel_beam_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_vel_beam_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_vel_beam_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_vel_beam_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_vel_beam_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fom_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "fom_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fom_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fom_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "fom_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fom_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fom_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "fom_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fom_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dt_xyz
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_xyz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_xyz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_vel_xyz
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_vel_xyz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_vel_xyz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__bottom_track__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BottomTrack */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._bottom_track");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BottomTrack");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__BottomTrack * ros_message = (interfaces__msg__BottomTrack *)raw_ros_message;
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
  {  // beam_1_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_1_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_1_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_2_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_2_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_2_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_3_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_3_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_3_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_1_distance_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_1_distance_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_1_distance_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_2_distance_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_2_distance_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_2_distance_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_3_distance_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_3_distance_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_3_distance_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_1_fom_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_1_fom_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_1_fom_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_2_fom_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_2_fom_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_2_fom_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_3_fom_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->beam_3_fom_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_3_fom_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->x_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->y_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->z_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_fom_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->x_fom_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_fom_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_fom_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->y_fom_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_fom_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_fom_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->z_fom_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_fom_valid", field);
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
  {  // velocity_beam_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_beam_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_beam_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_beam_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_beam_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_beam_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_beam_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_beam_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_beam_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_beam_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_beam_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_beam_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_beam_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_beam_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_beam_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_beam_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_beam_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_beam_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fom_beam_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fom_beam_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fom_beam_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fom_beam_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fom_beam_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fom_beam_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fom_beam_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fom_beam_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fom_beam_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_beam_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_beam_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_beam_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_beam_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_beam_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_beam_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_beam_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_beam_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_beam_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_vel_beam_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_vel_beam_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_vel_beam_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_vel_beam_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_vel_beam_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_vel_beam_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_vel_beam_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_vel_beam_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_vel_beam_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fom_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fom_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fom_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fom_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fom_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fom_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fom_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fom_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fom_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dt_xyz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_xyz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_xyz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_vel_xyz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_vel_xyz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_vel_xyz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
