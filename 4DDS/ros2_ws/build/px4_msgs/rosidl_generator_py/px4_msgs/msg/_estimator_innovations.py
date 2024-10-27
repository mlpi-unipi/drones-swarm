# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EstimatorInnovations.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'gps_hvel'
# Member 'gps_hpos'
# Member 'ev_hvel'
# Member 'ev_hpos'
# Member 'aux_hvel'
# Member 'flow'
# Member 'terr_flow'
# Member 'mag_field'
# Member 'gravity'
# Member 'drag'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimatorInnovations(type):
    """Metaclass of message 'EstimatorInnovations'."""

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
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.EstimatorInnovations')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimator_innovations
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimator_innovations
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimator_innovations
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimator_innovations
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimator_innovations

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EstimatorInnovations(metaclass=Metaclass_EstimatorInnovations):
    """Message class 'EstimatorInnovations'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_gps_hvel',
        '_gps_vvel',
        '_gps_hpos',
        '_gps_vpos',
        '_ev_hvel',
        '_ev_vvel',
        '_ev_hpos',
        '_ev_vpos',
        '_rng_vpos',
        '_baro_vpos',
        '_aux_hvel',
        '_flow',
        '_terr_flow',
        '_heading',
        '_mag_field',
        '_gravity',
        '_drag',
        '_airspeed',
        '_beta',
        '_hagl',
        '_hagl_rate',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'gps_hvel': 'float[2]',
        'gps_vvel': 'float',
        'gps_hpos': 'float[2]',
        'gps_vpos': 'float',
        'ev_hvel': 'float[2]',
        'ev_vvel': 'float',
        'ev_hpos': 'float[2]',
        'ev_vpos': 'float',
        'rng_vpos': 'float',
        'baro_vpos': 'float',
        'aux_hvel': 'float[2]',
        'flow': 'float[2]',
        'terr_flow': 'float[2]',
        'heading': 'float',
        'mag_field': 'float[3]',
        'gravity': 'float[3]',
        'drag': 'float[2]',
        'airspeed': 'float',
        'beta': 'float',
        'hagl': 'float',
        'hagl_rate': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        if 'gps_hvel' not in kwargs:
            self.gps_hvel = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.gps_hvel = numpy.array(kwargs.get('gps_hvel'), dtype=numpy.float32)
            assert self.gps_hvel.shape == (2, )
        self.gps_vvel = kwargs.get('gps_vvel', float())
        if 'gps_hpos' not in kwargs:
            self.gps_hpos = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.gps_hpos = numpy.array(kwargs.get('gps_hpos'), dtype=numpy.float32)
            assert self.gps_hpos.shape == (2, )
        self.gps_vpos = kwargs.get('gps_vpos', float())
        if 'ev_hvel' not in kwargs:
            self.ev_hvel = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.ev_hvel = numpy.array(kwargs.get('ev_hvel'), dtype=numpy.float32)
            assert self.ev_hvel.shape == (2, )
        self.ev_vvel = kwargs.get('ev_vvel', float())
        if 'ev_hpos' not in kwargs:
            self.ev_hpos = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.ev_hpos = numpy.array(kwargs.get('ev_hpos'), dtype=numpy.float32)
            assert self.ev_hpos.shape == (2, )
        self.ev_vpos = kwargs.get('ev_vpos', float())
        self.rng_vpos = kwargs.get('rng_vpos', float())
        self.baro_vpos = kwargs.get('baro_vpos', float())
        if 'aux_hvel' not in kwargs:
            self.aux_hvel = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.aux_hvel = numpy.array(kwargs.get('aux_hvel'), dtype=numpy.float32)
            assert self.aux_hvel.shape == (2, )
        if 'flow' not in kwargs:
            self.flow = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.flow = numpy.array(kwargs.get('flow'), dtype=numpy.float32)
            assert self.flow.shape == (2, )
        if 'terr_flow' not in kwargs:
            self.terr_flow = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.terr_flow = numpy.array(kwargs.get('terr_flow'), dtype=numpy.float32)
            assert self.terr_flow.shape == (2, )
        self.heading = kwargs.get('heading', float())
        if 'mag_field' not in kwargs:
            self.mag_field = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.mag_field = numpy.array(kwargs.get('mag_field'), dtype=numpy.float32)
            assert self.mag_field.shape == (3, )
        if 'gravity' not in kwargs:
            self.gravity = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.gravity = numpy.array(kwargs.get('gravity'), dtype=numpy.float32)
            assert self.gravity.shape == (3, )
        if 'drag' not in kwargs:
            self.drag = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.drag = numpy.array(kwargs.get('drag'), dtype=numpy.float32)
            assert self.drag.shape == (2, )
        self.airspeed = kwargs.get('airspeed', float())
        self.beta = kwargs.get('beta', float())
        self.hagl = kwargs.get('hagl', float())
        self.hagl_rate = kwargs.get('hagl_rate', float())

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
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if all(self.gps_hvel != other.gps_hvel):
            return False
        if self.gps_vvel != other.gps_vvel:
            return False
        if all(self.gps_hpos != other.gps_hpos):
            return False
        if self.gps_vpos != other.gps_vpos:
            return False
        if all(self.ev_hvel != other.ev_hvel):
            return False
        if self.ev_vvel != other.ev_vvel:
            return False
        if all(self.ev_hpos != other.ev_hpos):
            return False
        if self.ev_vpos != other.ev_vpos:
            return False
        if self.rng_vpos != other.rng_vpos:
            return False
        if self.baro_vpos != other.baro_vpos:
            return False
        if all(self.aux_hvel != other.aux_hvel):
            return False
        if all(self.flow != other.flow):
            return False
        if all(self.terr_flow != other.terr_flow):
            return False
        if self.heading != other.heading:
            return False
        if all(self.mag_field != other.mag_field):
            return False
        if all(self.gravity != other.gravity):
            return False
        if all(self.drag != other.drag):
            return False
        if self.airspeed != other.airspeed:
            return False
        if self.beta != other.beta:
            return False
        if self.hagl != other.hagl:
            return False
        if self.hagl_rate != other.hagl_rate:
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
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @builtins.property
    def gps_hvel(self):
        """Message field 'gps_hvel'."""
        return self._gps_hvel

    @gps_hvel.setter
    def gps_hvel(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gps_hvel' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'gps_hvel' numpy.ndarray() must have a size of 2"
            self._gps_hvel = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'gps_hvel' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gps_hvel = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gps_vvel(self):
        """Message field 'gps_vvel'."""
        return self._gps_vvel

    @gps_vvel.setter
    def gps_vvel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_vvel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gps_vvel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gps_vvel = value

    @builtins.property
    def gps_hpos(self):
        """Message field 'gps_hpos'."""
        return self._gps_hpos

    @gps_hpos.setter
    def gps_hpos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gps_hpos' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'gps_hpos' numpy.ndarray() must have a size of 2"
            self._gps_hpos = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'gps_hpos' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gps_hpos = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gps_vpos(self):
        """Message field 'gps_vpos'."""
        return self._gps_vpos

    @gps_vpos.setter
    def gps_vpos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_vpos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gps_vpos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gps_vpos = value

    @builtins.property
    def ev_hvel(self):
        """Message field 'ev_hvel'."""
        return self._ev_hvel

    @ev_hvel.setter
    def ev_hvel(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'ev_hvel' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'ev_hvel' numpy.ndarray() must have a size of 2"
            self._ev_hvel = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ev_hvel' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ev_hvel = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def ev_vvel(self):
        """Message field 'ev_vvel'."""
        return self._ev_vvel

    @ev_vvel.setter
    def ev_vvel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ev_vvel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ev_vvel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ev_vvel = value

    @builtins.property
    def ev_hpos(self):
        """Message field 'ev_hpos'."""
        return self._ev_hpos

    @ev_hpos.setter
    def ev_hpos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'ev_hpos' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'ev_hpos' numpy.ndarray() must have a size of 2"
            self._ev_hpos = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'ev_hpos' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ev_hpos = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def ev_vpos(self):
        """Message field 'ev_vpos'."""
        return self._ev_vpos

    @ev_vpos.setter
    def ev_vpos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ev_vpos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ev_vpos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ev_vpos = value

    @builtins.property
    def rng_vpos(self):
        """Message field 'rng_vpos'."""
        return self._rng_vpos

    @rng_vpos.setter
    def rng_vpos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rng_vpos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rng_vpos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rng_vpos = value

    @builtins.property
    def baro_vpos(self):
        """Message field 'baro_vpos'."""
        return self._baro_vpos

    @baro_vpos.setter
    def baro_vpos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baro_vpos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'baro_vpos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._baro_vpos = value

    @builtins.property
    def aux_hvel(self):
        """Message field 'aux_hvel'."""
        return self._aux_hvel

    @aux_hvel.setter
    def aux_hvel(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'aux_hvel' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'aux_hvel' numpy.ndarray() must have a size of 2"
            self._aux_hvel = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'aux_hvel' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._aux_hvel = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def flow(self):
        """Message field 'flow'."""
        return self._flow

    @flow.setter
    def flow(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'flow' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'flow' numpy.ndarray() must have a size of 2"
            self._flow = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'flow' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._flow = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def terr_flow(self):
        """Message field 'terr_flow'."""
        return self._terr_flow

    @terr_flow.setter
    def terr_flow(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'terr_flow' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'terr_flow' numpy.ndarray() must have a size of 2"
            self._terr_flow = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'terr_flow' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._terr_flow = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading = value

    @builtins.property
    def mag_field(self):
        """Message field 'mag_field'."""
        return self._mag_field

    @mag_field.setter
    def mag_field(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'mag_field' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'mag_field' numpy.ndarray() must have a size of 3"
            self._mag_field = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'mag_field' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mag_field = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gravity(self):
        """Message field 'gravity'."""
        return self._gravity

    @gravity.setter
    def gravity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gravity' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'gravity' numpy.ndarray() must have a size of 3"
            self._gravity = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'gravity' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gravity = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def drag(self):
        """Message field 'drag'."""
        return self._drag

    @drag.setter
    def drag(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'drag' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'drag' numpy.ndarray() must have a size of 2"
            self._drag = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'drag' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._drag = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def airspeed(self):
        """Message field 'airspeed'."""
        return self._airspeed

    @airspeed.setter
    def airspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'airspeed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'airspeed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._airspeed = value

    @builtins.property
    def beta(self):
        """Message field 'beta'."""
        return self._beta

    @beta.setter
    def beta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'beta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'beta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._beta = value

    @builtins.property
    def hagl(self):
        """Message field 'hagl'."""
        return self._hagl

    @hagl.setter
    def hagl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hagl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hagl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hagl = value

    @builtins.property
    def hagl_rate(self):
        """Message field 'hagl_rate'."""
        return self._hagl_rate

    @hagl_rate.setter
    def hagl_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hagl_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hagl_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hagl_rate = value
