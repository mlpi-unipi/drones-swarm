// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EstimatorBias.idl
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
#include "px4_msgs/msg/detail/estimator_bias__struct.h"
#include "px4_msgs/msg/detail/estimator_bias__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__estimator_bias__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._estimator_bias.EstimatorBias", full_classname_dest, 42) == 0);
  }
  px4_msgs__msg__EstimatorBias * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_sample
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_sample");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_sample = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "bias");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bias = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bias_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "bias_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bias_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // innov
    PyObject * field = PyObject_GetAttrString(_pymsg, "innov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->innov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // innov_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "innov_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->innov_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // innov_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "innov_test_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->innov_test_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__estimator_bias__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimatorBias */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._estimator_bias");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimatorBias");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EstimatorBias * ros_message = (px4_msgs__msg__EstimatorBias *)raw_ros_message;
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
  {  // timestamp_sample
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp_sample);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_sample", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bias
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bias);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bias_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bias_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bias_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // innov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->innov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "innov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // innov_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->innov_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "innov_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // innov_test_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->innov_test_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "innov_test_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
