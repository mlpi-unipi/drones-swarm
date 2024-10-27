// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/ManualControlSetpoint.idl
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
#include "px4_msgs/msg/detail/manual_control_setpoint__struct.h"
#include "px4_msgs/msg/detail/manual_control_setpoint__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__manual_control_setpoint__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._manual_control_setpoint.ManualControlSetpoint", full_classname_dest, 59) == 0);
  }
  px4_msgs__msg__ManualControlSetpoint * ros_message = _ros_message;
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
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // data_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data_source = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // flaps
    PyObject * field = PyObject_GetAttrString(_pymsg, "flaps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->flaps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux1
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux2
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux3
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux4
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux5
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aux6
    PyObject * field = PyObject_GetAttrString(_pymsg, "aux6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aux6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sticks_moving
    PyObject * field = PyObject_GetAttrString(_pymsg, "sticks_moving");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sticks_moving = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__manual_control_setpoint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ManualControlSetpoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._manual_control_setpoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ManualControlSetpoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__ManualControlSetpoint * ros_message = (px4_msgs__msg__ManualControlSetpoint *)raw_ros_message;
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
  {  // data_source
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->data_source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flaps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->flaps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flaps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aux6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aux6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aux6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sticks_moving
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sticks_moving ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sticks_moving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
