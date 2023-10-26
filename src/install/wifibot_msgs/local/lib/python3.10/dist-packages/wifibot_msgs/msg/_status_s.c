// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wifibot_msgs:msg/Status.idl
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
#include "wifibot_msgs/msg/detail/status__struct.h"
#include "wifibot_msgs/msg/detail/status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wifibot_msgs__msg__status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("wifibot_msgs.msg._status.Status", full_classname_dest, 31) == 0);
  }
  wifibot_msgs__msg__Status * ros_message = _ros_message;
  {  // battery_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_level = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current
    PyObject * field = PyObject_GetAttrString(_pymsg, "current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // adc1
    PyObject * field = PyObject_GetAttrString(_pymsg, "adc1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->adc1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // adc2
    PyObject * field = PyObject_GetAttrString(_pymsg, "adc2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->adc2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // adc3
    PyObject * field = PyObject_GetAttrString(_pymsg, "adc3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->adc3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // adc4
    PyObject * field = PyObject_GetAttrString(_pymsg, "adc4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->adc4 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed_front_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_front_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_front_left = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_front_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_front_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_front_right = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odometry_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "odometry_left");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odometry_left = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // odometry_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "odometry_right");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->odometry_right = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // version
    PyObject * field = PyObject_GetAttrString(_pymsg, "version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->version = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // relay1
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relay1 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // relay2
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relay2 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // relay3
    PyObject * field = PyObject_GetAttrString(_pymsg, "relay3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relay3 = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wifibot_msgs__msg__status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Status */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wifibot_msgs.msg._status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Status");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wifibot_msgs__msg__Status * ros_message = (wifibot_msgs__msg__Status *)raw_ros_message;
  {  // battery_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adc1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->adc1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adc1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adc2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->adc2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adc2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adc3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->adc3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adc3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adc4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->adc4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adc4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_front_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_front_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_front_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_front_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_front_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_front_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odometry_left
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odometry_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odometry_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odometry_right
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->odometry_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odometry_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // version
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->relay1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->relay2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relay3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->relay3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relay3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
