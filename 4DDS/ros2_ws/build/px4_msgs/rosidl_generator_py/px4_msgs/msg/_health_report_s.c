// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/HealthReport.idl
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
#include "px4_msgs/msg/detail/health_report__struct.h"
#include "px4_msgs/msg/detail/health_report__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__health_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._health_report.HealthReport", full_classname_dest, 40) == 0);
  }
  px4_msgs__msg__HealthReport * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // can_arm_mode_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_arm_mode_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_arm_mode_flags = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // can_run_mode_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_run_mode_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_run_mode_flags = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // health_is_present_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "health_is_present_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->health_is_present_flags = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // health_warning_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "health_warning_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->health_warning_flags = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // health_error_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "health_error_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->health_error_flags = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // arming_check_warning_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_check_warning_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->arming_check_warning_flags = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // arming_check_error_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_check_error_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->arming_check_error_flags = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__health_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HealthReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._health_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HealthReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__HealthReport * ros_message = (px4_msgs__msg__HealthReport *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_arm_mode_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->can_arm_mode_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_arm_mode_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_run_mode_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->can_run_mode_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_run_mode_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health_is_present_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->health_is_present_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health_is_present_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health_warning_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->health_warning_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health_warning_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health_error_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->health_error_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health_error_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_check_warning_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->arming_check_warning_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_check_warning_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_check_error_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->arming_check_error_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_check_error_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
