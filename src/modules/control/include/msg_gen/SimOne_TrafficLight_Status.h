// Generated by gencpp from file msg_gen/SimOne_TrafficLight_Status.msg
// DO NOT EDIT!


#ifndef MSG_GEN_MESSAGE_SIMONE_TRAFFICLIGHT_STATUS_H
#define MSG_GEN_MESSAGE_SIMONE_TRAFFICLIGHT_STATUS_H


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
struct SimOne_TrafficLight_Status_
{
  typedef SimOne_TrafficLight_Status_<ContainerAllocator> Type;

  SimOne_TrafficLight_Status_()
    : SimOne_TrafficLight_Status(0)  {
    }
  SimOne_TrafficLight_Status_(const ContainerAllocator& _alloc)
    : SimOne_TrafficLight_Status(0)  {
  (void)_alloc;
    }



   typedef uint32_t _SimOne_TrafficLight_Status_type;
  _SimOne_TrafficLight_Status_type SimOne_TrafficLight_Status;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(ESimOne_TrafficLight_Status_Invalid)
  #undef ESimOne_TrafficLight_Status_Invalid
#endif
#if defined(_WIN32) && defined(ESimOne_TrafficLight_Status_Red)
  #undef ESimOne_TrafficLight_Status_Red
#endif
#if defined(_WIN32) && defined(ESimOne_TrafficLight_Status_Green)
  #undef ESimOne_TrafficLight_Status_Green
#endif
#if defined(_WIN32) && defined(ESimOne_TrafficLight_Status_Yellow)
  #undef ESimOne_TrafficLight_Status_Yellow
#endif
#if defined(_WIN32) && defined(ESimOne_TrafficLight_Status_RedBlink)
  #undef ESimOne_TrafficLight_Status_RedBlink
#endif
#if defined(_WIN32) && defined(ESimOne_TrafficLight_Status_GreenBlink)
  #undef ESimOne_TrafficLight_Status_GreenBlink
#endif
#if defined(_WIN32) && defined(ESimOne_TrafficLight_Status_YellowBlink)
  #undef ESimOne_TrafficLight_Status_YellowBlink
#endif
#if defined(_WIN32) && defined(ESimOne_TrafficLight_Status_Black)
  #undef ESimOne_TrafficLight_Status_Black
#endif

  enum {
    ESimOne_TrafficLight_Status_Invalid = 0u,
    ESimOne_TrafficLight_Status_Red = 1u,
    ESimOne_TrafficLight_Status_Green = 2u,
    ESimOne_TrafficLight_Status_Yellow = 3u,
    ESimOne_TrafficLight_Status_RedBlink = 4u,
    ESimOne_TrafficLight_Status_GreenBlink = 5u,
    ESimOne_TrafficLight_Status_YellowBlink = 6u,
    ESimOne_TrafficLight_Status_Black = 7u,
  };


  typedef boost::shared_ptr< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> const> ConstPtr;

}; // struct SimOne_TrafficLight_Status_

typedef ::msg_gen::SimOne_TrafficLight_Status_<std::allocator<void> > SimOne_TrafficLight_Status;

typedef boost::shared_ptr< ::msg_gen::SimOne_TrafficLight_Status > SimOne_TrafficLight_StatusPtr;
typedef boost::shared_ptr< ::msg_gen::SimOne_TrafficLight_Status const> SimOne_TrafficLight_StatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator1> & lhs, const ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator2> & rhs)
{
  return lhs.SimOne_TrafficLight_Status == rhs.SimOne_TrafficLight_Status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator1> & lhs, const ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace msg_gen

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "49dfe203fe3ce60bd544b7b22912bced";
  }

  static const char* value(const ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x49dfe203fe3ce60bULL;
  static const uint64_t static_value2 = 0xd544b7b22912bcedULL;
};

template<class ContainerAllocator>
struct DataType< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msg_gen/SimOne_TrafficLight_Status";
  }

  static const char* value(const ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 ESimOne_TrafficLight_Status_Invalid = 0\n"
"uint8 ESimOne_TrafficLight_Status_Red = 1\n"
"uint8 ESimOne_TrafficLight_Status_Green = 2\n"
"uint8 ESimOne_TrafficLight_Status_Yellow = 3\n"
"uint8 ESimOne_TrafficLight_Status_RedBlink = 4\n"
"uint8 ESimOne_TrafficLight_Status_GreenBlink = 5\n"
"uint8 ESimOne_TrafficLight_Status_YellowBlink = 6\n"
"uint8 ESimOne_TrafficLight_Status_Black = 7\n"
"uint32 SimOne_TrafficLight_Status\n"
;
  }

  static const char* value(const ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.SimOne_TrafficLight_Status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SimOne_TrafficLight_Status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msg_gen::SimOne_TrafficLight_Status_<ContainerAllocator>& v)
  {
    s << indent << "SimOne_TrafficLight_Status: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.SimOne_TrafficLight_Status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSG_GEN_MESSAGE_SIMONE_TRAFFICLIGHT_STATUS_H
