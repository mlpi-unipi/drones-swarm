// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/GotoSetpoint.idl
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
#include "px4_msgs/msg/detail/goto_setpoint__struct.h"
#include "px4_msgs/msg/detail/goto_setpoint__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__goto_setpoint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("px4_msgs.msg._goto_setpoint.GotoSetpoint", full_classname_dest, 40) == 0);
  }
  px4_msgs__msg__GotoSetpoint * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
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
      float * dest = ros_message->position;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // flag_control_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_heading");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_heading = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flag_set_max_horizontal_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_set_max_horizontal_speed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_set_max_horizontal_speed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_horizontal_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_horizontal_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_horizontal_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flag_set_max_vertical_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_set_max_vertical_speed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_set_max_vertical_speed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_vertical_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_vertical_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_vertical_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flag_set_max_heading_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_set_max_heading_rate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_set_max_heading_rate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // max_heading_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_heading_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_heading_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__goto_setpoint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GotoSetpoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._goto_setpoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GotoSetpoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__GotoSetpoint * ros_message = (px4_msgs__msg__GotoSetpoint *)raw_ros_message;
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
  {  // position
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "position");
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
    float * src = &(ros_message->position[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // flag_control_heading
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_heading ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_set_max_horizontal_speed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_set_max_horizontal_speed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_set_max_horizontal_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_horizontal_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_horizontal_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_horizontal_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_set_max_vertical_speed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_set_max_vertical_speed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_set_max_vertical_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_vertical_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_vertical_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_vertical_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_set_max_heading_rate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_set_max_heading_rate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_set_max_heading_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_heading_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_heading_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_heading_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
