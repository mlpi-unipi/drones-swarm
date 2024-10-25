# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/TuneControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TuneControl(type):
    """Metaclass of message 'TuneControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TUNE_ID_STOP': 0,
        'TUNE_ID_STARTUP': 1,
        'TUNE_ID_ERROR': 2,
        'TUNE_ID_NOTIFY_POSITIVE': 3,
        'TUNE_ID_NOTIFY_NEUTRAL': 4,
        'TUNE_ID_NOTIFY_NEGATIVE': 5,
        'TUNE_ID_ARMING_WARNING': 6,
        'TUNE_ID_BATTERY_WARNING_SLOW': 7,
        'TUNE_ID_BATTERY_WARNING_FAST': 8,
        'TUNE_ID_GPS_WARNING': 9,
        'TUNE_ID_ARMING_FAILURE': 10,
        'TUNE_ID_PARACHUTE_RELEASE': 11,
        'TUNE_ID_SINGLE_BEEP': 12,
        'TUNE_ID_HOME_SET': 13,
        'TUNE_ID_SD_INIT': 14,
        'TUNE_ID_SD_ERROR': 15,
        'TUNE_ID_PROG_PX4IO': 16,
        'TUNE_ID_PROG_PX4IO_OK': 17,
        'TUNE_ID_PROG_PX4IO_ERR': 18,
        'TUNE_ID_POWER_OFF': 19,
        'NUMBER_OF_TUNES': 20,
        'VOLUME_LEVEL_MIN': 0,
        'VOLUME_LEVEL_DEFAULT': 20,
        'VOLUME_LEVEL_MAX': 100,
        'ORB_QUEUE_LENGTH': 4,
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
                'px4_msgs.msg.TuneControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tune_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tune_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tune_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tune_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tune_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TUNE_ID_STOP': cls.__constants['TUNE_ID_STOP'],
            'TUNE_ID_STARTUP': cls.__constants['TUNE_ID_STARTUP'],
            'TUNE_ID_ERROR': cls.__constants['TUNE_ID_ERROR'],
            'TUNE_ID_NOTIFY_POSITIVE': cls.__constants['TUNE_ID_NOTIFY_POSITIVE'],
            'TUNE_ID_NOTIFY_NEUTRAL': cls.__constants['TUNE_ID_NOTIFY_NEUTRAL'],
            'TUNE_ID_NOTIFY_NEGATIVE': cls.__constants['TUNE_ID_NOTIFY_NEGATIVE'],
            'TUNE_ID_ARMING_WARNING': cls.__constants['TUNE_ID_ARMING_WARNING'],
            'TUNE_ID_BATTERY_WARNING_SLOW': cls.__constants['TUNE_ID_BATTERY_WARNING_SLOW'],
            'TUNE_ID_BATTERY_WARNING_FAST': cls.__constants['TUNE_ID_BATTERY_WARNING_FAST'],
            'TUNE_ID_GPS_WARNING': cls.__constants['TUNE_ID_GPS_WARNING'],
            'TUNE_ID_ARMING_FAILURE': cls.__constants['TUNE_ID_ARMING_FAILURE'],
            'TUNE_ID_PARACHUTE_RELEASE': cls.__constants['TUNE_ID_PARACHUTE_RELEASE'],
            'TUNE_ID_SINGLE_BEEP': cls.__constants['TUNE_ID_SINGLE_BEEP'],
            'TUNE_ID_HOME_SET': cls.__constants['TUNE_ID_HOME_SET'],
            'TUNE_ID_SD_INIT': cls.__constants['TUNE_ID_SD_INIT'],
            'TUNE_ID_SD_ERROR': cls.__constants['TUNE_ID_SD_ERROR'],
            'TUNE_ID_PROG_PX4IO': cls.__constants['TUNE_ID_PROG_PX4IO'],
            'TUNE_ID_PROG_PX4IO_OK': cls.__constants['TUNE_ID_PROG_PX4IO_OK'],
            'TUNE_ID_PROG_PX4IO_ERR': cls.__constants['TUNE_ID_PROG_PX4IO_ERR'],
            'TUNE_ID_POWER_OFF': cls.__constants['TUNE_ID_POWER_OFF'],
            'NUMBER_OF_TUNES': cls.__constants['NUMBER_OF_TUNES'],
            'VOLUME_LEVEL_MIN': cls.__constants['VOLUME_LEVEL_MIN'],
            'VOLUME_LEVEL_DEFAULT': cls.__constants['VOLUME_LEVEL_DEFAULT'],
            'VOLUME_LEVEL_MAX': cls.__constants['VOLUME_LEVEL_MAX'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def TUNE_ID_STOP(self):
        """Message constant 'TUNE_ID_STOP'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_STOP']

    @property
    def TUNE_ID_STARTUP(self):
        """Message constant 'TUNE_ID_STARTUP'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_STARTUP']

    @property
    def TUNE_ID_ERROR(self):
        """Message constant 'TUNE_ID_ERROR'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_ERROR']

    @property
    def TUNE_ID_NOTIFY_POSITIVE(self):
        """Message constant 'TUNE_ID_NOTIFY_POSITIVE'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_NOTIFY_POSITIVE']

    @property
    def TUNE_ID_NOTIFY_NEUTRAL(self):
        """Message constant 'TUNE_ID_NOTIFY_NEUTRAL'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_NOTIFY_NEUTRAL']

    @property
    def TUNE_ID_NOTIFY_NEGATIVE(self):
        """Message constant 'TUNE_ID_NOTIFY_NEGATIVE'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_NOTIFY_NEGATIVE']

    @property
    def TUNE_ID_ARMING_WARNING(self):
        """Message constant 'TUNE_ID_ARMING_WARNING'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_ARMING_WARNING']

    @property
    def TUNE_ID_BATTERY_WARNING_SLOW(self):
        """Message constant 'TUNE_ID_BATTERY_WARNING_SLOW'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_BATTERY_WARNING_SLOW']

    @property
    def TUNE_ID_BATTERY_WARNING_FAST(self):
        """Message constant 'TUNE_ID_BATTERY_WARNING_FAST'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_BATTERY_WARNING_FAST']

    @property
    def TUNE_ID_GPS_WARNING(self):
        """Message constant 'TUNE_ID_GPS_WARNING'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_GPS_WARNING']

    @property
    def TUNE_ID_ARMING_FAILURE(self):
        """Message constant 'TUNE_ID_ARMING_FAILURE'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_ARMING_FAILURE']

    @property
    def TUNE_ID_PARACHUTE_RELEASE(self):
        """Message constant 'TUNE_ID_PARACHUTE_RELEASE'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_PARACHUTE_RELEASE']

    @property
    def TUNE_ID_SINGLE_BEEP(self):
        """Message constant 'TUNE_ID_SINGLE_BEEP'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_SINGLE_BEEP']

    @property
    def TUNE_ID_HOME_SET(self):
        """Message constant 'TUNE_ID_HOME_SET'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_HOME_SET']

    @property
    def TUNE_ID_SD_INIT(self):
        """Message constant 'TUNE_ID_SD_INIT'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_SD_INIT']

    @property
    def TUNE_ID_SD_ERROR(self):
        """Message constant 'TUNE_ID_SD_ERROR'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_SD_ERROR']

    @property
    def TUNE_ID_PROG_PX4IO(self):
        """Message constant 'TUNE_ID_PROG_PX4IO'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_PROG_PX4IO']

    @property
    def TUNE_ID_PROG_PX4IO_OK(self):
        """Message constant 'TUNE_ID_PROG_PX4IO_OK'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_PROG_PX4IO_OK']

    @property
    def TUNE_ID_PROG_PX4IO_ERR(self):
        """Message constant 'TUNE_ID_PROG_PX4IO_ERR'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_PROG_PX4IO_ERR']

    @property
    def TUNE_ID_POWER_OFF(self):
        """Message constant 'TUNE_ID_POWER_OFF'."""
        return Metaclass_TuneControl.__constants['TUNE_ID_POWER_OFF']

    @property
    def NUMBER_OF_TUNES(self):
        """Message constant 'NUMBER_OF_TUNES'."""
        return Metaclass_TuneControl.__constants['NUMBER_OF_TUNES']

    @property
    def VOLUME_LEVEL_MIN(self):
        """Message constant 'VOLUME_LEVEL_MIN'."""
        return Metaclass_TuneControl.__constants['VOLUME_LEVEL_MIN']

    @property
    def VOLUME_LEVEL_DEFAULT(self):
        """Message constant 'VOLUME_LEVEL_DEFAULT'."""
        return Metaclass_TuneControl.__constants['VOLUME_LEVEL_DEFAULT']

    @property
    def VOLUME_LEVEL_MAX(self):
        """Message constant 'VOLUME_LEVEL_MAX'."""
        return Metaclass_TuneControl.__constants['VOLUME_LEVEL_MAX']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_TuneControl.__constants['ORB_QUEUE_LENGTH']


class TuneControl(metaclass=Metaclass_TuneControl):
    """
    Message class 'TuneControl'.

    Constants:
      TUNE_ID_STOP
      TUNE_ID_STARTUP
      TUNE_ID_ERROR
      TUNE_ID_NOTIFY_POSITIVE
      TUNE_ID_NOTIFY_NEUTRAL
      TUNE_ID_NOTIFY_NEGATIVE
      TUNE_ID_ARMING_WARNING
      TUNE_ID_BATTERY_WARNING_SLOW
      TUNE_ID_BATTERY_WARNING_FAST
      TUNE_ID_GPS_WARNING
      TUNE_ID_ARMING_FAILURE
      TUNE_ID_PARACHUTE_RELEASE
      TUNE_ID_SINGLE_BEEP
      TUNE_ID_HOME_SET
      TUNE_ID_SD_INIT
      TUNE_ID_SD_ERROR
      TUNE_ID_PROG_PX4IO
      TUNE_ID_PROG_PX4IO_OK
      TUNE_ID_PROG_PX4IO_ERR
      TUNE_ID_POWER_OFF
      NUMBER_OF_TUNES
      VOLUME_LEVEL_MIN
      VOLUME_LEVEL_DEFAULT
      VOLUME_LEVEL_MAX
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_tune_id',
        '_tune_override',
        '_frequency',
        '_duration',
        '_silence',
        '_volume',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'tune_id': 'uint8',
        'tune_override': 'boolean',
        'frequency': 'uint16',
        'duration': 'uint32',
        'silence': 'uint32',
        'volume': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.tune_id = kwargs.get('tune_id', int())
        self.tune_override = kwargs.get('tune_override', bool())
        self.frequency = kwargs.get('frequency', int())
        self.duration = kwargs.get('duration', int())
        self.silence = kwargs.get('silence', int())
        self.volume = kwargs.get('volume', int())

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
        if self.tune_id != other.tune_id:
            return False
        if self.tune_override != other.tune_override:
            return False
        if self.frequency != other.frequency:
            return False
        if self.duration != other.duration:
            return False
        if self.silence != other.silence:
            return False
        if self.volume != other.volume:
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
    def tune_id(self):
        """Message field 'tune_id'."""
        return self._tune_id

    @tune_id.setter
    def tune_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tune_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tune_id' field must be an unsigned integer in [0, 255]"
        self._tune_id = value

    @builtins.property
    def tune_override(self):
        """Message field 'tune_override'."""
        return self._tune_override

    @tune_override.setter
    def tune_override(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tune_override' field must be of type 'bool'"
        self._tune_override = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frequency' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'frequency' field must be an unsigned integer in [0, 65535]"
        self._frequency = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'duration' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'duration' field must be an unsigned integer in [0, 4294967295]"
        self._duration = value

    @builtins.property
    def silence(self):
        """Message field 'silence'."""
        return self._silence

    @silence.setter
    def silence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'silence' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'silence' field must be an unsigned integer in [0, 4294967295]"
        self._silence = value

    @builtins.property
    def volume(self):
        """Message field 'volume'."""
        return self._volume

    @volume.setter
    def volume(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'volume' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'volume' field must be an unsigned integer in [0, 255]"
        self._volume = value
