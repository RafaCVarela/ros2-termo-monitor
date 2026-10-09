// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_sistema:srv/ResetTemperatura.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces_sistema/srv/reset_temperatura.h"


#ifndef INTERFACES_SISTEMA__SRV__DETAIL__RESET_TEMPERATURA__STRUCT_H_
#define INTERFACES_SISTEMA__SRV__DETAIL__RESET_TEMPERATURA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResetTemperatura in the package interfaces_sistema.
typedef struct interfaces_sistema__srv__ResetTemperatura_Request
{
  uint8_t structure_needs_at_least_one_member;
} interfaces_sistema__srv__ResetTemperatura_Request;

// Struct for a sequence of interfaces_sistema__srv__ResetTemperatura_Request.
typedef struct interfaces_sistema__srv__ResetTemperatura_Request__Sequence
{
  interfaces_sistema__srv__ResetTemperatura_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_sistema__srv__ResetTemperatura_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'saida'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetTemperatura in the package interfaces_sistema.
typedef struct interfaces_sistema__srv__ResetTemperatura_Response
{
  bool sucesso;
  rosidl_runtime_c__String saida;
} interfaces_sistema__srv__ResetTemperatura_Response;

// Struct for a sequence of interfaces_sistema__srv__ResetTemperatura_Response.
typedef struct interfaces_sistema__srv__ResetTemperatura_Response__Sequence
{
  interfaces_sistema__srv__ResetTemperatura_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_sistema__srv__ResetTemperatura_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  interfaces_sistema__srv__ResetTemperatura_Event__request__MAX_SIZE = 1
};
// response
enum
{
  interfaces_sistema__srv__ResetTemperatura_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ResetTemperatura in the package interfaces_sistema.
typedef struct interfaces_sistema__srv__ResetTemperatura_Event
{
  service_msgs__msg__ServiceEventInfo info;
  interfaces_sistema__srv__ResetTemperatura_Request__Sequence request;
  interfaces_sistema__srv__ResetTemperatura_Response__Sequence response;
} interfaces_sistema__srv__ResetTemperatura_Event;

// Struct for a sequence of interfaces_sistema__srv__ResetTemperatura_Event.
typedef struct interfaces_sistema__srv__ResetTemperatura_Event__Sequence
{
  interfaces_sistema__srv__ResetTemperatura_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_sistema__srv__ResetTemperatura_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_SISTEMA__SRV__DETAIL__RESET_TEMPERATURA__STRUCT_H_
