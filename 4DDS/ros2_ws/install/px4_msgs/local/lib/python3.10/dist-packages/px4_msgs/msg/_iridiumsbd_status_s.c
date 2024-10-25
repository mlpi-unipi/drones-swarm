// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/IridiumsbdStatus.idl
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
#include "px4_msgs/msg/detail/iridiumsbd_status__struct.h"
#include "px4_msgs/msg/detail/iridiumsbd_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__iridiumsbd_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("px4_msgs.msg._iridiumsbd_status.IridiumsbdStatus", full_classname_dest, 48) == 0);
  }
  px4_msgs__msg__IridiumsbdStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // last_heartbeat
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_heartbeat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_heartbeat = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // tx_buf_write_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_buf_write_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_buf_write_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_buf_read_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_buf_read_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_buf_read_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_buf_end_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_buf_end_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_buf_end_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // failed_sbd_sessions
    PyObject * field = PyObject_GetAttrString(_pymsg, "failed_sbd_sessions");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failed_sbd_sessions = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // successful_sbd_sessions
    PyObject * field = PyObject_GetAttrString(_pymsg, "successful_sbd_sessions");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->successful_sbd_sessions = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_tx_buf_reset
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_tx_buf_reset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_tx_buf_reset = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // signal_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_quality = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ring_pending
    PyObject * field = PyObject_GetAttrString(_pymsg, "ring_pending");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ring_pending = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tx_buf_write_pending
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_buf_write_pending");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tx_buf_write_pending = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tx_session_pending
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_session_pending");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tx_session_pending = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rx_read_pending
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_read_pending");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rx_read_pending = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rx_session_pending
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_session_pending");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rx_session_pending = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__iridiumsbd_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IridiumsbdStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._iridiumsbd_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IridiumsbdStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__IridiumsbdStatus * ros_message = (px4_msgs__msg__IridiumsbdStatus *)raw_ros_message;
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
  {  // last_heartbeat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->last_heartbeat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_heartbeat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_buf_write_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tx_buf_write_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_buf_write_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_buf_read_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_buf_read_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_buf_read_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_buf_end_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_buf_end_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_buf_end_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failed_sbd_sessions
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->failed_sbd_sessions);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failed_sbd_sessions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // successful_sbd_sessions
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->successful_sbd_sessions);
    {
      int rc = PyObject_SetAttrString(_pymessage, "successful_sbd_sessions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_tx_buf_reset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_tx_buf_reset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_tx_buf_reset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_quality
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->signal_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // ring_pending
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ring_pending ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ring_pending", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_buf_write_pending
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tx_buf_write_pending ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_buf_write_pending", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_session_pending
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tx_session_pending ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_session_pending", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_read_pending
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rx_read_pending ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_read_pending", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_session_pending
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rx_session_pending ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_session_pending", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
