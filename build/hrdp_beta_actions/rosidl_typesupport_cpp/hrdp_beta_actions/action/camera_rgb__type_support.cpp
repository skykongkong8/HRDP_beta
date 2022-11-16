// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from hrdp_beta_actions:action/CameraRGB.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraRGB_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraRGB_Goal_type_support_ids_t;

static const _CameraRGB_Goal_type_support_ids_t _CameraRGB_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraRGB_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraRGB_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraRGB_Goal_type_support_symbol_names_t _CameraRGB_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrdp_beta_actions, action, CameraRGB_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrdp_beta_actions, action, CameraRGB_Goal)),
  }
};

typedef struct _CameraRGB_Goal_type_support_data_t
{
  void * data[2];
} _CameraRGB_Goal_type_support_data_t;

static _CameraRGB_Goal_type_support_data_t _CameraRGB_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraRGB_Goal_message_typesupport_map = {
  2,
  "hrdp_beta_actions",
  &_CameraRGB_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_CameraRGB_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_CameraRGB_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraRGB_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraRGB_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_Goal>()
{
  return &::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hrdp_beta_actions, action, CameraRGB_Goal)() {
  return get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_Goal>();
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
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
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

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraRGB_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraRGB_Result_type_support_ids_t;

static const _CameraRGB_Result_type_support_ids_t _CameraRGB_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraRGB_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraRGB_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraRGB_Result_type_support_symbol_names_t _CameraRGB_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrdp_beta_actions, action, CameraRGB_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrdp_beta_actions, action, CameraRGB_Result)),
  }
};

typedef struct _CameraRGB_Result_type_support_data_t
{
  void * data[2];
} _CameraRGB_Result_type_support_data_t;

static _CameraRGB_Result_type_support_data_t _CameraRGB_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraRGB_Result_message_typesupport_map = {
  2,
  "hrdp_beta_actions",
  &_CameraRGB_Result_message_typesupport_ids.typesupport_identifier[0],
  &_CameraRGB_Result_message_typesupport_symbol_names.symbol_name[0],
  &_CameraRGB_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraRGB_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraRGB_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_Result>()
{
  return &::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hrdp_beta_actions, action, CameraRGB_Result)() {
  return get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_Result>();
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
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
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

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraRGB_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraRGB_Feedback_type_support_ids_t;

static const _CameraRGB_Feedback_type_support_ids_t _CameraRGB_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraRGB_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraRGB_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraRGB_Feedback_type_support_symbol_names_t _CameraRGB_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrdp_beta_actions, action, CameraRGB_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrdp_beta_actions, action, CameraRGB_Feedback)),
  }
};

typedef struct _CameraRGB_Feedback_type_support_data_t
{
  void * data[2];
} _CameraRGB_Feedback_type_support_data_t;

static _CameraRGB_Feedback_type_support_data_t _CameraRGB_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraRGB_Feedback_message_typesupport_map = {
  2,
  "hrdp_beta_actions",
  &_CameraRGB_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_CameraRGB_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_CameraRGB_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraRGB_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraRGB_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_Feedback>()
{
  return &::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hrdp_beta_actions, action, CameraRGB_Feedback)() {
  return get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_Feedback>();
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
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
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

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraRGB_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraRGB_SendGoal_Request_type_support_ids_t;

static const _CameraRGB_SendGoal_Request_type_support_ids_t _CameraRGB_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraRGB_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraRGB_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraRGB_SendGoal_Request_type_support_symbol_names_t _CameraRGB_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrdp_beta_actions, action, CameraRGB_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrdp_beta_actions, action, CameraRGB_SendGoal_Request)),
  }
};

typedef struct _CameraRGB_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _CameraRGB_SendGoal_Request_type_support_data_t;

static _CameraRGB_SendGoal_Request_type_support_data_t _CameraRGB_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraRGB_SendGoal_Request_message_typesupport_map = {
  2,
  "hrdp_beta_actions",
  &_CameraRGB_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CameraRGB_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CameraRGB_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraRGB_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraRGB_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_SendGoal_Request>()
{
  return &::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hrdp_beta_actions, action, CameraRGB_SendGoal_Request)() {
  return get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_SendGoal_Request>();
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
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
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

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraRGB_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraRGB_SendGoal_Response_type_support_ids_t;

static const _CameraRGB_SendGoal_Response_type_support_ids_t _CameraRGB_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraRGB_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraRGB_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraRGB_SendGoal_Response_type_support_symbol_names_t _CameraRGB_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrdp_beta_actions, action, CameraRGB_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrdp_beta_actions, action, CameraRGB_SendGoal_Response)),
  }
};

typedef struct _CameraRGB_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _CameraRGB_SendGoal_Response_type_support_data_t;

static _CameraRGB_SendGoal_Response_type_support_data_t _CameraRGB_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraRGB_SendGoal_Response_message_typesupport_map = {
  2,
  "hrdp_beta_actions",
  &_CameraRGB_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CameraRGB_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CameraRGB_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraRGB_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraRGB_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_SendGoal_Response>()
{
  return &::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hrdp_beta_actions, action, CameraRGB_SendGoal_Response)() {
  return get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraRGB_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraRGB_SendGoal_type_support_ids_t;

static const _CameraRGB_SendGoal_type_support_ids_t _CameraRGB_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraRGB_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraRGB_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraRGB_SendGoal_type_support_symbol_names_t _CameraRGB_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrdp_beta_actions, action, CameraRGB_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrdp_beta_actions, action, CameraRGB_SendGoal)),
  }
};

typedef struct _CameraRGB_SendGoal_type_support_data_t
{
  void * data[2];
} _CameraRGB_SendGoal_type_support_data_t;

static _CameraRGB_SendGoal_type_support_data_t _CameraRGB_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraRGB_SendGoal_service_typesupport_map = {
  2,
  "hrdp_beta_actions",
  &_CameraRGB_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_CameraRGB_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_CameraRGB_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CameraRGB_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraRGB_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hrdp_beta_actions::action::CameraRGB_SendGoal>()
{
  return &::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
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

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraRGB_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraRGB_GetResult_Request_type_support_ids_t;

static const _CameraRGB_GetResult_Request_type_support_ids_t _CameraRGB_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraRGB_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraRGB_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraRGB_GetResult_Request_type_support_symbol_names_t _CameraRGB_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrdp_beta_actions, action, CameraRGB_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrdp_beta_actions, action, CameraRGB_GetResult_Request)),
  }
};

typedef struct _CameraRGB_GetResult_Request_type_support_data_t
{
  void * data[2];
} _CameraRGB_GetResult_Request_type_support_data_t;

static _CameraRGB_GetResult_Request_type_support_data_t _CameraRGB_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraRGB_GetResult_Request_message_typesupport_map = {
  2,
  "hrdp_beta_actions",
  &_CameraRGB_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CameraRGB_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CameraRGB_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraRGB_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraRGB_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_GetResult_Request>()
{
  return &::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hrdp_beta_actions, action, CameraRGB_GetResult_Request)() {
  return get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_GetResult_Request>();
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
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
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

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraRGB_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraRGB_GetResult_Response_type_support_ids_t;

static const _CameraRGB_GetResult_Response_type_support_ids_t _CameraRGB_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraRGB_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraRGB_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraRGB_GetResult_Response_type_support_symbol_names_t _CameraRGB_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrdp_beta_actions, action, CameraRGB_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrdp_beta_actions, action, CameraRGB_GetResult_Response)),
  }
};

typedef struct _CameraRGB_GetResult_Response_type_support_data_t
{
  void * data[2];
} _CameraRGB_GetResult_Response_type_support_data_t;

static _CameraRGB_GetResult_Response_type_support_data_t _CameraRGB_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraRGB_GetResult_Response_message_typesupport_map = {
  2,
  "hrdp_beta_actions",
  &_CameraRGB_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CameraRGB_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CameraRGB_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraRGB_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraRGB_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_GetResult_Response>()
{
  return &::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hrdp_beta_actions, action, CameraRGB_GetResult_Response)() {
  return get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraRGB_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraRGB_GetResult_type_support_ids_t;

static const _CameraRGB_GetResult_type_support_ids_t _CameraRGB_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraRGB_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraRGB_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraRGB_GetResult_type_support_symbol_names_t _CameraRGB_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrdp_beta_actions, action, CameraRGB_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrdp_beta_actions, action, CameraRGB_GetResult)),
  }
};

typedef struct _CameraRGB_GetResult_type_support_data_t
{
  void * data[2];
} _CameraRGB_GetResult_type_support_data_t;

static _CameraRGB_GetResult_type_support_data_t _CameraRGB_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraRGB_GetResult_service_typesupport_map = {
  2,
  "hrdp_beta_actions",
  &_CameraRGB_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_CameraRGB_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_CameraRGB_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CameraRGB_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraRGB_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<hrdp_beta_actions::action::CameraRGB_GetResult>()
{
  return &::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
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

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _CameraRGB_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CameraRGB_FeedbackMessage_type_support_ids_t;

static const _CameraRGB_FeedbackMessage_type_support_ids_t _CameraRGB_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CameraRGB_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CameraRGB_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CameraRGB_FeedbackMessage_type_support_symbol_names_t _CameraRGB_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hrdp_beta_actions, action, CameraRGB_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hrdp_beta_actions, action, CameraRGB_FeedbackMessage)),
  }
};

typedef struct _CameraRGB_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _CameraRGB_FeedbackMessage_type_support_data_t;

static _CameraRGB_FeedbackMessage_type_support_data_t _CameraRGB_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CameraRGB_FeedbackMessage_message_typesupport_map = {
  2,
  "hrdp_beta_actions",
  &_CameraRGB_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_CameraRGB_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_CameraRGB_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CameraRGB_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CameraRGB_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_FeedbackMessage>()
{
  return &::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, hrdp_beta_actions, action, CameraRGB_FeedbackMessage)() {
  return get_message_type_support_handle<hrdp_beta_actions::action::CameraRGB_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "hrdp_beta_actions/action/detail/camera_rgb__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace hrdp_beta_actions
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t CameraRGB_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace hrdp_beta_actions

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<hrdp_beta_actions::action::CameraRGB>()
{
  using ::hrdp_beta_actions::action::rosidl_typesupport_cpp::CameraRGB_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  CameraRGB_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::hrdp_beta_actions::action::CameraRGB::Impl::SendGoalService>();
  CameraRGB_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::hrdp_beta_actions::action::CameraRGB::Impl::GetResultService>();
  CameraRGB_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::hrdp_beta_actions::action::CameraRGB::Impl::CancelGoalService>();
  CameraRGB_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::hrdp_beta_actions::action::CameraRGB::Impl::FeedbackMessage>();
  CameraRGB_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::hrdp_beta_actions::action::CameraRGB::Impl::GoalStatusMessage>();
  return &CameraRGB_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
