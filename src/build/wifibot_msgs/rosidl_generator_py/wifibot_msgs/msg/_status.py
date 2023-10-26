# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wifibot_msgs:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

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
            module = import_type_support('wifibot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wifibot_msgs.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Status(metaclass=Metaclass_Status):
    """Message class 'Status'."""

    __slots__ = [
        '_battery_level',
        '_current',
        '_adc1',
        '_adc2',
        '_adc3',
        '_adc4',
        '_speed_front_left',
        '_speed_front_right',
        '_odometry_left',
        '_odometry_right',
        '_version',
        '_relay1',
        '_relay2',
        '_relay3',
    ]

    _fields_and_field_types = {
        'battery_level': 'double',
        'current': 'double',
        'adc1': 'int32',
        'adc2': 'int32',
        'adc3': 'int32',
        'adc4': 'int32',
        'speed_front_left': 'double',
        'speed_front_right': 'double',
        'odometry_left': 'double',
        'odometry_right': 'double',
        'version': 'int32',
        'relay1': 'int8',
        'relay2': 'int8',
        'relay3': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.battery_level = kwargs.get('battery_level', float())
        self.current = kwargs.get('current', float())
        self.adc1 = kwargs.get('adc1', int())
        self.adc2 = kwargs.get('adc2', int())
        self.adc3 = kwargs.get('adc3', int())
        self.adc4 = kwargs.get('adc4', int())
        self.speed_front_left = kwargs.get('speed_front_left', float())
        self.speed_front_right = kwargs.get('speed_front_right', float())
        self.odometry_left = kwargs.get('odometry_left', float())
        self.odometry_right = kwargs.get('odometry_right', float())
        self.version = kwargs.get('version', int())
        self.relay1 = kwargs.get('relay1', int())
        self.relay2 = kwargs.get('relay2', int())
        self.relay3 = kwargs.get('relay3', int())

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
        if self.battery_level != other.battery_level:
            return False
        if self.current != other.current:
            return False
        if self.adc1 != other.adc1:
            return False
        if self.adc2 != other.adc2:
            return False
        if self.adc3 != other.adc3:
            return False
        if self.adc4 != other.adc4:
            return False
        if self.speed_front_left != other.speed_front_left:
            return False
        if self.speed_front_right != other.speed_front_right:
            return False
        if self.odometry_left != other.odometry_left:
            return False
        if self.odometry_right != other.odometry_right:
            return False
        if self.version != other.version:
            return False
        if self.relay1 != other.relay1:
            return False
        if self.relay2 != other.relay2:
            return False
        if self.relay3 != other.relay3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def battery_level(self):
        """Message field 'battery_level'."""
        return self._battery_level

    @battery_level.setter
    def battery_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_level' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'battery_level' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._battery_level = value

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current = value

    @builtins.property
    def adc1(self):
        """Message field 'adc1'."""
        return self._adc1

    @adc1.setter
    def adc1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'adc1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'adc1' field must be an integer in [-2147483648, 2147483647]"
        self._adc1 = value

    @builtins.property
    def adc2(self):
        """Message field 'adc2'."""
        return self._adc2

    @adc2.setter
    def adc2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'adc2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'adc2' field must be an integer in [-2147483648, 2147483647]"
        self._adc2 = value

    @builtins.property
    def adc3(self):
        """Message field 'adc3'."""
        return self._adc3

    @adc3.setter
    def adc3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'adc3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'adc3' field must be an integer in [-2147483648, 2147483647]"
        self._adc3 = value

    @builtins.property
    def adc4(self):
        """Message field 'adc4'."""
        return self._adc4

    @adc4.setter
    def adc4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'adc4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'adc4' field must be an integer in [-2147483648, 2147483647]"
        self._adc4 = value

    @builtins.property
    def speed_front_left(self):
        """Message field 'speed_front_left'."""
        return self._speed_front_left

    @speed_front_left.setter
    def speed_front_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_front_left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_front_left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_front_left = value

    @builtins.property
    def speed_front_right(self):
        """Message field 'speed_front_right'."""
        return self._speed_front_right

    @speed_front_right.setter
    def speed_front_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_front_right' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_front_right' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_front_right = value

    @builtins.property
    def odometry_left(self):
        """Message field 'odometry_left'."""
        return self._odometry_left

    @odometry_left.setter
    def odometry_left(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'odometry_left' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'odometry_left' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._odometry_left = value

    @builtins.property
    def odometry_right(self):
        """Message field 'odometry_right'."""
        return self._odometry_right

    @odometry_right.setter
    def odometry_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'odometry_right' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'odometry_right' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._odometry_right = value

    @builtins.property
    def version(self):
        """Message field 'version'."""
        return self._version

    @version.setter
    def version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'version' field must be an integer in [-2147483648, 2147483647]"
        self._version = value

    @builtins.property
    def relay1(self):
        """Message field 'relay1'."""
        return self._relay1

    @relay1.setter
    def relay1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relay1' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'relay1' field must be an integer in [-128, 127]"
        self._relay1 = value

    @builtins.property
    def relay2(self):
        """Message field 'relay2'."""
        return self._relay2

    @relay2.setter
    def relay2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relay2' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'relay2' field must be an integer in [-128, 127]"
        self._relay2 = value

    @builtins.property
    def relay3(self):
        """Message field 'relay3'."""
        return self._relay3

    @relay3.setter
    def relay3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relay3' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'relay3' field must be an integer in [-128, 127]"
        self._relay3 = value
