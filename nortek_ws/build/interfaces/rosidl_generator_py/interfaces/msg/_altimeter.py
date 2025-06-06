# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/Altimeter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Altimeter(type):
    """Metaclass of message 'Altimeter'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.Altimeter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__altimeter
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__altimeter
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__altimeter
            cls._TYPE_SUPPORT = module.type_support_msg__msg__altimeter
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__altimeter

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Altimeter(metaclass=Metaclass_Altimeter):
    """Message class 'Altimeter'."""

    __slots__ = [
        '_system_timestamp',
        '_posix_time',
        '_timestamp',
        '_microseconds',
        '_altimeter_distance_valid',
        '_altimeter_quality_valid',
        '_pressure_valid',
        '_temperature_valid',
        '_serial_number',
        '_sound_speed',
        '_temperature',
        '_pressure',
        '_altimeter_distance',
        '_altimeter_quality',
    ]

    _fields_and_field_types = {
        'system_timestamp': 'builtin_interfaces/Time',
        'posix_time': 'boolean',
        'timestamp': 'uint32',
        'microseconds': 'uint32',
        'altimeter_distance_valid': 'boolean',
        'altimeter_quality_valid': 'boolean',
        'pressure_valid': 'boolean',
        'temperature_valid': 'boolean',
        'serial_number': 'uint32',
        'sound_speed': 'float',
        'temperature': 'float',
        'pressure': 'float',
        'altimeter_distance': 'float',
        'altimeter_quality': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.system_timestamp = kwargs.get('system_timestamp', Time())
        self.posix_time = kwargs.get('posix_time', bool())
        self.timestamp = kwargs.get('timestamp', int())
        self.microseconds = kwargs.get('microseconds', int())
        self.altimeter_distance_valid = kwargs.get('altimeter_distance_valid', bool())
        self.altimeter_quality_valid = kwargs.get('altimeter_quality_valid', bool())
        self.pressure_valid = kwargs.get('pressure_valid', bool())
        self.temperature_valid = kwargs.get('temperature_valid', bool())
        self.serial_number = kwargs.get('serial_number', int())
        self.sound_speed = kwargs.get('sound_speed', float())
        self.temperature = kwargs.get('temperature', float())
        self.pressure = kwargs.get('pressure', float())
        self.altimeter_distance = kwargs.get('altimeter_distance', float())
        self.altimeter_quality = kwargs.get('altimeter_quality', int())

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
        if self.system_timestamp != other.system_timestamp:
            return False
        if self.posix_time != other.posix_time:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.microseconds != other.microseconds:
            return False
        if self.altimeter_distance_valid != other.altimeter_distance_valid:
            return False
        if self.altimeter_quality_valid != other.altimeter_quality_valid:
            return False
        if self.pressure_valid != other.pressure_valid:
            return False
        if self.temperature_valid != other.temperature_valid:
            return False
        if self.serial_number != other.serial_number:
            return False
        if self.sound_speed != other.sound_speed:
            return False
        if self.temperature != other.temperature:
            return False
        if self.pressure != other.pressure:
            return False
        if self.altimeter_distance != other.altimeter_distance:
            return False
        if self.altimeter_quality != other.altimeter_quality:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def system_timestamp(self):
        """Message field 'system_timestamp'."""
        return self._system_timestamp

    @system_timestamp.setter
    def system_timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'system_timestamp' field must be a sub message of type 'Time'"
        self._system_timestamp = value

    @builtins.property
    def posix_time(self):
        """Message field 'posix_time'."""
        return self._posix_time

    @posix_time.setter
    def posix_time(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'posix_time' field must be of type 'bool'"
        self._posix_time = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp = value

    @builtins.property
    def microseconds(self):
        """Message field 'microseconds'."""
        return self._microseconds

    @microseconds.setter
    def microseconds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'microseconds' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'microseconds' field must be an unsigned integer in [0, 4294967295]"
        self._microseconds = value

    @builtins.property
    def altimeter_distance_valid(self):
        """Message field 'altimeter_distance_valid'."""
        return self._altimeter_distance_valid

    @altimeter_distance_valid.setter
    def altimeter_distance_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'altimeter_distance_valid' field must be of type 'bool'"
        self._altimeter_distance_valid = value

    @builtins.property
    def altimeter_quality_valid(self):
        """Message field 'altimeter_quality_valid'."""
        return self._altimeter_quality_valid

    @altimeter_quality_valid.setter
    def altimeter_quality_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'altimeter_quality_valid' field must be of type 'bool'"
        self._altimeter_quality_valid = value

    @builtins.property
    def pressure_valid(self):
        """Message field 'pressure_valid'."""
        return self._pressure_valid

    @pressure_valid.setter
    def pressure_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pressure_valid' field must be of type 'bool'"
        self._pressure_valid = value

    @builtins.property
    def temperature_valid(self):
        """Message field 'temperature_valid'."""
        return self._temperature_valid

    @temperature_valid.setter
    def temperature_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'temperature_valid' field must be of type 'bool'"
        self._temperature_valid = value

    @builtins.property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'serial_number' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'serial_number' field must be an unsigned integer in [0, 4294967295]"
        self._serial_number = value

    @builtins.property
    def sound_speed(self):
        """Message field 'sound_speed'."""
        return self._sound_speed

    @sound_speed.setter
    def sound_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sound_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sound_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sound_speed = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature = value

    @builtins.property
    def pressure(self):
        """Message field 'pressure'."""
        return self._pressure

    @pressure.setter
    def pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pressure = value

    @builtins.property
    def altimeter_distance(self):
        """Message field 'altimeter_distance'."""
        return self._altimeter_distance

    @altimeter_distance.setter
    def altimeter_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altimeter_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altimeter_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altimeter_distance = value

    @builtins.property
    def altimeter_quality(self):
        """Message field 'altimeter_quality'."""
        return self._altimeter_quality

    @altimeter_quality.setter
    def altimeter_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'altimeter_quality' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'altimeter_quality' field must be an unsigned integer in [0, 65535]"
        self._altimeter_quality = value
