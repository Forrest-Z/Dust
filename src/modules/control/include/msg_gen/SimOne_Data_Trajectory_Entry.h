// Generated by gencpp from file msg_gen/SimOne_Data_Trajectory_Entry.msg
// DO NOT EDIT!


#ifndef MSG_GEN_MESSAGE_SIMONE_DATA_TRAJECTORY_ENTRY_H
#define MSG_GEN_MESSAGE_SIMONE_DATA_TRAJECTORY_ENTRY_H


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
struct SimOne_Data_Trajectory_Entry_
{
  typedef SimOne_Data_Trajectory_Entry_<ContainerAllocator> Type;

  SimOne_Data_Trajectory_Entry_()
    : posX(0.0)
    , posY(0.0)
    , vel(0.0)  {
    }
  SimOne_Data_Trajectory_Entry_(const ContainerAllocator& _alloc)
    : posX(0.0)
    , posY(0.0)
    , vel(0.0)  {
  (void)_alloc;
    }



   typedef double _posX_type;
  _posX_type posX;

   typedef double _posY_type;
  _posY_type posY;

   typedef double _vel_type;
  _vel_type vel;





  typedef boost::shared_ptr< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> const> ConstPtr;

}; // struct SimOne_Data_Trajectory_Entry_

typedef ::msg_gen::SimOne_Data_Trajectory_Entry_<std::allocator<void> > SimOne_Data_Trajectory_Entry;

typedef boost::shared_ptr< ::msg_gen::SimOne_Data_Trajectory_Entry > SimOne_Data_Trajectory_EntryPtr;
typedef boost::shared_ptr< ::msg_gen::SimOne_Data_Trajectory_Entry const> SimOne_Data_Trajectory_EntryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator1> & lhs, const ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator2> & rhs)
{
  return lhs.posX == rhs.posX &&
    lhs.posY == rhs.posY &&
    lhs.vel == rhs.vel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator1> & lhs, const ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace msg_gen

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8408071fce3717a708ef4e4580000d1f";
  }

  static const char* value(const ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8408071fce3717a7ULL;
  static const uint64_t static_value2 = 0x08ef4e4580000d1fULL;
};

template<class ContainerAllocator>
struct DataType< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msg_gen/SimOne_Data_Trajectory_Entry";
  }

  static const char* value(const ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 posX\n"
"float64 posY\n"
"float64 vel\n"
;
  }

  static const char* value(const ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.posX);
      stream.next(m.posY);
      stream.next(m.vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SimOne_Data_Trajectory_Entry_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msg_gen::SimOne_Data_Trajectory_Entry_<ContainerAllocator>& v)
  {
    s << indent << "posX: ";
    Printer<double>::stream(s, indent + "  ", v.posX);
    s << indent << "posY: ";
    Printer<double>::stream(s, indent + "  ", v.posY);
    s << indent << "vel: ";
    Printer<double>::stream(s, indent + "  ", v.vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSG_GEN_MESSAGE_SIMONE_DATA_TRAJECTORY_ENTRY_H
