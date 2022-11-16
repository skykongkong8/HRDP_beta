// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hrdp_beta_actions:action/RGBFrame.idl
// generated code does not contain a copyright notice
#include "hrdp_beta_actions/action/detail/rgb_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hrdp_beta_actions__action__RGBFrame_Goal__init(hrdp_beta_actions__action__RGBFrame_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // order
  return true;
}

void
hrdp_beta_actions__action__RGBFrame_Goal__fini(hrdp_beta_actions__action__RGBFrame_Goal * msg)
{
  if (!msg) {
    return;
  }
  // order
}

bool
hrdp_beta_actions__action__RGBFrame_Goal__are_equal(const hrdp_beta_actions__action__RGBFrame_Goal * lhs, const hrdp_beta_actions__action__RGBFrame_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order
  if (lhs->order != rhs->order) {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_Goal__copy(
  const hrdp_beta_actions__action__RGBFrame_Goal * input,
  hrdp_beta_actions__action__RGBFrame_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // order
  output->order = input->order;
  return true;
}

hrdp_beta_actions__action__RGBFrame_Goal *
hrdp_beta_actions__action__RGBFrame_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_Goal * msg = (hrdp_beta_actions__action__RGBFrame_Goal *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__RGBFrame_Goal));
  bool success = hrdp_beta_actions__action__RGBFrame_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__RGBFrame_Goal__destroy(hrdp_beta_actions__action__RGBFrame_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__RGBFrame_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__RGBFrame_Goal__Sequence__init(hrdp_beta_actions__action__RGBFrame_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_Goal * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__RGBFrame_Goal *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__RGBFrame_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__RGBFrame_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__RGBFrame_Goal__fini(&data[i - 1]);
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
hrdp_beta_actions__action__RGBFrame_Goal__Sequence__fini(hrdp_beta_actions__action__RGBFrame_Goal__Sequence * array)
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
      hrdp_beta_actions__action__RGBFrame_Goal__fini(&array->data[i]);
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

hrdp_beta_actions__action__RGBFrame_Goal__Sequence *
hrdp_beta_actions__action__RGBFrame_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_Goal__Sequence * array = (hrdp_beta_actions__action__RGBFrame_Goal__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__RGBFrame_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__RGBFrame_Goal__Sequence__destroy(hrdp_beta_actions__action__RGBFrame_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__RGBFrame_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__RGBFrame_Goal__Sequence__are_equal(const hrdp_beta_actions__action__RGBFrame_Goal__Sequence * lhs, const hrdp_beta_actions__action__RGBFrame_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_Goal__Sequence__copy(
  const hrdp_beta_actions__action__RGBFrame_Goal__Sequence * input,
  hrdp_beta_actions__action__RGBFrame_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__RGBFrame_Goal);
    hrdp_beta_actions__action__RGBFrame_Goal * data =
      (hrdp_beta_actions__action__RGBFrame_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__RGBFrame_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__RGBFrame_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hrdp_beta_actions__action__RGBFrame_Result__init(hrdp_beta_actions__action__RGBFrame_Result * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->sequence, 0)) {
    hrdp_beta_actions__action__RGBFrame_Result__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__RGBFrame_Result__fini(hrdp_beta_actions__action__RGBFrame_Result * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->sequence);
}

bool
hrdp_beta_actions__action__RGBFrame_Result__are_equal(const hrdp_beta_actions__action__RGBFrame_Result * lhs, const hrdp_beta_actions__action__RGBFrame_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_Result__copy(
  const hrdp_beta_actions__action__RGBFrame_Result * input,
  hrdp_beta_actions__action__RGBFrame_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  return true;
}

hrdp_beta_actions__action__RGBFrame_Result *
hrdp_beta_actions__action__RGBFrame_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_Result * msg = (hrdp_beta_actions__action__RGBFrame_Result *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__RGBFrame_Result));
  bool success = hrdp_beta_actions__action__RGBFrame_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__RGBFrame_Result__destroy(hrdp_beta_actions__action__RGBFrame_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__RGBFrame_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__RGBFrame_Result__Sequence__init(hrdp_beta_actions__action__RGBFrame_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_Result * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__RGBFrame_Result *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__RGBFrame_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__RGBFrame_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__RGBFrame_Result__fini(&data[i - 1]);
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
hrdp_beta_actions__action__RGBFrame_Result__Sequence__fini(hrdp_beta_actions__action__RGBFrame_Result__Sequence * array)
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
      hrdp_beta_actions__action__RGBFrame_Result__fini(&array->data[i]);
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

hrdp_beta_actions__action__RGBFrame_Result__Sequence *
hrdp_beta_actions__action__RGBFrame_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_Result__Sequence * array = (hrdp_beta_actions__action__RGBFrame_Result__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__RGBFrame_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__RGBFrame_Result__Sequence__destroy(hrdp_beta_actions__action__RGBFrame_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__RGBFrame_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__RGBFrame_Result__Sequence__are_equal(const hrdp_beta_actions__action__RGBFrame_Result__Sequence * lhs, const hrdp_beta_actions__action__RGBFrame_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_Result__Sequence__copy(
  const hrdp_beta_actions__action__RGBFrame_Result__Sequence * input,
  hrdp_beta_actions__action__RGBFrame_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__RGBFrame_Result);
    hrdp_beta_actions__action__RGBFrame_Result * data =
      (hrdp_beta_actions__action__RGBFrame_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__RGBFrame_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__RGBFrame_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hrdp_beta_actions__action__RGBFrame_Feedback__init(hrdp_beta_actions__action__RGBFrame_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->partial_sequence, 0)) {
    hrdp_beta_actions__action__RGBFrame_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__RGBFrame_Feedback__fini(hrdp_beta_actions__action__RGBFrame_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // partial_sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->partial_sequence);
}

bool
hrdp_beta_actions__action__RGBFrame_Feedback__are_equal(const hrdp_beta_actions__action__RGBFrame_Feedback * lhs, const hrdp_beta_actions__action__RGBFrame_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->partial_sequence), &(rhs->partial_sequence)))
  {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_Feedback__copy(
  const hrdp_beta_actions__action__RGBFrame_Feedback * input,
  hrdp_beta_actions__action__RGBFrame_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->partial_sequence), &(output->partial_sequence)))
  {
    return false;
  }
  return true;
}

hrdp_beta_actions__action__RGBFrame_Feedback *
hrdp_beta_actions__action__RGBFrame_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_Feedback * msg = (hrdp_beta_actions__action__RGBFrame_Feedback *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__RGBFrame_Feedback));
  bool success = hrdp_beta_actions__action__RGBFrame_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__RGBFrame_Feedback__destroy(hrdp_beta_actions__action__RGBFrame_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__RGBFrame_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__RGBFrame_Feedback__Sequence__init(hrdp_beta_actions__action__RGBFrame_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_Feedback * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__RGBFrame_Feedback *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__RGBFrame_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__RGBFrame_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__RGBFrame_Feedback__fini(&data[i - 1]);
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
hrdp_beta_actions__action__RGBFrame_Feedback__Sequence__fini(hrdp_beta_actions__action__RGBFrame_Feedback__Sequence * array)
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
      hrdp_beta_actions__action__RGBFrame_Feedback__fini(&array->data[i]);
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

hrdp_beta_actions__action__RGBFrame_Feedback__Sequence *
hrdp_beta_actions__action__RGBFrame_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_Feedback__Sequence * array = (hrdp_beta_actions__action__RGBFrame_Feedback__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__RGBFrame_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__RGBFrame_Feedback__Sequence__destroy(hrdp_beta_actions__action__RGBFrame_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__RGBFrame_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__RGBFrame_Feedback__Sequence__are_equal(const hrdp_beta_actions__action__RGBFrame_Feedback__Sequence * lhs, const hrdp_beta_actions__action__RGBFrame_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_Feedback__Sequence__copy(
  const hrdp_beta_actions__action__RGBFrame_Feedback__Sequence * input,
  hrdp_beta_actions__action__RGBFrame_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__RGBFrame_Feedback);
    hrdp_beta_actions__action__RGBFrame_Feedback * data =
      (hrdp_beta_actions__action__RGBFrame_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__RGBFrame_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__RGBFrame_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "hrdp_beta_actions/action/detail/rgb_frame__functions.h"

bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__init(hrdp_beta_actions__action__RGBFrame_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hrdp_beta_actions__action__RGBFrame_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!hrdp_beta_actions__action__RGBFrame_Goal__init(&msg->goal)) {
    hrdp_beta_actions__action__RGBFrame_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__fini(hrdp_beta_actions__action__RGBFrame_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  hrdp_beta_actions__action__RGBFrame_Goal__fini(&msg->goal);
}

bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__are_equal(const hrdp_beta_actions__action__RGBFrame_SendGoal_Request * lhs, const hrdp_beta_actions__action__RGBFrame_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!hrdp_beta_actions__action__RGBFrame_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__copy(
  const hrdp_beta_actions__action__RGBFrame_SendGoal_Request * input,
  hrdp_beta_actions__action__RGBFrame_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!hrdp_beta_actions__action__RGBFrame_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

hrdp_beta_actions__action__RGBFrame_SendGoal_Request *
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_SendGoal_Request * msg = (hrdp_beta_actions__action__RGBFrame_SendGoal_Request *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__RGBFrame_SendGoal_Request));
  bool success = hrdp_beta_actions__action__RGBFrame_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__destroy(hrdp_beta_actions__action__RGBFrame_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__RGBFrame_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence__init(hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_SendGoal_Request * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__RGBFrame_SendGoal_Request *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__RGBFrame_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__RGBFrame_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__RGBFrame_SendGoal_Request__fini(&data[i - 1]);
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
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence__fini(hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence * array)
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
      hrdp_beta_actions__action__RGBFrame_SendGoal_Request__fini(&array->data[i]);
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

hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence *
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence * array = (hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence__destroy(hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence__are_equal(const hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence * lhs, const hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence__copy(
  const hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence * input,
  hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__RGBFrame_SendGoal_Request);
    hrdp_beta_actions__action__RGBFrame_SendGoal_Request * data =
      (hrdp_beta_actions__action__RGBFrame_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__RGBFrame_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__RGBFrame_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__init(hrdp_beta_actions__action__RGBFrame_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hrdp_beta_actions__action__RGBFrame_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__fini(hrdp_beta_actions__action__RGBFrame_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__are_equal(const hrdp_beta_actions__action__RGBFrame_SendGoal_Response * lhs, const hrdp_beta_actions__action__RGBFrame_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__copy(
  const hrdp_beta_actions__action__RGBFrame_SendGoal_Response * input,
  hrdp_beta_actions__action__RGBFrame_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

hrdp_beta_actions__action__RGBFrame_SendGoal_Response *
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_SendGoal_Response * msg = (hrdp_beta_actions__action__RGBFrame_SendGoal_Response *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__RGBFrame_SendGoal_Response));
  bool success = hrdp_beta_actions__action__RGBFrame_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__destroy(hrdp_beta_actions__action__RGBFrame_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__RGBFrame_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence__init(hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_SendGoal_Response * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__RGBFrame_SendGoal_Response *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__RGBFrame_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__RGBFrame_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__RGBFrame_SendGoal_Response__fini(&data[i - 1]);
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
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence__fini(hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence * array)
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
      hrdp_beta_actions__action__RGBFrame_SendGoal_Response__fini(&array->data[i]);
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

hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence *
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence * array = (hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence__destroy(hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence__are_equal(const hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence * lhs, const hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence__copy(
  const hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence * input,
  hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__RGBFrame_SendGoal_Response);
    hrdp_beta_actions__action__RGBFrame_SendGoal_Response * data =
      (hrdp_beta_actions__action__RGBFrame_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__RGBFrame_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__RGBFrame_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
hrdp_beta_actions__action__RGBFrame_GetResult_Request__init(hrdp_beta_actions__action__RGBFrame_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hrdp_beta_actions__action__RGBFrame_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__RGBFrame_GetResult_Request__fini(hrdp_beta_actions__action__RGBFrame_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
hrdp_beta_actions__action__RGBFrame_GetResult_Request__are_equal(const hrdp_beta_actions__action__RGBFrame_GetResult_Request * lhs, const hrdp_beta_actions__action__RGBFrame_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_GetResult_Request__copy(
  const hrdp_beta_actions__action__RGBFrame_GetResult_Request * input,
  hrdp_beta_actions__action__RGBFrame_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

hrdp_beta_actions__action__RGBFrame_GetResult_Request *
hrdp_beta_actions__action__RGBFrame_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_GetResult_Request * msg = (hrdp_beta_actions__action__RGBFrame_GetResult_Request *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__RGBFrame_GetResult_Request));
  bool success = hrdp_beta_actions__action__RGBFrame_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__RGBFrame_GetResult_Request__destroy(hrdp_beta_actions__action__RGBFrame_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__RGBFrame_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence__init(hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_GetResult_Request * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__RGBFrame_GetResult_Request *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__RGBFrame_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__RGBFrame_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__RGBFrame_GetResult_Request__fini(&data[i - 1]);
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
hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence__fini(hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence * array)
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
      hrdp_beta_actions__action__RGBFrame_GetResult_Request__fini(&array->data[i]);
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

hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence *
hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence * array = (hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence__destroy(hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence__are_equal(const hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence * lhs, const hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence__copy(
  const hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence * input,
  hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__RGBFrame_GetResult_Request);
    hrdp_beta_actions__action__RGBFrame_GetResult_Request * data =
      (hrdp_beta_actions__action__RGBFrame_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__RGBFrame_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__RGBFrame_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "hrdp_beta_actions/action/detail/rgb_frame__functions.h"

bool
hrdp_beta_actions__action__RGBFrame_GetResult_Response__init(hrdp_beta_actions__action__RGBFrame_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!hrdp_beta_actions__action__RGBFrame_Result__init(&msg->result)) {
    hrdp_beta_actions__action__RGBFrame_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__RGBFrame_GetResult_Response__fini(hrdp_beta_actions__action__RGBFrame_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  hrdp_beta_actions__action__RGBFrame_Result__fini(&msg->result);
}

bool
hrdp_beta_actions__action__RGBFrame_GetResult_Response__are_equal(const hrdp_beta_actions__action__RGBFrame_GetResult_Response * lhs, const hrdp_beta_actions__action__RGBFrame_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!hrdp_beta_actions__action__RGBFrame_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_GetResult_Response__copy(
  const hrdp_beta_actions__action__RGBFrame_GetResult_Response * input,
  hrdp_beta_actions__action__RGBFrame_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!hrdp_beta_actions__action__RGBFrame_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

hrdp_beta_actions__action__RGBFrame_GetResult_Response *
hrdp_beta_actions__action__RGBFrame_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_GetResult_Response * msg = (hrdp_beta_actions__action__RGBFrame_GetResult_Response *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__RGBFrame_GetResult_Response));
  bool success = hrdp_beta_actions__action__RGBFrame_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__RGBFrame_GetResult_Response__destroy(hrdp_beta_actions__action__RGBFrame_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__RGBFrame_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence__init(hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_GetResult_Response * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__RGBFrame_GetResult_Response *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__RGBFrame_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__RGBFrame_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__RGBFrame_GetResult_Response__fini(&data[i - 1]);
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
hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence__fini(hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence * array)
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
      hrdp_beta_actions__action__RGBFrame_GetResult_Response__fini(&array->data[i]);
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

hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence *
hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence * array = (hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence__destroy(hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence__are_equal(const hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence * lhs, const hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence__copy(
  const hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence * input,
  hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__RGBFrame_GetResult_Response);
    hrdp_beta_actions__action__RGBFrame_GetResult_Response * data =
      (hrdp_beta_actions__action__RGBFrame_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__RGBFrame_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__RGBFrame_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "hrdp_beta_actions/action/detail/rgb_frame__functions.h"

bool
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__init(hrdp_beta_actions__action__RGBFrame_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hrdp_beta_actions__action__RGBFrame_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!hrdp_beta_actions__action__RGBFrame_Feedback__init(&msg->feedback)) {
    hrdp_beta_actions__action__RGBFrame_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__fini(hrdp_beta_actions__action__RGBFrame_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  hrdp_beta_actions__action__RGBFrame_Feedback__fini(&msg->feedback);
}

bool
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__are_equal(const hrdp_beta_actions__action__RGBFrame_FeedbackMessage * lhs, const hrdp_beta_actions__action__RGBFrame_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!hrdp_beta_actions__action__RGBFrame_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__copy(
  const hrdp_beta_actions__action__RGBFrame_FeedbackMessage * input,
  hrdp_beta_actions__action__RGBFrame_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!hrdp_beta_actions__action__RGBFrame_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

hrdp_beta_actions__action__RGBFrame_FeedbackMessage *
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_FeedbackMessage * msg = (hrdp_beta_actions__action__RGBFrame_FeedbackMessage *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__RGBFrame_FeedbackMessage));
  bool success = hrdp_beta_actions__action__RGBFrame_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__destroy(hrdp_beta_actions__action__RGBFrame_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__RGBFrame_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence__init(hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_FeedbackMessage * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__RGBFrame_FeedbackMessage *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__RGBFrame_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__RGBFrame_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__RGBFrame_FeedbackMessage__fini(&data[i - 1]);
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
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence__fini(hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence * array)
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
      hrdp_beta_actions__action__RGBFrame_FeedbackMessage__fini(&array->data[i]);
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

hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence *
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence * array = (hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence__destroy(hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence__are_equal(const hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence * lhs, const hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence__copy(
  const hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence * input,
  hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__RGBFrame_FeedbackMessage);
    hrdp_beta_actions__action__RGBFrame_FeedbackMessage * data =
      (hrdp_beta_actions__action__RGBFrame_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__RGBFrame_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__RGBFrame_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hrdp_beta_actions__action__RGBFrame_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
