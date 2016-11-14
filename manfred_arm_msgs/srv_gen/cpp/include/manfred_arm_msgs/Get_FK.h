/* Auto-generated by genmsg_cpp for file /home/disa1301/Documents/Codigo/Manfred/ros/manfred_arm_msgs/srv/Get_FK.srv */
#ifndef MANFRED_ARM_MSGS_SERVICE_GET_FK_H
#define MANFRED_ARM_MSGS_SERVICE_GET_FK_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "sensor_msgs/JointState.h"


#include "geometry_msgs/Point32.h"
#include "geometry_msgs/Vector3.h"

namespace manfred_arm_msgs
{
template <class ContainerAllocator>
struct Get_FKRequest_ {
  typedef Get_FKRequest_<ContainerAllocator> Type;

  Get_FKRequest_()
  : joint_state()
  {
  }

  Get_FKRequest_(const ContainerAllocator& _alloc)
  : joint_state(_alloc)
  {
  }

  typedef  ::sensor_msgs::JointState_<ContainerAllocator>  _joint_state_type;
   ::sensor_msgs::JointState_<ContainerAllocator>  joint_state;


  typedef boost::shared_ptr< ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Get_FKRequest
typedef  ::manfred_arm_msgs::Get_FKRequest_<std::allocator<void> > Get_FKRequest;

typedef boost::shared_ptr< ::manfred_arm_msgs::Get_FKRequest> Get_FKRequestPtr;
typedef boost::shared_ptr< ::manfred_arm_msgs::Get_FKRequest const> Get_FKRequestConstPtr;


template <class ContainerAllocator>
struct Get_FKResponse_ {
  typedef Get_FKResponse_<ContainerAllocator> Type;

  Get_FKResponse_()
  : posic()
  , rpy()
  , error_code(0)
  {
  }

  Get_FKResponse_(const ContainerAllocator& _alloc)
  : posic(_alloc)
  , rpy(_alloc)
  , error_code(0)
  {
  }

  typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _posic_type;
   ::geometry_msgs::Point32_<ContainerAllocator>  posic;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _rpy_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  rpy;

  typedef int64_t _error_code_type;
  int64_t error_code;


  typedef boost::shared_ptr< ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Get_FKResponse
typedef  ::manfred_arm_msgs::Get_FKResponse_<std::allocator<void> > Get_FKResponse;

typedef boost::shared_ptr< ::manfred_arm_msgs::Get_FKResponse> Get_FKResponsePtr;
typedef boost::shared_ptr< ::manfred_arm_msgs::Get_FKResponse const> Get_FKResponseConstPtr;

struct Get_FK
{

typedef Get_FKRequest Request;
typedef Get_FKResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Get_FK
} // namespace manfred_arm_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9ca061465ef0ed08771ed240c43789f5";
  }

  static const char* value(const  ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x9ca061465ef0ed08ULL;
  static const uint64_t static_value2 = 0x771ed240c43789f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manfred_arm_msgs/Get_FKRequest";
  }

  static const char* value(const  ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
\n\
sensor_msgs/JointState joint_state\n\
\n\
\n\
================================================================================\n\
MSG: sensor_msgs/JointState\n\
# This is a message that holds data to describe the state of a set of torque controlled joints. \n\
#\n\
# The state of each joint (revolute or prismatic) is defined by:\n\
#  * the position of the joint (rad or m),\n\
#  * the velocity of the joint (rad/s or m/s) and \n\
#  * the effort that is applied in the joint (Nm or N).\n\
#\n\
# Each joint is uniquely identified by its name\n\
# The header specifies the time at which the joint states were recorded. All the joint states\n\
# in one message have to be recorded at the same time.\n\
#\n\
# This message consists of a multiple arrays, one for each part of the joint state. \n\
# The goal is to make each of the fields optional. When e.g. your joints have no\n\
# effort associated with them, you can leave the effort array empty. \n\
#\n\
# All arrays in this message should have the same size, or be empty.\n\
# This is the only way to uniquely associate the joint name with the correct\n\
# states.\n\
\n\
\n\
Header header\n\
\n\
string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] effort\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "363c8744b9dff36f4cd490349da0885e";
  }

  static const char* value(const  ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x363c8744b9dff36fULL;
  static const uint64_t static_value2 = 0x4cd490349da0885eULL;
};

template<class ContainerAllocator>
struct DataType< ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manfred_arm_msgs/Get_FKResponse";
  }

  static const char* value(const  ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
geometry_msgs/Point32 posic\n\
geometry_msgs/Vector3 rpy\n\
\n\
int64 error_code\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.joint_state);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Get_FKRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.posic);
    stream.next(m.rpy);
    stream.next(m.error_code);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Get_FKResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<manfred_arm_msgs::Get_FK> {
  static const char* value() 
  {
    return "04fdeae247f89ade98c985c28964873c";
  }

  static const char* value(const manfred_arm_msgs::Get_FK&) { return value(); } 
};

template<>
struct DataType<manfred_arm_msgs::Get_FK> {
  static const char* value() 
  {
    return "manfred_arm_msgs/Get_FK";
  }

  static const char* value(const manfred_arm_msgs::Get_FK&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "04fdeae247f89ade98c985c28964873c";
  }

  static const char* value(const manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manfred_arm_msgs/Get_FK";
  }

  static const char* value(const manfred_arm_msgs::Get_FKRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "04fdeae247f89ade98c985c28964873c";
  }

  static const char* value(const manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manfred_arm_msgs/Get_FK";
  }

  static const char* value(const manfred_arm_msgs::Get_FKResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MANFRED_ARM_MSGS_SERVICE_GET_FK_H
