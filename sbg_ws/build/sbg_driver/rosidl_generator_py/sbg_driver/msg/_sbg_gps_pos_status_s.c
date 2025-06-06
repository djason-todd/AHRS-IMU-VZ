// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sbg_driver:msg/SbgGpsPosStatus.idl
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
#include "sbg_driver/msg/detail/sbg_gps_pos_status__struct.h"
#include "sbg_driver/msg/detail/sbg_gps_pos_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sbg_driver__msg__sbg_gps_pos_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("sbg_driver.msg._sbg_gps_pos_status.SbgGpsPosStatus", full_classname_dest, 50) == 0);
  }
  sbg_driver__msg__SbgGpsPosStatus * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ifm
    PyObject * field = PyObject_GetAttrString(_pymsg, "ifm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ifm = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spoofing
    PyObject * field = PyObject_GetAttrString(_pymsg, "spoofing");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spoofing = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // osnma
    PyObject * field = PyObject_GetAttrString(_pymsg, "osnma");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->osnma = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_l1_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_l1_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_l1_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_l2_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_l2_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_l2_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_l5_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_l5_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_l5_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // glo_l1_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "glo_l1_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->glo_l1_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // glo_l2_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "glo_l2_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->glo_l2_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // glo_l3_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "glo_l3_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->glo_l3_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gal_e1_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gal_e1_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gal_e1_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gal_e5a_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gal_e5a_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gal_e5a_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gal_e5b_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gal_e5b_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gal_e5b_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gal_e5alt_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gal_e5alt_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gal_e5alt_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gal_e6_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "gal_e6_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gal_e6_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bds_b1_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "bds_b1_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bds_b1_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bds_b2_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "bds_b2_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bds_b2_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bds_b3_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "bds_b3_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bds_b3_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // qzss_l1_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "qzss_l1_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->qzss_l1_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // qzss_l2_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "qzss_l2_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->qzss_l2_used = (Py_True == field);
    Py_DECREF(field);
  }
  {  // qzss_l5_used
    PyObject * field = PyObject_GetAttrString(_pymsg, "qzss_l5_used");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->qzss_l5_used = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sbg_driver__msg__sbg_gps_pos_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgGpsPosStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sbg_driver.msg._sbg_gps_pos_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgGpsPosStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sbg_driver__msg__SbgGpsPosStatus * ros_message = (sbg_driver__msg__SbgGpsPosStatus *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ifm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ifm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ifm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spoofing
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spoofing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spoofing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // osnma
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->osnma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "osnma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_l1_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_l1_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_l1_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_l2_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_l2_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_l2_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_l5_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_l5_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_l5_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // glo_l1_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->glo_l1_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "glo_l1_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // glo_l2_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->glo_l2_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "glo_l2_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // glo_l3_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->glo_l3_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "glo_l3_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gal_e1_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gal_e1_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gal_e1_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gal_e5a_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gal_e5a_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gal_e5a_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gal_e5b_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gal_e5b_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gal_e5b_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gal_e5alt_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gal_e5alt_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gal_e5alt_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gal_e6_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gal_e6_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gal_e6_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bds_b1_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bds_b1_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bds_b1_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bds_b2_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bds_b2_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bds_b2_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bds_b3_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bds_b3_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bds_b3_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qzss_l1_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->qzss_l1_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qzss_l1_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qzss_l2_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->qzss_l2_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qzss_l2_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qzss_l5_used
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->qzss_l5_used ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qzss_l5_used", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
