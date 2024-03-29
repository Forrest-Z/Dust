// Generated by gencpp from file msg_gen/prediction.msg
// DO NOT EDIT!


#ifndef MSG_GEN_MESSAGE_PREDICTION_H
#define MSG_GEN_MESSAGE_PREDICTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <msg_gen/SimOne_Data_Position_Info_Array.h>
#include <msg_gen/SimOne_Data_Position_Info_Array.h>

namespace msg_gen
{
template <class ContainerAllocator>
struct prediction_
{
  typedef prediction_<ContainerAllocator> Type;

  prediction_()
    : ped_prediction_ids()
    , veh_prediction_ids()
    , ped_predictions()
    , veh_predictions()
    , ped_delta_t(0.0)
    , veh_delta_t(0.0)  {
    }
  prediction_(const ContainerAllocator& _alloc)
    : ped_prediction_ids(_alloc)
    , veh_prediction_ids(_alloc)
    , ped_predictions(_alloc)
    , veh_predictions(_alloc)
    , ped_delta_t(0.0)
    , veh_delta_t(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _ped_prediction_ids_type;
  _ped_prediction_ids_type ped_prediction_ids;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _veh_prediction_ids_type;
  _veh_prediction_ids_type veh_prediction_ids;

   typedef std::vector< ::msg_gen::SimOne_Data_Position_Info_Array_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::msg_gen::SimOne_Data_Position_Info_Array_<ContainerAllocator> >::other >  _ped_predictions_type;
  _ped_predictions_type ped_predictions;

   typedef std::vector< ::msg_gen::SimOne_Data_Position_Info_Array_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::msg_gen::SimOne_Data_Position_Info_Array_<ContainerAllocator> >::other >  _veh_predictions_type;
  _veh_predictions_type veh_predictions;

   typedef double _ped_delta_t_type;
  _ped_delta_t_type ped_delta_t;

   typedef double _veh_delta_t_type;
  _veh_delta_t_type veh_delta_t;





  typedef boost::shared_ptr< ::msg_gen::prediction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::msg_gen::prediction_<ContainerAllocator> const> ConstPtr;

}; // struct prediction_

typedef ::msg_gen::prediction_<std::allocator<void> > prediction;

typedef boost::shared_ptr< ::msg_gen::prediction > predictionPtr;
typedef boost::shared_ptr< ::msg_gen::prediction const> predictionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::msg_gen::prediction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::msg_gen::prediction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::msg_gen::prediction_<ContainerAllocator1> & lhs, const ::msg_gen::prediction_<ContainerAllocator2> & rhs)
{
  return lhs.ped_prediction_ids == rhs.ped_prediction_ids &&
    lhs.veh_prediction_ids == rhs.veh_prediction_ids &&
    lhs.ped_predictions == rhs.ped_predictions &&
    lhs.veh_predictions == rhs.veh_predictions &&
    lhs.ped_delta_t == rhs.ped_delta_t &&
    lhs.veh_delta_t == rhs.veh_delta_t;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::msg_gen::prediction_<ContainerAllocator1> & lhs, const ::msg_gen::prediction_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace msg_gen

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::prediction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::msg_gen::prediction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::prediction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::msg_gen::prediction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::prediction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::msg_gen::prediction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::msg_gen::prediction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "091fae4102a8b713d73c51d7662d614c";
  }

  static const char* value(const ::msg_gen::prediction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x091fae4102a8b713ULL;
  static const uint64_t static_value2 = 0xd73c51d7662d614cULL;
};

template<class ContainerAllocator>
struct DataType< ::msg_gen::prediction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "msg_gen/prediction";
  }

  static const char* value(const ::msg_gen::prediction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::msg_gen::prediction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] ped_prediction_ids\n"
"int32[] veh_prediction_ids\n"
"SimOne_Data_Position_Info_Array[] ped_predictions\n"
"SimOne_Data_Position_Info_Array[] veh_predictions\n"
"float64 ped_delta_t\n"
"float64 veh_delta_t\n"
"================================================================================\n"
"MSG: msg_gen/SimOne_Data_Position_Info_Array\n"
"SimOne_Data_Position_Info[] ped_prediction\n"
"SimOne_Data_Position_Info[] veh_prediction\n"
"================================================================================\n"
"MSG: msg_gen/SimOne_Data_Position_Info\n"
"float64 mean_x\n"
"float64 mean_y\n"
"float64 var_x\n"
"float64 var_y\n"
"float64 covar_xy\n"
;
  }

  static const char* value(const ::msg_gen::prediction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::msg_gen::prediction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ped_prediction_ids);
      stream.next(m.veh_prediction_ids);
      stream.next(m.ped_predictions);
      stream.next(m.veh_predictions);
      stream.next(m.ped_delta_t);
      stream.next(m.veh_delta_t);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct prediction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::msg_gen::prediction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::msg_gen::prediction_<ContainerAllocator>& v)
  {
    s << indent << "ped_prediction_ids[]" << std::endl;
    for (size_t i = 0; i < v.ped_prediction_ids.size(); ++i)
    {
      s << indent << "  ped_prediction_ids[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.ped_prediction_ids[i]);
    }
    s << indent << "veh_prediction_ids[]" << std::endl;
    for (size_t i = 0; i < v.veh_prediction_ids.size(); ++i)
    {
      s << indent << "  veh_prediction_ids[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.veh_prediction_ids[i]);
    }
    s << indent << "ped_predictions[]" << std::endl;
    for (size_t i = 0; i < v.ped_predictions.size(); ++i)
    {
      s << indent << "  ped_predictions[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::msg_gen::SimOne_Data_Position_Info_Array_<ContainerAllocator> >::stream(s, indent + "    ", v.ped_predictions[i]);
    }
    s << indent << "veh_predictions[]" << std::endl;
    for (size_t i = 0; i < v.veh_predictions.size(); ++i)
    {
      s << indent << "  veh_predictions[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::msg_gen::SimOne_Data_Position_Info_Array_<ContainerAllocator> >::stream(s, indent + "    ", v.veh_predictions[i]);
    }
    s << indent << "ped_delta_t: ";
    Printer<double>::stream(s, indent + "  ", v.ped_delta_t);
    s << indent << "veh_delta_t: ";
    Printer<double>::stream(s, indent + "  ", v.veh_delta_t);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MSG_GEN_MESSAGE_PREDICTION_H
