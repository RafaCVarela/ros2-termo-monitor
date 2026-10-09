// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces_sistema:srv/ResetTemperatura.idl
// generated code does not contain a copyright notice

#include "interfaces_sistema/srv/detail/reset_temperatura__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces_sistema
const rosidl_type_hash_t *
interfaces_sistema__srv__ResetTemperatura__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0xe4, 0x5a, 0x8d, 0x15, 0x42, 0xf6, 0x02,
      0x46, 0xb8, 0x03, 0xab, 0x77, 0x93, 0x28, 0xa7,
      0x64, 0xf9, 0xf9, 0x98, 0x0a, 0x55, 0x76, 0xc1,
      0x60, 0x68, 0x35, 0xb7, 0x96, 0xdf, 0xf2, 0x34,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces_sistema
const rosidl_type_hash_t *
interfaces_sistema__srv__ResetTemperatura_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0x45, 0xe5, 0x4d, 0xd7, 0x3f, 0x6b, 0xe4,
      0x68, 0x18, 0x14, 0xda, 0x8b, 0x81, 0x29, 0x03,
      0xc4, 0x91, 0xae, 0x2e, 0xff, 0xa1, 0xe1, 0xdf,
      0xd4, 0xcc, 0x60, 0x08, 0xdd, 0x46, 0xa9, 0x3a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces_sistema
const rosidl_type_hash_t *
interfaces_sistema__srv__ResetTemperatura_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0xde, 0xd1, 0x67, 0x30, 0x58, 0xe1, 0xac,
      0x74, 0xe5, 0xd4, 0x4f, 0xaf, 0x7c, 0xfc, 0xd7,
      0x43, 0x66, 0x21, 0x7a, 0x00, 0x1c, 0xae, 0xc4,
      0x50, 0x3c, 0xad, 0x84, 0x22, 0xaf, 0x89, 0xde,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_interfaces_sistema
const rosidl_type_hash_t *
interfaces_sistema__srv__ResetTemperatura_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x24, 0x6f, 0x6c, 0xd3, 0x7d, 0x78, 0x5a,
      0x65, 0xc5, 0x02, 0x55, 0x9e, 0xce, 0x0c, 0xe0,
      0x58, 0x17, 0x0b, 0xf8, 0xb1, 0x28, 0x9e, 0xbe,
      0xa6, 0xeb, 0x59, 0xb3, 0x9b, 0xb3, 0x97, 0x42,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char interfaces_sistema__srv__ResetTemperatura__TYPE_NAME[] = "interfaces_sistema/srv/ResetTemperatura";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char interfaces_sistema__srv__ResetTemperatura_Event__TYPE_NAME[] = "interfaces_sistema/srv/ResetTemperatura_Event";
static char interfaces_sistema__srv__ResetTemperatura_Request__TYPE_NAME[] = "interfaces_sistema/srv/ResetTemperatura_Request";
static char interfaces_sistema__srv__ResetTemperatura_Response__TYPE_NAME[] = "interfaces_sistema/srv/ResetTemperatura_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char interfaces_sistema__srv__ResetTemperatura__FIELD_NAME__request_message[] = "request_message";
static char interfaces_sistema__srv__ResetTemperatura__FIELD_NAME__response_message[] = "response_message";
static char interfaces_sistema__srv__ResetTemperatura__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field interfaces_sistema__srv__ResetTemperatura__FIELDS[] = {
  {
    {interfaces_sistema__srv__ResetTemperatura__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces_sistema__srv__ResetTemperatura_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces_sistema__srv__ResetTemperatura__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces_sistema__srv__ResetTemperatura_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces_sistema__srv__ResetTemperatura__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {interfaces_sistema__srv__ResetTemperatura_Event__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces_sistema__srv__ResetTemperatura__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces_sistema__srv__ResetTemperatura_Event__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {interfaces_sistema__srv__ResetTemperatura_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {interfaces_sistema__srv__ResetTemperatura_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces_sistema__srv__ResetTemperatura__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces_sistema__srv__ResetTemperatura__TYPE_NAME, 39, 39},
      {interfaces_sistema__srv__ResetTemperatura__FIELDS, 3, 3},
    },
    {interfaces_sistema__srv__ResetTemperatura__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interfaces_sistema__srv__ResetTemperatura_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interfaces_sistema__srv__ResetTemperatura_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = interfaces_sistema__srv__ResetTemperatura_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces_sistema__srv__ResetTemperatura_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field interfaces_sistema__srv__ResetTemperatura_Request__FIELDS[] = {
  {
    {interfaces_sistema__srv__ResetTemperatura_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces_sistema__srv__ResetTemperatura_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces_sistema__srv__ResetTemperatura_Request__TYPE_NAME, 47, 47},
      {interfaces_sistema__srv__ResetTemperatura_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces_sistema__srv__ResetTemperatura_Response__FIELD_NAME__sucesso[] = "sucesso";
static char interfaces_sistema__srv__ResetTemperatura_Response__FIELD_NAME__saida[] = "saida";

static rosidl_runtime_c__type_description__Field interfaces_sistema__srv__ResetTemperatura_Response__FIELDS[] = {
  {
    {interfaces_sistema__srv__ResetTemperatura_Response__FIELD_NAME__sucesso, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces_sistema__srv__ResetTemperatura_Response__FIELD_NAME__saida, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces_sistema__srv__ResetTemperatura_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces_sistema__srv__ResetTemperatura_Response__TYPE_NAME, 48, 48},
      {interfaces_sistema__srv__ResetTemperatura_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char interfaces_sistema__srv__ResetTemperatura_Event__FIELD_NAME__info[] = "info";
static char interfaces_sistema__srv__ResetTemperatura_Event__FIELD_NAME__request[] = "request";
static char interfaces_sistema__srv__ResetTemperatura_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field interfaces_sistema__srv__ResetTemperatura_Event__FIELDS[] = {
  {
    {interfaces_sistema__srv__ResetTemperatura_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces_sistema__srv__ResetTemperatura_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces_sistema__srv__ResetTemperatura_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces_sistema__srv__ResetTemperatura_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {interfaces_sistema__srv__ResetTemperatura_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces_sistema__srv__ResetTemperatura_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {interfaces_sistema__srv__ResetTemperatura_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {interfaces_sistema__srv__ResetTemperatura_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces_sistema__srv__ResetTemperatura_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces_sistema__srv__ResetTemperatura_Event__TYPE_NAME, 45, 45},
      {interfaces_sistema__srv__ResetTemperatura_Event__FIELDS, 3, 3},
    },
    {interfaces_sistema__srv__ResetTemperatura_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = interfaces_sistema__srv__ResetTemperatura_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = interfaces_sistema__srv__ResetTemperatura_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Servi\\xc3\\xa7o para resetar temperatura\n"
  "---\n"
  "bool sucesso\n"
  "string saida";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces_sistema__srv__ResetTemperatura__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces_sistema__srv__ResetTemperatura__TYPE_NAME, 39, 39},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces_sistema__srv__ResetTemperatura_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces_sistema__srv__ResetTemperatura_Request__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces_sistema__srv__ResetTemperatura_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces_sistema__srv__ResetTemperatura_Response__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
interfaces_sistema__srv__ResetTemperatura_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces_sistema__srv__ResetTemperatura_Event__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces_sistema__srv__ResetTemperatura__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces_sistema__srv__ResetTemperatura__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces_sistema__srv__ResetTemperatura_Event__get_individual_type_description_source(NULL);
    sources[3] = *interfaces_sistema__srv__ResetTemperatura_Request__get_individual_type_description_source(NULL);
    sources[4] = *interfaces_sistema__srv__ResetTemperatura_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces_sistema__srv__ResetTemperatura_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces_sistema__srv__ResetTemperatura_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces_sistema__srv__ResetTemperatura_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces_sistema__srv__ResetTemperatura_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces_sistema__srv__ResetTemperatura_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces_sistema__srv__ResetTemperatura_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *interfaces_sistema__srv__ResetTemperatura_Request__get_individual_type_description_source(NULL);
    sources[3] = *interfaces_sistema__srv__ResetTemperatura_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
