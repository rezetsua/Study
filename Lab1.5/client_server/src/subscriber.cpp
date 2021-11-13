#include "ros/ros.h"
#include "std_msgs/String.h"
#include "service_generator/DinoFactGenerator.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
  ros::init(argc, argv, "dino_fact_generator_publisher");
  ros::NodeHandle node;
  
  ros::ServiceClient client = node.serviceClient<service_generator::DinoFactGenerator>("dino_fact_generator");
  service_generator::DinoFactGenerator srv;
  
  while (ros::ok())
  {
    // Получаем слово для генерирования факта
    string user_word;
    ROS_INFO_STREAM("Enter your word: ");
    cin >> user_word;

    // Передаем слово на сервер
    srv.request.user_word = user_word;

    if (client.call(srv))
      // Выводим факт предоставленный сервером
      ROS_INFO_STREAM(srv.response.dino_fact);
    else
    {
      // Выводим сообщение об ошибке
      ROS_INFO_STREAM("Failed to call service dino_fact_generator");
      return 1;
    }
  }
  return 0;
}
