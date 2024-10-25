// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/InputRc.idl
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
#include "px4_msgs/msg/detail/input_rc__struct.h"
#include "px4_msgs/msg/detail/input_rc__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__input_rc__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("px4_msgs.msg._input_rc.InputRc", full_classname_dest, 30) == 0);
  }
  px4_msgs__msg__InputRc * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_last_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_last_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_last_signal = PyLong_AsUnsignedLongLong(field);
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
  {  // rssi
    PyObject * field = PyObject_GetAttrString(_pymsg, "rssi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rssi = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rc_failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_failsafe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_failsafe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_lost_frame_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_lost_frame_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_lost_frame_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rc_total_frame_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_total_frame_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_total_frame_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rc_ppm_frame_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_ppm_frame_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc_ppm_frame_length = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // input_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input_source = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // values
    PyObject * field = PyObject_GetAttrString(_pymsg, "values");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT16);
      Py_ssize_t size = 18;
      uint16_t * dest = ros_message->values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // link_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->link_quality = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rssi_dbm
    PyObject * field = PyObject_GetAttrString(_pymsg, "rssi_dbm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rssi_dbm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__input_rc__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InputRc */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._input_rc");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InputRc");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__InputRc * ros_message = (px4_msgs__msg__InputRc *)raw_ros_message;
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
  {  // timestamp_last_signal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp_last_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_last_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
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
  {  // rssi
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rssi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rssi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_failsafe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_failsafe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_failsafe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_lost_frame_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rc_lost_frame_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_lost_frame_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_total_frame_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rc_total_frame_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_total_frame_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_ppm_frame_length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rc_ppm_frame_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_ppm_frame_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_source
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->input_source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    assert(sizeof(npy_uint16) == sizeof(uint16_t));
    npy_uint16 * dst = (npy_uint16 *)PyArray_GETPTR1(seq_field, 0);
    uint16_t * src = &(ros_message->values[0]);
    memcpy(dst, src, 18 * sizeof(uint16_t));
    Py_DECREF(field);
  }
  {  // link_quality
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->link_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rssi_dbm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rssi_dbm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rssi_dbm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
