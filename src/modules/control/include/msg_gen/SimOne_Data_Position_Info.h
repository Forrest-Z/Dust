// Generated by gencpp from file msg_gen/SimOne_Data_Position_Info.msg
// DO NOT EDIT!


#ifndef MSG_GEN_MESSAGE_SIMONE_DATA_POSITION_INFO_H
#define MSG_GEN_MESSAGE_SIMONE_DATA_POSITION_INFO_H


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
struct SimOne_Data_Position_Info_
{
  typedef SimOne_Data_Position_Info_<ContainerAllocator> Type;

  SimOne_Data_Position_Info_()
    : mean_x(0.0)
    , mean_y(0.0)
    , var_x(0.0)
    , var_y(0.0)
    , covar_xy(0.0)  {
    }
  SimOne_Data_Position_Info_(const ContainerAllocator& _alloc)
    : mean_x(0.0)
    , mean_y(0.0)
    , var_x(0.0)
    , var_y(0.0)
    , covar_xy(0.0)  {
  (void)_alloc;
    }



   typedef double _mean_x_type;
  _mean_x_type mean_x;

   typedef double _mean_y_type;
  _mean_y_type mean_y;

   typedef double _var_x_type;
  _var_x_type var_x;

   typedef double _var_y_type;
  _var_y_type var_y;

   typedef double _covar_xy_type;
  _covar_xy_type covar_xy;





  typedef boost::shared_ptr< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> const> ConstPtr;

}; // struct SimOne_Data_Position_Info_

typedef ::msg_gen::SimOne_Data_Position_Info_<std::allocator<void> > SimOne_Data_Position_Info;

typedef boost::shared_ptr< ::msg_gen::SimOne_Data_Position_Info > SimOne_Data_Position_InfoPtr;
typedef boost::shared_ptr< ::msg_gen::SimOne_Data_Position_Info const> SimOne_Data_Position_InfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator1> & lhs, const ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator2> & rhs)
{
  return lhs.mean_x == rhs.mean_x &&
    lhs.mean_y == rhs.mean_y &&
    lhs.var_x == rhs.var_x &&
    lhs.var_y == rhs.var_y &&
    lhs.covar_xy == rhs.covar_xy;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator1> & lhs, const ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace msg_gen

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e3976d4a0a76babb163457cce231f10f";
  }

  static const char* value(const ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe3976d4a0a76babbULL;
  static const uint64_t static_value2 = 0x163457cce231f10fULL;
};

template<class ContainerAllocator>
struct DataType< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msg_gen/SimOne_Data_Position_Info";
  }

  static const char* value(const ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 mean_x\n"
"float64 mean_y\n"
"float64 var_x\n"
"float64 var_y\n"
"float64 covar_xy\n"
;
  }

  static const char* value(const ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mean_x);
      stream.next(m.mean_y);
      stream.next(m.var_x);
      stream.next(m.var_y);
      stream.next(m.covar_xy);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SimOne_Data_Position_Info_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msg_gen::SimOne_Data_Position_Info_<ContainerAllocator>& v)
  {
    s << indent << "mean_x: ";
    Printer<double>::stream(s, indent + "  ", v.mean_x);
    s << indent << "mean_y: ";
    Printer<double>::stream(s, indent + "  ", v.mean_y);
    s << indent << "var_x: ";
    Printer<double>::stream(s, indent + "  ", v.var_x);
    s << indent << "var_y: ";
    Printer<double>::stream(s, indent + "  ", v.var_y);
    s << indent << "covar_xy: ";
    Printer<double>::stream(s, indent + "  ", v.covar_xy);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSG_GEN_MESSAGE_SIMONE_DATA_POSITION_INFO_H
