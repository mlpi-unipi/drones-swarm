// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/FollowTargetEstimator.idl
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
#include "px4_msgs/msg/detail/follow_target_estimator__struct.h"
#include "px4_msgs/msg/detail/follow_target_estimator__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__follow_target_estimator__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("px4_msgs.msg._follow_target_estimator.FollowTargetEstimator", full_classname_dest, 59) == 0);
  }
  px4_msgs__msg__FollowTargetEstimator * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // last_filter_reset_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_filter_reset_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_filter_reset_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stale
    PyObject * field = PyObject_GetAttrString(_pymsg, "stale");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stale = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lat_est
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_est");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_est = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon_est
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_est");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon_est = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alt_est
    PyObject * field = PyObject_GetAttrString(_pymsg, "alt_est");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alt_est = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_est
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_est");
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
      Py_ssize_t size = 3;
      float * dest = ros_message->pos_est;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // vel_est
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_est");
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
      Py_ssize_t size = 3;
      float * dest = ros_message->vel_est;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // acc_est
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_est");
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
      Py_ssize_t size = 3;
      float * dest = ros_message->acc_est;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // prediction_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "prediction_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prediction_count = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // fusion_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusion_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fusion_count = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__follow_target_estimator__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FollowTargetEstimator */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._follow_target_estimator");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FollowTargetEstimator");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__FollowTargetEstimator * ros_message = (px4_msgs__msg__FollowTargetEstimator *)raw_ros_message;
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
  {  // last_filter_reset_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->last_filter_reset_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_filter_reset_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stale
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stale ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stale", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_est
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_est);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_est", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_est
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon_est);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_est", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alt_est
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alt_est);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alt_est", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_est
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "pos_est");
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
    float * src = &(ros_message->pos_est[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // vel_est
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "vel_est");
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
    float * src = &(ros_message->vel_est[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // acc_est
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "acc_est");
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
    float * src = &(ros_message->acc_est[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // prediction_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->prediction_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prediction_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusion_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->fusion_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusion_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
