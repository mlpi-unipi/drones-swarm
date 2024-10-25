# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleLandDetected.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleLandDetected(type):
    """Metaclass of message 'VehicleLandDetected'."""

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
                'px4_msgs.msg.VehicleLandDetected')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_land_detected
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_land_detected
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_land_detected
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_land_detected
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_land_detected

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleLandDetected(metaclass=Metaclass_VehicleLandDetected):
    """Message class 'VehicleLandDetected'."""

    __slots__ = [
        '_timestamp',
        '_freefall',
        '_ground_contact',
        '_maybe_landed',
        '_landed',
        '_in_ground_effect',
        '_in_descend',
        '_has_low_throttle',
        '_vertical_movement',
        '_horizontal_movement',
        '_rotational_movement',
        '_close_to_ground_or_skipped_check',
        '_at_rest',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'freefall': 'boolean',
        'ground_contact': 'boolean',
        'maybe_landed': 'boolean',
        'landed': 'boolean',
        'in_ground_effect': 'boolean',
        'in_descend': 'boolean',
        'has_low_throttle': 'boolean',
        'vertical_movement': 'boolean',
        'horizontal_movement': 'boolean',
        'rotational_movement': 'boolean',
        'close_to_ground_or_skipped_check': 'boolean',
        'at_rest': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.freefall = kwargs.get('freefall', bool())
        self.ground_contact = kwargs.get('ground_contact', bool())
        self.maybe_landed = kwargs.get('maybe_landed', bool())
        self.landed = kwargs.get('landed', bool())
        self.in_ground_effect = kwargs.get('in_ground_effect', bool())
        self.in_descend = kwargs.get('in_descend', bool())
        self.has_low_throttle = kwargs.get('has_low_throttle', bool())
        self.vertical_movement = kwargs.get('vertical_movement', bool())
        self.horizontal_movement = kwargs.get('horizontal_movement', bool())
        self.rotational_movement = kwargs.get('rotational_movement', bool())
        self.close_to_ground_or_skipped_check = kwargs.get('close_to_ground_or_skipped_check', bool())
        self.at_rest = kwargs.get('at_rest', bool())

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
        if self.freefall != other.freefall:
            return False
        if self.ground_contact != other.ground_contact:
            return False
        if self.maybe_landed != other.maybe_landed:
            return False
        if self.landed != other.landed:
            return False
        if self.in_ground_effect != other.in_ground_effect:
            return False
        if self.in_descend != other.in_descend:
            return False
        if self.has_low_throttle != other.has_low_throttle:
            return False
        if self.vertical_movement != other.vertical_movement:
            return False
        if self.horizontal_movement != other.horizontal_movement:
            return False
        if self.rotational_movement != other.rotational_movement:
            return False
        if self.close_to_ground_or_skipped_check != other.close_to_ground_or_skipped_check:
            return False
        if self.at_rest != other.at_rest:
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
    def freefall(self):
        """Message field 'freefall'."""
        return self._freefall

    @freefall.setter
    def freefall(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'freefall' field must be of type 'bool'"
        self._freefall = value

    @builtins.property
    def ground_contact(self):
        """Message field 'ground_contact'."""
        return self._ground_contact

    @ground_contact.setter
    def ground_contact(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ground_contact' field must be of type 'bool'"
        self._ground_contact = value

    @builtins.property
    def maybe_landed(self):
        """Message field 'maybe_landed'."""
        return self._maybe_landed

    @maybe_landed.setter
    def maybe_landed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'maybe_landed' field must be of type 'bool'"
        self._maybe_landed = value

    @builtins.property
    def landed(self):
        """Message field 'landed'."""
        return self._landed

    @landed.setter
    def landed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'landed' field must be of type 'bool'"
        self._landed = value

    @builtins.property
    def in_ground_effect(self):
        """Message field 'in_ground_effect'."""
        return self._in_ground_effect

    @in_ground_effect.setter
    def in_ground_effect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_ground_effect' field must be of type 'bool'"
        self._in_ground_effect = value

    @builtins.property
    def in_descend(self):
        """Message field 'in_descend'."""
        return self._in_descend

    @in_descend.setter
    def in_descend(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_descend' field must be of type 'bool'"
        self._in_descend = value

    @builtins.property
    def has_low_throttle(self):
        """Message field 'has_low_throttle'."""
        return self._has_low_throttle

    @has_low_throttle.setter
    def has_low_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_low_throttle' field must be of type 'bool'"
        self._has_low_throttle = value

    @builtins.property
    def vertical_movement(self):
        """Message field 'vertical_movement'."""
        return self._vertical_movement

    @vertical_movement.setter
    def vertical_movement(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vertical_movement' field must be of type 'bool'"
        self._vertical_movement = value

    @builtins.property
    def horizontal_movement(self):
        """Message field 'horizontal_movement'."""
        return self._horizontal_movement

    @horizontal_movement.setter
    def horizontal_movement(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'horizontal_movement' field must be of type 'bool'"
        self._horizontal_movement = value

    @builtins.property
    def rotational_movement(self):
        """Message field 'rotational_movement'."""
        return self._rotational_movement

    @rotational_movement.setter
    def rotational_movement(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rotational_movement' field must be of type 'bool'"
        self._rotational_movement = value

    @builtins.property
    def close_to_ground_or_skipped_check(self):
        """Message field 'close_to_ground_or_skipped_check'."""
        return self._close_to_ground_or_skipped_check

    @close_to_ground_or_skipped_check.setter
    def close_to_ground_or_skipped_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'close_to_ground_or_skipped_check' field must be of type 'bool'"
        self._close_to_ground_or_skipped_check = value

    @builtins.property
    def at_rest(self):
        """Message field 'at_rest'."""
        return self._at_rest

    @at_rest.setter
    def at_rest(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'at_rest' field must be of type 'bool'"
        self._at_rest = value
