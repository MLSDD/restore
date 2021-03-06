// Generated by gencpp from file fasterrcnn/output.msg
// DO NOT EDIT!


#ifndef FASTERRCNN_MESSAGE_OUTPUT_H
#define FASTERRCNN_MESSAGE_OUTPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace fasterrcnn
{
template <class ContainerAllocator>
struct output_
{
  typedef output_<ContainerAllocator> Type;

  output_()
    : output()  {
      output.assign(0.0);
  }
  output_(const ContainerAllocator& _alloc)
    : output()  {
  (void)_alloc;
      output.assign(0.0);
  }



   typedef boost::array<float, 4>  _output_type;
  _output_type output;




  typedef boost::shared_ptr< ::fasterrcnn::output_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fasterrcnn::output_<ContainerAllocator> const> ConstPtr;

}; // struct output_

typedef ::fasterrcnn::output_<std::allocator<void> > output;

typedef boost::shared_ptr< ::fasterrcnn::output > outputPtr;
typedef boost::shared_ptr< ::fasterrcnn::output const> outputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fasterrcnn::output_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fasterrcnn::output_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fasterrcnn

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'fasterrcnn': ['/home/zq610/WYZ/wyz_ws/src/fasterrcnn/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fasterrcnn::output_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fasterrcnn::output_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fasterrcnn::output_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fasterrcnn::output_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fasterrcnn::output_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fasterrcnn::output_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fasterrcnn::output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b0921ba9077f39adb4c574ad1d537831";
  }

  static const char* value(const ::fasterrcnn::output_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb0921ba9077f39adULL;
  static const uint64_t static_value2 = 0xb4c574ad1d537831ULL;
};

template<class ContainerAllocator>
struct DataType< ::fasterrcnn::output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fasterrcnn/output";
  }

  static const char* value(const ::fasterrcnn::output_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fasterrcnn::output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[4] output\n\
";
  }

  static const char* value(const ::fasterrcnn::output_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fasterrcnn::output_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct output_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fasterrcnn::output_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fasterrcnn::output_<ContainerAllocator>& v)
  {
    s << indent << "output[]" << std::endl;
    for (size_t i = 0; i < v.output.size(); ++i)
    {
      s << indent << "  output[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.output[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FASTERRCNN_MESSAGE_OUTPUT_H
