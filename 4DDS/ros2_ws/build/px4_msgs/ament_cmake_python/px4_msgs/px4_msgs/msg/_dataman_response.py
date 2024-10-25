# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/DatamanResponse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'data'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DatamanResponse(type):
    """Metaclass of message 'DatamanResponse'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_SUCCESS': 0,
        'STATUS_FAILURE_ID_ERR': 1,
        'STATUS_FAILURE_NO_DATA': 2,
        'STATUS_FAILURE_READ_FAILED': 3,
        'STATUS_FAILURE_WRITE_FAILED': 4,
        'STATUS_FAILURE_CLEAR_FAILED': 5,
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
                'px4_msgs.msg.DatamanResponse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dataman_response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dataman_response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dataman_response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dataman_response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dataman_response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_SUCCESS': cls.__constants['STATUS_SUCCESS'],
            'STATUS_FAILURE_ID_ERR': cls.__constants['STATUS_FAILURE_ID_ERR'],
            'STATUS_FAILURE_NO_DATA': cls.__constants['STATUS_FAILURE_NO_DATA'],
            'STATUS_FAILURE_READ_FAILED': cls.__constants['STATUS_FAILURE_READ_FAILED'],
            'STATUS_FAILURE_WRITE_FAILED': cls.__constants['STATUS_FAILURE_WRITE_FAILED'],
            'STATUS_FAILURE_CLEAR_FAILED': cls.__constants['STATUS_FAILURE_CLEAR_FAILED'],
        }

    @property
    def STATUS_SUCCESS(self):
        """Message constant 'STATUS_SUCCESS'."""
        return Metaclass_DatamanResponse.__constants['STATUS_SUCCESS']

    @property
    def STATUS_FAILURE_ID_ERR(self):
        """Message constant 'STATUS_FAILURE_ID_ERR'."""
        return Metaclass_DatamanResponse.__constants['STATUS_FAILURE_ID_ERR']

    @property
    def STATUS_FAILURE_NO_DATA(self):
        """Message constant 'STATUS_FAILURE_NO_DATA'."""
        return Metaclass_DatamanResponse.__constants['STATUS_FAILURE_NO_DATA']

    @property
    def STATUS_FAILURE_READ_FAILED(self):
        """Message constant 'STATUS_FAILURE_READ_FAILED'."""
        return Metaclass_DatamanResponse.__constants['STATUS_FAILURE_READ_FAILED']

    @property
    def STATUS_FAILURE_WRITE_FAILED(self):
        """Message constant 'STATUS_FAILURE_WRITE_FAILED'."""
        return Metaclass_DatamanResponse.__constants['STATUS_FAILURE_WRITE_FAILED']

    @property
    def STATUS_FAILURE_CLEAR_FAILED(self):
        """Message constant 'STATUS_FAILURE_CLEAR_FAILED'."""
        return Metaclass_DatamanResponse.__constants['STATUS_FAILURE_CLEAR_FAILED']


class DatamanResponse(metaclass=Metaclass_DatamanResponse):
    """
    Message class 'DatamanResponse'.

    Constants:
      STATUS_SUCCESS
      STATUS_FAILURE_ID_ERR
      STATUS_FAILURE_NO_DATA
      STATUS_FAILURE_READ_FAILED
      STATUS_FAILURE_WRITE_FAILED
      STATUS_FAILURE_CLEAR_FAILED
    """

    __slots__ = [
        '_timestamp',
        '_client_id',
        '_request_type',
        '_item',
        '_index',
        '_data',
        '_status',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'client_id': 'uint8',
        'request_type': 'uint8',
        'item': 'uint8',
        'index': 'uint32',
        'data': 'uint8[56]',
        'status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 56),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.client_id = kwargs.get('client_id', int())
        self.request_type = kwargs.get('request_type', int())
        self.item = kwargs.get('item', int())
        self.index = kwargs.get('index', int())
        if 'data' not in kwargs:
            self.data = numpy.zeros(56, dtype=numpy.uint8)
        else:
            self.data = numpy.array(kwargs.get('data'), dtype=numpy.uint8)
            assert self.data.shape == (56, )
        self.status = kwargs.get('status', int())

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
        if self.client_id != other.client_id:
            return False
        if self.request_type != other.request_type:
            return False
        if self.item != other.item:
            return False
        if self.index != other.index:
            return False
        if all(self.data != other.data):
            return False
        if self.status != other.status:
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
    def client_id(self):
        """Message field 'client_id'."""
        return self._client_id

    @client_id.setter
    def client_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'client_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'client_id' field must be an unsigned integer in [0, 255]"
        self._client_id = value

    @builtins.property
    def request_type(self):
        """Message field 'request_type'."""
        return self._request_type

    @request_type.setter
    def request_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'request_type' field must be an unsigned integer in [0, 255]"
        self._request_type = value

    @builtins.property
    def item(self):
        """Message field 'item'."""
        return self._item

    @item.setter
    def item(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'item' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'item' field must be an unsigned integer in [0, 255]"
        self._item = value

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'index' field must be an unsigned integer in [0, 4294967295]"
        self._index = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'data' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 56, \
                "The 'data' numpy.ndarray() must have a size of 56"
            self._data = value
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
                 len(value) == 56 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence with length 56 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value
