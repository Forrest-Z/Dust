// Generated by gencpp from file msg_gen/ESteeringMode.msg
// DO NOT EDIT!


#ifndef MSG_GEN_MESSAGE_ESTEERINGMODE_H
#define MSG_GEN_MESSAGE_ESTEERINGMODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace msg_gen
{
template <class ContainerAllocator>
struct ESteeringMode_
{
  typedef ESteeringMode_<ContainerAllocator> Type;

  ESteeringMode_()
    : SteeringMode(0)  {
    }
  ESteeringMode_(const ContainerAllocator& _alloc)
    : SteeringMode(0)  {
  (void)_alloc;
    }



   typedef uint64_t _SteeringMode_type;
  _SteeringMode_type SteeringMode;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(ESteeringMode_Percent)
  #undef ESteeringMode_Percent
#endif
#if defined(_WIN32) && defined(ESteeringMode_SteeringWheelAngle)
  #undef ESteeringMode_SteeringWheelAngle
#endif
#if defined(_WIN32) && defined(ESteeringMode_Torque)
  #undef ESteeringMode_Torque
#endif
#if defined(_WIN32) && defined(ESteeringMode_AngularSpeed)
  #undef ESteeringMode_AngularSpeed
#endif
#if defined(_WIN32) && defined(ESteeringMode_WheelAngle)
  #undef ESteeringMode_WheelAngle
#endif
#if defined(_WIN32) && defined(ESteeringMode_WheelAnglarSpeed)
  #undef ESteeringMode_WheelAnglarSpeed
#endif

  enum {
    ESteeringMode_Percent = 0u,
    ESteeringMode_SteeringWheelAngle = 1u,
    ESteeringMode_Torque = 2u,
    ESteeringMode_AngularSpeed = 3u,
    ESteeringMode_WheelAngle = 4u,
    ESteeringMode_WheelAnglarSpeed = 5u,
  };


  typedef boost::shared_ptr< ::msg_gen::ESteeringMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msg_gen::ESteeringMode_<ContainerAllocator> const> ConstPtr;

}; // struct ESteeringMode_

typedef ::msg_gen::ESteeringMode_<std::allocator<void> > ESteeringMode;

typedef boost::shared_ptr< ::msg_gen::ESteeringMode > ESteeringModePtr;
typedef boost::shared_ptr< ::msg_gen::ESteeringMode const> ESteeringModeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msg_gen::ESteeringMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msg_gen::ESteeringMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::msg_gen::ESteeringMode_<ContainerAllocator1> & lhs, const ::msg_gen::ESteeringMode_<ContainerAllocator2> & rhs)
{
  return lhs.SteeringMode == rhs.SteeringMode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::msg_gen::ESteeringMode_<ContainerAllocator1> & lhs, const ::msg_gen::ESteeringMode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace msg_gen

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::ESteeringMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::ESteeringMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::ESteeringMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::ESteeringMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::ESteeringMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::ESteeringMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msg_gen::ESteeringMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f50766ab98e810ed9b1447815a92cc4e";
  }

  static const char* value(const ::msg_gen::ESteeringMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf50766ab98e810edULL;
  static const uint64_t static_value2 = 0x9b1447815a92cc4eULL;
};

template<class ContainerAllocator>
struct DataType< ::msg_gen::ESteeringMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msg_gen/ESteeringMode";
  }

  static const char* value(const ::msg_gen::ESteeringMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msg_gen::ESteeringMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 ESteeringMode_Percent = 0\n"
"uint8 ESteeringMode_SteeringWheelAngle = 1\n"
"uint8 ESteeringMode_Torque = 2\n"
"uint8 ESteeringMode_AngularSpeed = 3\n"
"uint8 ESteeringMode_WheelAngle = 4\n"
"uint8 ESteeringMode_WheelAnglarSpeed = 5\n"
"uint64 SteeringMode\n"
;
  }

  static const char* value(const ::msg_gen::ESteeringMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msg_gen::ESteeringMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.SteeringMode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ESteeringMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msg_gen::ESteeringMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msg_gen::ESteeringMode_<ContainerAllocator>& v)
  {
    s << indent << "SteeringMode: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.SteeringMode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSG_GEN_MESSAGE_ESTEERINGMODE_H