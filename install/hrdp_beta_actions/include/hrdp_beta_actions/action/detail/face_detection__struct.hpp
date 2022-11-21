// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hrdp_beta_actions:action/FaceDetection.idl
// generated code does not contain a copyright notice

#ifndef HRDP_BETA_ACTIONS__ACTION__DETAIL__FACE_DETECTION__STRUCT_HPP_
#define HRDP_BETA_ACTIONS__ACTION__DETAIL__FACE_DETECTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_Goal __attribute__((deprecated))
#else
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_Goal __declspec(deprecated)
#endif

namespace hrdp_beta_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FaceDetection_Goal_
{
  using Type = FaceDetection_Goal_<ContainerAllocator>;

  explicit FaceDetection_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = 0l;
    }
  }

  explicit FaceDetection_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input = 0l;
    }
  }

  // field types and members
  using _input_type =
    int32_t;
  _input_type input;

  // setters for named parameter idiom
  Type & set__input(
    const int32_t & _arg)
  {
    this->input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_Goal
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_Goal
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceDetection_Goal_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceDetection_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceDetection_Goal_

// alias to use template instance with default allocator
using FaceDetection_Goal =
  hrdp_beta_actions::action::FaceDetection_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrdp_beta_actions


#ifndef _WIN32
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_Result __attribute__((deprecated))
#else
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_Result __declspec(deprecated)
#endif

namespace hrdp_beta_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FaceDetection_Result_
{
  using Type = FaceDetection_Result_<ContainerAllocator>;

  explicit FaceDetection_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = 0l;
    }
  }

  explicit FaceDetection_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output = 0l;
    }
  }

  // field types and members
  using _output_type =
    int32_t;
  _output_type output;

  // setters for named parameter idiom
  Type & set__output(
    const int32_t & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_Result
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_Result
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceDetection_Result_ & other) const
  {
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceDetection_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceDetection_Result_

// alias to use template instance with default allocator
using FaceDetection_Result =
  hrdp_beta_actions::action::FaceDetection_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrdp_beta_actions


#ifndef _WIN32
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_Feedback __declspec(deprecated)
#endif

namespace hrdp_beta_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FaceDetection_Feedback_
{
  using Type = FaceDetection_Feedback_<ContainerAllocator>;

  explicit FaceDetection_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_face_num = 0l;
    }
  }

  explicit FaceDetection_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_face_num = 0l;
    }
  }

  // field types and members
  using _total_face_num_type =
    int32_t;
  _total_face_num_type total_face_num;

  // setters for named parameter idiom
  Type & set__total_face_num(
    const int32_t & _arg)
  {
    this->total_face_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_Feedback
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_Feedback
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceDetection_Feedback_ & other) const
  {
    if (this->total_face_num != other.total_face_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceDetection_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceDetection_Feedback_

// alias to use template instance with default allocator
using FaceDetection_Feedback =
  hrdp_beta_actions::action::FaceDetection_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrdp_beta_actions


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "hrdp_beta_actions/action/detail/face_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_SendGoal_Request __declspec(deprecated)
#endif

namespace hrdp_beta_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FaceDetection_SendGoal_Request_
{
  using Type = FaceDetection_SendGoal_Request_<ContainerAllocator>;

  explicit FaceDetection_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit FaceDetection_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const hrdp_beta_actions::action::FaceDetection_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_SendGoal_Request
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_SendGoal_Request
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceDetection_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceDetection_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceDetection_SendGoal_Request_

// alias to use template instance with default allocator
using FaceDetection_SendGoal_Request =
  hrdp_beta_actions::action::FaceDetection_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrdp_beta_actions


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_SendGoal_Response __declspec(deprecated)
#endif

namespace hrdp_beta_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FaceDetection_SendGoal_Response_
{
  using Type = FaceDetection_SendGoal_Response_<ContainerAllocator>;

  explicit FaceDetection_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit FaceDetection_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_SendGoal_Response
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_SendGoal_Response
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceDetection_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceDetection_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceDetection_SendGoal_Response_

// alias to use template instance with default allocator
using FaceDetection_SendGoal_Response =
  hrdp_beta_actions::action::FaceDetection_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrdp_beta_actions

namespace hrdp_beta_actions
{

namespace action
{

struct FaceDetection_SendGoal
{
  using Request = hrdp_beta_actions::action::FaceDetection_SendGoal_Request;
  using Response = hrdp_beta_actions::action::FaceDetection_SendGoal_Response;
};

}  // namespace action

}  // namespace hrdp_beta_actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_GetResult_Request __declspec(deprecated)
#endif

namespace hrdp_beta_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FaceDetection_GetResult_Request_
{
  using Type = FaceDetection_GetResult_Request_<ContainerAllocator>;

  explicit FaceDetection_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit FaceDetection_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_GetResult_Request
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_GetResult_Request
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceDetection_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceDetection_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceDetection_GetResult_Request_

// alias to use template instance with default allocator
using FaceDetection_GetResult_Request =
  hrdp_beta_actions::action::FaceDetection_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrdp_beta_actions


// Include directives for member types
// Member 'result'
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_GetResult_Response __declspec(deprecated)
#endif

namespace hrdp_beta_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FaceDetection_GetResult_Response_
{
  using Type = FaceDetection_GetResult_Response_<ContainerAllocator>;

  explicit FaceDetection_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit FaceDetection_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const hrdp_beta_actions::action::FaceDetection_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_GetResult_Response
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_GetResult_Response
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceDetection_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceDetection_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceDetection_GetResult_Response_

// alias to use template instance with default allocator
using FaceDetection_GetResult_Response =
  hrdp_beta_actions::action::FaceDetection_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrdp_beta_actions

namespace hrdp_beta_actions
{

namespace action
{

struct FaceDetection_GetResult
{
  using Request = hrdp_beta_actions::action::FaceDetection_GetResult_Request;
  using Response = hrdp_beta_actions::action::FaceDetection_GetResult_Response;
};

}  // namespace action

}  // namespace hrdp_beta_actions


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "hrdp_beta_actions/action/detail/face_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__hrdp_beta_actions__action__FaceDetection_FeedbackMessage __declspec(deprecated)
#endif

namespace hrdp_beta_actions
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FaceDetection_FeedbackMessage_
{
  using Type = FaceDetection_FeedbackMessage_<ContainerAllocator>;

  explicit FaceDetection_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit FaceDetection_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const hrdp_beta_actions::action::FaceDetection_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_FeedbackMessage
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hrdp_beta_actions__action__FaceDetection_FeedbackMessage
    std::shared_ptr<hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaceDetection_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaceDetection_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaceDetection_FeedbackMessage_

// alias to use template instance with default allocator
using FaceDetection_FeedbackMessage =
  hrdp_beta_actions::action::FaceDetection_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace hrdp_beta_actions

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace hrdp_beta_actions
{

namespace action
{

struct FaceDetection
{
  /// The goal message defined in the action definition.
  using Goal = hrdp_beta_actions::action::FaceDetection_Goal;
  /// The result message defined in the action definition.
  using Result = hrdp_beta_actions::action::FaceDetection_Result;
  /// The feedback message defined in the action definition.
  using Feedback = hrdp_beta_actions::action::FaceDetection_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = hrdp_beta_actions::action::FaceDetection_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = hrdp_beta_actions::action::FaceDetection_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = hrdp_beta_actions::action::FaceDetection_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct FaceDetection FaceDetection;

}  // namespace action

}  // namespace hrdp_beta_actions

#endif  // HRDP_BETA_ACTIONS__ACTION__DETAIL__FACE_DETECTION__STRUCT_HPP_
