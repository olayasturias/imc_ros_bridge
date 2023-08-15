# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imc_ros_msgs:msg/Maneuver.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Maneuver(type):
    """Metaclass of message 'Maneuver'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'Z_NONE': 0,
        'Z_DEPTH': 1,
        'Z_ALTITUDE': 2,
        'Z_HEIGHT': 3,
        'SUNITS_METERS_PS': 0,
        'SUNITS_RPM': 1,
        'SUNITS_PERCENTAGE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('imc_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'imc_ros_msgs.msg.Maneuver')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__maneuver
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__maneuver
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__maneuver
            cls._TYPE_SUPPORT = module.type_support_msg__msg__maneuver
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__maneuver

            from imc_ros_msgs.msg import PolygonVertex
            if PolygonVertex.__class__._TYPE_SUPPORT is None:
                PolygonVertex.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'Z_NONE': cls.__constants['Z_NONE'],
            'Z_DEPTH': cls.__constants['Z_DEPTH'],
            'Z_ALTITUDE': cls.__constants['Z_ALTITUDE'],
            'Z_HEIGHT': cls.__constants['Z_HEIGHT'],
            'SUNITS_METERS_PS': cls.__constants['SUNITS_METERS_PS'],
            'SUNITS_RPM': cls.__constants['SUNITS_RPM'],
            'SUNITS_PERCENTAGE': cls.__constants['SUNITS_PERCENTAGE'],
        }

    @property
    def Z_NONE(self):
        """Message constant 'Z_NONE'."""
        return Metaclass_Maneuver.__constants['Z_NONE']

    @property
    def Z_DEPTH(self):
        """Message constant 'Z_DEPTH'."""
        return Metaclass_Maneuver.__constants['Z_DEPTH']

    @property
    def Z_ALTITUDE(self):
        """Message constant 'Z_ALTITUDE'."""
        return Metaclass_Maneuver.__constants['Z_ALTITUDE']

    @property
    def Z_HEIGHT(self):
        """Message constant 'Z_HEIGHT'."""
        return Metaclass_Maneuver.__constants['Z_HEIGHT']

    @property
    def SUNITS_METERS_PS(self):
        """Message constant 'SUNITS_METERS_PS'."""
        return Metaclass_Maneuver.__constants['SUNITS_METERS_PS']

    @property
    def SUNITS_RPM(self):
        """Message constant 'SUNITS_RPM'."""
        return Metaclass_Maneuver.__constants['SUNITS_RPM']

    @property
    def SUNITS_PERCENTAGE(self):
        """Message constant 'SUNITS_PERCENTAGE'."""
        return Metaclass_Maneuver.__constants['SUNITS_PERCENTAGE']


class Maneuver(metaclass=Metaclass_Maneuver):
    """
    Message class 'Maneuver'.

    Constants:
      Z_NONE
      Z_DEPTH
      Z_ALTITUDE
      Z_HEIGHT
      SUNITS_METERS_PS
      SUNITS_RPM
      SUNITS_PERCENTAGE
    """

    __slots__ = [
        '_maneuver_name',
        '_maneuver_imc_id',
        '_lat',
        '_lon',
        '_z',
        '_z_units',
        '_speed',
        '_speed_units',
        '_roll',
        '_pitch',
        '_yaw',
        '_timeout',
        '_custom_string',
        '_syringe0',
        '_syringe1',
        '_syringe2',
        '_polygon',
    ]

    _fields_and_field_types = {
        'maneuver_name': 'string',
        'maneuver_imc_id': 'uint16',
        'lat': 'double',
        'lon': 'double',
        'z': 'float',
        'z_units': 'uint8',
        'speed': 'float',
        'speed_units': 'uint8',
        'roll': 'float',
        'pitch': 'float',
        'yaw': 'float',
        'timeout': 'uint16',
        'custom_string': 'string',
        'syringe0': 'uint8',
        'syringe1': 'uint8',
        'syringe2': 'uint8',
        'polygon': 'sequence<imc_ros_msgs/PolygonVertex>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['imc_ros_msgs', 'msg'], 'PolygonVertex')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.maneuver_name = kwargs.get('maneuver_name', str())
        self.maneuver_imc_id = kwargs.get('maneuver_imc_id', int())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.z = kwargs.get('z', float())
        self.z_units = kwargs.get('z_units', int())
        self.speed = kwargs.get('speed', float())
        self.speed_units = kwargs.get('speed_units', int())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.yaw = kwargs.get('yaw', float())
        self.timeout = kwargs.get('timeout', int())
        self.custom_string = kwargs.get('custom_string', str())
        self.syringe0 = kwargs.get('syringe0', int())
        self.syringe1 = kwargs.get('syringe1', int())
        self.syringe2 = kwargs.get('syringe2', int())
        self.polygon = kwargs.get('polygon', [])

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
        if self.maneuver_name != other.maneuver_name:
            return False
        if self.maneuver_imc_id != other.maneuver_imc_id:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.z != other.z:
            return False
        if self.z_units != other.z_units:
            return False
        if self.speed != other.speed:
            return False
        if self.speed_units != other.speed_units:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if self.timeout != other.timeout:
            return False
        if self.custom_string != other.custom_string:
            return False
        if self.syringe0 != other.syringe0:
            return False
        if self.syringe1 != other.syringe1:
            return False
        if self.syringe2 != other.syringe2:
            return False
        if self.polygon != other.polygon:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def maneuver_name(self):
        """Message field 'maneuver_name'."""
        return self._maneuver_name

    @maneuver_name.setter
    def maneuver_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'maneuver_name' field must be of type 'str'"
        self._maneuver_name = value

    @builtins.property
    def maneuver_imc_id(self):
        """Message field 'maneuver_imc_id'."""
        return self._maneuver_imc_id

    @maneuver_imc_id.setter
    def maneuver_imc_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuver_imc_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'maneuver_imc_id' field must be an unsigned integer in [0, 65535]"
        self._maneuver_imc_id = value

    @builtins.property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat = value

    @builtins.property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z = value

    @builtins.property
    def z_units(self):
        """Message field 'z_units'."""
        return self._z_units

    @z_units.setter
    def z_units(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'z_units' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'z_units' field must be an unsigned integer in [0, 255]"
        self._z_units = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def speed_units(self):
        """Message field 'speed_units'."""
        return self._speed_units

    @speed_units.setter
    def speed_units(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_units' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed_units' field must be an unsigned integer in [0, 255]"
        self._speed_units = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeout' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'timeout' field must be an unsigned integer in [0, 65535]"
        self._timeout = value

    @builtins.property
    def custom_string(self):
        """Message field 'custom_string'."""
        return self._custom_string

    @custom_string.setter
    def custom_string(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'custom_string' field must be of type 'str'"
        self._custom_string = value

    @builtins.property
    def syringe0(self):
        """Message field 'syringe0'."""
        return self._syringe0

    @syringe0.setter
    def syringe0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'syringe0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'syringe0' field must be an unsigned integer in [0, 255]"
        self._syringe0 = value

    @builtins.property
    def syringe1(self):
        """Message field 'syringe1'."""
        return self._syringe1

    @syringe1.setter
    def syringe1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'syringe1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'syringe1' field must be an unsigned integer in [0, 255]"
        self._syringe1 = value

    @builtins.property
    def syringe2(self):
        """Message field 'syringe2'."""
        return self._syringe2

    @syringe2.setter
    def syringe2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'syringe2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'syringe2' field must be an unsigned integer in [0, 255]"
        self._syringe2 = value

    @builtins.property
    def polygon(self):
        """Message field 'polygon'."""
        return self._polygon

    @polygon.setter
    def polygon(self, value):
        if __debug__:
            from imc_ros_msgs.msg import PolygonVertex
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
                 all(isinstance(v, PolygonVertex) for v in value) and
                 True), \
                "The 'polygon' field must be a set or sequence and each value of type 'PolygonVertex'"
        self._polygon = value
