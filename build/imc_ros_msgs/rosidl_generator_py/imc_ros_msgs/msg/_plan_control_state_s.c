// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from imc_ros_msgs:msg/PlanControlState.idl
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
#include "imc_ros_msgs/msg/detail/plan_control_state__struct.h"
#include "imc_ros_msgs/msg/detail/plan_control_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool imc_ros_msgs__msg__plan_control_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("imc_ros_msgs.msg._plan_control_state.PlanControlState", full_classname_dest, 53) == 0);
  }
  imc_ros_msgs__msg__PlanControlState * ros_message = _ros_message;
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // plan_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->plan_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // plan_eta
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_eta");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plan_eta = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // plan_progress
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_progress");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->plan_progress = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // man_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "man_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->man_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // man_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "man_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->man_type = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // man_eta
    PyObject * field = PyObject_GetAttrString(_pymsg, "man_eta");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->man_eta = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // last_outcome
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_outcome");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_outcome = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * imc_ros_msgs__msg__plan_control_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlanControlState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("imc_ros_msgs.msg._plan_control_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlanControlState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  imc_ros_msgs__msg__PlanControlState * ros_message = (imc_ros_msgs__msg__PlanControlState *)raw_ros_message;
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->plan_id.data,
      strlen(ros_message->plan_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_eta
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->plan_eta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_eta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_progress
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->plan_progress);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_progress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // man_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->man_id.data,
      strlen(ros_message->man_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "man_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // man_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->man_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "man_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // man_eta
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->man_eta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "man_eta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_outcome
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->last_outcome);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_outcome", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
