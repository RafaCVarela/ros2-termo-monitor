// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_sistema:srv/ResetTemperatura.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_sistema/srv/detail/reset_temperatura__rosidl_typesupport_introspection_c.h"
#include "interfaces_sistema/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_sistema/srv/detail/reset_temperatura__functions.h"
#include "interfaces_sistema/srv/detail/reset_temperatura__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_sistema__srv__ResetTemperatura_Request__init(message_memory);
}

void interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_fini_function(void * message_memory)
{
  interfaces_sistema__srv__ResetTemperatura_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_sistema__srv__ResetTemperatura_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_message_members = {
  "interfaces_sistema__srv",  // message namespace
  "ResetTemperatura_Request",  // message name
  1,  // number of fields
  sizeof(interfaces_sistema__srv__ResetTemperatura_Request),
  false,  // has_any_key_member_
  interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_message_member_array,  // message members
  interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_message_type_support_handle = {
  0,
  &interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_message_members,
  get_message_typesupport_handle_function,
  &interfaces_sistema__srv__ResetTemperatura_Request__get_type_hash,
  &interfaces_sistema__srv__ResetTemperatura_Request__get_type_description,
  &interfaces_sistema__srv__ResetTemperatura_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_sistema
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Request)() {
  if (!interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_message_type_support_handle.typesupport_identifier) {
    interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces_sistema/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__functions.h"
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__struct.h"


// Include directives for member types
// Member `saida`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_sistema__srv__ResetTemperatura_Response__init(message_memory);
}

void interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_fini_function(void * message_memory)
{
  interfaces_sistema__srv__ResetTemperatura_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_member_array[2] = {
  {
    "sucesso",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_sistema__srv__ResetTemperatura_Response, sucesso),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "saida",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_sistema__srv__ResetTemperatura_Response, saida),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_members = {
  "interfaces_sistema__srv",  // message namespace
  "ResetTemperatura_Response",  // message name
  2,  // number of fields
  sizeof(interfaces_sistema__srv__ResetTemperatura_Response),
  false,  // has_any_key_member_
  interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_member_array,  // message members
  interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_type_support_handle = {
  0,
  &interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_members,
  get_message_typesupport_handle_function,
  &interfaces_sistema__srv__ResetTemperatura_Response__get_type_hash,
  &interfaces_sistema__srv__ResetTemperatura_Response__get_type_description,
  &interfaces_sistema__srv__ResetTemperatura_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_sistema
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Response)() {
  if (!interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_type_support_handle.typesupport_identifier) {
    interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces_sistema/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__functions.h"
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "interfaces_sistema/srv/reset_temperatura.h"
// Member `request`
// Member `response`
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_sistema__srv__ResetTemperatura_Event__init(message_memory);
}

void interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_fini_function(void * message_memory)
{
  interfaces_sistema__srv__ResetTemperatura_Event__fini(message_memory);
}

size_t interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__size_function__ResetTemperatura_Event__request(
  const void * untyped_member)
{
  const interfaces_sistema__srv__ResetTemperatura_Request__Sequence * member =
    (const interfaces_sistema__srv__ResetTemperatura_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_const_function__ResetTemperatura_Event__request(
  const void * untyped_member, size_t index)
{
  const interfaces_sistema__srv__ResetTemperatura_Request__Sequence * member =
    (const interfaces_sistema__srv__ResetTemperatura_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_function__ResetTemperatura_Event__request(
  void * untyped_member, size_t index)
{
  interfaces_sistema__srv__ResetTemperatura_Request__Sequence * member =
    (interfaces_sistema__srv__ResetTemperatura_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__fetch_function__ResetTemperatura_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interfaces_sistema__srv__ResetTemperatura_Request * item =
    ((const interfaces_sistema__srv__ResetTemperatura_Request *)
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_const_function__ResetTemperatura_Event__request(untyped_member, index));
  interfaces_sistema__srv__ResetTemperatura_Request * value =
    (interfaces_sistema__srv__ResetTemperatura_Request *)(untyped_value);
  *value = *item;
}

void interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__assign_function__ResetTemperatura_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interfaces_sistema__srv__ResetTemperatura_Request * item =
    ((interfaces_sistema__srv__ResetTemperatura_Request *)
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_function__ResetTemperatura_Event__request(untyped_member, index));
  const interfaces_sistema__srv__ResetTemperatura_Request * value =
    (const interfaces_sistema__srv__ResetTemperatura_Request *)(untyped_value);
  *item = *value;
}

bool interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__resize_function__ResetTemperatura_Event__request(
  void * untyped_member, size_t size)
{
  interfaces_sistema__srv__ResetTemperatura_Request__Sequence * member =
    (interfaces_sistema__srv__ResetTemperatura_Request__Sequence *)(untyped_member);
  interfaces_sistema__srv__ResetTemperatura_Request__Sequence__fini(member);
  return interfaces_sistema__srv__ResetTemperatura_Request__Sequence__init(member, size);
}

size_t interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__size_function__ResetTemperatura_Event__response(
  const void * untyped_member)
{
  const interfaces_sistema__srv__ResetTemperatura_Response__Sequence * member =
    (const interfaces_sistema__srv__ResetTemperatura_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_const_function__ResetTemperatura_Event__response(
  const void * untyped_member, size_t index)
{
  const interfaces_sistema__srv__ResetTemperatura_Response__Sequence * member =
    (const interfaces_sistema__srv__ResetTemperatura_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_function__ResetTemperatura_Event__response(
  void * untyped_member, size_t index)
{
  interfaces_sistema__srv__ResetTemperatura_Response__Sequence * member =
    (interfaces_sistema__srv__ResetTemperatura_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__fetch_function__ResetTemperatura_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interfaces_sistema__srv__ResetTemperatura_Response * item =
    ((const interfaces_sistema__srv__ResetTemperatura_Response *)
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_const_function__ResetTemperatura_Event__response(untyped_member, index));
  interfaces_sistema__srv__ResetTemperatura_Response * value =
    (interfaces_sistema__srv__ResetTemperatura_Response *)(untyped_value);
  *value = *item;
}

void interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__assign_function__ResetTemperatura_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interfaces_sistema__srv__ResetTemperatura_Response * item =
    ((interfaces_sistema__srv__ResetTemperatura_Response *)
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_function__ResetTemperatura_Event__response(untyped_member, index));
  const interfaces_sistema__srv__ResetTemperatura_Response * value =
    (const interfaces_sistema__srv__ResetTemperatura_Response *)(untyped_value);
  *item = *value;
}

bool interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__resize_function__ResetTemperatura_Event__response(
  void * untyped_member, size_t size)
{
  interfaces_sistema__srv__ResetTemperatura_Response__Sequence * member =
    (interfaces_sistema__srv__ResetTemperatura_Response__Sequence *)(untyped_member);
  interfaces_sistema__srv__ResetTemperatura_Response__Sequence__fini(member);
  return interfaces_sistema__srv__ResetTemperatura_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_sistema__srv__ResetTemperatura_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(interfaces_sistema__srv__ResetTemperatura_Event, request),  // bytes offset in struct
    NULL,  // default value
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__size_function__ResetTemperatura_Event__request,  // size() function pointer
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_const_function__ResetTemperatura_Event__request,  // get_const(index) function pointer
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_function__ResetTemperatura_Event__request,  // get(index) function pointer
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__fetch_function__ResetTemperatura_Event__request,  // fetch(index, &value) function pointer
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__assign_function__ResetTemperatura_Event__request,  // assign(index, value) function pointer
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__resize_function__ResetTemperatura_Event__request,  // resize(index) function pointer
    false  // is_rosidl_buffer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(interfaces_sistema__srv__ResetTemperatura_Event, response),  // bytes offset in struct
    NULL,  // default value
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__size_function__ResetTemperatura_Event__response,  // size() function pointer
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_const_function__ResetTemperatura_Event__response,  // get_const(index) function pointer
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__get_function__ResetTemperatura_Event__response,  // get(index) function pointer
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__fetch_function__ResetTemperatura_Event__response,  // fetch(index, &value) function pointer
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__assign_function__ResetTemperatura_Event__response,  // assign(index, value) function pointer
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__resize_function__ResetTemperatura_Event__response,  // resize(index) function pointer
    false  // is_rosidl_buffer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_members = {
  "interfaces_sistema__srv",  // message namespace
  "ResetTemperatura_Event",  // message name
  3,  // number of fields
  sizeof(interfaces_sistema__srv__ResetTemperatura_Event),
  false,  // has_any_key_member_
  interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_member_array,  // message members
  interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_type_support_handle = {
  0,
  &interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_members,
  get_message_typesupport_handle_function,
  &interfaces_sistema__srv__ResetTemperatura_Event__get_type_hash,
  &interfaces_sistema__srv__ResetTemperatura_Event__get_type_description,
  &interfaces_sistema__srv__ResetTemperatura_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_sistema
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Event)() {
  interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Request)();
  interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Response)();
  if (!interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_type_support_handle.typesupport_identifier) {
    interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces_sistema/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces_sistema__srv__detail__reset_temperatura__rosidl_typesupport_introspection_c__ResetTemperatura_service_members = {
  "interfaces_sistema__srv",  // service namespace
  "ResetTemperatura",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // interfaces_sistema__srv__detail__reset_temperatura__rosidl_typesupport_introspection_c__ResetTemperatura_Request_message_type_support_handle,
  NULL,  // response message
  // interfaces_sistema__srv__detail__reset_temperatura__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_type_support_handle
  NULL  // event_message
  // interfaces_sistema__srv__detail__reset_temperatura__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_type_support_handle
};


static rosidl_service_type_support_t interfaces_sistema__srv__detail__reset_temperatura__rosidl_typesupport_introspection_c__ResetTemperatura_service_type_support_handle = {
  0,
  &interfaces_sistema__srv__detail__reset_temperatura__rosidl_typesupport_introspection_c__ResetTemperatura_service_members,
  get_service_typesupport_handle_function,
  &interfaces_sistema__srv__ResetTemperatura_Request__rosidl_typesupport_introspection_c__ResetTemperatura_Request_message_type_support_handle,
  &interfaces_sistema__srv__ResetTemperatura_Response__rosidl_typesupport_introspection_c__ResetTemperatura_Response_message_type_support_handle,
  &interfaces_sistema__srv__ResetTemperatura_Event__rosidl_typesupport_introspection_c__ResetTemperatura_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces_sistema,
    srv,
    ResetTemperatura
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    interfaces_sistema,
    srv,
    ResetTemperatura
  ),
  &interfaces_sistema__srv__ResetTemperatura__get_type_hash,
  &interfaces_sistema__srv__ResetTemperatura__get_type_description,
  &interfaces_sistema__srv__ResetTemperatura__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_sistema
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura)(void) {
  if (!interfaces_sistema__srv__detail__reset_temperatura__rosidl_typesupport_introspection_c__ResetTemperatura_service_type_support_handle.typesupport_identifier) {
    interfaces_sistema__srv__detail__reset_temperatura__rosidl_typesupport_introspection_c__ResetTemperatura_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces_sistema__srv__detail__reset_temperatura__rosidl_typesupport_introspection_c__ResetTemperatura_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_sistema, srv, ResetTemperatura_Event)()->data;
  }

  return &interfaces_sistema__srv__detail__reset_temperatura__rosidl_typesupport_introspection_c__ResetTemperatura_service_type_support_handle;
}
