#include <ros/ros.h>
#include "std_msgs/String.h"
#include <iostream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "DinoGenerator");
  ros::NodeHandle nh;
  std_msgs::String reply;
  reply.data = "aboba";

  std::cout << reply.data;
}
