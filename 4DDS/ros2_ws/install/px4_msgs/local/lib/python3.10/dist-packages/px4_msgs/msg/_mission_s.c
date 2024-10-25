// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/Mission.idl
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
#include "px4_msgs/msg/detail/mission__struct.h"
#include "px4_msgs/msg/detail/mission__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__mission__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
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
    assert(strncmp("px4_msgs.msg._mission.Mission", full_classname_dest, 29) == 0);
  }
  px4_msgs__msg__Mission * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // mission_dataman_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_dataman_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mission_dataman_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fence_dataman_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "fence_dataman_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fence_dataman_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // safepoint_dataman_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "safepoint_dataman_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safepoint_dataman_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // count
    PyObject * field = PyObject_GetAttrString(_pymsg, "count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_seq
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_seq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_seq = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // land_start_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "land_start_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->land_start_index = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // land_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "land_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->land_index = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mission_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mission_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // geofence_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "geofence_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->geofence_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // safe_points_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe_points_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safe_points_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__mission__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Mission */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._mission");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Mission");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__Mission * ros_message = (px4_msgs__msg__Mission *)raw_ros_message;
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
  {  // mission_dataman_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mission_dataman_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_dataman_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fence_dataman_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fence_dataman_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fence_dataman_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safepoint_dataman_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safepoint_dataman_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safepoint_dataman_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_seq
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_seq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_seq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // land_start_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->land_start_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "land_start_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // land_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->land_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "land_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mission_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // geofence_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->geofence_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "geofence_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safe_points_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safe_points_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe_points_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
