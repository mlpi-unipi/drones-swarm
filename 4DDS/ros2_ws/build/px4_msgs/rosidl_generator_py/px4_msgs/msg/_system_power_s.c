// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/SystemPower.idl
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
#include "px4_msgs/msg/detail/system_power__struct.h"
#include "px4_msgs/msg/detail/system_power__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__system_power__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._system_power.SystemPower", full_classname_dest, 38) == 0);
  }
  px4_msgs__msg__SystemPower * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // voltage5v_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage5v_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage5v_v = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sensors3v3
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensors3v3");
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
      Py_ssize_t size = 4;
      float * dest = ros_message->sensors3v3;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // sensors3v3_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensors3v3_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensors3v3_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // usb_connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "usb_connected");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->usb_connected = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brick_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "brick_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brick_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // usb_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "usb_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->usb_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // servo_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // periph_5v_oc
    PyObject * field = PyObject_GetAttrString(_pymsg, "periph_5v_oc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->periph_5v_oc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hipower_5v_oc
    PyObject * field = PyObject_GetAttrString(_pymsg, "hipower_5v_oc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hipower_5v_oc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // comp_5v_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "comp_5v_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->comp_5v_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can1_gps1_5v_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "can1_gps1_5v_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can1_gps1_5v_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__system_power__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SystemPower */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._system_power");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SystemPower");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__SystemPower * ros_message = (px4_msgs__msg__SystemPower *)raw_ros_message;
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
  {  // voltage5v_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage5v_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage5v_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensors3v3
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "sensors3v3");
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
    float * src = &(ros_message->sensors3v3[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // sensors3v3_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensors3v3_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensors3v3_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usb_connected
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->usb_connected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usb_connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brick_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brick_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brick_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usb_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->usb_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usb_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->servo_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // periph_5v_oc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->periph_5v_oc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "periph_5v_oc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hipower_5v_oc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hipower_5v_oc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hipower_5v_oc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // comp_5v_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->comp_5v_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "comp_5v_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can1_gps1_5v_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can1_gps1_5v_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can1_gps1_5v_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
