// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/LoggerStatus.idl
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
#include "px4_msgs/msg/detail/logger_status__struct.h"
#include "px4_msgs/msg/detail/logger_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__logger_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._logger_status.LoggerStatus", full_classname_dest, 40) == 0);
  }
  px4_msgs__msg__LoggerStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
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
  {  // backend
    PyObject * field = PyObject_GetAttrString(_pymsg, "backend");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->backend = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // total_written_kb
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_written_kb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_written_kb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // write_rate_kb_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "write_rate_kb_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->write_rate_kb_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dropouts
    PyObject * field = PyObject_GetAttrString(_pymsg, "dropouts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dropouts = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // message_gaps
    PyObject * field = PyObject_GetAttrString(_pymsg, "message_gaps");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->message_gaps = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // buffer_used_bytes
    PyObject * field = PyObject_GetAttrString(_pymsg, "buffer_used_bytes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->buffer_used_bytes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // buffer_size_bytes
    PyObject * field = PyObject_GetAttrString(_pymsg, "buffer_size_bytes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->buffer_size_bytes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_messages
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_messages");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_messages = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__logger_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LoggerStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._logger_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LoggerStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__LoggerStatus * ros_message = (px4_msgs__msg__LoggerStatus *)raw_ros_message;
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
  {  // backend
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->backend);
    {
      int rc = PyObject_SetAttrString(_pymessage, "backend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_written_kb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_written_kb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_written_kb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // write_rate_kb_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->write_rate_kb_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "write_rate_kb_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dropouts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dropouts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dropouts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message_gaps
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->message_gaps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "message_gaps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buffer_used_bytes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->buffer_used_bytes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buffer_used_bytes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // buffer_size_bytes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->buffer_size_bytes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "buffer_size_bytes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_messages
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_messages);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_messages", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
