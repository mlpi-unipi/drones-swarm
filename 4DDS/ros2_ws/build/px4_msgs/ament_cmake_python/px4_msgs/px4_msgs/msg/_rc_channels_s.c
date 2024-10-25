// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/RcChannels.idl
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
#include "px4_msgs/msg/detail/rc_channels__struct.h"
#include "px4_msgs/msg/detail/rc_channels__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__rc_channels__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._rc_channels.RcChannels", full_classname_dest, 36) == 0);
  }
  px4_msgs__msg__RcChannels * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_last_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_last_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_last_valid = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // channels
    PyObject * field = PyObject_GetAttrString(_pymsg, "channels");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 18;
      float * dest = ros_message->channels;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // channel_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "channel_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->channel_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // function
    PyObject * field = PyObject_GetAttrString(_pymsg, "function");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT8);
      Py_ssize_t size = 28;
      int8_t * dest = ros_message->function;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int8_t tmp = *(npy_int8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int8_t));
      }
      Py_DECREF(seq_field);
    }
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
  {  // signal_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->signal_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // frame_drop_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_drop_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame_drop_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__rc_channels__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RcChannels */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._rc_channels");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RcChannels");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__RcChannels * ros_message = (px4_msgs__msg__RcChannels *)raw_ros_message;
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
  {  // timestamp_last_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp_last_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_last_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // channels
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "channels");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->channels[0]);
    memcpy(dst, src, 18 * sizeof(float));
    Py_DECREF(field);
  }
  {  // channel_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->channel_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "channel_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // function
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "function");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT8);
    assert(sizeof(npy_int8) == sizeof(int8_t));
    npy_int8 * dst = (npy_int8 *)PyArray_GETPTR1(seq_field, 0);
    int8_t * src = &(ros_message->function[0]);
    memcpy(dst, src, 28 * sizeof(int8_t));
    Py_DECREF(field);
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
  {  // signal_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->signal_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame_drop_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frame_drop_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_drop_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
