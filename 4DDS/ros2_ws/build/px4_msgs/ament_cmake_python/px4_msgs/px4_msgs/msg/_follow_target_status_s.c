// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/FollowTargetStatus.idl
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
#include "px4_msgs/msg/detail/follow_target_status__struct.h"
#include "px4_msgs/msg/detail/follow_target_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__follow_target_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("px4_msgs.msg._follow_target_status.FollowTargetStatus", full_classname_dest, 53) == 0);
  }
  px4_msgs__msg__FollowTargetStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // tracked_target_course
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracked_target_course");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tracked_target_course = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // follow_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "follow_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->follow_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orbit_angle_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "orbit_angle_setpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orbit_angle_setpoint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular_rate_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_rate_setpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_rate_setpoint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // desired_position_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_position_raw");
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
      float * dest = ros_message->desired_position_raw;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // in_emergency_ascent
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_emergency_ascent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_emergency_ascent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gimbal_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "gimbal_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gimbal_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__follow_target_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FollowTargetStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._follow_target_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FollowTargetStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__FollowTargetStatus * ros_message = (px4_msgs__msg__FollowTargetStatus *)raw_ros_message;
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
  {  // tracked_target_course
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tracked_target_course);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracked_target_course", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // follow_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->follow_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "follow_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orbit_angle_setpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orbit_angle_setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orbit_angle_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_rate_setpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_rate_setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_rate_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_position_raw
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "desired_position_raw");
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
    float * src = &(ros_message->desired_position_raw[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // in_emergency_ascent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_emergency_ascent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_emergency_ascent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gimbal_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gimbal_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gimbal_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
