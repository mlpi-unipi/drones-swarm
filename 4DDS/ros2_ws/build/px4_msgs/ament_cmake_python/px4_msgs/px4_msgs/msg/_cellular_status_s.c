// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/CellularStatus.idl
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
#include "px4_msgs/msg/detail/cellular_status__struct.h"
#include "px4_msgs/msg/detail/cellular_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__cellular_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._cellular_status.CellularStatus", full_classname_dest, 44) == 0);
  }
  px4_msgs__msg__CellularStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // failure_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "failure_reason");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failure_reason = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quality = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mcc
    PyObject * field = PyObject_GetAttrString(_pymsg, "mcc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mcc = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mnc
    PyObject * field = PyObject_GetAttrString(_pymsg, "mnc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mnc = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lac
    PyObject * field = PyObject_GetAttrString(_pymsg, "lac");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lac = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__cellular_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CellularStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._cellular_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CellularStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__CellularStatus * ros_message = (px4_msgs__msg__CellularStatus *)raw_ros_message;
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
  {  // failure_reason
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->failure_reason);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failure_reason", field);
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
  {  // quality
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mcc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mcc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mcc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mnc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mnc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mnc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lac
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lac);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lac", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
