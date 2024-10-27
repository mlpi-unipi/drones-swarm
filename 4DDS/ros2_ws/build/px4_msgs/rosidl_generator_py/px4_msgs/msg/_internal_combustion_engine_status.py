# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/InternalCombustionEngineStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InternalCombustionEngineStatus(type):
    """Metaclass of message 'InternalCombustionEngineStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_STOPPED': 0,
        'STATE_STARTING': 1,
        'STATE_RUNNING': 2,
        'STATE_FAULT': 3,
        'FLAG_GENERAL_ERROR': 1,
        'FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED': 2,
        'FLAG_CRANKSHAFT_SENSOR_ERROR': 4,
        'FLAG_TEMPERATURE_SUPPORTED': 8,
        'FLAG_TEMPERATURE_BELOW_NOMINAL': 16,
        'FLAG_TEMPERATURE_ABOVE_NOMINAL': 32,
        'FLAG_TEMPERATURE_OVERHEATING': 64,
        'FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL': 128,
        'FLAG_FUEL_PRESSURE_SUPPORTED': 256,
        'FLAG_FUEL_PRESSURE_BELOW_NOMINAL': 512,
        'FLAG_FUEL_PRESSURE_ABOVE_NOMINAL': 1024,
        'FLAG_DETONATION_SUPPORTED': 2048,
        'FLAG_DETONATION_OBSERVED': 4096,
        'FLAG_MISFIRE_SUPPORTED': 8192,
        'FLAG_MISFIRE_OBSERVED': 16384,
        'FLAG_OIL_PRESSURE_SUPPORTED': 32768,
        'FLAG_OIL_PRESSURE_BELOW_NOMINAL': 65536,
        'FLAG_OIL_PRESSURE_ABOVE_NOMINAL': 131072,
        'FLAG_DEBRIS_SUPPORTED': 262144,
        'FLAG_DEBRIS_DETECTED': 524288,
        'SPARK_PLUG_SINGLE': 0,
        'SPARK_PLUG_FIRST_ACTIVE': 1,
        'SPARK_PLUG_SECOND_ACTIVE': 2,
        'SPARK_PLUG_BOTH_ACTIVE': 3,
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
                'px4_msgs.msg.InternalCombustionEngineStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__internal_combustion_engine_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__internal_combustion_engine_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__internal_combustion_engine_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__internal_combustion_engine_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__internal_combustion_engine_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_STOPPED': cls.__constants['STATE_STOPPED'],
            'STATE_STARTING': cls.__constants['STATE_STARTING'],
            'STATE_RUNNING': cls.__constants['STATE_RUNNING'],
            'STATE_FAULT': cls.__constants['STATE_FAULT'],
            'FLAG_GENERAL_ERROR': cls.__constants['FLAG_GENERAL_ERROR'],
            'FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED': cls.__constants['FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED'],
            'FLAG_CRANKSHAFT_SENSOR_ERROR': cls.__constants['FLAG_CRANKSHAFT_SENSOR_ERROR'],
            'FLAG_TEMPERATURE_SUPPORTED': cls.__constants['FLAG_TEMPERATURE_SUPPORTED'],
            'FLAG_TEMPERATURE_BELOW_NOMINAL': cls.__constants['FLAG_TEMPERATURE_BELOW_NOMINAL'],
            'FLAG_TEMPERATURE_ABOVE_NOMINAL': cls.__constants['FLAG_TEMPERATURE_ABOVE_NOMINAL'],
            'FLAG_TEMPERATURE_OVERHEATING': cls.__constants['FLAG_TEMPERATURE_OVERHEATING'],
            'FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL': cls.__constants['FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL'],
            'FLAG_FUEL_PRESSURE_SUPPORTED': cls.__constants['FLAG_FUEL_PRESSURE_SUPPORTED'],
            'FLAG_FUEL_PRESSURE_BELOW_NOMINAL': cls.__constants['FLAG_FUEL_PRESSURE_BELOW_NOMINAL'],
            'FLAG_FUEL_PRESSURE_ABOVE_NOMINAL': cls.__constants['FLAG_FUEL_PRESSURE_ABOVE_NOMINAL'],
            'FLAG_DETONATION_SUPPORTED': cls.__constants['FLAG_DETONATION_SUPPORTED'],
            'FLAG_DETONATION_OBSERVED': cls.__constants['FLAG_DETONATION_OBSERVED'],
            'FLAG_MISFIRE_SUPPORTED': cls.__constants['FLAG_MISFIRE_SUPPORTED'],
            'FLAG_MISFIRE_OBSERVED': cls.__constants['FLAG_MISFIRE_OBSERVED'],
            'FLAG_OIL_PRESSURE_SUPPORTED': cls.__constants['FLAG_OIL_PRESSURE_SUPPORTED'],
            'FLAG_OIL_PRESSURE_BELOW_NOMINAL': cls.__constants['FLAG_OIL_PRESSURE_BELOW_NOMINAL'],
            'FLAG_OIL_PRESSURE_ABOVE_NOMINAL': cls.__constants['FLAG_OIL_PRESSURE_ABOVE_NOMINAL'],
            'FLAG_DEBRIS_SUPPORTED': cls.__constants['FLAG_DEBRIS_SUPPORTED'],
            'FLAG_DEBRIS_DETECTED': cls.__constants['FLAG_DEBRIS_DETECTED'],
            'SPARK_PLUG_SINGLE': cls.__constants['SPARK_PLUG_SINGLE'],
            'SPARK_PLUG_FIRST_ACTIVE': cls.__constants['SPARK_PLUG_FIRST_ACTIVE'],
            'SPARK_PLUG_SECOND_ACTIVE': cls.__constants['SPARK_PLUG_SECOND_ACTIVE'],
            'SPARK_PLUG_BOTH_ACTIVE': cls.__constants['SPARK_PLUG_BOTH_ACTIVE'],
        }

    @property
    def STATE_STOPPED(self):
        """Message constant 'STATE_STOPPED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['STATE_STOPPED']

    @property
    def STATE_STARTING(self):
        """Message constant 'STATE_STARTING'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['STATE_STARTING']

    @property
    def STATE_RUNNING(self):
        """Message constant 'STATE_RUNNING'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['STATE_RUNNING']

    @property
    def STATE_FAULT(self):
        """Message constant 'STATE_FAULT'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['STATE_FAULT']

    @property
    def FLAG_GENERAL_ERROR(self):
        """Message constant 'FLAG_GENERAL_ERROR'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_GENERAL_ERROR']

    @property
    def FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED(self):
        """Message constant 'FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED']

    @property
    def FLAG_CRANKSHAFT_SENSOR_ERROR(self):
        """Message constant 'FLAG_CRANKSHAFT_SENSOR_ERROR'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_CRANKSHAFT_SENSOR_ERROR']

    @property
    def FLAG_TEMPERATURE_SUPPORTED(self):
        """Message constant 'FLAG_TEMPERATURE_SUPPORTED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_TEMPERATURE_SUPPORTED']

    @property
    def FLAG_TEMPERATURE_BELOW_NOMINAL(self):
        """Message constant 'FLAG_TEMPERATURE_BELOW_NOMINAL'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_TEMPERATURE_BELOW_NOMINAL']

    @property
    def FLAG_TEMPERATURE_ABOVE_NOMINAL(self):
        """Message constant 'FLAG_TEMPERATURE_ABOVE_NOMINAL'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_TEMPERATURE_ABOVE_NOMINAL']

    @property
    def FLAG_TEMPERATURE_OVERHEATING(self):
        """Message constant 'FLAG_TEMPERATURE_OVERHEATING'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_TEMPERATURE_OVERHEATING']

    @property
    def FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL(self):
        """Message constant 'FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL']

    @property
    def FLAG_FUEL_PRESSURE_SUPPORTED(self):
        """Message constant 'FLAG_FUEL_PRESSURE_SUPPORTED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_FUEL_PRESSURE_SUPPORTED']

    @property
    def FLAG_FUEL_PRESSURE_BELOW_NOMINAL(self):
        """Message constant 'FLAG_FUEL_PRESSURE_BELOW_NOMINAL'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_FUEL_PRESSURE_BELOW_NOMINAL']

    @property
    def FLAG_FUEL_PRESSURE_ABOVE_NOMINAL(self):
        """Message constant 'FLAG_FUEL_PRESSURE_ABOVE_NOMINAL'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_FUEL_PRESSURE_ABOVE_NOMINAL']

    @property
    def FLAG_DETONATION_SUPPORTED(self):
        """Message constant 'FLAG_DETONATION_SUPPORTED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_DETONATION_SUPPORTED']

    @property
    def FLAG_DETONATION_OBSERVED(self):
        """Message constant 'FLAG_DETONATION_OBSERVED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_DETONATION_OBSERVED']

    @property
    def FLAG_MISFIRE_SUPPORTED(self):
        """Message constant 'FLAG_MISFIRE_SUPPORTED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_MISFIRE_SUPPORTED']

    @property
    def FLAG_MISFIRE_OBSERVED(self):
        """Message constant 'FLAG_MISFIRE_OBSERVED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_MISFIRE_OBSERVED']

    @property
    def FLAG_OIL_PRESSURE_SUPPORTED(self):
        """Message constant 'FLAG_OIL_PRESSURE_SUPPORTED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_OIL_PRESSURE_SUPPORTED']

    @property
    def FLAG_OIL_PRESSURE_BELOW_NOMINAL(self):
        """Message constant 'FLAG_OIL_PRESSURE_BELOW_NOMINAL'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_OIL_PRESSURE_BELOW_NOMINAL']

    @property
    def FLAG_OIL_PRESSURE_ABOVE_NOMINAL(self):
        """Message constant 'FLAG_OIL_PRESSURE_ABOVE_NOMINAL'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_OIL_PRESSURE_ABOVE_NOMINAL']

    @property
    def FLAG_DEBRIS_SUPPORTED(self):
        """Message constant 'FLAG_DEBRIS_SUPPORTED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_DEBRIS_SUPPORTED']

    @property
    def FLAG_DEBRIS_DETECTED(self):
        """Message constant 'FLAG_DEBRIS_DETECTED'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['FLAG_DEBRIS_DETECTED']

    @property
    def SPARK_PLUG_SINGLE(self):
        """Message constant 'SPARK_PLUG_SINGLE'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['SPARK_PLUG_SINGLE']

    @property
    def SPARK_PLUG_FIRST_ACTIVE(self):
        """Message constant 'SPARK_PLUG_FIRST_ACTIVE'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['SPARK_PLUG_FIRST_ACTIVE']

    @property
    def SPARK_PLUG_SECOND_ACTIVE(self):
        """Message constant 'SPARK_PLUG_SECOND_ACTIVE'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['SPARK_PLUG_SECOND_ACTIVE']

    @property
    def SPARK_PLUG_BOTH_ACTIVE(self):
        """Message constant 'SPARK_PLUG_BOTH_ACTIVE'."""
        return Metaclass_InternalCombustionEngineStatus.__constants['SPARK_PLUG_BOTH_ACTIVE']


class InternalCombustionEngineStatus(metaclass=Metaclass_InternalCombustionEngineStatus):
    """
    Message class 'InternalCombustionEngineStatus'.

    Constants:
      STATE_STOPPED
      STATE_STARTING
      STATE_RUNNING
      STATE_FAULT
      FLAG_GENERAL_ERROR
      FLAG_CRANKSHAFT_SENSOR_ERROR_SUPPORTED
      FLAG_CRANKSHAFT_SENSOR_ERROR
      FLAG_TEMPERATURE_SUPPORTED
      FLAG_TEMPERATURE_BELOW_NOMINAL
      FLAG_TEMPERATURE_ABOVE_NOMINAL
      FLAG_TEMPERATURE_OVERHEATING
      FLAG_TEMPERATURE_EGT_ABOVE_NOMINAL
      FLAG_FUEL_PRESSURE_SUPPORTED
      FLAG_FUEL_PRESSURE_BELOW_NOMINAL
      FLAG_FUEL_PRESSURE_ABOVE_NOMINAL
      FLAG_DETONATION_SUPPORTED
      FLAG_DETONATION_OBSERVED
      FLAG_MISFIRE_SUPPORTED
      FLAG_MISFIRE_OBSERVED
      FLAG_OIL_PRESSURE_SUPPORTED
      FLAG_OIL_PRESSURE_BELOW_NOMINAL
      FLAG_OIL_PRESSURE_ABOVE_NOMINAL
      FLAG_DEBRIS_SUPPORTED
      FLAG_DEBRIS_DETECTED
      SPARK_PLUG_SINGLE
      SPARK_PLUG_FIRST_ACTIVE
      SPARK_PLUG_SECOND_ACTIVE
      SPARK_PLUG_BOTH_ACTIVE
    """

    __slots__ = [
        '_timestamp',
        '_state',
        '_flags',
        '_engine_load_percent',
        '_engine_speed_rpm',
        '_spark_dwell_time_ms',
        '_atmospheric_pressure_kpa',
        '_intake_manifold_pressure_kpa',
        '_intake_manifold_temperature',
        '_coolant_temperature',
        '_oil_pressure',
        '_oil_temperature',
        '_fuel_pressure',
        '_fuel_consumption_rate_cm3pm',
        '_estimated_consumed_fuel_volume_cm3',
        '_throttle_position_percent',
        '_ecu_index',
        '_spark_plug_usage',
        '_ignition_timing_deg',
        '_injection_time_ms',
        '_cylinder_head_temperature',
        '_exhaust_gas_temperature',
        '_lambda_coefficient',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'state': 'uint8',
        'flags': 'uint32',
        'engine_load_percent': 'uint8',
        'engine_speed_rpm': 'uint32',
        'spark_dwell_time_ms': 'float',
        'atmospheric_pressure_kpa': 'float',
        'intake_manifold_pressure_kpa': 'float',
        'intake_manifold_temperature': 'float',
        'coolant_temperature': 'float',
        'oil_pressure': 'float',
        'oil_temperature': 'float',
        'fuel_pressure': 'float',
        'fuel_consumption_rate_cm3pm': 'float',
        'estimated_consumed_fuel_volume_cm3': 'float',
        'throttle_position_percent': 'uint8',
        'ecu_index': 'uint8',
        'spark_plug_usage': 'uint8',
        'ignition_timing_deg': 'float',
        'injection_time_ms': 'float',
        'cylinder_head_temperature': 'float',
        'exhaust_gas_temperature': 'float',
        'lambda_coefficient': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.state = kwargs.get('state', int())
        self.flags = kwargs.get('flags', int())
        self.engine_load_percent = kwargs.get('engine_load_percent', int())
        self.engine_speed_rpm = kwargs.get('engine_speed_rpm', int())
        self.spark_dwell_time_ms = kwargs.get('spark_dwell_time_ms', float())
        self.atmospheric_pressure_kpa = kwargs.get('atmospheric_pressure_kpa', float())
        self.intake_manifold_pressure_kpa = kwargs.get('intake_manifold_pressure_kpa', float())
        self.intake_manifold_temperature = kwargs.get('intake_manifold_temperature', float())
        self.coolant_temperature = kwargs.get('coolant_temperature', float())
        self.oil_pressure = kwargs.get('oil_pressure', float())
        self.oil_temperature = kwargs.get('oil_temperature', float())
        self.fuel_pressure = kwargs.get('fuel_pressure', float())
        self.fuel_consumption_rate_cm3pm = kwargs.get('fuel_consumption_rate_cm3pm', float())
        self.estimated_consumed_fuel_volume_cm3 = kwargs.get('estimated_consumed_fuel_volume_cm3', float())
        self.throttle_position_percent = kwargs.get('throttle_position_percent', int())
        self.ecu_index = kwargs.get('ecu_index', int())
        self.spark_plug_usage = kwargs.get('spark_plug_usage', int())
        self.ignition_timing_deg = kwargs.get('ignition_timing_deg', float())
        self.injection_time_ms = kwargs.get('injection_time_ms', float())
        self.cylinder_head_temperature = kwargs.get('cylinder_head_temperature', float())
        self.exhaust_gas_temperature = kwargs.get('exhaust_gas_temperature', float())
        self.lambda_coefficient = kwargs.get('lambda_coefficient', float())

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
        if self.state != other.state:
            return False
        if self.flags != other.flags:
            return False
        if self.engine_load_percent != other.engine_load_percent:
            return False
        if self.engine_speed_rpm != other.engine_speed_rpm:
            return False
        if self.spark_dwell_time_ms != other.spark_dwell_time_ms:
            return False
        if self.atmospheric_pressure_kpa != other.atmospheric_pressure_kpa:
            return False
        if self.intake_manifold_pressure_kpa != other.intake_manifold_pressure_kpa:
            return False
        if self.intake_manifold_temperature != other.intake_manifold_temperature:
            return False
        if self.coolant_temperature != other.coolant_temperature:
            return False
        if self.oil_pressure != other.oil_pressure:
            return False
        if self.oil_temperature != other.oil_temperature:
            return False
        if self.fuel_pressure != other.fuel_pressure:
            return False
        if self.fuel_consumption_rate_cm3pm != other.fuel_consumption_rate_cm3pm:
            return False
        if self.estimated_consumed_fuel_volume_cm3 != other.estimated_consumed_fuel_volume_cm3:
            return False
        if self.throttle_position_percent != other.throttle_position_percent:
            return False
        if self.ecu_index != other.ecu_index:
            return False
        if self.spark_plug_usage != other.spark_plug_usage:
            return False
        if self.ignition_timing_deg != other.ignition_timing_deg:
            return False
        if self.injection_time_ms != other.injection_time_ms:
            return False
        if self.cylinder_head_temperature != other.cylinder_head_temperature:
            return False
        if self.exhaust_gas_temperature != other.exhaust_gas_temperature:
            return False
        if self.lambda_coefficient != other.lambda_coefficient:
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
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'flags' field must be an unsigned integer in [0, 4294967295]"
        self._flags = value

    @builtins.property
    def engine_load_percent(self):
        """Message field 'engine_load_percent'."""
        return self._engine_load_percent

    @engine_load_percent.setter
    def engine_load_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engine_load_percent' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'engine_load_percent' field must be an unsigned integer in [0, 255]"
        self._engine_load_percent = value

    @builtins.property
    def engine_speed_rpm(self):
        """Message field 'engine_speed_rpm'."""
        return self._engine_speed_rpm

    @engine_speed_rpm.setter
    def engine_speed_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engine_speed_rpm' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'engine_speed_rpm' field must be an unsigned integer in [0, 4294967295]"
        self._engine_speed_rpm = value

    @builtins.property
    def spark_dwell_time_ms(self):
        """Message field 'spark_dwell_time_ms'."""
        return self._spark_dwell_time_ms

    @spark_dwell_time_ms.setter
    def spark_dwell_time_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'spark_dwell_time_ms' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'spark_dwell_time_ms' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._spark_dwell_time_ms = value

    @builtins.property
    def atmospheric_pressure_kpa(self):
        """Message field 'atmospheric_pressure_kpa'."""
        return self._atmospheric_pressure_kpa

    @atmospheric_pressure_kpa.setter
    def atmospheric_pressure_kpa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'atmospheric_pressure_kpa' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'atmospheric_pressure_kpa' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._atmospheric_pressure_kpa = value

    @builtins.property
    def intake_manifold_pressure_kpa(self):
        """Message field 'intake_manifold_pressure_kpa'."""
        return self._intake_manifold_pressure_kpa

    @intake_manifold_pressure_kpa.setter
    def intake_manifold_pressure_kpa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'intake_manifold_pressure_kpa' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'intake_manifold_pressure_kpa' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._intake_manifold_pressure_kpa = value

    @builtins.property
    def intake_manifold_temperature(self):
        """Message field 'intake_manifold_temperature'."""
        return self._intake_manifold_temperature

    @intake_manifold_temperature.setter
    def intake_manifold_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'intake_manifold_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'intake_manifold_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._intake_manifold_temperature = value

    @builtins.property
    def coolant_temperature(self):
        """Message field 'coolant_temperature'."""
        return self._coolant_temperature

    @coolant_temperature.setter
    def coolant_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'coolant_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'coolant_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._coolant_temperature = value

    @builtins.property
    def oil_pressure(self):
        """Message field 'oil_pressure'."""
        return self._oil_pressure

    @oil_pressure.setter
    def oil_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'oil_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'oil_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._oil_pressure = value

    @builtins.property
    def oil_temperature(self):
        """Message field 'oil_temperature'."""
        return self._oil_temperature

    @oil_temperature.setter
    def oil_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'oil_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'oil_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._oil_temperature = value

    @builtins.property
    def fuel_pressure(self):
        """Message field 'fuel_pressure'."""
        return self._fuel_pressure

    @fuel_pressure.setter
    def fuel_pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_pressure = value

    @builtins.property
    def fuel_consumption_rate_cm3pm(self):
        """Message field 'fuel_consumption_rate_cm3pm'."""
        return self._fuel_consumption_rate_cm3pm

    @fuel_consumption_rate_cm3pm.setter
    def fuel_consumption_rate_cm3pm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fuel_consumption_rate_cm3pm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fuel_consumption_rate_cm3pm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fuel_consumption_rate_cm3pm = value

    @builtins.property
    def estimated_consumed_fuel_volume_cm3(self):
        """Message field 'estimated_consumed_fuel_volume_cm3'."""
        return self._estimated_consumed_fuel_volume_cm3

    @estimated_consumed_fuel_volume_cm3.setter
    def estimated_consumed_fuel_volume_cm3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'estimated_consumed_fuel_volume_cm3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_consumed_fuel_volume_cm3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_consumed_fuel_volume_cm3 = value

    @builtins.property
    def throttle_position_percent(self):
        """Message field 'throttle_position_percent'."""
        return self._throttle_position_percent

    @throttle_position_percent.setter
    def throttle_position_percent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'throttle_position_percent' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'throttle_position_percent' field must be an unsigned integer in [0, 255]"
        self._throttle_position_percent = value

    @builtins.property
    def ecu_index(self):
        """Message field 'ecu_index'."""
        return self._ecu_index

    @ecu_index.setter
    def ecu_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ecu_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ecu_index' field must be an unsigned integer in [0, 255]"
        self._ecu_index = value

    @builtins.property
    def spark_plug_usage(self):
        """Message field 'spark_plug_usage'."""
        return self._spark_plug_usage

    @spark_plug_usage.setter
    def spark_plug_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spark_plug_usage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'spark_plug_usage' field must be an unsigned integer in [0, 255]"
        self._spark_plug_usage = value

    @builtins.property
    def ignition_timing_deg(self):
        """Message field 'ignition_timing_deg'."""
        return self._ignition_timing_deg

    @ignition_timing_deg.setter
    def ignition_timing_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ignition_timing_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ignition_timing_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ignition_timing_deg = value

    @builtins.property
    def injection_time_ms(self):
        """Message field 'injection_time_ms'."""
        return self._injection_time_ms

    @injection_time_ms.setter
    def injection_time_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'injection_time_ms' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'injection_time_ms' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._injection_time_ms = value

    @builtins.property
    def cylinder_head_temperature(self):
        """Message field 'cylinder_head_temperature'."""
        return self._cylinder_head_temperature

    @cylinder_head_temperature.setter
    def cylinder_head_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cylinder_head_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cylinder_head_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cylinder_head_temperature = value

    @builtins.property
    def exhaust_gas_temperature(self):
        """Message field 'exhaust_gas_temperature'."""
        return self._exhaust_gas_temperature

    @exhaust_gas_temperature.setter
    def exhaust_gas_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'exhaust_gas_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'exhaust_gas_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._exhaust_gas_temperature = value

    @builtins.property
    def lambda_coefficient(self):
        """Message field 'lambda_coefficient'."""
        return self._lambda_coefficient

    @lambda_coefficient.setter
    def lambda_coefficient(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lambda_coefficient' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lambda_coefficient' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lambda_coefficient = value
