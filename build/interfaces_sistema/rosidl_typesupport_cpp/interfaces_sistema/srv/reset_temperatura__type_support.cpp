// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_sistema:srv/ResetTemperatura.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interfaces_sistema/srv/detail/reset_temperatura__functions.h"
#include "interfaces_sistema/srv/detail/reset_temperatura__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interfaces_sistema
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResetTemperatura_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetTemperatura_Request_type_support_ids_t;

static const _ResetTemperatura_Request_type_support_ids_t _ResetTemperatura_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResetTemperatura_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetTemperatura_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetTemperatura_Request_type_support_symbol_names_t _ResetTemperatura_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_sistema, srv, ResetTemperatura_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_sistema, srv, ResetTemperatura_Request)),
  }
};

typedef struct _ResetTemperatura_Request_type_support_data_t
{
  void * data[2];
} _ResetTemperatura_Request_type_support_data_t;

static _ResetTemperatura_Request_type_support_data_t _ResetTemperatura_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetTemperatura_Request_message_typesupport_map = {
  2,
  "interfaces_sistema",
  &_ResetTemperatura_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ResetTemperatura_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ResetTemperatura_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetTemperatura_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetTemperatura_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interfaces_sistema__srv__ResetTemperatura_Request__get_type_hash,
  &interfaces_sistema__srv__ResetTemperatura_Request__get_type_description,
  &interfaces_sistema__srv__ResetTemperatura_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces_sistema

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_sistema::srv::ResetTemperatura_Request>()
{
  return &::interfaces_sistema::srv::rosidl_typesupport_cpp::ResetTemperatura_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_sistema, srv, ResetTemperatura_Request)() {
  return get_message_type_support_handle<interfaces_sistema::srv::ResetTemperatura_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__functions.h"
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_sistema
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResetTemperatura_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetTemperatura_Response_type_support_ids_t;

static const _ResetTemperatura_Response_type_support_ids_t _ResetTemperatura_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResetTemperatura_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetTemperatura_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetTemperatura_Response_type_support_symbol_names_t _ResetTemperatura_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_sistema, srv, ResetTemperatura_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_sistema, srv, ResetTemperatura_Response)),
  }
};

typedef struct _ResetTemperatura_Response_type_support_data_t
{
  void * data[2];
} _ResetTemperatura_Response_type_support_data_t;

static _ResetTemperatura_Response_type_support_data_t _ResetTemperatura_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetTemperatura_Response_message_typesupport_map = {
  2,
  "interfaces_sistema",
  &_ResetTemperatura_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ResetTemperatura_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ResetTemperatura_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetTemperatura_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetTemperatura_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interfaces_sistema__srv__ResetTemperatura_Response__get_type_hash,
  &interfaces_sistema__srv__ResetTemperatura_Response__get_type_description,
  &interfaces_sistema__srv__ResetTemperatura_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces_sistema

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_sistema::srv::ResetTemperatura_Response>()
{
  return &::interfaces_sistema::srv::rosidl_typesupport_cpp::ResetTemperatura_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_sistema, srv, ResetTemperatura_Response)() {
  return get_message_type_support_handle<interfaces_sistema::srv::ResetTemperatura_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__functions.h"
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_sistema
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResetTemperatura_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetTemperatura_Event_type_support_ids_t;

static const _ResetTemperatura_Event_type_support_ids_t _ResetTemperatura_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResetTemperatura_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetTemperatura_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetTemperatura_Event_type_support_symbol_names_t _ResetTemperatura_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_sistema, srv, ResetTemperatura_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_sistema, srv, ResetTemperatura_Event)),
  }
};

typedef struct _ResetTemperatura_Event_type_support_data_t
{
  void * data[2];
} _ResetTemperatura_Event_type_support_data_t;

static _ResetTemperatura_Event_type_support_data_t _ResetTemperatura_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetTemperatura_Event_message_typesupport_map = {
  2,
  "interfaces_sistema",
  &_ResetTemperatura_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ResetTemperatura_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ResetTemperatura_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetTemperatura_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetTemperatura_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &interfaces_sistema__srv__ResetTemperatura_Event__get_type_hash,
  &interfaces_sistema__srv__ResetTemperatura_Event__get_type_description,
  &interfaces_sistema__srv__ResetTemperatura_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces_sistema

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_sistema::srv::ResetTemperatura_Event>()
{
  return &::interfaces_sistema::srv::rosidl_typesupport_cpp::ResetTemperatura_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_sistema, srv, ResetTemperatura_Event)() {
  return get_message_type_support_handle<interfaces_sistema::srv::ResetTemperatura_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace interfaces_sistema
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ResetTemperatura_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetTemperatura_type_support_ids_t;

static const _ResetTemperatura_type_support_ids_t _ResetTemperatura_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ResetTemperatura_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetTemperatura_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetTemperatura_type_support_symbol_names_t _ResetTemperatura_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_sistema, srv, ResetTemperatura)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_sistema, srv, ResetTemperatura)),
  }
};

typedef struct _ResetTemperatura_type_support_data_t
{
  void * data[2];
} _ResetTemperatura_type_support_data_t;

static _ResetTemperatura_type_support_data_t _ResetTemperatura_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetTemperatura_service_typesupport_map = {
  2,
  "interfaces_sistema",
  &_ResetTemperatura_service_typesupport_ids.typesupport_identifier[0],
  &_ResetTemperatura_service_typesupport_symbol_names.symbol_name[0],
  &_ResetTemperatura_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ResetTemperatura_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetTemperatura_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interfaces_sistema::srv::ResetTemperatura_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interfaces_sistema::srv::ResetTemperatura_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<interfaces_sistema::srv::ResetTemperatura_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<interfaces_sistema::srv::ResetTemperatura>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<interfaces_sistema::srv::ResetTemperatura>,
  &interfaces_sistema__srv__ResetTemperatura__get_type_hash,
  &interfaces_sistema__srv__ResetTemperatura__get_type_description,
  &interfaces_sistema__srv__ResetTemperatura__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace interfaces_sistema

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces_sistema::srv::ResetTemperatura>()
{
  return &::interfaces_sistema::srv::rosidl_typesupport_cpp::ResetTemperatura_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, interfaces_sistema, srv, ResetTemperatura)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<interfaces_sistema::srv::ResetTemperatura>();
}

#ifdef __cplusplus
}
#endif
