// Generated by gencpp from file msg_gen/ESimOneData_BoundaryColor.msg
// DO NOT EDIT!


#ifndef MSG_GEN_MESSAGE_ESIMONEDATA_BOUNDARYCOLOR_H
#define MSG_GEN_MESSAGE_ESIMONEDATA_BOUNDARYCOLOR_H


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
struct ESimOneData_BoundaryColor_
{
  typedef ESimOneData_BoundaryColor_<ContainerAllocator> Type;

  ESimOneData_BoundaryColor_()
    : BoundaryColor(0)  {
    }
  ESimOneData_BoundaryColor_(const ContainerAllocator& _alloc)
    : BoundaryColor(0)  {
  (void)_alloc;
    }



   typedef uint32_t _BoundaryColor_type;
  _BoundaryColor_type BoundaryColor;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(BoundaryColor_standard)
  #undef BoundaryColor_standard
#endif
#if defined(_WIN32) && defined(BoundaryColor_blue)
  #undef BoundaryColor_blue
#endif
#if defined(_WIN32) && defined(BoundaryColor_green)
  #undef BoundaryColor_green
#endif
#if defined(_WIN32) && defined(BoundaryColor_red)
  #undef BoundaryColor_red
#endif
#if defined(_WIN32) && defined(BoundaryColor_white)
  #undef BoundaryColor_white
#endif
#if defined(_WIN32) && defined(BoundaryColor_yellow)
  #undef BoundaryColor_yellow
#endif

  enum {
    BoundaryColor_standard = 0u,
    BoundaryColor_blue = 1u,
    BoundaryColor_green = 2u,
    BoundaryColor_red = 3u,
    BoundaryColor_white = 4u,
    BoundaryColor_yellow = 5u,
  };


  typedef boost::shared_ptr< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> const> ConstPtr;

}; // struct ESimOneData_BoundaryColor_

typedef ::msg_gen::ESimOneData_BoundaryColor_<std::allocator<void> > ESimOneData_BoundaryColor;

typedef boost::shared_ptr< ::msg_gen::ESimOneData_BoundaryColor > ESimOneData_BoundaryColorPtr;
typedef boost::shared_ptr< ::msg_gen::ESimOneData_BoundaryColor const> ESimOneData_BoundaryColorConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator1> & lhs, const ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator2> & rhs)
{
  return lhs.BoundaryColor == rhs.BoundaryColor;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator1> & lhs, const ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace msg_gen

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f90b708b15966c426b94f8c710502dbc";
  }

  static const char* value(const ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf90b708b15966c42ULL;
  static const uint64_t static_value2 = 0x6b94f8c710502dbcULL;
};

template<class ContainerAllocator>
struct DataType< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msg_gen/ESimOneData_BoundaryColor";
  }

  static const char* value(const ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 BoundaryColor_standard = 0\n"
"uint8 BoundaryColor_blue = 1\n"
"uint8 BoundaryColor_green = 2\n"
"uint8 BoundaryColor_red = 3\n"
"uint8 BoundaryColor_white = 4\n"
"uint8 BoundaryColor_yellow = 5\n"
"uint32 BoundaryColor\n"
;
  }

  static const char* value(const ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.BoundaryColor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ESimOneData_BoundaryColor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator>& v)
  {
    s << indent << "BoundaryColor: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.BoundaryColor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSG_GEN_MESSAGE_ESIMONEDATA_BOUNDARYCOLOR_H
