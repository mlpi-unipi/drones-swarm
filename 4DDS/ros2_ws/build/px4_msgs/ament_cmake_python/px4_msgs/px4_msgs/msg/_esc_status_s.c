// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EscStatus.idl
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
#include "px4_msgs/msg/detail/esc_status__struct.h"
#include "px4_msgs/msg/detail/esc_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "px4_msgs/msg/detail/esc_report__functions.h"
// end nested array functions include
bool px4_msgs__msg__esc_report__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * px4_msgs__msg__esc_report__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__esc_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("px4_msgs.msg._esc_status.EscStatus", full_classname_dest, 34) == 0);
  }
  px4_msgs__msg__EscStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->counter = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_connectiontype
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_connectiontype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_connectiontype = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_online_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_online_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_online_flags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_armed_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_armed_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_armed_flags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'esc'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 8;
    px4_msgs__msg__EscReport * dest = ros_message->esc;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!px4_msgs__msg__esc_report__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__esc_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EscStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._esc_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EscStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EscStatus * ros_message = (px4_msgs__msg__EscStatus *)raw_ros_message;
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
  {  // counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_connectiontype
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_connectiontype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_connectiontype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_online_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_online_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_online_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_armed_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_armed_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_armed_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc
    PyObject * field = NULL;
    size_t size = 8;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    px4_msgs__msg__EscReport * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->esc[i]);
      PyObject * pyitem = px4_msgs__msg__esc_report__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
