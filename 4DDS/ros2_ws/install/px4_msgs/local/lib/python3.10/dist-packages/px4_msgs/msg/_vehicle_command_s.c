// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleCommand.idl
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
#include "px4_msgs/msg/detail/vehicle_command__struct.h"
#include "px4_msgs/msg/detail/vehicle_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("px4_msgs.msg._vehicle_command.VehicleCommand", full_classname_dest, 44) == 0);
  }
  px4_msgs__msg__VehicleCommand * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // param1
    PyObject * field = PyObject_GetAttrString(_pymsg, "param1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param2
    PyObject * field = PyObject_GetAttrString(_pymsg, "param2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param3
    PyObject * field = PyObject_GetAttrString(_pymsg, "param3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param4
    PyObject * field = PyObject_GetAttrString(_pymsg, "param4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param5
    PyObject * field = PyObject_GetAttrString(_pymsg, "param5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param5 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param6
    PyObject * field = PyObject_GetAttrString(_pymsg, "param6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param6 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param7
    PyObject * field = PyObject_GetAttrString(_pymsg, "param7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param7 = (float)PyFloat_AS_DOUBLE(field);
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
    ros_message->target_component = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // source_system
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_system");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_system = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // source_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_component");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_component = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // confirmation
    PyObject * field = PyObject_GetAttrString(_pymsg, "confirmation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confirmation = (uint8_t)PyLong_AsUnsignedLong(field);
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
PyObject * px4_msgs__msg__vehicle_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleCommand * ros_message = (px4_msgs__msg__VehicleCommand *)raw_ros_message;
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
  {  // param1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param7", field);
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
  {  // source_system
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source_system);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_component
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confirmation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->confirmation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confirmation", field);
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
