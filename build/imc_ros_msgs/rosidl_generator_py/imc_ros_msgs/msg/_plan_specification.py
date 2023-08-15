# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imc_ros_msgs:msg/PlanSpecification.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanSpecification(type):
    """Metaclass of message 'PlanSpecification'."""

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
                'imc_ros_msgs.msg.PlanSpecification')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plan_specification
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plan_specification
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plan_specification
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plan_specification
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plan_specification

            from imc_ros_msgs.msg import PlanManeuver
            if PlanManeuver.__class__._TYPE_SUPPORT is None:
                PlanManeuver.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanSpecification(metaclass=Metaclass_PlanSpecification):
    """Message class 'PlanSpecification'."""

    __slots__ = [
        '_plan_id',
        '_description',
        '_vnamespace',
        '_start_man_id',
        '_maneuvers',
    ]

    _fields_and_field_types = {
        'plan_id': 'string',
        'description': 'string',
        'vnamespace': 'string',
        'start_man_id': 'string',
        'maneuvers': 'sequence<imc_ros_msgs/PlanManeuver>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['imc_ros_msgs', 'msg'], 'PlanManeuver')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.plan_id = kwargs.get('plan_id', str())
        self.description = kwargs.get('description', str())
        self.vnamespace = kwargs.get('vnamespace', str())
        self.start_man_id = kwargs.get('start_man_id', str())
        self.maneuvers = kwargs.get('maneuvers', [])

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
        if self.plan_id != other.plan_id:
            return False
        if self.description != other.description:
            return False
        if self.vnamespace != other.vnamespace:
            return False
        if self.start_man_id != other.start_man_id:
            return False
        if self.maneuvers != other.maneuvers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def plan_id(self):
        """Message field 'plan_id'."""
        return self._plan_id

    @plan_id.setter
    def plan_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'plan_id' field must be of type 'str'"
        self._plan_id = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

    @builtins.property
    def vnamespace(self):
        """Message field 'vnamespace'."""
        return self._vnamespace

    @vnamespace.setter
    def vnamespace(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vnamespace' field must be of type 'str'"
        self._vnamespace = value

    @builtins.property
    def start_man_id(self):
        """Message field 'start_man_id'."""
        return self._start_man_id

    @start_man_id.setter
    def start_man_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'start_man_id' field must be of type 'str'"
        self._start_man_id = value

    @builtins.property
    def maneuvers(self):
        """Message field 'maneuvers'."""
        return self._maneuvers

    @maneuvers.setter
    def maneuvers(self, value):
        if __debug__:
            from imc_ros_msgs.msg import PlanManeuver
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
                 all(isinstance(v, PlanManeuver) for v in value) and
                 True), \
                "The 'maneuvers' field must be a set or sequence and each value of type 'PlanManeuver'"
        self._maneuvers = value
