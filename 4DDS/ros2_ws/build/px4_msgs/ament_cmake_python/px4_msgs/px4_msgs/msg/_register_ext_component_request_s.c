// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
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
#include "px4_msgs/msg/detail/register_ext_component_request__struct.h"
#include "px4_msgs/msg/detail/register_ext_component_request__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__register_ext_component_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("px4_msgs.msg._register_ext_component_request.RegisterExtComponentRequest", full_classname_dest, 72) == 0);
  }
  px4_msgs__msg__RegisterExtComponentRequest * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // request_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "request_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->request_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 25;
      uint8_t * dest = ros_message->name;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // px4_ros2_api_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "px4_ros2_api_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->px4_ros2_api_version = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // register_arming_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "register_arming_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->register_arming_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // register_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "register_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->register_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // register_mode_executor
    PyObject * field = PyObject_GetAttrString(_pymsg, "register_mode_executor");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->register_mode_executor = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enable_replace_internal_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "enable_replace_internal_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enable_replace_internal_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // replace_internal_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "replace_internal_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->replace_internal_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // activate_mode_immediately
    PyObject * field = PyObject_GetAttrString(_pymsg, "activate_mode_immediately");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->activate_mode_immediately = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__register_ext_component_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RegisterExtComponentRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._register_ext_component_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RegisterExtComponentRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__RegisterExtComponentRequest * ros_message = (px4_msgs__msg__RegisterExtComponentRequest *)raw_ros_message;
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
  {  // request_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->request_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "request_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "name");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->name[0]);
    memcpy(dst, src, 25 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // px4_ros2_api_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->px4_ros2_api_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "px4_ros2_api_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // register_arming_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->register_arming_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "register_arming_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // register_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->register_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "register_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // register_mode_executor
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->register_mode_executor ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "register_mode_executor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enable_replace_internal_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enable_replace_internal_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enable_replace_internal_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replace_internal_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->replace_internal_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "replace_internal_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // activate_mode_immediately
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->activate_mode_immediately ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "activate_mode_immediately", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
