// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/DistanceSensor.idl
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
#include "px4_msgs/msg/detail/distance_sensor__struct.h"
#include "px4_msgs/msg/detail/distance_sensor__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__distance_sensor__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._distance_sensor.DistanceSensor", full_classname_dest, 44) == 0);
  }
  px4_msgs__msg__DistanceSensor * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
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
  {  // min_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->variance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // signal_quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->signal_quality = (int8_t)PyLong_AsLong(field);
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
  {  // h_fov
    PyObject * field = PyObject_GetAttrString(_pymsg, "h_fov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->h_fov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_fov
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_fov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_fov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // q
    PyObject * field = PyObject_GetAttrString(_pymsg, "q");
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
      float * dest = ros_message->q;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->orientation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__distance_sensor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DistanceSensor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._distance_sensor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DistanceSensor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__DistanceSensor * ros_message = (px4_msgs__msg__DistanceSensor *)raw_ros_message;
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
  {  // min_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // variance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->variance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_quality
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->signal_quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_quality", field);
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
  {  // h_fov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->h_fov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h_fov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_fov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_fov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_fov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "q");
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
    float * src = &(ros_message->q[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
