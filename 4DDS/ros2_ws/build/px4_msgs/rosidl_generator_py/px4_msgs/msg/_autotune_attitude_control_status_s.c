// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/AutotuneAttitudeControlStatus.idl
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
#include "px4_msgs/msg/detail/autotune_attitude_control_status__struct.h"
#include "px4_msgs/msg/detail/autotune_attitude_control_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__autotune_attitude_control_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("px4_msgs.msg._autotune_attitude_control_status.AutotuneAttitudeControlStatus", full_classname_dest, 76) == 0);
  }
  px4_msgs__msg__AutotuneAttitudeControlStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // coeff
    PyObject * field = PyObject_GetAttrString(_pymsg, "coeff");
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
      Py_ssize_t size = 5;
      float * dest = ros_message->coeff;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // coeff_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "coeff_var");
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
      Py_ssize_t size = 5;
      float * dest = ros_message->coeff_var;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // fitness
    PyObject * field = PyObject_GetAttrString(_pymsg, "fitness");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fitness = (float)PyFloat_AS_DOUBLE(field);
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
  {  // dt_model
    PyObject * field = PyObject_GetAttrString(_pymsg, "dt_model");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dt_model = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kc
    PyObject * field = PyObject_GetAttrString(_pymsg, "kc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ki
    PyObject * field = PyObject_GetAttrString(_pymsg, "ki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ki = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kd
    PyObject * field = PyObject_GetAttrString(_pymsg, "kd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kff
    PyObject * field = PyObject_GetAttrString(_pymsg, "kff");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kff = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // att_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "att_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->att_p = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rate_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "rate_sp");
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
      float * dest = ros_message->rate_sp;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // u_filt
    PyObject * field = PyObject_GetAttrString(_pymsg, "u_filt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u_filt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_filt
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_filt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_filt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__autotune_attitude_control_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AutotuneAttitudeControlStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._autotune_attitude_control_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AutotuneAttitudeControlStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__AutotuneAttitudeControlStatus * ros_message = (px4_msgs__msg__AutotuneAttitudeControlStatus *)raw_ros_message;
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
  {  // coeff
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "coeff");
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
    float * src = &(ros_message->coeff[0]);
    memcpy(dst, src, 5 * sizeof(float));
    Py_DECREF(field);
  }
  {  // coeff_var
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "coeff_var");
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
    float * src = &(ros_message->coeff_var[0]);
    memcpy(dst, src, 5 * sizeof(float));
    Py_DECREF(field);
  }
  {  // fitness
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fitness);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fitness", field);
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
  {  // dt_model
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dt_model);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dt_model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kff
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // att_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->att_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "att_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rate_sp
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rate_sp");
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
    float * src = &(ros_message->rate_sp[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // u_filt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u_filt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u_filt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_filt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_filt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_filt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
