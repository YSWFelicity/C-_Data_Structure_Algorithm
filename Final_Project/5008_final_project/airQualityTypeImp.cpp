#include "airQualityType.h"

const int NULL_VALUE = -200;

airQualityType::airQualityType()
{
}
void airQualityType::setDate(date input)
{
  inputDate = input;
}
date airQualityType::getDate()
{
  return inputDate;
}

void airQualityType::setTime(Time input)
{
  inputTime = input;
}

Time airQualityType::getTime()
{
  return inputTime;
}

void airQualityType::setT(double t)
{
  T = t;
}
double airQualityType::getT()
{
  return T;
}

void airQualityType::setRH(double rh)
{
  RH = rh;
}
double airQualityType::getRH()
{
  return RH;
}

void airQualityType::setAH(double ah)
{
  AH = ah;
}
double airQualityType::getAH()
{
  return AH;
}

bool checkmonth( string month, airQualityType x)
{
  date date = x.getDate();
  // cout << to_string(date.getMonth()) << ' ' << month << endl;
  // cout << y << ' '<< m << endl;
  if (to_string(date.getMonth()) == month)
  {
    return true;
  }
  return false;
}

void ave_t_month(vector<airQualityType> v, string month)
{
  double res = 0;
  int cnt = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (checkmonth( month, v[i]))
    {
      if (v[i].getT() == NULL_VALUE)
        continue;
      res += v[i].getT();
      cnt++;
    }
  }
  if (cnt != 0)
  {
    cout << "the average temperature for the month is: " << res / cnt << endl;
  }
  else
  {
    cout << "cannot find the month entered or the month entered has no data\n";
  }
}

void ave_rh_month(vector<airQualityType> v, string month)
{
  double res = 0;
  int cnt = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (checkmonth( month, v[i]))
    {
      if (v[i].getRH() == NULL_VALUE)
        continue;
      res += v[i].getRH();
      cnt++;
    }
  }
  if (cnt != 0)
  {
    cout << "the average relative humidity for the month is: " << res / cnt << endl;
  }
  else
  {
    cout << "cannot find the month entered or the month entered has no data\n";
  }
}

void ave_ah_month(vector<airQualityType> v,  string month)
{
  double res = 0;
  int cnt = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (checkmonth( month, v[i]))
    {
      if (v[i].getAH() == NULL_VALUE)
        continue;
      res += v[i].getAH();
      cnt++;
    }
  }
  if (cnt != 0)
  {
    cout << "the average absolute humidity for the month is: " << res / cnt << endl;
  }
  else
  {
    cout << "cannot find the month entered or the month entered has no data\n";
  }
}

void t_rh_ah_datetime(vector<airQualityType> v, string date1, string time)
{
  bool flag = true;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i].getDate() == date(date1) && v[i].getTime().equalTime(Time(time)))
    {
      flag = false;
      cout << "at this date and time, the temperature is: " << v[i].getT() << ", the relative humidity is: " << v[i].getRH() << ", the absolute humidity is: " << v[i].getAH() << endl;
    }
  }
  if (flag)
  {
    cout << "cannot find the date & time entered or the month entered has no data\n";
  }
}
void max_t_month(vector<airQualityType> v,string month)
{
  double res = -1;
  int cnt = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (checkmonth( month, v[i]))
    {
      if (v[i].getT() == NULL_VALUE)
        continue;
      res = max(res, v[i].getT());
      cnt++;
    }
  }
  if (cnt != 0)
  {
    cout << "the highest temperature for the month is: " <<res << endl;
  }
  else
  {
    cout << "cannot find the month entered or the month entered has no data\n";
  }
}

void max_rh_month(vector<airQualityType> v, string month)
{
  double res = -1;
  int cnt = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (checkmonth( month, v[i]))
    {
      if (v[i].getRH() == NULL_VALUE)
        continue;
      res = max(res, v[i].getRH());
      cnt++;
    }
  }
  if (cnt != 0)
  {
    cout << "the highest relative humidity for the month is: " << res << endl;
  }
  else
  {
    cout << "cannot find the month entered or the month entered has no data\n";
  }
}

void max_ah_month(vector<airQualityType> v, string month)
{
  double res = -1;
  int cnt = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (checkmonth(month, v[i]))
    {
      if (v[i].getAH() == NULL_VALUE)
        continue;
      res = max(res, v[i].getAH());
      cnt++;
    }
  }
  if (cnt != 0)
  {
    cout << "the highest absolute humidity for the month is: " << res << endl;
  }
  else
  {
    cout << "cannot find the month entered or the month entered has no data\n";
  }
}

void higher_t(vector<airQualityType> v, string month)
{
  double ave = 0;
  int cnt = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (checkmonth( month, v[i]))
    {
      if (v[i].getT() == NULL_VALUE)
        continue;
      ave += v[i].getT();
      cnt++;
    }
  }
  if (cnt != 0)
  {
    ave /= cnt;
    vector<airQualityType> res;
    for (int i = 0; i < v.size(); i++)
    {
      if (checkmonth( month, v[i]) && v[i].getT() > ave)
      {
        res.push_back(v[i]);
      }
    }
    for (int i = 0; i < res.size(); i++)
    {
      cout << "the dates and times for the month that the temperature is higher are: ";
      res[i].getDate().print();
      res[i].getTime().print();
      cout << endl;
    }
  }
  else
  {
    cout << "cannot find the month entered or the month entered has no data\n";
  }
}

void higher_rh(vector<airQualityType> v,  string month)
{
  double ave = 0;
  int cnt = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (checkmonth( month, v[i]))
    {
      if (v[i].getRH() == NULL_VALUE)
        continue;
      ave += v[i].getRH();
      cnt++;
    }
  }
  if (cnt != 0)
  {
    ave /= cnt;
    vector<airQualityType> res;
    for (int i = 0; i < v.size(); i++)
    {
      if (checkmonth( month, v[i]) && v[i].getRH() > ave)
      {
        res.push_back(v[i]);
      }
    }
    for (int i = 0; i < res.size(); i++)
    {
      cout << "the dates and times for the month that the relative humidity is higher are: ";
      res[i].getDate().print();
      res[i].getTime().print();
      cout << endl;
    }
  }
  else
  {
    cout << "cannot find the month entered or the month entered has no data\n";
  }
}

void higher_ah(vector<airQualityType> v,  string month)
{
  double ave = 0;
  int cnt = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (checkmonth( month, v[i]))
    {
      if (v[i].getAH() == NULL_VALUE)
        continue;
      ave += v[i].getAH();
      cnt++;
    }
  }

  if (cnt != 0)
  {
    ave /= cnt;
    vector<airQualityType> res;
    for (int i = 0; i < v.size(); i++)
    {
      if (checkmonth( month, v[i]) && v[i].getAH() > ave)
      {
        res.push_back(v[i]);
      }
    }
    // cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++)
    {
      cout << "the dates and times for the month that the absolute humidity is higher are: ";
      res[i].getDate().print();
      res[i].getTime().print(); 
      cout << endl;
    }
  }
  else
  {
    cout << "cannot find the month entered or the month entered has no data\n";
  }
}