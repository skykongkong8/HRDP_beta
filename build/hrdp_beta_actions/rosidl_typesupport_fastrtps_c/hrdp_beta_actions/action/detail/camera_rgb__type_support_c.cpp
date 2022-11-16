// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hrdp_beta_actions:action/CameraRGB.idl
// generated code does not contain a copyright notice
#include "hrdp_beta_actions/action/detail/camera_rgb__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hrdp_beta_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrdp_beta_actions/action/detail/camera_rgb__struct.h"
#include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CameraRGB_Goal__ros_msg_type = hrdp_beta_actions__action__CameraRGB_Goal;

static bool _CameraRGB_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraRGB_Goal__ros_msg_type * ros_message = static_cast<const _CameraRGB_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: order
  {
    cdr << ros_message->order;
  }

  return true;
}

static bool _CameraRGB_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraRGB_Goal__ros_msg_type * ros_message = static_cast<_CameraRGB_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: order
  {
    cdr >> ros_message->order;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraRGB_Goal__ros_msg_type * ros_message = static_cast<const _CameraRGB_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name order
  {
    size_t item_size = sizeof(ros_message->order);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CameraRGB_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrdp_beta_actions__action__CameraRGB_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: order
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CameraRGB_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrdp_beta_actions__action__CameraRGB_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CameraRGB_Goal = {
  "hrdp_beta_actions::action",
  "CameraRGB_Goal",
  _CameraRGB_Goal__cdr_serialize,
  _CameraRGB_Goal__cdr_deserialize,
  _CameraRGB_Goal__get_serialized_size,
  _CameraRGB_Goal__max_serialized_size
};

static rosidl_message_type_support_t _CameraRGB_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraRGB_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Goal)() {
  return &_CameraRGB_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // sequence
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // sequence

// forward declare type support functions


using _CameraRGB_Result__ros_msg_type = hrdp_beta_actions__action__CameraRGB_Result;

static bool _CameraRGB_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraRGB_Result__ros_msg_type * ros_message = static_cast<const _CameraRGB_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: sequence
  {
    size_t size = ros_message->sequence.size;
    auto array_ptr = ros_message->sequence.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CameraRGB_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraRGB_Result__ros_msg_type * ros_message = static_cast<_CameraRGB_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: sequence
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sequence.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->sequence);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->sequence, size)) {
      return "failed to create array for field 'sequence'";
    }
    auto array_ptr = ros_message->sequence.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraRGB_Result__ros_msg_type * ros_message = static_cast<const _CameraRGB_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sequence
  {
    size_t array_size = ros_message->sequence.size;
    auto array_ptr = ros_message->sequence.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CameraRGB_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrdp_beta_actions__action__CameraRGB_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sequence
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CameraRGB_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrdp_beta_actions__action__CameraRGB_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CameraRGB_Result = {
  "hrdp_beta_actions::action",
  "CameraRGB_Result",
  _CameraRGB_Result__cdr_serialize,
  _CameraRGB_Result__cdr_deserialize,
  _CameraRGB_Result__get_serialized_size,
  _CameraRGB_Result__max_serialized_size
};

static rosidl_message_type_support_t _CameraRGB_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraRGB_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Result)() {
  return &_CameraRGB_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // partial_sequence
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // partial_sequence

// forward declare type support functions


using _CameraRGB_Feedback__ros_msg_type = hrdp_beta_actions__action__CameraRGB_Feedback;

static bool _CameraRGB_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraRGB_Feedback__ros_msg_type * ros_message = static_cast<const _CameraRGB_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: partial_sequence
  {
    size_t size = ros_message->partial_sequence.size;
    auto array_ptr = ros_message->partial_sequence.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CameraRGB_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraRGB_Feedback__ros_msg_type * ros_message = static_cast<_CameraRGB_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: partial_sequence
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->partial_sequence.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->partial_sequence);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->partial_sequence, size)) {
      return "failed to create array for field 'partial_sequence'";
    }
    auto array_ptr = ros_message->partial_sequence.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraRGB_Feedback__ros_msg_type * ros_message = static_cast<const _CameraRGB_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name partial_sequence
  {
    size_t array_size = ros_message->partial_sequence.size;
    auto array_ptr = ros_message->partial_sequence.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CameraRGB_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrdp_beta_actions__action__CameraRGB_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: partial_sequence
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CameraRGB_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrdp_beta_actions__action__CameraRGB_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CameraRGB_Feedback = {
  "hrdp_beta_actions::action",
  "CameraRGB_Feedback",
  _CameraRGB_Feedback__cdr_serialize,
  _CameraRGB_Feedback__cdr_deserialize,
  _CameraRGB_Feedback__get_serialized_size,
  _CameraRGB_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _CameraRGB_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraRGB_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Feedback)() {
  return &_CameraRGB_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CameraRGB_SendGoal_Request__ros_msg_type = hrdp_beta_actions__action__CameraRGB_SendGoal_Request;

static bool _CameraRGB_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraRGB_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _CameraRGB_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CameraRGB_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraRGB_SendGoal_Request__ros_msg_type * ros_message = static_cast<_CameraRGB_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraRGB_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _CameraRGB_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_hrdp_beta_actions__action__CameraRGB_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CameraRGB_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrdp_beta_actions__action__CameraRGB_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_hrdp_beta_actions__action__CameraRGB_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CameraRGB_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrdp_beta_actions__action__CameraRGB_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CameraRGB_SendGoal_Request = {
  "hrdp_beta_actions::action",
  "CameraRGB_SendGoal_Request",
  _CameraRGB_SendGoal_Request__cdr_serialize,
  _CameraRGB_SendGoal_Request__cdr_deserialize,
  _CameraRGB_SendGoal_Request__get_serialized_size,
  _CameraRGB_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _CameraRGB_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraRGB_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_SendGoal_Request)() {
  return &_CameraRGB_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _CameraRGB_SendGoal_Response__ros_msg_type = hrdp_beta_actions__action__CameraRGB_SendGoal_Response;

static bool _CameraRGB_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraRGB_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _CameraRGB_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CameraRGB_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraRGB_SendGoal_Response__ros_msg_type * ros_message = static_cast<_CameraRGB_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraRGB_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _CameraRGB_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CameraRGB_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrdp_beta_actions__action__CameraRGB_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CameraRGB_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrdp_beta_actions__action__CameraRGB_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CameraRGB_SendGoal_Response = {
  "hrdp_beta_actions::action",
  "CameraRGB_SendGoal_Response",
  _CameraRGB_SendGoal_Response__cdr_serialize,
  _CameraRGB_SendGoal_Response__cdr_deserialize,
  _CameraRGB_SendGoal_Response__get_serialized_size,
  _CameraRGB_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _CameraRGB_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraRGB_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_SendGoal_Response)() {
  return &_CameraRGB_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hrdp_beta_actions/action/camera_rgb.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CameraRGB_SendGoal__callbacks = {
  "hrdp_beta_actions::action",
  "CameraRGB_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_SendGoal_Response)(),
};

static rosidl_service_type_support_t CameraRGB_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CameraRGB_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_SendGoal)() {
  return &CameraRGB_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CameraRGB_GetResult_Request__ros_msg_type = hrdp_beta_actions__action__CameraRGB_GetResult_Request;

static bool _CameraRGB_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraRGB_GetResult_Request__ros_msg_type * ros_message = static_cast<const _CameraRGB_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CameraRGB_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraRGB_GetResult_Request__ros_msg_type * ros_message = static_cast<_CameraRGB_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraRGB_GetResult_Request__ros_msg_type * ros_message = static_cast<const _CameraRGB_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CameraRGB_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrdp_beta_actions__action__CameraRGB_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CameraRGB_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrdp_beta_actions__action__CameraRGB_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CameraRGB_GetResult_Request = {
  "hrdp_beta_actions::action",
  "CameraRGB_GetResult_Request",
  _CameraRGB_GetResult_Request__cdr_serialize,
  _CameraRGB_GetResult_Request__cdr_deserialize,
  _CameraRGB_GetResult_Request__get_serialized_size,
  _CameraRGB_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _CameraRGB_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraRGB_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_GetResult_Request)() {
  return &_CameraRGB_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Result)();


using _CameraRGB_GetResult_Response__ros_msg_type = hrdp_beta_actions__action__CameraRGB_GetResult_Response;

static bool _CameraRGB_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraRGB_GetResult_Response__ros_msg_type * ros_message = static_cast<const _CameraRGB_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CameraRGB_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraRGB_GetResult_Response__ros_msg_type * ros_message = static_cast<_CameraRGB_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraRGB_GetResult_Response__ros_msg_type * ros_message = static_cast<const _CameraRGB_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_hrdp_beta_actions__action__CameraRGB_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CameraRGB_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrdp_beta_actions__action__CameraRGB_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_hrdp_beta_actions__action__CameraRGB_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CameraRGB_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrdp_beta_actions__action__CameraRGB_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CameraRGB_GetResult_Response = {
  "hrdp_beta_actions::action",
  "CameraRGB_GetResult_Response",
  _CameraRGB_GetResult_Response__cdr_serialize,
  _CameraRGB_GetResult_Response__cdr_deserialize,
  _CameraRGB_GetResult_Response__get_serialized_size,
  _CameraRGB_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _CameraRGB_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraRGB_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_GetResult_Response)() {
  return &_CameraRGB_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrdp_beta_actions/action/camera_rgb.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CameraRGB_GetResult__callbacks = {
  "hrdp_beta_actions::action",
  "CameraRGB_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_GetResult_Response)(),
};

static rosidl_service_type_support_t CameraRGB_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CameraRGB_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_GetResult)() {
  return &CameraRGB_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CameraRGB_FeedbackMessage__ros_msg_type = hrdp_beta_actions__action__CameraRGB_FeedbackMessage;

static bool _CameraRGB_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CameraRGB_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _CameraRGB_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CameraRGB_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CameraRGB_FeedbackMessage__ros_msg_type * ros_message = static_cast<_CameraRGB_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t get_serialized_size_hrdp_beta_actions__action__CameraRGB_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CameraRGB_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _CameraRGB_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_hrdp_beta_actions__action__CameraRGB_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CameraRGB_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hrdp_beta_actions__action__CameraRGB_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hrdp_beta_actions
size_t max_serialized_size_hrdp_beta_actions__action__CameraRGB_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_hrdp_beta_actions__action__CameraRGB_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CameraRGB_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_hrdp_beta_actions__action__CameraRGB_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CameraRGB_FeedbackMessage = {
  "hrdp_beta_actions::action",
  "CameraRGB_FeedbackMessage",
  _CameraRGB_FeedbackMessage__cdr_serialize,
  _CameraRGB_FeedbackMessage__cdr_deserialize,
  _CameraRGB_FeedbackMessage__get_serialized_size,
  _CameraRGB_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _CameraRGB_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CameraRGB_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hrdp_beta_actions, action, CameraRGB_FeedbackMessage)() {
  return &_CameraRGB_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
