// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
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
#include "gazebo_msgs/msg/detail/ode_physics__struct.h"
#include "gazebo_msgs/msg/detail/ode_physics__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gazebo_msgs__msg__ode_physics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("gazebo_msgs.msg._ode_physics.ODEPhysics", full_classname_dest, 39) == 0);
  }
  gazebo_msgs__msg__ODEPhysics * ros_message = _ros_message;
  {  // auto_disable_bodies
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_disable_bodies");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_disable_bodies = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sor_pgs_precon_iters
    PyObject * field = PyObject_GetAttrString(_pymsg, "sor_pgs_precon_iters");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sor_pgs_precon_iters = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sor_pgs_iters
    PyObject * field = PyObject_GetAttrString(_pymsg, "sor_pgs_iters");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sor_pgs_iters = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sor_pgs_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "sor_pgs_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sor_pgs_w = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sor_pgs_rms_error_tol
    PyObject * field = PyObject_GetAttrString(_pymsg, "sor_pgs_rms_error_tol");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sor_pgs_rms_error_tol = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // contact_surface_layer
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_surface_layer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->contact_surface_layer = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // contact_max_correcting_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_max_correcting_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->contact_max_correcting_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cfm
    PyObject * field = PyObject_GetAttrString(_pymsg, "cfm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cfm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // erp
    PyObject * field = PyObject_GetAttrString(_pymsg, "erp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->erp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_contacts
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_contacts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_contacts = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gazebo_msgs__msg__ode_physics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ODEPhysics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gazebo_msgs.msg._ode_physics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ODEPhysics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gazebo_msgs__msg__ODEPhysics * ros_message = (gazebo_msgs__msg__ODEPhysics *)raw_ros_message;
  {  // auto_disable_bodies
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_disable_bodies ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_disable_bodies", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sor_pgs_precon_iters
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sor_pgs_precon_iters);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sor_pgs_precon_iters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sor_pgs_iters
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sor_pgs_iters);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sor_pgs_iters", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sor_pgs_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sor_pgs_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sor_pgs_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sor_pgs_rms_error_tol
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sor_pgs_rms_error_tol);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sor_pgs_rms_error_tol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_surface_layer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->contact_surface_layer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_surface_layer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_max_correcting_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->contact_max_correcting_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_max_correcting_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cfm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cfm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cfm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // erp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->erp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "erp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_contacts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_contacts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_contacts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
