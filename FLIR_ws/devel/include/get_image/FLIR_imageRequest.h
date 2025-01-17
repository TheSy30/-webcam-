// Generated by gencpp from file get_image/FLIR_imageRequest.msg
// DO NOT EDIT!


#ifndef GET_IMAGE_MESSAGE_FLIR_IMAGEREQUEST_H
#define GET_IMAGE_MESSAGE_FLIR_IMAGEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace get_image
{
template <class ContainerAllocator>
struct FLIR_imageRequest_
{
  typedef FLIR_imageRequest_<ContainerAllocator> Type;

  FLIR_imageRequest_()
    {
    }
  FLIR_imageRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::get_image::FLIR_imageRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::get_image::FLIR_imageRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FLIR_imageRequest_

typedef ::get_image::FLIR_imageRequest_<std::allocator<void> > FLIR_imageRequest;

typedef boost::shared_ptr< ::get_image::FLIR_imageRequest > FLIR_imageRequestPtr;
typedef boost::shared_ptr< ::get_image::FLIR_imageRequest const> FLIR_imageRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::get_image::FLIR_imageRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::get_image::FLIR_imageRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace get_image

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'get_image': ['/home/tony/Documents/FLIR_ws/src/get_image/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::get_image::FLIR_imageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::get_image::FLIR_imageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::get_image::FLIR_imageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::get_image::FLIR_imageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::get_image::FLIR_imageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::get_image::FLIR_imageRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::get_image::FLIR_imageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::get_image::FLIR_imageRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::get_image::FLIR_imageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "get_image/FLIR_imageRequest";
  }

  static const char* value(const ::get_image::FLIR_imageRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::get_image::FLIR_imageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::get_image::FLIR_imageRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::get_image::FLIR_imageRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FLIR_imageRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::get_image::FLIR_imageRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::get_image::FLIR_imageRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // GET_IMAGE_MESSAGE_FLIR_IMAGEREQUEST_H
