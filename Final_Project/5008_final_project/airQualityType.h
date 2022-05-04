#ifndef AIR_H
#define AIR_H
#include <iostream>
#include <string>
#include <vector>
#include "Time.h"
#include "date.h"
#include "Time.cpp"
#include "dateImp.cpp"

using namespace std;
class airQualityType
{
private:
  date inputDate;
  Time inputTime;
  double T;
  double RH;
  double AH;

public:
  airQualityType();
  void setDate(date inputDate);
  date getDate();
  void setTime(Time inputTime);
  Time getTime();
  void setT(double t);
  double getT();
  void setRH(double rh);
  double getRH();
  void setAH(double ah);
  double getAH();
};
void ave_t_month(vector<airQualityType> v,  string month);
void ave_rh_month(vector<airQualityType> v, string month);
void ave_ah_month(vector<airQualityType> v,string month);
void t_rh_ah_datetime(vector<airQualityType> v, string date, string time);
void max_t_month(vector<airQualityType> v, string month);
void max_rh_month(vector<airQualityType> v,  string month);
void max_ah_month(vector<airQualityType> v,  string month);
void higher_t(vector<airQualityType> v,  string month);
void higher_rh(vector<airQualityType> v,  string month);
void higher_ah(vector<airQualityType> v,  string month);
#endif
