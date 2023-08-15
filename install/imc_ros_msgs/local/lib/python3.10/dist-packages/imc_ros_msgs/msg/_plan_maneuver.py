# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imc_ros_msgs:msg/PlanManeuver.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanManeuver(type):
    """Metaclass of message 'PlanManeuver'."""

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
            module = import_type_support('imc_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'imc_ros_msgs.msg.PlanManeuver')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plan_maneuver
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plan_maneuver
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plan_maneuver
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plan_maneuver
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plan_maneuver

            from imc_ros_msgs.msg import Maneuver
            if Maneuver.__class__._TYPE_SUPPORT is None:
                Maneuver.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanManeuver(metaclass=Metaclass_PlanManeuver):
    """Message class 'PlanManeuver'."""

    __slots__ = [
        '_maneuver_id',
        '_maneuver',
    ]

    _fields_and_field_types = {
        'maneuver_id': 'string',
        'maneuver': 'imc_ros_msgs/Maneuver',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['imc_ros_msgs', 'msg'], 'Maneuver'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.maneuver_id = kwargs.get('maneuver_id', str())
        from imc_ros_msgs.msg import Maneuver
        self.maneuver = kwargs.get('maneuver', Maneuver())

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
        if self.maneuver_id != other.maneuver_id:
            return False
        if self.maneuver != other.maneuver:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def maneuver_id(self):
        """Message field 'maneuver_id'."""
        return self._maneuver_id

    @maneuver_id.setter
    def maneuver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'maneuver_id' field must be of type 'str'"
        self._maneuver_id = value

    @builtins.property
    def maneuver(self):
        """Message field 'maneuver'."""
        return self._maneuver

    @maneuver.setter
    def maneuver(self, value):
        if __debug__:
            from imc_ros_msgs.msg import Maneuver
            assert \
                isinstance(value, Maneuver), \
                "The 'maneuver' field must be a sub message of type 'Maneuver'"
        self._maneuver = value
