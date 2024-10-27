// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/RadioStatus.idl
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
#include "px4_msgs/msg/detail/radio_status__struct.h"
#include "px4_msgs/msg/detail/radio_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__radio_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("px4_msgs.msg._radio_status.RadioStatus", full_classname_dest, 38) == 0);
  }
  px4_msgs__msg__RadioStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // rssi
    PyObject * field = PyObject_GetAttrString(_pymsg, "rssi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rssi = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remote_rssi
    PyObject * field = PyObject_GetAttrString(_pymsg, "remote_rssi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remote_rssi = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // txbuf
    PyObject * field = PyObject_GetAttrString(_pymsg, "txbuf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->txbuf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // noise
    PyObject * field = PyObject_GetAttrString(_pymsg, "noise");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->noise = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remote_noise
    PyObject * field = PyObject_GetAttrString(_pymsg, "remote_noise");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remote_noise = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rxerrors
    PyObject * field = PyObject_GetAttrString(_pymsg, "rxerrors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rxerrors = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fix
    PyObject * field = PyObject_GetAttrString(_pymsg, "fix");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fix = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__radio_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadioStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._radio_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadioStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__RadioStatus * ros_message = (px4_msgs__msg__RadioStatus *)raw_ros_message;
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
  {  // rssi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rssi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rssi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remote_rssi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remote_rssi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remote_rssi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // txbuf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->txbuf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "txbuf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // noise
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->noise);
    {
      int rc = PyObject_SetAttrString(_pymessage, "noise", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remote_noise
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remote_noise);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remote_noise", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rxerrors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rxerrors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rxerrors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fix
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fix);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
