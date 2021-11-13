#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>

using namespace std;

void topic_reader (const std_msgs::String& message)
{
  // Выводим сообщение из топика
  ROS_INFO_STREAM(message.data);
  return;
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "pub_reader");
  ros::NodeHandle node;

  ROS_INFO("Ready to read topic.");
  ros::Subscriber sub = node.subscribe("pub_reply", 1000, topic_reader);

  ros::spin();
  return 0;
}
