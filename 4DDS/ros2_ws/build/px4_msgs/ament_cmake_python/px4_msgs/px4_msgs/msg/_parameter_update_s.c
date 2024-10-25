// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/ParameterUpdate.idl
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
#include "px4_msgs/msg/detail/parameter_update__struct.h"
#include "px4_msgs/msg/detail/parameter_update__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__parameter_update__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("px4_msgs.msg._parameter_update.ParameterUpdate", full_classname_dest, 46) == 0);
  }
  px4_msgs__msg__ParameterUpdate * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // instance
    PyObject * field = PyObject_GetAttrString(_pymsg, "instance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->instance = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // get_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "get_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->get_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // find_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "find_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->find_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // export_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "export_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->export_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // active
    PyObject * field = PyObject_GetAttrString(_pymsg, "active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // changed
    PyObject * field = PyObject_GetAttrString(_pymsg, "changed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->changed = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // custom_default
    PyObject * field = PyObject_GetAttrString(_pymsg, "custom_default");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->custom_default = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__parameter_update__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ParameterUpdate */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._parameter_update");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParameterUpdate");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__ParameterUpdate * ros_message = (px4_msgs__msg__ParameterUpdate *)raw_ros_message;
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
  {  // instance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->instance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "instance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // get_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->get_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "get_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->set_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // find_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->find_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "find_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // export_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->export_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "export_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // changed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->changed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "changed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // custom_default
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->custom_default);
    {
      int rc = PyObject_SetAttrString(_pymessage, "custom_default", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
