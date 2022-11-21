// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hrdp_beta_actions:action/FaceDetection.idl
// generated code does not contain a copyright notice

#ifndef HRDP_BETA_ACTIONS__ACTION__DETAIL__FACE_DETECTION__STRUCT_H_
#define HRDP_BETA_ACTIONS__ACTION__DETAIL__FACE_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/FaceDetection in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__FaceDetection_Goal
{
  int32_t input;
} hrdp_beta_actions__action__FaceDetection_Goal;

// Struct for a sequence of hrdp_beta_actions__action__FaceDetection_Goal.
typedef struct hrdp_beta_actions__action__FaceDetection_Goal__Sequence
{
  hrdp_beta_actions__action__FaceDetection_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__FaceDetection_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/FaceDetection in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__FaceDetection_Result
{
  int32_t output;
} hrdp_beta_actions__action__FaceDetection_Result;

// Struct for a sequence of hrdp_beta_actions__action__FaceDetection_Result.
typedef struct hrdp_beta_actions__action__FaceDetection_Result__Sequence
{
  hrdp_beta_actions__action__FaceDetection_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__FaceDetection_Result__Sequence;


// Constants defined in the message

// Struct defined in action/FaceDetection in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__FaceDetection_Feedback
{
  int32_t total_face_num;
} hrdp_beta_actions__action__FaceDetection_Feedback;

// Struct for a sequence of hrdp_beta_actions__action__FaceDetection_Feedback.
typedef struct hrdp_beta_actions__action__FaceDetection_Feedback__Sequence
{
  hrdp_beta_actions__action__FaceDetection_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__FaceDetection_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "hrdp_beta_actions/action/detail/face_detection__struct.h"

// Struct defined in action/FaceDetection in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__FaceDetection_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  hrdp_beta_actions__action__FaceDetection_Goal goal;
} hrdp_beta_actions__action__FaceDetection_SendGoal_Request;

// Struct for a sequence of hrdp_beta_actions__action__FaceDetection_SendGoal_Request.
typedef struct hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence
{
  hrdp_beta_actions__action__FaceDetection_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__FaceDetection_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/FaceDetection in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__FaceDetection_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} hrdp_beta_actions__action__FaceDetection_SendGoal_Response;

// Struct for a sequence of hrdp_beta_actions__action__FaceDetection_SendGoal_Response.
typedef struct hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence
{
  hrdp_beta_actions__action__FaceDetection_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__FaceDetection_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/FaceDetection in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__FaceDetection_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} hrdp_beta_actions__action__FaceDetection_GetResult_Request;

// Struct for a sequence of hrdp_beta_actions__action__FaceDetection_GetResult_Request.
typedef struct hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence
{
  hrdp_beta_actions__action__FaceDetection_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__FaceDetection_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.h"

// Struct defined in action/FaceDetection in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__FaceDetection_GetResult_Response
{
  int8_t status;
  hrdp_beta_actions__action__FaceDetection_Result result;
} hrdp_beta_actions__action__FaceDetection_GetResult_Response;

// Struct for a sequence of hrdp_beta_actions__action__FaceDetection_GetResult_Response.
typedef struct hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence
{
  hrdp_beta_actions__action__FaceDetection_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__FaceDetection_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.h"

// Struct defined in action/FaceDetection in the package hrdp_beta_actions.
typedef struct hrdp_beta_actions__action__FaceDetection_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  hrdp_beta_actions__action__FaceDetection_Feedback feedback;
} hrdp_beta_actions__action__FaceDetection_FeedbackMessage;

// Struct for a sequence of hrdp_beta_actions__action__FaceDetection_FeedbackMessage.
typedef struct hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence
{
  hrdp_beta_actions__action__FaceDetection_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hrdp_beta_actions__action__FaceDetection_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HRDP_BETA_ACTIONS__ACTION__DETAIL__FACE_DETECTION__STRUCT_H_
