# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorPerformanceMetric(type):
    """Metaclass of message 'SensorPerformanceMetric'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gazebo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gazebo_msgs.msg.SensorPerformanceMetric')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_performance_metric
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_performance_metric
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_performance_metric
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_performance_metric
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_performance_metric

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorPerformanceMetric(metaclass=Metaclass_SensorPerformanceMetric):
    """Message class 'SensorPerformanceMetric'."""

    __slots__ = [
        '_name',
        '_sim_update_rate',
        '_real_update_rate',
        '_fps',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'sim_update_rate': 'double',
        'real_update_rate': 'double',
        'fps': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.sim_update_rate = kwargs.get('sim_update_rate', float())
        self.real_update_rate = kwargs.get('real_update_rate', float())
        self.fps = kwargs.get('fps', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.name != other.name:
            return False
        if self.sim_update_rate != other.sim_update_rate:
            return False
        if self.real_update_rate != other.real_update_rate:
            return False
        if self.fps != other.fps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def sim_update_rate(self):
        """Message field 'sim_update_rate'."""
        return self._sim_update_rate

    @sim_update_rate.setter
    def sim_update_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sim_update_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sim_update_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sim_update_rate = value

    @builtins.property
    def real_update_rate(self):
        """Message field 'real_update_rate'."""
        return self._real_update_rate

    @real_update_rate.setter
    def real_update_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'real_update_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'real_update_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._real_update_rate = value

    @builtins.property
    def fps(self):
        """Message field 'fps'."""
        return self._fps

    @fps.setter
    def fps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fps' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fps' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fps = value
