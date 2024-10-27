// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gazebo_msgs:srv/SetPhysicsProperties.idl
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
#include "gazebo_msgs/srv/detail/set_physics_properties__struct.h"
#include "gazebo_msgs/srv/detail/set_physics_properties__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
bool gazebo_msgs__msg__ode_physics__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gazebo_msgs__msg__ode_physics__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gazebo_msgs__srv__set_physics_properties__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("gazebo_msgs.srv._set_physics_properties.SetPhysicsProperties_Request", full_classname_dest, 68) == 0);
  }
  gazebo_msgs__srv__SetPhysicsProperties_Request * ros_message = _ros_message;
  {  // time_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_step");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_step = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_update_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_update_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_update_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gravity
    PyObject * field = PyObject_GetAttrString(_pymsg, "gravity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->gravity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ode_config
    PyObject * field = PyObject_GetAttrString(_pymsg, "ode_config");
    if (!field) {
      return false;
    }
    if (!gazebo_msgs__msg__ode_physics__convert_from_py(field, &ros_message->ode_config)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gazebo_msgs__srv__set_physics_properties__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPhysicsProperties_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gazebo_msgs.srv._set_physics_properties");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPhysicsProperties_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gazebo_msgs__srv__SetPhysicsProperties_Request * ros_message = (gazebo_msgs__srv__SetPhysicsProperties_Request *)raw_ros_message;
  {  // time_step
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_update_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_update_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_update_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gravity
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->gravity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gravity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ode_config
    PyObject * field = NULL;
    field = gazebo_msgs__msg__ode_physics__convert_to_py(&ros_message->ode_config);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ode_config", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_physics_properties__struct.h"
// already included above
// #include "gazebo_msgs/srv/detail/set_physics_properties__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gazebo_msgs__srv__set_physics_properties__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("gazebo_msgs.srv._set_physics_properties.SetPhysicsProperties_Response", full_classname_dest, 69) == 0);
  }
  gazebo_msgs__srv__SetPhysicsProperties_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_message
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->status_message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gazebo_msgs__srv__set_physics_properties__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPhysicsProperties_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gazebo_msgs.srv._set_physics_properties");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPhysicsProperties_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gazebo_msgs__srv__SetPhysicsProperties_Response * ros_message = (gazebo_msgs__srv__SetPhysicsProperties_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->status_message.data,
      strlen(ros_message->status_message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
