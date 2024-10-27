// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/ManualControlSwitches.idl
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
#include "px4_msgs/msg/detail/manual_control_switches__struct.h"
#include "px4_msgs/msg/detail/manual_control_switches__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__manual_control_switches__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._manual_control_switches.ManualControlSwitches", full_classname_dest, 59) == 0);
  }
  px4_msgs__msg__ManualControlSwitches * ros_message = _ros_message;
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
  {  // mode_slot
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_slot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_slot = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // arm_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->arm_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // return_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "return_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->return_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // loiter_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "loiter_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->loiter_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // offboard_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "offboard_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->offboard_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // kill_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "kill_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->kill_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gear_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // transition_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "transition_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->transition_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // photo_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "photo_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->photo_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // video_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "video_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->video_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engage_main_motor_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "engage_main_motor_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engage_main_motor_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // switch_changes
    PyObject * field = PyObject_GetAttrString(_pymsg, "switch_changes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->switch_changes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__manual_control_switches__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ManualControlSwitches */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._manual_control_switches");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ManualControlSwitches");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__ManualControlSwitches * ros_message = (px4_msgs__msg__ManualControlSwitches *)raw_ros_message;
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
  {  // mode_slot
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_slot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_slot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->arm_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // return_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->return_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "return_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loiter_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->loiter_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loiter_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offboard_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->offboard_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offboard_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kill_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->kill_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kill_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gear_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transition_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->transition_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transition_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // photo_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->photo_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "photo_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // video_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->video_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "video_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engage_main_motor_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engage_main_motor_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engage_main_motor_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // switch_changes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->switch_changes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "switch_changes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
