// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrdp_beta_actions:action/RGBFrame.idl
// generated code does not contain a copyright notice

#ifndef HRDP_BETA_ACTIONS__ACTION__DETAIL__RGB_FRAME__STRUCT_H_
#define HRDP_BETA_ACTIONS__ACTION__DETAIL__RGB_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/RGBFrame in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__RGBFrame_Goal
{
  int32_t order;
} hrdp_beta_actions__action__RGBFrame_Goal;

// Struct for a sequence of hrdp_beta_actions__action__RGBFrame_Goal.
typedef struct hrdp_beta_actions__action__RGBFrame_Goal__Sequence
{
  hrdp_beta_actions__action__RGBFrame_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__RGBFrame_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/RGBFrame in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__RGBFrame_Result
{
  int32_t sequence;
} hrdp_beta_actions__action__RGBFrame_Result;

// Struct for a sequence of hrdp_beta_actions__action__RGBFrame_Result.
typedef struct hrdp_beta_actions__action__RGBFrame_Result__Sequence
{
  hrdp_beta_actions__action__RGBFrame_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__RGBFrame_Result__Sequence;


// Constants defined in the message

// Struct defined in action/RGBFrame in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__RGBFrame_Feedback
{
  int32_t partial_sequence;
} hrdp_beta_actions__action__RGBFrame_Feedback;

// Struct for a sequence of hrdp_beta_actions__action__RGBFrame_Feedback.
typedef struct hrdp_beta_actions__action__RGBFrame_Feedback__Sequence
{
  hrdp_beta_actions__action__RGBFrame_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__RGBFrame_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hrdp_beta_actions/action/detail/rgb_frame__struct.h"

// Struct defined in action/RGBFrame in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__RGBFrame_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hrdp_beta_actions__action__RGBFrame_Goal goal;
} hrdp_beta_actions__action__RGBFrame_SendGoal_Request;

// Struct for a sequence of hrdp_beta_actions__action__RGBFrame_SendGoal_Request.
typedef struct hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence
{
  hrdp_beta_actions__action__RGBFrame_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__RGBFrame_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/RGBFrame in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__RGBFrame_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hrdp_beta_actions__action__RGBFrame_SendGoal_Response;

// Struct for a sequence of hrdp_beta_actions__action__RGBFrame_SendGoal_Response.
typedef struct hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence
{
  hrdp_beta_actions__action__RGBFrame_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__RGBFrame_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/RGBFrame in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__RGBFrame_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hrdp_beta_actions__action__RGBFrame_GetResult_Request;

// Struct for a sequence of hrdp_beta_actions__action__RGBFrame_GetResult_Request.
typedef struct hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence
{
  hrdp_beta_actions__action__RGBFrame_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__RGBFrame_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hrdp_beta_actions/action/detail/rgb_frame__struct.h"

// Struct defined in action/RGBFrame in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__RGBFrame_GetResult_Response
{
  int8_t status;
  hrdp_beta_actions__action__RGBFrame_Result result;
} hrdp_beta_actions__action__RGBFrame_GetResult_Response;

// Struct for a sequence of hrdp_beta_actions__action__RGBFrame_GetResult_Response.
typedef struct hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence
{
  hrdp_beta_actions__action__RGBFrame_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__RGBFrame_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hrdp_beta_actions/action/detail/rgb_frame__struct.h"

// Struct defined in action/RGBFrame in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__RGBFrame_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hrdp_beta_actions__action__RGBFrame_Feedback feedback;
} hrdp_beta_actions__action__RGBFrame_FeedbackMessage;

// Struct for a sequence of hrdp_beta_actions__action__RGBFrame_FeedbackMessage.
typedef struct hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence
{
  hrdp_beta_actions__action__RGBFrame_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__RGBFrame_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRDP_BETA_ACTIONS__ACTION__DETAIL__RGB_FRAME__STRUCT_H_
