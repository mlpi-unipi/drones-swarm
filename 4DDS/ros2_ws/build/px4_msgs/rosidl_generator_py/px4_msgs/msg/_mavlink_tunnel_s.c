// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/MavlinkTunnel.idl
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
#include "px4_msgs/msg/detail/mavlink_tunnel__struct.h"
#include "px4_msgs/msg/detail/mavlink_tunnel__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__mavlink_tunnel__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("px4_msgs.msg._mavlink_tunnel.MavlinkTunnel", full_classname_dest, 42) == 0);
  }
  px4_msgs__msg__MavlinkTunnel * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // payload_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "payload_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->payload_type = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_system
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_system");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_system = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_component");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_component = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // payload_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "payload_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->payload_length = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // payload
    PyObject * field = PyObject_GetAttrString(_pymsg, "payload");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 128;
      uint8_t * dest = ros_message->payload;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__mavlink_tunnel__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MavlinkTunnel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._mavlink_tunnel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MavlinkTunnel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__MavlinkTunnel * ros_message = (px4_msgs__msg__MavlinkTunnel *)raw_ros_message;
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
  {  // payload_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->payload_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "payload_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_system
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_system);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_component
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // payload_length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->payload_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "payload_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // payload
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "payload");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->payload[0]);
    memcpy(dst, src, 128 * sizeof(uint8_t));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
