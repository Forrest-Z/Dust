// Generated by gencpp from file msg_gen/waypoints.msg
// DO NOT EDIT!


#ifndef MSG_GEN_MESSAGE_WAYPOINTS_H
#define MSG_GEN_MESSAGE_WAYPOINTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <msg_gen/waypoints_entry.h>

namespace msg_gen
{
template <class ContainerAllocator>
struct waypoints_
{
  typedef waypoints_<ContainerAllocator> Type;

  waypoints_()
    : wayPointsSize(0)
    , wayPoints()  {
    }
  waypoints_(const ContainerAllocator& _alloc)
    : wayPointsSize(0)
    , wayPoints(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _wayPointsSize_type;
  _wayPointsSize_type wayPointsSize;

   typedef std::vector< ::msg_gen::waypoints_entry_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::msg_gen::waypoints_entry_<ContainerAllocator> >::other >  _wayPoints_type;
  _wayPoints_type wayPoints;





  typedef boost::shared_ptr< ::msg_gen::waypoints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msg_gen::waypoints_<ContainerAllocator> const> ConstPtr;

}; // struct waypoints_

typedef ::msg_gen::waypoints_<std::allocator<void> > waypoints;

typedef boost::shared_ptr< ::msg_gen::waypoints > waypointsPtr;
typedef boost::shared_ptr< ::msg_gen::waypoints const> waypointsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msg_gen::waypoints_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msg_gen::waypoints_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::msg_gen::waypoints_<ContainerAllocator1> & lhs, const ::msg_gen::waypoints_<ContainerAllocator2> & rhs)
{
  return lhs.wayPointsSize == rhs.wayPointsSize &&
    lhs.wayPoints == rhs.wayPoints;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::msg_gen::waypoints_<ContainerAllocator1> & lhs, const ::msg_gen::waypoints_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace msg_gen

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::waypoints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::waypoints_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::waypoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::waypoints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::waypoints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::waypoints_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msg_gen::waypoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5cf6c0f430f191aa51f926d999bc4218";
  }

  static const char* value(const ::msg_gen::waypoints_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5cf6c0f430f191aaULL;
  static const uint64_t static_value2 = 0x51f926d999bc4218ULL;
};

template<class ContainerAllocator>
struct DataType< ::msg_gen::waypoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msg_gen/waypoints";
  }

  static const char* value(const ::msg_gen::waypoints_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msg_gen::waypoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 wayPointsSize\n"
"waypoints_entry[] wayPoints\n"
"================================================================================\n"
"MSG: msg_gen/waypoints_entry\n"
"uint32 index\n"
"float64 posX\n"
"float64 posY\n"
"\n"
"float64 heading_x\n"
"float64 heading_y\n"
"float64 heading_z\n"
"float64 heading_w\n"
;
  }

  static const char* value(const ::msg_gen::waypoints_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msg_gen::waypoints_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wayPointsSize);
      stream.next(m.wayPoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct waypoints_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msg_gen::waypoints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msg_gen::waypoints_<ContainerAllocator>& v)
  {
    s << indent << "wayPointsSize: ";
    Printer<int32_t>::stream(s, indent + "  ", v.wayPointsSize);
    s << indent << "wayPoints[]" << std::endl;
    for (size_t i = 0; i < v.wayPoints.size(); ++i)
    {
      s << indent << "  wayPoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::msg_gen::waypoints_entry_<ContainerAllocator> >::stream(s, indent + "    ", v.wayPoints[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSG_GEN_MESSAGE_WAYPOINTS_H
