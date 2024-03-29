// Generated by gencpp from file msg_gen/SimOne_Data_LaneLineInfo.msg
// DO NOT EDIT!


#ifndef MSG_GEN_MESSAGE_SIMONE_DATA_LANELINEINFO_H
#define MSG_GEN_MESSAGE_SIMONE_DATA_LANELINEINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <msg_gen/ESimOneData_BoundaryType.h>
#include <msg_gen/ESimOneData_BoundaryColor.h>
#include <msg_gen/SimOneData_Vec3f.h>
#include <msg_gen/ESimOneData_LineCurveParameter.h>

namespace msg_gen
{
template <class ContainerAllocator>
struct SimOne_Data_LaneLineInfo_
{
  typedef SimOne_Data_LaneLineInfo_<ContainerAllocator> Type;

  SimOne_Data_LaneLineInfo_()
    : lineID(0)
    , lineType()
    , lineColor()
    , linewidth(0.0)
    , linePoints()
    , linecurveParameter()  {
    }
  SimOne_Data_LaneLineInfo_(const ContainerAllocator& _alloc)
    : lineID(0)
    , lineType(_alloc)
    , lineColor(_alloc)
    , linewidth(0.0)
    , linePoints(_alloc)
    , linecurveParameter(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _lineID_type;
  _lineID_type lineID;

   typedef  ::msg_gen::ESimOneData_BoundaryType_<ContainerAllocator>  _lineType_type;
  _lineType_type lineType;

   typedef  ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator>  _lineColor_type;
  _lineColor_type lineColor;

   typedef double _linewidth_type;
  _linewidth_type linewidth;

   typedef std::vector< ::msg_gen::SimOneData_Vec3f_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::msg_gen::SimOneData_Vec3f_<ContainerAllocator> >::other >  _linePoints_type;
  _linePoints_type linePoints;

   typedef  ::msg_gen::ESimOneData_LineCurveParameter_<ContainerAllocator>  _linecurveParameter_type;
  _linecurveParameter_type linecurveParameter;





  typedef boost::shared_ptr< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> const> ConstPtr;

}; // struct SimOne_Data_LaneLineInfo_

typedef ::msg_gen::SimOne_Data_LaneLineInfo_<std::allocator<void> > SimOne_Data_LaneLineInfo;

typedef boost::shared_ptr< ::msg_gen::SimOne_Data_LaneLineInfo > SimOne_Data_LaneLineInfoPtr;
typedef boost::shared_ptr< ::msg_gen::SimOne_Data_LaneLineInfo const> SimOne_Data_LaneLineInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator1> & lhs, const ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator2> & rhs)
{
  return lhs.lineID == rhs.lineID &&
    lhs.lineType == rhs.lineType &&
    lhs.lineColor == rhs.lineColor &&
    lhs.linewidth == rhs.linewidth &&
    lhs.linePoints == rhs.linePoints &&
    lhs.linecurveParameter == rhs.linecurveParameter;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator1> & lhs, const ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace msg_gen

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd3a0b8a395073634c786a0b71010c75";
  }

  static const char* value(const ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd3a0b8a39507363ULL;
  static const uint64_t static_value2 = 0x4c786a0b71010c75ULL;
};

template<class ContainerAllocator>
struct DataType< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msg_gen/SimOne_Data_LaneLineInfo";
  }

  static const char* value(const ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 lineID\n"
"ESimOneData_BoundaryType lineType\n"
"ESimOneData_BoundaryColor lineColor\n"
"float64 linewidth\n"
"SimOneData_Vec3f[] linePoints\n"
"ESimOneData_LineCurveParameter linecurveParameter\n"
"================================================================================\n"
"MSG: msg_gen/ESimOneData_BoundaryType\n"
"uint8 BoundaryType_none = 0\n"
"uint8 BoundaryType_solid = 1\n"
"uint8 BoundaryType_broken = 2\n"
"uint8 BoundaryType_solid_solid = 3\n"
"uint8 BoundaryType_solid_broken = 4\n"
"uint8 BoundaryType_broken_solid = 5\n"
"uint8 BoundaryType_broken_broken = 6\n"
"uint8 BoundaryType_botts_dots = 7\n"
"uint8 BoundaryType_grass = 8\n"
"uint8 BoundaryType_curb = 9\n"
"uint32 BoundaryType\n"
"================================================================================\n"
"MSG: msg_gen/ESimOneData_BoundaryColor\n"
"uint8 BoundaryColor_standard = 0\n"
"uint8 BoundaryColor_blue = 1\n"
"uint8 BoundaryColor_green = 2\n"
"uint8 BoundaryColor_red = 3\n"
"uint8 BoundaryColor_white = 4\n"
"uint8 BoundaryColor_yellow = 5\n"
"uint32 BoundaryColor\n"
"================================================================================\n"
"MSG: msg_gen/SimOneData_Vec3f\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: msg_gen/ESimOneData_LineCurveParameter\n"
"float64 C0\n"
"float64 C1\n"
"float64 C2\n"
"float64 C3\n"
"SimOneData_Vec3f firstPoints\n"
"SimOneData_Vec3f endPoints\n"
"float64 length\n"
;
  }

  static const char* value(const ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lineID);
      stream.next(m.lineType);
      stream.next(m.lineColor);
      stream.next(m.linewidth);
      stream.next(m.linePoints);
      stream.next(m.linecurveParameter);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SimOne_Data_LaneLineInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msg_gen::SimOne_Data_LaneLineInfo_<ContainerAllocator>& v)
  {
    s << indent << "lineID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lineID);
    s << indent << "lineType: ";
    s << std::endl;
    Printer< ::msg_gen::ESimOneData_BoundaryType_<ContainerAllocator> >::stream(s, indent + "  ", v.lineType);
    s << indent << "lineColor: ";
    s << std::endl;
    Printer< ::msg_gen::ESimOneData_BoundaryColor_<ContainerAllocator> >::stream(s, indent + "  ", v.lineColor);
    s << indent << "linewidth: ";
    Printer<double>::stream(s, indent + "  ", v.linewidth);
    s << indent << "linePoints[]" << std::endl;
    for (size_t i = 0; i < v.linePoints.size(); ++i)
    {
      s << indent << "  linePoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::msg_gen::SimOneData_Vec3f_<ContainerAllocator> >::stream(s, indent + "    ", v.linePoints[i]);
    }
    s << indent << "linecurveParameter: ";
    s << std::endl;
    Printer< ::msg_gen::ESimOneData_LineCurveParameter_<ContainerAllocator> >::stream(s, indent + "  ", v.linecurveParameter);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSG_GEN_MESSAGE_SIMONE_DATA_LANELINEINFO_H
