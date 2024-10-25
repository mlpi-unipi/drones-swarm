// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/UavcanParameterValue.idl
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
#include "px4_msgs/msg/detail/uavcan_parameter_value__struct.h"
#include "px4_msgs/msg/detail/uavcan_parameter_value__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__uavcan_parameter_value__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("px4_msgs.msg._uavcan_parameter_value.UavcanParameterValue", full_classname_dest, 57) == 0);
  }
  px4_msgs__msg__UavcanParameterValue * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // node_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->node_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // param_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "param_id");
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
      Py_ssize_t size = 17;
      uint8_t * dest = ros_message->param_id;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // param_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "param_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->param_index = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // param_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "param_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->param_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // param_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "param_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->param_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // int_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "int_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int_value = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // real_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "real_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->real_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__uavcan_parameter_value__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UavcanParameterValue */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._uavcan_parameter_value");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UavcanParameterValue");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__UavcanParameterValue * ros_message = (px4_msgs__msg__UavcanParameterValue *)raw_ros_message;
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
  {  // node_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->node_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param_id
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "param_id");
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
    uint8_t * src = &(ros_message->param_id[0]);
    memcpy(dst, src, 17 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // param_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->param_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->param_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->param_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int_value
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->int_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // real_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->real_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "real_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
