// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from imc_ros_msgs:msg/VehicleState.idl
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
#include "imc_ros_msgs/msg/detail/vehicle_state__struct.h"
#include "imc_ros_msgs/msg/detail/vehicle_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool imc_ros_msgs__msg__vehicle_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("imc_ros_msgs.msg._vehicle_state.VehicleState", full_classname_dest, 44) == 0);
  }
  imc_ros_msgs__msg__VehicleState * ros_message = _ros_message;
  {  // op_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "op_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->op_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // error_ents
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_ents");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->error_ents, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // maneuver_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuver_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneuver_type = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // maneuver_stime
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuver_stime");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->maneuver_stime = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // maneuver_eta
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuver_eta");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneuver_eta = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // control_loops
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_loops");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_loops = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // last_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_error");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->last_error, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // last_error_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_error_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_error_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * imc_ros_msgs__msg__vehicle_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("imc_ros_msgs.msg._vehicle_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  imc_ros_msgs__msg__VehicleState * ros_message = (imc_ros_msgs__msg__VehicleState *)raw_ros_message;
  {  // op_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->op_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "op_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_ents
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->error_ents.data,
      strlen(ros_message->error_ents.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_ents", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuver_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->maneuver_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuver_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuver_stime
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->maneuver_stime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuver_stime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuver_eta
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->maneuver_eta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuver_eta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_loops
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->control_loops);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_loops", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_error
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->last_error.data,
      strlen(ros_message->last_error.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_error_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_error_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_error_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
