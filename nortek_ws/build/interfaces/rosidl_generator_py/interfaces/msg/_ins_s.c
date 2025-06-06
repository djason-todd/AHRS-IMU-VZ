// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:msg/INS.idl
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
#include "interfaces/msg/detail/ins__struct.h"
#include "interfaces/msg/detail/ins__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces__msg__ins__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("interfaces.msg._ins.INS", full_classname_dest, 23) == 0);
  }
  interfaces__msg__INS * ros_message = _ros_message;
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
  {  // serial_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->serial_number = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // operation_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "operation_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->operation_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fom_ahrs
    PyObject * field = PyObject_GetAttrString(_pymsg, "fom_ahrs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fom_ahrs = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fom_fc1
    PyObject * field = PyObject_GetAttrString(_pymsg, "fom_fc1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fom_fc1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // quaternion_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "quaternion_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->quaternion_w = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // quaternion_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "quaternion_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->quaternion_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // quaternion_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "quaternion_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->quaternion_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // quaternion_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "quaternion_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->quaternion_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_matrix_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_matrix_0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_matrix_0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_matrix_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_matrix_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_matrix_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_matrix_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_matrix_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_matrix_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_matrix_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_matrix_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_matrix_3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_matrix_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_matrix_4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_matrix_4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_matrix_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_matrix_5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_matrix_5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_matrix_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_matrix_6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_matrix_6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_matrix_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_matrix_7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_matrix_7 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotation_matrix_8
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotation_matrix_8");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotation_matrix_8 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // declination
    PyObject * field = PyObject_GetAttrString(_pymsg, "declination");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->declination = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // depth
    PyObject * field = PyObject_GetAttrString(_pymsg, "depth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->depth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fom_ins
    PyObject * field = PyObject_GetAttrString(_pymsg, "fom_ins");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fom_ins = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat_long_is_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_long_is_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lat_long_is_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // course_over_ground
    PyObject * field = PyObject_GetAttrString(_pymsg, "course_over_ground");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->course_over_ground = (float)PyFloat_AS_DOUBLE(field);
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
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_frame_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_frame_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_frame_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_frame_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_frame_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_frame_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_frame_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_frame_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_frame_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_ned_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_ned_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_ned_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_ned_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_ned_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_ned_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_ned_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_ned_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_ned_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_nucleus_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_nucleus_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_nucleus_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_nucleus_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_nucleus_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_nucleus_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_nucleus_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_nucleus_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_nucleus_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_over_ground
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_over_ground");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_over_ground = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_rate_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_rate_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turn_rate_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_rate_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_rate_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turn_rate_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_rate_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_rate_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turn_rate_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__msg__ins__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of INS */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.msg._ins");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "INS");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__msg__INS * ros_message = (interfaces__msg__INS *)raw_ros_message;
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
  {  // operation_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->operation_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "operation_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fom_ahrs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fom_ahrs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fom_ahrs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fom_fc1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fom_fc1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fom_fc1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quaternion_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->quaternion_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quaternion_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quaternion_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->quaternion_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quaternion_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quaternion_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->quaternion_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quaternion_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quaternion_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->quaternion_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quaternion_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_matrix_0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_matrix_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_matrix_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_matrix_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_matrix_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_matrix_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_matrix_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_matrix_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_matrix_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_matrix_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_matrix_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_matrix_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_matrix_4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_matrix_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_matrix_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_matrix_5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_matrix_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_matrix_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_matrix_6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_matrix_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_matrix_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_matrix_7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_matrix_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_matrix_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotation_matrix_8
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotation_matrix_8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotation_matrix_8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // declination
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->declination);
    {
      int rc = PyObject_SetAttrString(_pymessage, "declination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // depth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->depth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "depth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fom_ins
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fom_ins);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fom_ins", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_long_is_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lat_long_is_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_long_is_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // course_over_ground
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->course_over_ground);
    {
      int rc = PyObject_SetAttrString(_pymessage, "course_over_ground", field);
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
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_frame_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_frame_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_frame_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_frame_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_frame_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_frame_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_frame_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_frame_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_frame_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_ned_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_ned_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_ned_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_ned_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_ned_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_ned_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_ned_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_ned_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_ned_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_nucleus_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_nucleus_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_nucleus_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_nucleus_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_nucleus_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_nucleus_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_nucleus_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_nucleus_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_nucleus_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_over_ground
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_over_ground);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_over_ground", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_rate_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turn_rate_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_rate_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_rate_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turn_rate_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_rate_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_rate_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turn_rate_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_rate_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
