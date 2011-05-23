/* Auto-generated by genmsg_cpp for file /wg/stor2a/dgossow/ros_sandbox/visualization_msgs/msg/Menu.msg */
#ifndef VISUALIZATION_MSGS_MESSAGE_MENU_H
#define VISUALIZATION_MSGS_MESSAGE_MENU_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace visualization_msgs
{
template <class ContainerAllocator>
struct Menu_ : public ros::Message
{
  typedef Menu_<ContainerAllocator> Type;

  Menu_()
  : title()
  , entries()
  {
  }

  Menu_(const ContainerAllocator& _alloc)
  : title(_alloc)
  , entries(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _title_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  title;

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _entries_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  entries;


  ROS_DEPRECATED uint32_t get_entries_size() const { return (uint32_t)entries.size(); }
  ROS_DEPRECATED void set_entries_size(uint32_t size) { entries.resize((size_t)size); }
  ROS_DEPRECATED void get_entries_vec(std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other > & vec) const { vec = this->entries; }
  ROS_DEPRECATED void set_entries_vec(const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other > & vec) { this->entries = vec; }
private:
  static const char* __s_getDataType_() { return "visualization_msgs/Menu"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "16c8d1c975b2f590eea835c5b6e516f1"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# menu / entry title\n\
string title\n\
\n\
# entries for this menu\n\
# if empty, this menu represents a simple menu entry itself\n\
string[] entries\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, title);
    ros::serialization::serialize(stream, entries);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, title);
    ros::serialization::deserialize(stream, entries);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(title);
    size += ros::serialization::serializationLength(entries);
    return size;
  }

  typedef boost::shared_ptr< ::visualization_msgs::Menu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::visualization_msgs::Menu_<ContainerAllocator>  const> ConstPtr;
}; // struct Menu
typedef  ::visualization_msgs::Menu_<std::allocator<void> > Menu;

typedef boost::shared_ptr< ::visualization_msgs::Menu> MenuPtr;
typedef boost::shared_ptr< ::visualization_msgs::Menu const> MenuConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::visualization_msgs::Menu_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::visualization_msgs::Menu_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace visualization_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::visualization_msgs::Menu_<ContainerAllocator> > {
  static const char* value() 
  {
    return "16c8d1c975b2f590eea835c5b6e516f1";
  }

  static const char* value(const  ::visualization_msgs::Menu_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x16c8d1c975b2f590ULL;
  static const uint64_t static_value2 = 0xeea835c5b6e516f1ULL;
};

template<class ContainerAllocator>
struct DataType< ::visualization_msgs::Menu_<ContainerAllocator> > {
  static const char* value() 
  {
    return "visualization_msgs/Menu";
  }

  static const char* value(const  ::visualization_msgs::Menu_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::visualization_msgs::Menu_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# menu / entry title\n\
string title\n\
\n\
# entries for this menu\n\
# if empty, this menu represents a simple menu entry itself\n\
string[] entries\n\
\n\
";
  }

  static const char* value(const  ::visualization_msgs::Menu_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::visualization_msgs::Menu_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.title);
    stream.next(m.entries);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Menu_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::visualization_msgs::Menu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::visualization_msgs::Menu_<ContainerAllocator> & v) 
  {
    s << indent << "title: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.title);
    s << indent << "entries[]" << std::endl;
    for (size_t i = 0; i < v.entries.size(); ++i)
    {
      s << indent << "  entries[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.entries[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // VISUALIZATION_MSGS_MESSAGE_MENU_H
