# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/Ekf2Timestamps.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Ekf2Timestamps(type):
    """Metaclass of message 'Ekf2Timestamps'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RELATIVE_TIMESTAMP_INVALID': 32767,
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
                'px4_msgs.msg.Ekf2Timestamps')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ekf2_timestamps
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ekf2_timestamps
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ekf2_timestamps
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ekf2_timestamps
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ekf2_timestamps

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RELATIVE_TIMESTAMP_INVALID': cls.__constants['RELATIVE_TIMESTAMP_INVALID'],
        }

    @property
    def RELATIVE_TIMESTAMP_INVALID(self):
        """Message constant 'RELATIVE_TIMESTAMP_INVALID'."""
        return Metaclass_Ekf2Timestamps.__constants['RELATIVE_TIMESTAMP_INVALID']


class Ekf2Timestamps(metaclass=Metaclass_Ekf2Timestamps):
    """
    Message class 'Ekf2Timestamps'.

    Constants:
      RELATIVE_TIMESTAMP_INVALID
    """

    __slots__ = [
        '_timestamp',
        '_airspeed_timestamp_rel',
        '_distance_sensor_timestamp_rel',
        '_optical_flow_timestamp_rel',
        '_vehicle_air_data_timestamp_rel',
        '_vehicle_magnetometer_timestamp_rel',
        '_visual_odometry_timestamp_rel',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'airspeed_timestamp_rel': 'int16',
        'distance_sensor_timestamp_rel': 'int16',
        'optical_flow_timestamp_rel': 'int16',
        'vehicle_air_data_timestamp_rel': 'int16',
        'vehicle_magnetometer_timestamp_rel': 'int16',
        'visual_odometry_timestamp_rel': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.airspeed_timestamp_rel = kwargs.get('airspeed_timestamp_rel', int())
        self.distance_sensor_timestamp_rel = kwargs.get('distance_sensor_timestamp_rel', int())
        self.optical_flow_timestamp_rel = kwargs.get('optical_flow_timestamp_rel', int())
        self.vehicle_air_data_timestamp_rel = kwargs.get('vehicle_air_data_timestamp_rel', int())
        self.vehicle_magnetometer_timestamp_rel = kwargs.get('vehicle_magnetometer_timestamp_rel', int())
        self.visual_odometry_timestamp_rel = kwargs.get('visual_odometry_timestamp_rel', int())

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
        if self.airspeed_timestamp_rel != other.airspeed_timestamp_rel:
            return False
        if self.distance_sensor_timestamp_rel != other.distance_sensor_timestamp_rel:
            return False
        if self.optical_flow_timestamp_rel != other.optical_flow_timestamp_rel:
            return False
        if self.vehicle_air_data_timestamp_rel != other.vehicle_air_data_timestamp_rel:
            return False
        if self.vehicle_magnetometer_timestamp_rel != other.vehicle_magnetometer_timestamp_rel:
            return False
        if self.visual_odometry_timestamp_rel != other.visual_odometry_timestamp_rel:
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
    def airspeed_timestamp_rel(self):
        """Message field 'airspeed_timestamp_rel'."""
        return self._airspeed_timestamp_rel

    @airspeed_timestamp_rel.setter
    def airspeed_timestamp_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'airspeed_timestamp_rel' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'airspeed_timestamp_rel' field must be an integer in [-32768, 32767]"
        self._airspeed_timestamp_rel = value

    @builtins.property
    def distance_sensor_timestamp_rel(self):
        """Message field 'distance_sensor_timestamp_rel'."""
        return self._distance_sensor_timestamp_rel

    @distance_sensor_timestamp_rel.setter
    def distance_sensor_timestamp_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance_sensor_timestamp_rel' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'distance_sensor_timestamp_rel' field must be an integer in [-32768, 32767]"
        self._distance_sensor_timestamp_rel = value

    @builtins.property
    def optical_flow_timestamp_rel(self):
        """Message field 'optical_flow_timestamp_rel'."""
        return self._optical_flow_timestamp_rel

    @optical_flow_timestamp_rel.setter
    def optical_flow_timestamp_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'optical_flow_timestamp_rel' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'optical_flow_timestamp_rel' field must be an integer in [-32768, 32767]"
        self._optical_flow_timestamp_rel = value

    @builtins.property
    def vehicle_air_data_timestamp_rel(self):
        """Message field 'vehicle_air_data_timestamp_rel'."""
        return self._vehicle_air_data_timestamp_rel

    @vehicle_air_data_timestamp_rel.setter
    def vehicle_air_data_timestamp_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_air_data_timestamp_rel' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'vehicle_air_data_timestamp_rel' field must be an integer in [-32768, 32767]"
        self._vehicle_air_data_timestamp_rel = value

    @builtins.property
    def vehicle_magnetometer_timestamp_rel(self):
        """Message field 'vehicle_magnetometer_timestamp_rel'."""
        return self._vehicle_magnetometer_timestamp_rel

    @vehicle_magnetometer_timestamp_rel.setter
    def vehicle_magnetometer_timestamp_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_magnetometer_timestamp_rel' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'vehicle_magnetometer_timestamp_rel' field must be an integer in [-32768, 32767]"
        self._vehicle_magnetometer_timestamp_rel = value

    @builtins.property
    def visual_odometry_timestamp_rel(self):
        """Message field 'visual_odometry_timestamp_rel'."""
        return self._visual_odometry_timestamp_rel

    @visual_odometry_timestamp_rel.setter
    def visual_odometry_timestamp_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'visual_odometry_timestamp_rel' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'visual_odometry_timestamp_rel' field must be an integer in [-32768, 32767]"
        self._visual_odometry_timestamp_rel = value
