// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fdds_messages:msg/Flocking.idl
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
#include "fdds_messages/msg/detail/flocking__struct.h"
#include "fdds_messages/msg/detail/flocking__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fdds_messages__msg__flocking__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("fdds_messages.msg._flocking.Flocking", full_classname_dest, 36) == 0);
  }
  fdds_messages__msg__Flocking * ros_message = _ros_message;
  {  // cohesion_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "cohesion_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cohesion_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cohesion_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "cohesion_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cohesion_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alignment_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "alignment_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alignment_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alignment_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "alignment_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alignment_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // separation_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "separation_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->separation_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // separation_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "separation_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->separation_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fdds_messages__msg__flocking__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Flocking */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fdds_messages.msg._flocking");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Flocking");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fdds_messages__msg__Flocking * ros_message = (fdds_messages__msg__Flocking *)raw_ros_message;
  {  // cohesion_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cohesion_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cohesion_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cohesion_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cohesion_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cohesion_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alignment_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alignment_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alignment_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alignment_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alignment_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alignment_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // separation_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->separation_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "separation_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // separation_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->separation_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "separation_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
