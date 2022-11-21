// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hrdp_beta_actions:action/FaceDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"
#include "hrdp_beta_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hrdp_beta_actions/action/detail/face_detection__functions.h"
#include "hrdp_beta_actions/action/detail/face_detection__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrdp_beta_actions__action__FaceDetection_Goal__init(message_memory);
}

void FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_fini_function(void * message_memory)
{
  hrdp_beta_actions__action__FaceDetection_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_message_member_array[1] = {
  {
    "input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_Goal, input),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_message_members = {
  "hrdp_beta_actions__action",  // message namespace
  "FaceDetection_Goal",  // message name
  1,  // number of fields
  sizeof(hrdp_beta_actions__action__FaceDetection_Goal),
  FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_message_member_array,  // message members
  FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_message_type_support_handle = {
  0,
  &FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_Goal)() {
  if (!FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_message_type_support_handle.typesupport_identifier) {
    FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceDetection_Goal__rosidl_typesupport_introspection_c__FaceDetection_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__functions.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrdp_beta_actions__action__FaceDetection_Result__init(message_memory);
}

void FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_fini_function(void * message_memory)
{
  hrdp_beta_actions__action__FaceDetection_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_message_member_array[1] = {
  {
    "output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_Result, output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_message_members = {
  "hrdp_beta_actions__action",  // message namespace
  "FaceDetection_Result",  // message name
  1,  // number of fields
  sizeof(hrdp_beta_actions__action__FaceDetection_Result),
  FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_message_member_array,  // message members
  FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_message_type_support_handle = {
  0,
  &FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_Result)() {
  if (!FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_message_type_support_handle.typesupport_identifier) {
    FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceDetection_Result__rosidl_typesupport_introspection_c__FaceDetection_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__functions.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrdp_beta_actions__action__FaceDetection_Feedback__init(message_memory);
}

void FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_fini_function(void * message_memory)
{
  hrdp_beta_actions__action__FaceDetection_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_message_member_array[1] = {
  {
    "total_face_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_Feedback, total_face_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_message_members = {
  "hrdp_beta_actions__action",  // message namespace
  "FaceDetection_Feedback",  // message name
  1,  // number of fields
  sizeof(hrdp_beta_actions__action__FaceDetection_Feedback),
  FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_message_member_array,  // message members
  FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_message_type_support_handle = {
  0,
  &FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_Feedback)() {
  if (!FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_message_type_support_handle.typesupport_identifier) {
    FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceDetection_Feedback__rosidl_typesupport_introspection_c__FaceDetection_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__functions.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "hrdp_beta_actions/action/face_detection.h"
// Member `goal`
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrdp_beta_actions__action__FaceDetection_SendGoal_Request__init(message_memory);
}

void FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_fini_function(void * message_memory)
{
  hrdp_beta_actions__action__FaceDetection_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_members = {
  "hrdp_beta_actions__action",  // message namespace
  "FaceDetection_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Request),
  FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_member_array,  // message members
  FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_type_support_handle = {
  0,
  &FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_SendGoal_Request)() {
  FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_Goal)();
  if (!FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceDetection_SendGoal_Request__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__functions.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrdp_beta_actions__action__FaceDetection_SendGoal_Response__init(message_memory);
}

void FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_fini_function(void * message_memory)
{
  hrdp_beta_actions__action__FaceDetection_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_message_members = {
  "hrdp_beta_actions__action",  // message namespace
  "FaceDetection_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(hrdp_beta_actions__action__FaceDetection_SendGoal_Response),
  FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_message_member_array,  // message members
  FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_message_type_support_handle = {
  0,
  &FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_SendGoal_Response)() {
  FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceDetection_SendGoal_Response__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_service_members = {
  "hrdp_beta_actions__action",  // service namespace
  "FaceDetection_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_service_type_support_handle = {
  0,
  &hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrdp_beta_actions
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_SendGoal)() {
  if (!hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_service_type_support_handle.typesupport_identifier) {
    hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_SendGoal_Response)()->data;
  }

  return &hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__functions.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrdp_beta_actions__action__FaceDetection_GetResult_Request__init(message_memory);
}

void FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_fini_function(void * message_memory)
{
  hrdp_beta_actions__action__FaceDetection_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_message_members = {
  "hrdp_beta_actions__action",  // message namespace
  "FaceDetection_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Request),
  FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_message_member_array,  // message members
  FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_message_type_support_handle = {
  0,
  &FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_GetResult_Request)() {
  FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceDetection_GetResult_Request__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__functions.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "hrdp_beta_actions/action/face_detection.h"
// Member `result`
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrdp_beta_actions__action__FaceDetection_GetResult_Response__init(message_memory);
}

void FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_fini_function(void * message_memory)
{
  hrdp_beta_actions__action__FaceDetection_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_message_members = {
  "hrdp_beta_actions__action",  // message namespace
  "FaceDetection_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(hrdp_beta_actions__action__FaceDetection_GetResult_Response),
  FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_message_member_array,  // message members
  FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_message_type_support_handle = {
  0,
  &FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_GetResult_Response)() {
  FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_Result)();
  if (!FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceDetection_GetResult_Response__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_GetResult_service_members = {
  "hrdp_beta_actions__action",  // service namespace
  "FaceDetection_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_GetResult_service_type_support_handle = {
  0,
  &hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrdp_beta_actions
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_GetResult)() {
  if (!hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_GetResult_service_type_support_handle.typesupport_identifier) {
    hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_GetResult_Response)()->data;
  }

  return &hrdp_beta_actions__action__detail__face_detection__rosidl_typesupport_introspection_c__FaceDetection_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hrdp_beta_actions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__functions.h"
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "hrdp_beta_actions/action/face_detection.h"
// Member `feedback`
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hrdp_beta_actions__action__FaceDetection_FeedbackMessage__init(message_memory);
}

void FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_fini_function(void * message_memory)
{
  hrdp_beta_actions__action__FaceDetection_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hrdp_beta_actions__action__FaceDetection_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_message_members = {
  "hrdp_beta_actions__action",  // message namespace
  "FaceDetection_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(hrdp_beta_actions__action__FaceDetection_FeedbackMessage),
  FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_message_member_array,  // message members
  FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_message_type_support_handle = {
  0,
  &FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hrdp_beta_actions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_FeedbackMessage)() {
  FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hrdp_beta_actions, action, FaceDetection_Feedback)();
  if (!FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FaceDetection_FeedbackMessage__rosidl_typesupport_introspection_c__FaceDetection_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
