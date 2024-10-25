// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/ObstacleDistance.idl
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
#include "px4_msgs/msg/detail/obstacle_distance__struct.h"
#include "px4_msgs/msg/detail/obstacle_distance__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__obstacle_distance__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._obstacle_distance.ObstacleDistance", full_classname_dest, 48) == 0);
  }
  px4_msgs__msg__ObstacleDistance * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sensor_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sensor_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distances
    PyObject * field = PyObject_GetAttrString(_pymsg, "distances");
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
      Py_ssize_t size = 72;
      uint16_t * dest = ros_message->distances;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // increment
    PyObject * field = PyObject_GetAttrString(_pymsg, "increment");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->increment = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_distance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_distance = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_distance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_distance = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // angle_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__obstacle_distance__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleDistance */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._obstacle_distance");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleDistance");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__ObstacleDistance * ros_message = (px4_msgs__msg__ObstacleDistance *)raw_ros_message;
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
  {  // frame
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frame);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sensor_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distances
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "distances");
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
    uint16_t * src = &(ros_message->distances[0]);
    memcpy(dst, src, 72 * sizeof(uint16_t));
    Py_DECREF(field);
  }
  {  // increment
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->increment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "increment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_distance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->min_distance);
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
    field = PyLong_FromUnsignedLong(ros_message->max_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
