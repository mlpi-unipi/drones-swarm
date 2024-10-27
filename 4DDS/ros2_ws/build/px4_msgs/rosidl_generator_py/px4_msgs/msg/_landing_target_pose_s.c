// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/LandingTargetPose.idl
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
#include "px4_msgs/msg/detail/landing_target_pose__struct.h"
#include "px4_msgs/msg/detail/landing_target_pose__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__landing_target_pose__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("px4_msgs.msg._landing_target_pose.LandingTargetPose", full_classname_dest, 51) == 0);
  }
  px4_msgs__msg__LandingTargetPose * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // is_static
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_static");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_static = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rel_pos_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "rel_pos_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rel_pos_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rel_vel_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "rel_vel_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rel_vel_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // x_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_rel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_rel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_rel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_rel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_rel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_rel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vx_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx_rel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx_rel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy_rel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy_rel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_x_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_x_rel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_x_rel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_y_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_y_rel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_y_rel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vx_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vx_rel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vx_rel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cov_vy_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "cov_vy_rel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cov_vy_rel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // abs_pos_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_pos_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->abs_pos_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // x_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_abs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_abs = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_abs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_abs = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_abs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_abs = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__landing_target_pose__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LandingTargetPose */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._landing_target_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LandingTargetPose");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__LandingTargetPose * ros_message = (px4_msgs__msg__LandingTargetPose *)raw_ros_message;
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
  {  // is_static
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_static ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_static", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rel_pos_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rel_pos_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rel_pos_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rel_vel_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rel_vel_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rel_vel_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_rel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_rel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_rel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx_rel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy_rel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_x_rel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_x_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_x_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_y_rel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_y_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_y_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vx_rel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vx_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vx_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cov_vy_rel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cov_vy_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cov_vy_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_pos_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->abs_pos_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_pos_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_abs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_abs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_abs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_abs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_abs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_abs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
