# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/IMU.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IMU(type):
    """Metaclass of message 'IMU'."""

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
                'interfaces.msg.IMU')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu

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


class IMU(metaclass=Metaclass_IMU):
    """Message class 'IMU'."""

    __slots__ = [
        '_system_timestamp',
        '_posix_time',
        '_timestamp',
        '_microseconds',
        '_is_valid',
        '_has_data_path_overrun',
        '_has_flash_update_failure',
        '_has_spi_com_error',
        '_has_low_voltage',
        '_has_sensor_failure',
        '_has_memory_failure',
        '_has_gyro_1_failure',
        '_has_gyro_2_failure',
        '_has_accelerometer_failure',
        '_accelerometer_x',
        '_accelerometer_y',
        '_accelerometer_z',
        '_gyro_x',
        '_gyro_y',
        '_gyro_z',
        '_temperature',
    ]

    _fields_and_field_types = {
        'system_timestamp': 'builtin_interfaces/Time',
        'posix_time': 'boolean',
        'timestamp': 'uint32',
        'microseconds': 'uint32',
        'is_valid': 'boolean',
        'has_data_path_overrun': 'boolean',
        'has_flash_update_failure': 'boolean',
        'has_spi_com_error': 'boolean',
        'has_low_voltage': 'boolean',
        'has_sensor_failure': 'boolean',
        'has_memory_failure': 'boolean',
        'has_gyro_1_failure': 'boolean',
        'has_gyro_2_failure': 'boolean',
        'has_accelerometer_failure': 'boolean',
        'accelerometer_x': 'float',
        'accelerometer_y': 'float',
        'accelerometer_z': 'float',
        'gyro_x': 'float',
        'gyro_y': 'float',
        'gyro_z': 'float',
        'temperature': 'float',
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.system_timestamp = kwargs.get('system_timestamp', Time())
        self.posix_time = kwargs.get('posix_time', bool())
        self.timestamp = kwargs.get('timestamp', int())
        self.microseconds = kwargs.get('microseconds', int())
        self.is_valid = kwargs.get('is_valid', bool())
        self.has_data_path_overrun = kwargs.get('has_data_path_overrun', bool())
        self.has_flash_update_failure = kwargs.get('has_flash_update_failure', bool())
        self.has_spi_com_error = kwargs.get('has_spi_com_error', bool())
        self.has_low_voltage = kwargs.get('has_low_voltage', bool())
        self.has_sensor_failure = kwargs.get('has_sensor_failure', bool())
        self.has_memory_failure = kwargs.get('has_memory_failure', bool())
        self.has_gyro_1_failure = kwargs.get('has_gyro_1_failure', bool())
        self.has_gyro_2_failure = kwargs.get('has_gyro_2_failure', bool())
        self.has_accelerometer_failure = kwargs.get('has_accelerometer_failure', bool())
        self.accelerometer_x = kwargs.get('accelerometer_x', float())
        self.accelerometer_y = kwargs.get('accelerometer_y', float())
        self.accelerometer_z = kwargs.get('accelerometer_z', float())
        self.gyro_x = kwargs.get('gyro_x', float())
        self.gyro_y = kwargs.get('gyro_y', float())
        self.gyro_z = kwargs.get('gyro_z', float())
        self.temperature = kwargs.get('temperature', float())

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
        if self.is_valid != other.is_valid:
            return False
        if self.has_data_path_overrun != other.has_data_path_overrun:
            return False
        if self.has_flash_update_failure != other.has_flash_update_failure:
            return False
        if self.has_spi_com_error != other.has_spi_com_error:
            return False
        if self.has_low_voltage != other.has_low_voltage:
            return False
        if self.has_sensor_failure != other.has_sensor_failure:
            return False
        if self.has_memory_failure != other.has_memory_failure:
            return False
        if self.has_gyro_1_failure != other.has_gyro_1_failure:
            return False
        if self.has_gyro_2_failure != other.has_gyro_2_failure:
            return False
        if self.has_accelerometer_failure != other.has_accelerometer_failure:
            return False
        if self.accelerometer_x != other.accelerometer_x:
            return False
        if self.accelerometer_y != other.accelerometer_y:
            return False
        if self.accelerometer_z != other.accelerometer_z:
            return False
        if self.gyro_x != other.gyro_x:
            return False
        if self.gyro_y != other.gyro_y:
            return False
        if self.gyro_z != other.gyro_z:
            return False
        if self.temperature != other.temperature:
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
    def is_valid(self):
        """Message field 'is_valid'."""
        return self._is_valid

    @is_valid.setter
    def is_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid' field must be of type 'bool'"
        self._is_valid = value

    @builtins.property
    def has_data_path_overrun(self):
        """Message field 'has_data_path_overrun'."""
        return self._has_data_path_overrun

    @has_data_path_overrun.setter
    def has_data_path_overrun(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_data_path_overrun' field must be of type 'bool'"
        self._has_data_path_overrun = value

    @builtins.property
    def has_flash_update_failure(self):
        """Message field 'has_flash_update_failure'."""
        return self._has_flash_update_failure

    @has_flash_update_failure.setter
    def has_flash_update_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_flash_update_failure' field must be of type 'bool'"
        self._has_flash_update_failure = value

    @builtins.property
    def has_spi_com_error(self):
        """Message field 'has_spi_com_error'."""
        return self._has_spi_com_error

    @has_spi_com_error.setter
    def has_spi_com_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_spi_com_error' field must be of type 'bool'"
        self._has_spi_com_error = value

    @builtins.property
    def has_low_voltage(self):
        """Message field 'has_low_voltage'."""
        return self._has_low_voltage

    @has_low_voltage.setter
    def has_low_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_low_voltage' field must be of type 'bool'"
        self._has_low_voltage = value

    @builtins.property
    def has_sensor_failure(self):
        """Message field 'has_sensor_failure'."""
        return self._has_sensor_failure

    @has_sensor_failure.setter
    def has_sensor_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_sensor_failure' field must be of type 'bool'"
        self._has_sensor_failure = value

    @builtins.property
    def has_memory_failure(self):
        """Message field 'has_memory_failure'."""
        return self._has_memory_failure

    @has_memory_failure.setter
    def has_memory_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_memory_failure' field must be of type 'bool'"
        self._has_memory_failure = value

    @builtins.property
    def has_gyro_1_failure(self):
        """Message field 'has_gyro_1_failure'."""
        return self._has_gyro_1_failure

    @has_gyro_1_failure.setter
    def has_gyro_1_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_gyro_1_failure' field must be of type 'bool'"
        self._has_gyro_1_failure = value

    @builtins.property
    def has_gyro_2_failure(self):
        """Message field 'has_gyro_2_failure'."""
        return self._has_gyro_2_failure

    @has_gyro_2_failure.setter
    def has_gyro_2_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_gyro_2_failure' field must be of type 'bool'"
        self._has_gyro_2_failure = value

    @builtins.property
    def has_accelerometer_failure(self):
        """Message field 'has_accelerometer_failure'."""
        return self._has_accelerometer_failure

    @has_accelerometer_failure.setter
    def has_accelerometer_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_accelerometer_failure' field must be of type 'bool'"
        self._has_accelerometer_failure = value

    @builtins.property
    def accelerometer_x(self):
        """Message field 'accelerometer_x'."""
        return self._accelerometer_x

    @accelerometer_x.setter
    def accelerometer_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accelerometer_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accelerometer_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accelerometer_x = value

    @builtins.property
    def accelerometer_y(self):
        """Message field 'accelerometer_y'."""
        return self._accelerometer_y

    @accelerometer_y.setter
    def accelerometer_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accelerometer_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accelerometer_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accelerometer_y = value

    @builtins.property
    def accelerometer_z(self):
        """Message field 'accelerometer_z'."""
        return self._accelerometer_z

    @accelerometer_z.setter
    def accelerometer_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accelerometer_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accelerometer_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accelerometer_z = value

    @builtins.property
    def gyro_x(self):
        """Message field 'gyro_x'."""
        return self._gyro_x

    @gyro_x.setter
    def gyro_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_x = value

    @builtins.property
    def gyro_y(self):
        """Message field 'gyro_y'."""
        return self._gyro_y

    @gyro_y.setter
    def gyro_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_y = value

    @builtins.property
    def gyro_z(self):
        """Message field 'gyro_z'."""
        return self._gyro_z

    @gyro_z.setter
    def gyro_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_z = value

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
