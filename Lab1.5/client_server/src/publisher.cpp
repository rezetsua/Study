#include "ros/ros.h"
#include "std_msgs/String.h"
#include "service_generator/DinoFactGenerator.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

const int DINO_SUFFIX_NUM = 20;
const int DINO_FAMILY_NUM = 9;
const int DINO_PERIOD_NUM = 7;

ros::Publisher g_pub;

string g_dino_suffix_array[DINO_SUFFIX_NUM] = {"saurus", "raptor", "pteryx", "stacator", "rex",
                                             "ceratops", "gnathus", "roides", "draco", "dromeus",
                                             "dipus", "mimus", "nychus", "ops", "odon",
                                             "pus", "rhinos", "venator", "ped", "pes"};

string g_dino_family_array[DINO_FAMILY_NUM] = {"Abelisauridae", "Noasauridae", "Megalosauridae",
                                             "Spinosauridae", "Allosauridae", "Neovenatoridae",
                                             "Tyrannosauridae", "Ornithomimidae", "Troodontidae"};

string g_dino_period_array[DINO_PERIOD_NUM] = {"Rhaetian", "Norian", "Carnian", "Ladinian",
                                             "Anisian", "Olenekian", "Induan"};

int getRandomNumber(int min, int max)
{
  static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
  // Равномерно распределяем рандомное число в нашем диапазоне
  return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

bool getDinoFact(service_generator::DinoFactGenerator::Request &req,
		 service_generator::DinoFactGenerator::Response &res)
{
  // Из каждого массива выбираем рандомную строку
  const int RAND_DINO_SUFFIX = getRandomNumber(0, DINO_SUFFIX_NUM - 1);
  const int RAND_DINO_FAMILY = getRandomNumber(0, DINO_FAMILY_NUM - 1);
  const int RAND_DINO_PERIOD = getRandomNumber(0, DINO_PERIOD_NUM - 1);

  // Копируем ответ сервера в строку
  string user_word_str = req.user_word;
  // Копируем первый символ из строки и делаем его заглавным
  char first_letter = (char)toupper(user_word_str.front());
  // Удаляем маленький первый символ из строки
  user_word_str.erase(0,1);

  // Составляем факт
  string dino_fact_str = first_letter + user_word_str + g_dino_suffix_array[RAND_DINO_SUFFIX] + " belonged to the "
                       + g_dino_family_array[RAND_DINO_FAMILY] + " family and lived in the "
                       + g_dino_period_array[RAND_DINO_PERIOD] + "period!";

  // Запиываем факт в ответ сервера
  res.dino_fact = dino_fact_str;

  // Публикуем факт в топик
  std_msgs::String reply;
  reply.data = dino_fact_str;
  g_pub.publish(reply);

  // Выводим факт в сервере
  ROS_INFO_STREAM(res.dino_fact);

  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "dino_fact_generator_server");
  ros::NodeHandle node;
  g_pub = node.advertise <std_msgs::String> ("pub_reply", 1000);
  ros::ServiceServer service = node.advertiseService("dino_fact_generator", getDinoFact);

  // Уведомляем о готовности сервера
  ROS_INFO("Ready to genarate facts about dinosaurs.");

  ros::spin();
  return 0;
}
