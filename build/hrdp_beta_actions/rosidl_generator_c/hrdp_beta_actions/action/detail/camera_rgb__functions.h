// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hrdp_beta_actions:action/CameraRGB.idl
// generated code does not contain a copyright notice

#ifndef HRDP_BETA_ACTIONS__ACTION__DETAIL__CAMERA_RGB__FUNCTIONS_H_
#define HRDP_BETA_ACTIONS__ACTION__DETAIL__CAMERA_RGB__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hrdp_beta_actions/msg/rosidl_generator_c__visibility_control.h"

#include "hrdp_beta_actions/action/detail/camera_rgb__struct.h"

/// Initialize action/CameraRGB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrdp_beta_actions__action__CameraRGB_Goal
 * )) before or use
 * hrdp_beta_actions__action__CameraRGB_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Goal__init(hrdp_beta_actions__action__CameraRGB_Goal * msg);

/// Finalize action/CameraRGB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Goal__fini(hrdp_beta_actions__action__CameraRGB_Goal * msg);

/// Create action/CameraRGB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrdp_beta_actions__action__CameraRGB_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_Goal *
hrdp_beta_actions__action__CameraRGB_Goal__create();

/// Destroy action/CameraRGB message.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Goal__destroy(hrdp_beta_actions__action__CameraRGB_Goal * msg);

/// Check for action/CameraRGB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Goal__are_equal(const hrdp_beta_actions__action__CameraRGB_Goal * lhs, const hrdp_beta_actions__action__CameraRGB_Goal * rhs);

/// Copy a action/CameraRGB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Goal__copy(
  const hrdp_beta_actions__action__CameraRGB_Goal * input,
  hrdp_beta_actions__action__CameraRGB_Goal * output);

/// Initialize array of action/CameraRGB messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrdp_beta_actions__action__CameraRGB_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Goal__Sequence__init(hrdp_beta_actions__action__CameraRGB_Goal__Sequence * array, size_t size);

/// Finalize array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Goal__Sequence__fini(hrdp_beta_actions__action__CameraRGB_Goal__Sequence * array);

/// Create array of action/CameraRGB messages.
/**
 * It allocates the memory for the array and calls
 * hrdp_beta_actions__action__CameraRGB_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_Goal__Sequence *
hrdp_beta_actions__action__CameraRGB_Goal__Sequence__create(size_t size);

/// Destroy array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Goal__Sequence__destroy(hrdp_beta_actions__action__CameraRGB_Goal__Sequence * array);

/// Check for action/CameraRGB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Goal__Sequence__are_equal(const hrdp_beta_actions__action__CameraRGB_Goal__Sequence * lhs, const hrdp_beta_actions__action__CameraRGB_Goal__Sequence * rhs);

/// Copy an array of action/CameraRGB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Goal__Sequence__copy(
  const hrdp_beta_actions__action__CameraRGB_Goal__Sequence * input,
  hrdp_beta_actions__action__CameraRGB_Goal__Sequence * output);

/// Initialize action/CameraRGB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrdp_beta_actions__action__CameraRGB_Result
 * )) before or use
 * hrdp_beta_actions__action__CameraRGB_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Result__init(hrdp_beta_actions__action__CameraRGB_Result * msg);

/// Finalize action/CameraRGB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Result__fini(hrdp_beta_actions__action__CameraRGB_Result * msg);

/// Create action/CameraRGB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrdp_beta_actions__action__CameraRGB_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_Result *
hrdp_beta_actions__action__CameraRGB_Result__create();

/// Destroy action/CameraRGB message.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Result__destroy(hrdp_beta_actions__action__CameraRGB_Result * msg);

/// Check for action/CameraRGB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Result__are_equal(const hrdp_beta_actions__action__CameraRGB_Result * lhs, const hrdp_beta_actions__action__CameraRGB_Result * rhs);

/// Copy a action/CameraRGB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Result__copy(
  const hrdp_beta_actions__action__CameraRGB_Result * input,
  hrdp_beta_actions__action__CameraRGB_Result * output);

/// Initialize array of action/CameraRGB messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrdp_beta_actions__action__CameraRGB_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Result__Sequence__init(hrdp_beta_actions__action__CameraRGB_Result__Sequence * array, size_t size);

/// Finalize array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Result__Sequence__fini(hrdp_beta_actions__action__CameraRGB_Result__Sequence * array);

/// Create array of action/CameraRGB messages.
/**
 * It allocates the memory for the array and calls
 * hrdp_beta_actions__action__CameraRGB_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_Result__Sequence *
hrdp_beta_actions__action__CameraRGB_Result__Sequence__create(size_t size);

/// Destroy array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Result__Sequence__destroy(hrdp_beta_actions__action__CameraRGB_Result__Sequence * array);

/// Check for action/CameraRGB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Result__Sequence__are_equal(const hrdp_beta_actions__action__CameraRGB_Result__Sequence * lhs, const hrdp_beta_actions__action__CameraRGB_Result__Sequence * rhs);

/// Copy an array of action/CameraRGB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Result__Sequence__copy(
  const hrdp_beta_actions__action__CameraRGB_Result__Sequence * input,
  hrdp_beta_actions__action__CameraRGB_Result__Sequence * output);

/// Initialize action/CameraRGB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrdp_beta_actions__action__CameraRGB_Feedback
 * )) before or use
 * hrdp_beta_actions__action__CameraRGB_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Feedback__init(hrdp_beta_actions__action__CameraRGB_Feedback * msg);

/// Finalize action/CameraRGB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Feedback__fini(hrdp_beta_actions__action__CameraRGB_Feedback * msg);

/// Create action/CameraRGB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrdp_beta_actions__action__CameraRGB_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_Feedback *
hrdp_beta_actions__action__CameraRGB_Feedback__create();

/// Destroy action/CameraRGB message.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Feedback__destroy(hrdp_beta_actions__action__CameraRGB_Feedback * msg);

/// Check for action/CameraRGB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Feedback__are_equal(const hrdp_beta_actions__action__CameraRGB_Feedback * lhs, const hrdp_beta_actions__action__CameraRGB_Feedback * rhs);

/// Copy a action/CameraRGB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Feedback__copy(
  const hrdp_beta_actions__action__CameraRGB_Feedback * input,
  hrdp_beta_actions__action__CameraRGB_Feedback * output);

/// Initialize array of action/CameraRGB messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrdp_beta_actions__action__CameraRGB_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Feedback__Sequence__init(hrdp_beta_actions__action__CameraRGB_Feedback__Sequence * array, size_t size);

/// Finalize array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Feedback__Sequence__fini(hrdp_beta_actions__action__CameraRGB_Feedback__Sequence * array);

/// Create array of action/CameraRGB messages.
/**
 * It allocates the memory for the array and calls
 * hrdp_beta_actions__action__CameraRGB_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_Feedback__Sequence *
hrdp_beta_actions__action__CameraRGB_Feedback__Sequence__create(size_t size);

/// Destroy array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_Feedback__Sequence__destroy(hrdp_beta_actions__action__CameraRGB_Feedback__Sequence * array);

/// Check for action/CameraRGB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Feedback__Sequence__are_equal(const hrdp_beta_actions__action__CameraRGB_Feedback__Sequence * lhs, const hrdp_beta_actions__action__CameraRGB_Feedback__Sequence * rhs);

/// Copy an array of action/CameraRGB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_Feedback__Sequence__copy(
  const hrdp_beta_actions__action__CameraRGB_Feedback__Sequence * input,
  hrdp_beta_actions__action__CameraRGB_Feedback__Sequence * output);

/// Initialize action/CameraRGB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Request
 * )) before or use
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__init(hrdp_beta_actions__action__CameraRGB_SendGoal_Request * msg);

/// Finalize action/CameraRGB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__fini(hrdp_beta_actions__action__CameraRGB_SendGoal_Request * msg);

/// Create action/CameraRGB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_SendGoal_Request *
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__create();

/// Destroy action/CameraRGB message.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__destroy(hrdp_beta_actions__action__CameraRGB_SendGoal_Request * msg);

/// Check for action/CameraRGB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__are_equal(const hrdp_beta_actions__action__CameraRGB_SendGoal_Request * lhs, const hrdp_beta_actions__action__CameraRGB_SendGoal_Request * rhs);

/// Copy a action/CameraRGB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__copy(
  const hrdp_beta_actions__action__CameraRGB_SendGoal_Request * input,
  hrdp_beta_actions__action__CameraRGB_SendGoal_Request * output);

/// Initialize array of action/CameraRGB messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence__init(hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence__fini(hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence * array);

/// Create array of action/CameraRGB messages.
/**
 * It allocates the memory for the array and calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence *
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence__destroy(hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence * array);

/// Check for action/CameraRGB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence__are_equal(const hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence * lhs, const hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/CameraRGB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence__copy(
  const hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence * input,
  hrdp_beta_actions__action__CameraRGB_SendGoal_Request__Sequence * output);

/// Initialize action/CameraRGB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Response
 * )) before or use
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__init(hrdp_beta_actions__action__CameraRGB_SendGoal_Response * msg);

/// Finalize action/CameraRGB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__fini(hrdp_beta_actions__action__CameraRGB_SendGoal_Response * msg);

/// Create action/CameraRGB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_SendGoal_Response *
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__create();

/// Destroy action/CameraRGB message.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__destroy(hrdp_beta_actions__action__CameraRGB_SendGoal_Response * msg);

/// Check for action/CameraRGB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__are_equal(const hrdp_beta_actions__action__CameraRGB_SendGoal_Response * lhs, const hrdp_beta_actions__action__CameraRGB_SendGoal_Response * rhs);

/// Copy a action/CameraRGB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__copy(
  const hrdp_beta_actions__action__CameraRGB_SendGoal_Response * input,
  hrdp_beta_actions__action__CameraRGB_SendGoal_Response * output);

/// Initialize array of action/CameraRGB messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence__init(hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence__fini(hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence * array);

/// Create array of action/CameraRGB messages.
/**
 * It allocates the memory for the array and calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence *
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence__destroy(hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence * array);

/// Check for action/CameraRGB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence__are_equal(const hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence * lhs, const hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/CameraRGB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence__copy(
  const hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence * input,
  hrdp_beta_actions__action__CameraRGB_SendGoal_Response__Sequence * output);

/// Initialize action/CameraRGB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrdp_beta_actions__action__CameraRGB_GetResult_Request
 * )) before or use
 * hrdp_beta_actions__action__CameraRGB_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Request__init(hrdp_beta_actions__action__CameraRGB_GetResult_Request * msg);

/// Finalize action/CameraRGB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_GetResult_Request__fini(hrdp_beta_actions__action__CameraRGB_GetResult_Request * msg);

/// Create action/CameraRGB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_GetResult_Request *
hrdp_beta_actions__action__CameraRGB_GetResult_Request__create();

/// Destroy action/CameraRGB message.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_GetResult_Request__destroy(hrdp_beta_actions__action__CameraRGB_GetResult_Request * msg);

/// Check for action/CameraRGB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Request__are_equal(const hrdp_beta_actions__action__CameraRGB_GetResult_Request * lhs, const hrdp_beta_actions__action__CameraRGB_GetResult_Request * rhs);

/// Copy a action/CameraRGB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Request__copy(
  const hrdp_beta_actions__action__CameraRGB_GetResult_Request * input,
  hrdp_beta_actions__action__CameraRGB_GetResult_Request * output);

/// Initialize array of action/CameraRGB messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence__init(hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence__fini(hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence * array);

/// Create array of action/CameraRGB messages.
/**
 * It allocates the memory for the array and calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence *
hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence__destroy(hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence * array);

/// Check for action/CameraRGB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence__are_equal(const hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence * lhs, const hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence * rhs);

/// Copy an array of action/CameraRGB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence__copy(
  const hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence * input,
  hrdp_beta_actions__action__CameraRGB_GetResult_Request__Sequence * output);

/// Initialize action/CameraRGB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrdp_beta_actions__action__CameraRGB_GetResult_Response
 * )) before or use
 * hrdp_beta_actions__action__CameraRGB_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Response__init(hrdp_beta_actions__action__CameraRGB_GetResult_Response * msg);

/// Finalize action/CameraRGB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_GetResult_Response__fini(hrdp_beta_actions__action__CameraRGB_GetResult_Response * msg);

/// Create action/CameraRGB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_GetResult_Response *
hrdp_beta_actions__action__CameraRGB_GetResult_Response__create();

/// Destroy action/CameraRGB message.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_GetResult_Response__destroy(hrdp_beta_actions__action__CameraRGB_GetResult_Response * msg);

/// Check for action/CameraRGB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Response__are_equal(const hrdp_beta_actions__action__CameraRGB_GetResult_Response * lhs, const hrdp_beta_actions__action__CameraRGB_GetResult_Response * rhs);

/// Copy a action/CameraRGB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Response__copy(
  const hrdp_beta_actions__action__CameraRGB_GetResult_Response * input,
  hrdp_beta_actions__action__CameraRGB_GetResult_Response * output);

/// Initialize array of action/CameraRGB messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence__init(hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence__fini(hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence * array);

/// Create array of action/CameraRGB messages.
/**
 * It allocates the memory for the array and calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence *
hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence__destroy(hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence * array);

/// Check for action/CameraRGB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence__are_equal(const hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence * lhs, const hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence * rhs);

/// Copy an array of action/CameraRGB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence__copy(
  const hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence * input,
  hrdp_beta_actions__action__CameraRGB_GetResult_Response__Sequence * output);

/// Initialize action/CameraRGB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hrdp_beta_actions__action__CameraRGB_FeedbackMessage
 * )) before or use
 * hrdp_beta_actions__action__CameraRGB_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__init(hrdp_beta_actions__action__CameraRGB_FeedbackMessage * msg);

/// Finalize action/CameraRGB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__fini(hrdp_beta_actions__action__CameraRGB_FeedbackMessage * msg);

/// Create action/CameraRGB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hrdp_beta_actions__action__CameraRGB_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_FeedbackMessage *
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__create();

/// Destroy action/CameraRGB message.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__destroy(hrdp_beta_actions__action__CameraRGB_FeedbackMessage * msg);

/// Check for action/CameraRGB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__are_equal(const hrdp_beta_actions__action__CameraRGB_FeedbackMessage * lhs, const hrdp_beta_actions__action__CameraRGB_FeedbackMessage * rhs);

/// Copy a action/CameraRGB message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__copy(
  const hrdp_beta_actions__action__CameraRGB_FeedbackMessage * input,
  hrdp_beta_actions__action__CameraRGB_FeedbackMessage * output);

/// Initialize array of action/CameraRGB messages.
/**
 * It allocates the memory for the number of elements and calls
 * hrdp_beta_actions__action__CameraRGB_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence__init(hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence__fini(hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence * array);

/// Create array of action/CameraRGB messages.
/**
 * It allocates the memory for the array and calls
 * hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence *
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/CameraRGB messages.
/**
 * It calls
 * hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
void
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence__destroy(hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence * array);

/// Check for action/CameraRGB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence__are_equal(const hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence * lhs, const hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/CameraRGB messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hrdp_beta_actions
bool
hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence__copy(
  const hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence * input,
  hrdp_beta_actions__action__CameraRGB_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HRDP_BETA_ACTIONS__ACTION__DETAIL__CAMERA_RGB__FUNCTIONS_H_
