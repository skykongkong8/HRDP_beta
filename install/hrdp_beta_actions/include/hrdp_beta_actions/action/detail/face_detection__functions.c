// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hrdp_beta_actions:action/FaceDetection.idl
// generated code does not contain a copyright notice
#include "hrdp_beta_actions/action/detail/face_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hrdp_beta_actions__action__FaceDetection_Goal__init(hrdp_beta_actions__action__FaceDetection_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // input
  return true;
}

void
hrdp_beta_actions__action__FaceDetection_Goal__fini(hrdp_beta_actions__action__FaceDetection_Goal * msg)
{
  if (!msg) {
    return;
  }
  // input
}

bool
hrdp_beta_actions__action__FaceDetection_Goal__are_equal(const hrdp_beta_actions__action__FaceDetection_Goal * lhs, const hrdp_beta_actions__action__FaceDetection_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (lhs->input != rhs->input) {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_Goal__copy(
  const hrdp_beta_actions__action__FaceDetection_Goal * input,
  hrdp_beta_actions__action__FaceDetection_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  output->input = input->input;
  return true;
}

hrdp_beta_actions__action__FaceDetection_Goal *
hrdp_beta_actions__action__FaceDetection_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_Goal * msg = (hrdp_beta_actions__action__FaceDetection_Goal *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__FaceDetection_Goal));
  bool success = hrdp_beta_actions__action__FaceDetection_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__FaceDetection_Goal__destroy(hrdp_beta_actions__action__FaceDetection_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__FaceDetection_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__FaceDetection_Goal__Sequence__init(hrdp_beta_actions__action__FaceDetection_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_Goal * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__FaceDetection_Goal *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__FaceDetection_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__FaceDetection_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__FaceDetection_Goal__fini(&data[i - 1]);
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
hrdp_beta_actions__action__FaceDetection_Goal__Sequence__fini(hrdp_beta_actions__action__FaceDetection_Goal__Sequence * array)
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
      hrdp_beta_actions__action__FaceDetection_Goal__fini(&array->data[i]);
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

hrdp_beta_actions__action__FaceDetection_Goal__Sequence *
hrdp_beta_actions__action__FaceDetection_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_Goal__Sequence * array = (hrdp_beta_actions__action__FaceDetection_Goal__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__FaceDetection_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__FaceDetection_Goal__Sequence__destroy(hrdp_beta_actions__action__FaceDetection_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__FaceDetection_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__FaceDetection_Goal__Sequence__are_equal(const hrdp_beta_actions__action__FaceDetection_Goal__Sequence * lhs, const hrdp_beta_actions__action__FaceDetection_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__FaceDetection_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_Goal__Sequence__copy(
  const hrdp_beta_actions__action__FaceDetection_Goal__Sequence * input,
  hrdp_beta_actions__action__FaceDetection_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__FaceDetection_Goal);
    hrdp_beta_actions__action__FaceDetection_Goal * data =
      (hrdp_beta_actions__action__FaceDetection_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__FaceDetection_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__FaceDetection_Goal__fini(&data[i]);
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
    if (!hrdp_beta_actions__action__FaceDetection_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
hrdp_beta_actions__action__FaceDetection_Result__init(hrdp_beta_actions__action__FaceDetection_Result * msg)
{
  if (!msg) {
    return false;
  }
  // output
  return true;
}

void
hrdp_beta_actions__action__FaceDetection_Result__fini(hrdp_beta_actions__action__FaceDetection_Result * msg)
{
  if (!msg) {
    return;
  }
  // output
}

bool
hrdp_beta_actions__action__FaceDetection_Result__are_equal(const hrdp_beta_actions__action__FaceDetection_Result * lhs, const hrdp_beta_actions__action__FaceDetection_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output
  if (lhs->output != rhs->output) {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_Result__copy(
  const hrdp_beta_actions__action__FaceDetection_Result * input,
  hrdp_beta_actions__action__FaceDetection_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // output
  output->output = input->output;
  return true;
}

hrdp_beta_actions__action__FaceDetection_Result *
hrdp_beta_actions__action__FaceDetection_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_Result * msg = (hrdp_beta_actions__action__FaceDetection_Result *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__FaceDetection_Result));
  bool success = hrdp_beta_actions__action__FaceDetection_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__FaceDetection_Result__destroy(hrdp_beta_actions__action__FaceDetection_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__FaceDetection_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__FaceDetection_Result__Sequence__init(hrdp_beta_actions__action__FaceDetection_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_Result * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__FaceDetection_Result *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__FaceDetection_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__FaceDetection_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__FaceDetection_Result__fini(&data[i - 1]);
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
hrdp_beta_actions__action__FaceDetection_Result__Sequence__fini(hrdp_beta_actions__action__FaceDetection_Result__Sequence * array)
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
      hrdp_beta_actions__action__FaceDetection_Result__fini(&array->data[i]);
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

hrdp_beta_actions__action__FaceDetection_Result__Sequence *
hrdp_beta_actions__action__FaceDetection_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_Result__Sequence * array = (hrdp_beta_actions__action__FaceDetection_Result__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__FaceDetection_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__FaceDetection_Result__Sequence__destroy(hrdp_beta_actions__action__FaceDetection_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__FaceDetection_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__FaceDetection_Result__Sequence__are_equal(const hrdp_beta_actions__action__FaceDetection_Result__Sequence * lhs, const hrdp_beta_actions__action__FaceDetection_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__FaceDetection_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_Result__Sequence__copy(
  const hrdp_beta_actions__action__FaceDetection_Result__Sequence * input,
  hrdp_beta_actions__action__FaceDetection_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__FaceDetection_Result);
    hrdp_beta_actions__action__FaceDetection_Result * data =
      (hrdp_beta_actions__action__FaceDetection_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__FaceDetection_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__FaceDetection_Result__fini(&data[i]);
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
    if (!hrdp_beta_actions__action__FaceDetection_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
hrdp_beta_actions__action__FaceDetection_Feedback__init(hrdp_beta_actions__action__FaceDetection_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // total_face_num
  return true;
}

void
hrdp_beta_actions__action__FaceDetection_Feedback__fini(hrdp_beta_actions__action__FaceDetection_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // total_face_num
}

bool
hrdp_beta_actions__action__FaceDetection_Feedback__are_equal(const hrdp_beta_actions__action__FaceDetection_Feedback * lhs, const hrdp_beta_actions__action__FaceDetection_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // total_face_num
  if (lhs->total_face_num != rhs->total_face_num) {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_Feedback__copy(
  const hrdp_beta_actions__action__FaceDetection_Feedback * input,
  hrdp_beta_actions__action__FaceDetection_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // total_face_num
  output->total_face_num = input->total_face_num;
  return true;
}

hrdp_beta_actions__action__FaceDetection_Feedback *
hrdp_beta_actions__action__FaceDetection_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_Feedback * msg = (hrdp_beta_actions__action__FaceDetection_Feedback *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__FaceDetection_Feedback));
  bool success = hrdp_beta_actions__action__FaceDetection_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__FaceDetection_Feedback__destroy(hrdp_beta_actions__action__FaceDetection_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__FaceDetection_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__FaceDetection_Feedback__Sequence__init(hrdp_beta_actions__action__FaceDetection_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_Feedback * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__FaceDetection_Feedback *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__FaceDetection_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__FaceDetection_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__FaceDetection_Feedback__fini(&data[i - 1]);
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
hrdp_beta_actions__action__FaceDetection_Feedback__Sequence__fini(hrdp_beta_actions__action__FaceDetection_Feedback__Sequence * array)
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
      hrdp_beta_actions__action__FaceDetection_Feedback__fini(&array->data[i]);
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

hrdp_beta_actions__action__FaceDetection_Feedback__Sequence *
hrdp_beta_actions__action__FaceDetection_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_Feedback__Sequence * array = (hrdp_beta_actions__action__FaceDetection_Feedback__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__FaceDetection_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__FaceDetection_Feedback__Sequence__destroy(hrdp_beta_actions__action__FaceDetection_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__FaceDetection_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__FaceDetection_Feedback__Sequence__are_equal(const hrdp_beta_actions__action__FaceDetection_Feedback__Sequence * lhs, const hrdp_beta_actions__action__FaceDetection_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__FaceDetection_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_Feedback__Sequence__copy(
  const hrdp_beta_actions__action__FaceDetection_Feedback__Sequence * input,
  hrdp_beta_actions__action__FaceDetection_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__FaceDetection_Feedback);
    hrdp_beta_actions__action__FaceDetection_Feedback * data =
      (hrdp_beta_actions__action__FaceDetection_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__FaceDetection_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__FaceDetection_Feedback__fini(&data[i]);
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
    if (!hrdp_beta_actions__action__FaceDetection_Feedback__copy(
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
// #include "hrdp_beta_actions/action/detail/face_detection__functions.h"

bool
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__init(hrdp_beta_actions__action__FaceDetection_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hrdp_beta_actions__action__FaceDetection_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!hrdp_beta_actions__action__FaceDetection_Goal__init(&msg->goal)) {
    hrdp_beta_actions__action__FaceDetection_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__fini(hrdp_beta_actions__action__FaceDetection_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  hrdp_beta_actions__action__FaceDetection_Goal__fini(&msg->goal);
}

bool
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__are_equal(const hrdp_beta_actions__action__FaceDetection_SendGoal_Request * lhs, const hrdp_beta_actions__action__FaceDetection_SendGoal_Request * rhs)
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
  if (!hrdp_beta_actions__action__FaceDetection_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__copy(
  const hrdp_beta_actions__action__FaceDetection_SendGoal_Request * input,
  hrdp_beta_actions__action__FaceDetection_SendGoal_Request * output)
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
  if (!hrdp_beta_actions__action__FaceDetection_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

hrdp_beta_actions__action__FaceDetection_SendGoal_Request *
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_SendGoal_Request * msg = (hrdp_beta_actions__action__FaceDetection_SendGoal_Request *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Request));
  bool success = hrdp_beta_actions__action__FaceDetection_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__destroy(hrdp_beta_actions__action__FaceDetection_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__FaceDetection_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence__init(hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_SendGoal_Request * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__FaceDetection_SendGoal_Request *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__FaceDetection_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__FaceDetection_SendGoal_Request__fini(&data[i - 1]);
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
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence__fini(hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence * array)
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
      hrdp_beta_actions__action__FaceDetection_SendGoal_Request__fini(&array->data[i]);
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

hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence *
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence * array = (hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence__destroy(hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence__are_equal(const hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence * lhs, const hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__FaceDetection_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence__copy(
  const hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence * input,
  hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Request);
    hrdp_beta_actions__action__FaceDetection_SendGoal_Request * data =
      (hrdp_beta_actions__action__FaceDetection_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__FaceDetection_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__FaceDetection_SendGoal_Request__fini(&data[i]);
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
    if (!hrdp_beta_actions__action__FaceDetection_SendGoal_Request__copy(
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
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__init(hrdp_beta_actions__action__FaceDetection_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    hrdp_beta_actions__action__FaceDetection_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__fini(hrdp_beta_actions__action__FaceDetection_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__are_equal(const hrdp_beta_actions__action__FaceDetection_SendGoal_Response * lhs, const hrdp_beta_actions__action__FaceDetection_SendGoal_Response * rhs)
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
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__copy(
  const hrdp_beta_actions__action__FaceDetection_SendGoal_Response * input,
  hrdp_beta_actions__action__FaceDetection_SendGoal_Response * output)
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

hrdp_beta_actions__action__FaceDetection_SendGoal_Response *
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_SendGoal_Response * msg = (hrdp_beta_actions__action__FaceDetection_SendGoal_Response *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Response));
  bool success = hrdp_beta_actions__action__FaceDetection_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__destroy(hrdp_beta_actions__action__FaceDetection_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__FaceDetection_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence__init(hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_SendGoal_Response * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__FaceDetection_SendGoal_Response *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__FaceDetection_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__FaceDetection_SendGoal_Response__fini(&data[i - 1]);
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
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence__fini(hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence * array)
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
      hrdp_beta_actions__action__FaceDetection_SendGoal_Response__fini(&array->data[i]);
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

hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence *
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence * array = (hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence__destroy(hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence__are_equal(const hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence * lhs, const hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__FaceDetection_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence__copy(
  const hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence * input,
  hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Response);
    hrdp_beta_actions__action__FaceDetection_SendGoal_Response * data =
      (hrdp_beta_actions__action__FaceDetection_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__FaceDetection_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__FaceDetection_SendGoal_Response__fini(&data[i]);
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
    if (!hrdp_beta_actions__action__FaceDetection_SendGoal_Response__copy(
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
hrdp_beta_actions__action__FaceDetection_GetResult_Request__init(hrdp_beta_actions__action__FaceDetection_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hrdp_beta_actions__action__FaceDetection_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__FaceDetection_GetResult_Request__fini(hrdp_beta_actions__action__FaceDetection_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
hrdp_beta_actions__action__FaceDetection_GetResult_Request__are_equal(const hrdp_beta_actions__action__FaceDetection_GetResult_Request * lhs, const hrdp_beta_actions__action__FaceDetection_GetResult_Request * rhs)
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
hrdp_beta_actions__action__FaceDetection_GetResult_Request__copy(
  const hrdp_beta_actions__action__FaceDetection_GetResult_Request * input,
  hrdp_beta_actions__action__FaceDetection_GetResult_Request * output)
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

hrdp_beta_actions__action__FaceDetection_GetResult_Request *
hrdp_beta_actions__action__FaceDetection_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_GetResult_Request * msg = (hrdp_beta_actions__action__FaceDetection_GetResult_Request *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Request));
  bool success = hrdp_beta_actions__action__FaceDetection_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__FaceDetection_GetResult_Request__destroy(hrdp_beta_actions__action__FaceDetection_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__FaceDetection_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence__init(hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_GetResult_Request * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__FaceDetection_GetResult_Request *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__FaceDetection_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__FaceDetection_GetResult_Request__fini(&data[i - 1]);
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
hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence__fini(hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence * array)
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
      hrdp_beta_actions__action__FaceDetection_GetResult_Request__fini(&array->data[i]);
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

hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence *
hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence * array = (hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence__destroy(hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence__are_equal(const hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence * lhs, const hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__FaceDetection_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence__copy(
  const hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence * input,
  hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Request);
    hrdp_beta_actions__action__FaceDetection_GetResult_Request * data =
      (hrdp_beta_actions__action__FaceDetection_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__FaceDetection_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__FaceDetection_GetResult_Request__fini(&data[i]);
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
    if (!hrdp_beta_actions__action__FaceDetection_GetResult_Request__copy(
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
// #include "hrdp_beta_actions/action/detail/face_detection__functions.h"

bool
hrdp_beta_actions__action__FaceDetection_GetResult_Response__init(hrdp_beta_actions__action__FaceDetection_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!hrdp_beta_actions__action__FaceDetection_Result__init(&msg->result)) {
    hrdp_beta_actions__action__FaceDetection_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__FaceDetection_GetResult_Response__fini(hrdp_beta_actions__action__FaceDetection_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  hrdp_beta_actions__action__FaceDetection_Result__fini(&msg->result);
}

bool
hrdp_beta_actions__action__FaceDetection_GetResult_Response__are_equal(const hrdp_beta_actions__action__FaceDetection_GetResult_Response * lhs, const hrdp_beta_actions__action__FaceDetection_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!hrdp_beta_actions__action__FaceDetection_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_GetResult_Response__copy(
  const hrdp_beta_actions__action__FaceDetection_GetResult_Response * input,
  hrdp_beta_actions__action__FaceDetection_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!hrdp_beta_actions__action__FaceDetection_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

hrdp_beta_actions__action__FaceDetection_GetResult_Response *
hrdp_beta_actions__action__FaceDetection_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_GetResult_Response * msg = (hrdp_beta_actions__action__FaceDetection_GetResult_Response *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Response));
  bool success = hrdp_beta_actions__action__FaceDetection_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__FaceDetection_GetResult_Response__destroy(hrdp_beta_actions__action__FaceDetection_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__FaceDetection_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence__init(hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_GetResult_Response * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__FaceDetection_GetResult_Response *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__FaceDetection_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__FaceDetection_GetResult_Response__fini(&data[i - 1]);
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
hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence__fini(hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence * array)
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
      hrdp_beta_actions__action__FaceDetection_GetResult_Response__fini(&array->data[i]);
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

hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence *
hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence * array = (hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence__destroy(hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence__are_equal(const hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence * lhs, const hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__FaceDetection_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence__copy(
  const hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence * input,
  hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Response);
    hrdp_beta_actions__action__FaceDetection_GetResult_Response * data =
      (hrdp_beta_actions__action__FaceDetection_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__FaceDetection_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__FaceDetection_GetResult_Response__fini(&data[i]);
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
    if (!hrdp_beta_actions__action__FaceDetection_GetResult_Response__copy(
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
// #include "hrdp_beta_actions/action/detail/face_detection__functions.h"

bool
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__init(hrdp_beta_actions__action__FaceDetection_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    hrdp_beta_actions__action__FaceDetection_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!hrdp_beta_actions__action__FaceDetection_Feedback__init(&msg->feedback)) {
    hrdp_beta_actions__action__FaceDetection_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__fini(hrdp_beta_actions__action__FaceDetection_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  hrdp_beta_actions__action__FaceDetection_Feedback__fini(&msg->feedback);
}

bool
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__are_equal(const hrdp_beta_actions__action__FaceDetection_FeedbackMessage * lhs, const hrdp_beta_actions__action__FaceDetection_FeedbackMessage * rhs)
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
  if (!hrdp_beta_actions__action__FaceDetection_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__copy(
  const hrdp_beta_actions__action__FaceDetection_FeedbackMessage * input,
  hrdp_beta_actions__action__FaceDetection_FeedbackMessage * output)
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
  if (!hrdp_beta_actions__action__FaceDetection_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

hrdp_beta_actions__action__FaceDetection_FeedbackMessage *
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_FeedbackMessage * msg = (hrdp_beta_actions__action__FaceDetection_FeedbackMessage *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hrdp_beta_actions__action__FaceDetection_FeedbackMessage));
  bool success = hrdp_beta_actions__action__FaceDetection_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__destroy(hrdp_beta_actions__action__FaceDetection_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hrdp_beta_actions__action__FaceDetection_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence__init(hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_FeedbackMessage * data = NULL;

  if (size) {
    data = (hrdp_beta_actions__action__FaceDetection_FeedbackMessage *)allocator.zero_allocate(size, sizeof(hrdp_beta_actions__action__FaceDetection_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hrdp_beta_actions__action__FaceDetection_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hrdp_beta_actions__action__FaceDetection_FeedbackMessage__fini(&data[i - 1]);
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
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence__fini(hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence * array)
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
      hrdp_beta_actions__action__FaceDetection_FeedbackMessage__fini(&array->data[i]);
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

hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence *
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence * array = (hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence *)allocator.allocate(sizeof(hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence__destroy(hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence__are_equal(const hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence * lhs, const hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hrdp_beta_actions__action__FaceDetection_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence__copy(
  const hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence * input,
  hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hrdp_beta_actions__action__FaceDetection_FeedbackMessage);
    hrdp_beta_actions__action__FaceDetection_FeedbackMessage * data =
      (hrdp_beta_actions__action__FaceDetection_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hrdp_beta_actions__action__FaceDetection_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hrdp_beta_actions__action__FaceDetection_FeedbackMessage__fini(&data[i]);
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
    if (!hrdp_beta_actions__action__FaceDetection_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
