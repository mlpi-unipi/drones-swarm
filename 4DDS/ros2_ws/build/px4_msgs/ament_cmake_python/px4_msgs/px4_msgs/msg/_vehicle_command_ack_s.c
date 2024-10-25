// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleCommandAck.idl
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
#include "px4_msgs/msg/detail/vehicle_command_ack__struct.h"
#include "px4_msgs/msg/detail/vehicle_command_ack__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_command_ack__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._vehicle_command_ack.VehicleCommandAck", full_classname_dest, 51) == 0);
  }
  px4_msgs__msg__VehicleCommandAck * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // result_param1
    PyObject * field = PyObject_GetAttrString(_pymsg, "result_param1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result_param1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // result_param2
    PyObject * field = PyObject_GetAttrString(_pymsg, "result_param2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->result_param2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // target_system
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_system");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_system = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_component");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_component = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // from_external
    PyObject * field = PyObject_GetAttrString(_pymsg, "from_external");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->from_external = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_command_ack__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleCommandAck */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_command_ack");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleCommandAck");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleCommandAck * ros_message = (px4_msgs__msg__VehicleCommandAck *)raw_ros_message;
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
  {  // command
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result_param1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->result_param1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result_param1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result_param2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->result_param2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result_param2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_system
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_system);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_component
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // from_external
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->from_external ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "from_external", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
