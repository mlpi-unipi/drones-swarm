# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SatelliteInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'svid'
# Member 'used'
# Member 'elevation'
# Member 'azimuth'
# Member 'snr'
# Member 'prn'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SatelliteInfo(type):
    """Metaclass of message 'SatelliteInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SAT_INFO_MAX_SATELLITES': 20,
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
                'px4_msgs.msg.SatelliteInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__satellite_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__satellite_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__satellite_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__satellite_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__satellite_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SAT_INFO_MAX_SATELLITES': cls.__constants['SAT_INFO_MAX_SATELLITES'],
        }

    @property
    def SAT_INFO_MAX_SATELLITES(self):
        """Message constant 'SAT_INFO_MAX_SATELLITES'."""
        return Metaclass_SatelliteInfo.__constants['SAT_INFO_MAX_SATELLITES']


class SatelliteInfo(metaclass=Metaclass_SatelliteInfo):
    """
    Message class 'SatelliteInfo'.

    Constants:
      SAT_INFO_MAX_SATELLITES
    """

    __slots__ = [
        '_timestamp',
        '_count',
        '_svid',
        '_used',
        '_elevation',
        '_azimuth',
        '_snr',
        '_prn',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'count': 'uint8',
        'svid': 'uint8[20]',
        'used': 'uint8[20]',
        'elevation': 'uint8[20]',
        'azimuth': 'uint8[20]',
        'snr': 'uint8[20]',
        'prn': 'uint8[20]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 20),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 20),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 20),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 20),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 20),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 20),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.count = kwargs.get('count', int())
        if 'svid' not in kwargs:
            self.svid = numpy.zeros(20, dtype=numpy.uint8)
        else:
            self.svid = numpy.array(kwargs.get('svid'), dtype=numpy.uint8)
            assert self.svid.shape == (20, )
        if 'used' not in kwargs:
            self.used = numpy.zeros(20, dtype=numpy.uint8)
        else:
            self.used = numpy.array(kwargs.get('used'), dtype=numpy.uint8)
            assert self.used.shape == (20, )
        if 'elevation' not in kwargs:
            self.elevation = numpy.zeros(20, dtype=numpy.uint8)
        else:
            self.elevation = numpy.array(kwargs.get('elevation'), dtype=numpy.uint8)
            assert self.elevation.shape == (20, )
        if 'azimuth' not in kwargs:
            self.azimuth = numpy.zeros(20, dtype=numpy.uint8)
        else:
            self.azimuth = numpy.array(kwargs.get('azimuth'), dtype=numpy.uint8)
            assert self.azimuth.shape == (20, )
        if 'snr' not in kwargs:
            self.snr = numpy.zeros(20, dtype=numpy.uint8)
        else:
            self.snr = numpy.array(kwargs.get('snr'), dtype=numpy.uint8)
            assert self.snr.shape == (20, )
        if 'prn' not in kwargs:
            self.prn = numpy.zeros(20, dtype=numpy.uint8)
        else:
            self.prn = numpy.array(kwargs.get('prn'), dtype=numpy.uint8)
            assert self.prn.shape == (20, )

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
        if self.count != other.count:
            return False
        if all(self.svid != other.svid):
            return False
        if all(self.used != other.used):
            return False
        if all(self.elevation != other.elevation):
            return False
        if all(self.azimuth != other.azimuth):
            return False
        if all(self.snr != other.snr):
            return False
        if all(self.prn != other.prn):
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
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'count' field must be an unsigned integer in [0, 255]"
        self._count = value

    @builtins.property
    def svid(self):
        """Message field 'svid'."""
        return self._svid

    @svid.setter
    def svid(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'svid' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 20, \
                "The 'svid' numpy.ndarray() must have a size of 20"
            self._svid = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 20 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'svid' field must be a set or sequence with length 20 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._svid = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def used(self):
        """Message field 'used'."""
        return self._used

    @used.setter
    def used(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'used' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 20, \
                "The 'used' numpy.ndarray() must have a size of 20"
            self._used = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 20 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'used' field must be a set or sequence with length 20 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._used = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def elevation(self):
        """Message field 'elevation'."""
        return self._elevation

    @elevation.setter
    def elevation(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'elevation' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 20, \
                "The 'elevation' numpy.ndarray() must have a size of 20"
            self._elevation = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 20 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'elevation' field must be a set or sequence with length 20 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._elevation = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def azimuth(self):
        """Message field 'azimuth'."""
        return self._azimuth

    @azimuth.setter
    def azimuth(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'azimuth' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 20, \
                "The 'azimuth' numpy.ndarray() must have a size of 20"
            self._azimuth = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 20 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'azimuth' field must be a set or sequence with length 20 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._azimuth = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def snr(self):
        """Message field 'snr'."""
        return self._snr

    @snr.setter
    def snr(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'snr' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 20, \
                "The 'snr' numpy.ndarray() must have a size of 20"
            self._snr = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 20 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'snr' field must be a set or sequence with length 20 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._snr = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def prn(self):
        """Message field 'prn'."""
        return self._prn

    @prn.setter
    def prn(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'prn' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 20, \
                "The 'prn' numpy.ndarray() must have a size of 20"
            self._prn = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 20 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'prn' field must be a set or sequence with length 20 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._prn = numpy.array(value, dtype=numpy.uint8)
