# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/HeaterStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HeaterStatus(type):
    """Metaclass of message 'HeaterStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_GPIO': 1,
        'MODE_PX4IO': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.HeaterStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__heater_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__heater_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__heater_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__heater_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__heater_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_GPIO': cls.__constants['MODE_GPIO'],
            'MODE_PX4IO': cls.__constants['MODE_PX4IO'],
        }

    @property
    def MODE_GPIO(self):
        """Message constant 'MODE_GPIO'."""
        return Metaclass_HeaterStatus.__constants['MODE_GPIO']

    @property
    def MODE_PX4IO(self):
        """Message constant 'MODE_PX4IO'."""
        return Metaclass_HeaterStatus.__constants['MODE_PX4IO']


class HeaterStatus(metaclass=Metaclass_HeaterStatus):
    """
    Message class 'HeaterStatus'.

    Constants:
      MODE_GPIO
      MODE_PX4IO
    """

    __slots__ = [
        '_timestamp',
        '_device_id',
        '_heater_on',
        '_temperature_target_met',
        '_temperature_sensor',
        '_temperature_target',
        '_controller_period_usec',
        '_controller_time_on_usec',
        '_proportional_value',
        '_integrator_value',
        '_feed_forward_value',
        '_mode',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'device_id': 'uint32',
        'heater_on': 'boolean',
        'temperature_target_met': 'boolean',
        'temperature_sensor': 'float',
        'temperature_target': 'float',
        'controller_period_usec': 'uint32',
        'controller_time_on_usec': 'uint32',
        'proportional_value': 'float',
        'integrator_value': 'float',
        'feed_forward_value': 'float',
        'mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.device_id = kwargs.get('device_id', int())
        self.heater_on = kwargs.get('heater_on', bool())
        self.temperature_target_met = kwargs.get('temperature_target_met', bool())
        self.temperature_sensor = kwargs.get('temperature_sensor', float())
        self.temperature_target = kwargs.get('temperature_target', float())
        self.controller_period_usec = kwargs.get('controller_period_usec', int())
        self.controller_time_on_usec = kwargs.get('controller_time_on_usec', int())
        self.proportional_value = kwargs.get('proportional_value', float())
        self.integrator_value = kwargs.get('integrator_value', float())
        self.feed_forward_value = kwargs.get('feed_forward_value', float())
        self.mode = kwargs.get('mode', int())

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
        if self.timestamp != other.timestamp:
            return False
        if self.device_id != other.device_id:
            return False
        if self.heater_on != other.heater_on:
            return False
        if self.temperature_target_met != other.temperature_target_met:
            return False
        if self.temperature_sensor != other.temperature_sensor:
            return False
        if self.temperature_target != other.temperature_target:
            return False
        if self.controller_period_usec != other.controller_period_usec:
            return False
        if self.controller_time_on_usec != other.controller_time_on_usec:
            return False
        if self.proportional_value != other.proportional_value:
            return False
        if self.integrator_value != other.integrator_value:
            return False
        if self.feed_forward_value != other.feed_forward_value:
            return False
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_id' field must be an unsigned integer in [0, 4294967295]"
        self._device_id = value

    @builtins.property
    def heater_on(self):
        """Message field 'heater_on'."""
        return self._heater_on

    @heater_on.setter
    def heater_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heater_on' field must be of type 'bool'"
        self._heater_on = value

    @builtins.property
    def temperature_target_met(self):
        """Message field 'temperature_target_met'."""
        return self._temperature_target_met

    @temperature_target_met.setter
    def temperature_target_met(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'temperature_target_met' field must be of type 'bool'"
        self._temperature_target_met = value

    @builtins.property
    def temperature_sensor(self):
        """Message field 'temperature_sensor'."""
        return self._temperature_sensor

    @temperature_sensor.setter
    def temperature_sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature_sensor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature_sensor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature_sensor = value

    @builtins.property
    def temperature_target(self):
        """Message field 'temperature_target'."""
        return self._temperature_target

    @temperature_target.setter
    def temperature_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature_target = value

    @builtins.property
    def controller_period_usec(self):
        """Message field 'controller_period_usec'."""
        return self._controller_period_usec

    @controller_period_usec.setter
    def controller_period_usec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'controller_period_usec' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'controller_period_usec' field must be an unsigned integer in [0, 4294967295]"
        self._controller_period_usec = value

    @builtins.property
    def controller_time_on_usec(self):
        """Message field 'controller_time_on_usec'."""
        return self._controller_time_on_usec

    @controller_time_on_usec.setter
    def controller_time_on_usec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'controller_time_on_usec' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'controller_time_on_usec' field must be an unsigned integer in [0, 4294967295]"
        self._controller_time_on_usec = value

    @builtins.property
    def proportional_value(self):
        """Message field 'proportional_value'."""
        return self._proportional_value

    @proportional_value.setter
    def proportional_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'proportional_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'proportional_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._proportional_value = value

    @builtins.property
    def integrator_value(self):
        """Message field 'integrator_value'."""
        return self._integrator_value

    @integrator_value.setter
    def integrator_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'integrator_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'integrator_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._integrator_value = value

    @builtins.property
    def feed_forward_value(self):
        """Message field 'feed_forward_value'."""
        return self._feed_forward_value

    @feed_forward_value.setter
    def feed_forward_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'feed_forward_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'feed_forward_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._feed_forward_value = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value
