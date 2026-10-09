// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_sistema:srv/ResetTemperatura.idl
// generated code does not contain a copyright notice
#include "interfaces_sistema/srv/detail/reset_temperatura__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
interfaces_sistema__srv__ResetTemperatura_Request__init(interfaces_sistema__srv__ResetTemperatura_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
interfaces_sistema__srv__ResetTemperatura_Request__fini(interfaces_sistema__srv__ResetTemperatura_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
interfaces_sistema__srv__ResetTemperatura_Request__are_equal(const interfaces_sistema__srv__ResetTemperatura_Request * lhs, const interfaces_sistema__srv__ResetTemperatura_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
interfaces_sistema__srv__ResetTemperatura_Request__copy(
  const interfaces_sistema__srv__ResetTemperatura_Request * input,
  interfaces_sistema__srv__ResetTemperatura_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

interfaces_sistema__srv__ResetTemperatura_Request *
interfaces_sistema__srv__ResetTemperatura_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_sistema__srv__ResetTemperatura_Request * msg = (interfaces_sistema__srv__ResetTemperatura_Request *)allocator.allocate(sizeof(interfaces_sistema__srv__ResetTemperatura_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_sistema__srv__ResetTemperatura_Request));
  bool success = interfaces_sistema__srv__ResetTemperatura_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_sistema__srv__ResetTemperatura_Request__destroy(interfaces_sistema__srv__ResetTemperatura_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_sistema__srv__ResetTemperatura_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_sistema__srv__ResetTemperatura_Request__Sequence__init(interfaces_sistema__srv__ResetTemperatura_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_sistema__srv__ResetTemperatura_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(interfaces_sistema__srv__ResetTemperatura_Request)) {
      return false;
    }
    data = (interfaces_sistema__srv__ResetTemperatura_Request *)allocator.zero_allocate(size, sizeof(interfaces_sistema__srv__ResetTemperatura_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_sistema__srv__ResetTemperatura_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_sistema__srv__ResetTemperatura_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces_sistema__srv__ResetTemperatura_Request__Sequence__fini(interfaces_sistema__srv__ResetTemperatura_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_sistema__srv__ResetTemperatura_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces_sistema__srv__ResetTemperatura_Request__Sequence *
interfaces_sistema__srv__ResetTemperatura_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_sistema__srv__ResetTemperatura_Request__Sequence * array = (interfaces_sistema__srv__ResetTemperatura_Request__Sequence *)allocator.allocate(sizeof(interfaces_sistema__srv__ResetTemperatura_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_sistema__srv__ResetTemperatura_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_sistema__srv__ResetTemperatura_Request__Sequence__destroy(interfaces_sistema__srv__ResetTemperatura_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_sistema__srv__ResetTemperatura_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_sistema__srv__ResetTemperatura_Request__Sequence__are_equal(const interfaces_sistema__srv__ResetTemperatura_Request__Sequence * lhs, const interfaces_sistema__srv__ResetTemperatura_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_sistema__srv__ResetTemperatura_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_sistema__srv__ResetTemperatura_Request__Sequence__copy(
  const interfaces_sistema__srv__ResetTemperatura_Request__Sequence * input,
  interfaces_sistema__srv__ResetTemperatura_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(interfaces_sistema__srv__ResetTemperatura_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(interfaces_sistema__srv__ResetTemperatura_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_sistema__srv__ResetTemperatura_Request * data =
      (interfaces_sistema__srv__ResetTemperatura_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_sistema__srv__ResetTemperatura_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_sistema__srv__ResetTemperatura_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_sistema__srv__ResetTemperatura_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `saida`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces_sistema__srv__ResetTemperatura_Response__init(interfaces_sistema__srv__ResetTemperatura_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sucesso
  // saida
  if (!rosidl_runtime_c__String__init(&msg->saida)) {
    interfaces_sistema__srv__ResetTemperatura_Response__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_sistema__srv__ResetTemperatura_Response__fini(interfaces_sistema__srv__ResetTemperatura_Response * msg)
{
  if (!msg) {
    return;
  }
  // sucesso
  // saida
  rosidl_runtime_c__String__fini(&msg->saida);
}

bool
interfaces_sistema__srv__ResetTemperatura_Response__are_equal(const interfaces_sistema__srv__ResetTemperatura_Response * lhs, const interfaces_sistema__srv__ResetTemperatura_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sucesso
  if (lhs->sucesso != rhs->sucesso) {
    return false;
  }
  // saida
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->saida), &(rhs->saida)))
  {
    return false;
  }
  return true;
}

bool
interfaces_sistema__srv__ResetTemperatura_Response__copy(
  const interfaces_sistema__srv__ResetTemperatura_Response * input,
  interfaces_sistema__srv__ResetTemperatura_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sucesso
  output->sucesso = input->sucesso;
  // saida
  if (!rosidl_runtime_c__String__copy(
      &(input->saida), &(output->saida)))
  {
    return false;
  }
  return true;
}

interfaces_sistema__srv__ResetTemperatura_Response *
interfaces_sistema__srv__ResetTemperatura_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_sistema__srv__ResetTemperatura_Response * msg = (interfaces_sistema__srv__ResetTemperatura_Response *)allocator.allocate(sizeof(interfaces_sistema__srv__ResetTemperatura_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_sistema__srv__ResetTemperatura_Response));
  bool success = interfaces_sistema__srv__ResetTemperatura_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_sistema__srv__ResetTemperatura_Response__destroy(interfaces_sistema__srv__ResetTemperatura_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_sistema__srv__ResetTemperatura_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_sistema__srv__ResetTemperatura_Response__Sequence__init(interfaces_sistema__srv__ResetTemperatura_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_sistema__srv__ResetTemperatura_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(interfaces_sistema__srv__ResetTemperatura_Response)) {
      return false;
    }
    data = (interfaces_sistema__srv__ResetTemperatura_Response *)allocator.zero_allocate(size, sizeof(interfaces_sistema__srv__ResetTemperatura_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_sistema__srv__ResetTemperatura_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_sistema__srv__ResetTemperatura_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces_sistema__srv__ResetTemperatura_Response__Sequence__fini(interfaces_sistema__srv__ResetTemperatura_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_sistema__srv__ResetTemperatura_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces_sistema__srv__ResetTemperatura_Response__Sequence *
interfaces_sistema__srv__ResetTemperatura_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_sistema__srv__ResetTemperatura_Response__Sequence * array = (interfaces_sistema__srv__ResetTemperatura_Response__Sequence *)allocator.allocate(sizeof(interfaces_sistema__srv__ResetTemperatura_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_sistema__srv__ResetTemperatura_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_sistema__srv__ResetTemperatura_Response__Sequence__destroy(interfaces_sistema__srv__ResetTemperatura_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_sistema__srv__ResetTemperatura_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_sistema__srv__ResetTemperatura_Response__Sequence__are_equal(const interfaces_sistema__srv__ResetTemperatura_Response__Sequence * lhs, const interfaces_sistema__srv__ResetTemperatura_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_sistema__srv__ResetTemperatura_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_sistema__srv__ResetTemperatura_Response__Sequence__copy(
  const interfaces_sistema__srv__ResetTemperatura_Response__Sequence * input,
  interfaces_sistema__srv__ResetTemperatura_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(interfaces_sistema__srv__ResetTemperatura_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(interfaces_sistema__srv__ResetTemperatura_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_sistema__srv__ResetTemperatura_Response * data =
      (interfaces_sistema__srv__ResetTemperatura_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_sistema__srv__ResetTemperatura_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_sistema__srv__ResetTemperatura_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_sistema__srv__ResetTemperatura_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "interfaces_sistema/srv/detail/reset_temperatura__functions.h"

bool
interfaces_sistema__srv__ResetTemperatura_Event__init(interfaces_sistema__srv__ResetTemperatura_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    interfaces_sistema__srv__ResetTemperatura_Event__fini(msg);
    return false;
  }
  // request
  if (!interfaces_sistema__srv__ResetTemperatura_Request__Sequence__init(&msg->request, 0)) {
    interfaces_sistema__srv__ResetTemperatura_Event__fini(msg);
    return false;
  }
  // response
  if (!interfaces_sistema__srv__ResetTemperatura_Response__Sequence__init(&msg->response, 0)) {
    interfaces_sistema__srv__ResetTemperatura_Event__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_sistema__srv__ResetTemperatura_Event__fini(interfaces_sistema__srv__ResetTemperatura_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  interfaces_sistema__srv__ResetTemperatura_Request__Sequence__fini(&msg->request);
  // response
  interfaces_sistema__srv__ResetTemperatura_Response__Sequence__fini(&msg->response);
}

bool
interfaces_sistema__srv__ResetTemperatura_Event__are_equal(const interfaces_sistema__srv__ResetTemperatura_Event * lhs, const interfaces_sistema__srv__ResetTemperatura_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!interfaces_sistema__srv__ResetTemperatura_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!interfaces_sistema__srv__ResetTemperatura_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
interfaces_sistema__srv__ResetTemperatura_Event__copy(
  const interfaces_sistema__srv__ResetTemperatura_Event * input,
  interfaces_sistema__srv__ResetTemperatura_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!interfaces_sistema__srv__ResetTemperatura_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!interfaces_sistema__srv__ResetTemperatura_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

interfaces_sistema__srv__ResetTemperatura_Event *
interfaces_sistema__srv__ResetTemperatura_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_sistema__srv__ResetTemperatura_Event * msg = (interfaces_sistema__srv__ResetTemperatura_Event *)allocator.allocate(sizeof(interfaces_sistema__srv__ResetTemperatura_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_sistema__srv__ResetTemperatura_Event));
  bool success = interfaces_sistema__srv__ResetTemperatura_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_sistema__srv__ResetTemperatura_Event__destroy(interfaces_sistema__srv__ResetTemperatura_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_sistema__srv__ResetTemperatura_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_sistema__srv__ResetTemperatura_Event__Sequence__init(interfaces_sistema__srv__ResetTemperatura_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_sistema__srv__ResetTemperatura_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(interfaces_sistema__srv__ResetTemperatura_Event)) {
      return false;
    }
    data = (interfaces_sistema__srv__ResetTemperatura_Event *)allocator.zero_allocate(size, sizeof(interfaces_sistema__srv__ResetTemperatura_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_sistema__srv__ResetTemperatura_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_sistema__srv__ResetTemperatura_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces_sistema__srv__ResetTemperatura_Event__Sequence__fini(interfaces_sistema__srv__ResetTemperatura_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_sistema__srv__ResetTemperatura_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces_sistema__srv__ResetTemperatura_Event__Sequence *
interfaces_sistema__srv__ResetTemperatura_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_sistema__srv__ResetTemperatura_Event__Sequence * array = (interfaces_sistema__srv__ResetTemperatura_Event__Sequence *)allocator.allocate(sizeof(interfaces_sistema__srv__ResetTemperatura_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_sistema__srv__ResetTemperatura_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_sistema__srv__ResetTemperatura_Event__Sequence__destroy(interfaces_sistema__srv__ResetTemperatura_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_sistema__srv__ResetTemperatura_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_sistema__srv__ResetTemperatura_Event__Sequence__are_equal(const interfaces_sistema__srv__ResetTemperatura_Event__Sequence * lhs, const interfaces_sistema__srv__ResetTemperatura_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_sistema__srv__ResetTemperatura_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_sistema__srv__ResetTemperatura_Event__Sequence__copy(
  const interfaces_sistema__srv__ResetTemperatura_Event__Sequence * input,
  interfaces_sistema__srv__ResetTemperatura_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(interfaces_sistema__srv__ResetTemperatura_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(interfaces_sistema__srv__ResetTemperatura_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_sistema__srv__ResetTemperatura_Event * data =
      (interfaces_sistema__srv__ResetTemperatura_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_sistema__srv__ResetTemperatura_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_sistema__srv__ResetTemperatura_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_sistema__srv__ResetTemperatura_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
