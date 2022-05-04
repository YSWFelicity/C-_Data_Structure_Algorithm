#include <iostream>
#include "Time.h"

using namespace std;

    Time::Time()
    {
        hour = 1;
        mins = 1;
        secs = 1;
    }

    Time::Time(int h, int m, int s)
    {
        hour = h;
        mins = m;
        secs = s;
    }

    Time::Time(int h, int m)
    {
        hour = h;
        mins = m;
        secs = 1;
    }

    Time::Time(string str){
      int idx = 0;
      int num = 0;
      for(int i=0; i<str.length();i++){
        if(str[i]==':'){
          if(idx==0){
            hour = num;
          }
          if(idx==1){
            mins = num;
          }
          num = 0;
          idx++;
        }
        else{
          num*=10;
          num+=str[i] - '0';
        }
      }
      secs = num;
    }

    void Time::setHour(int h)
    {
        hour = h;
    }

    void Time::setMin(int m)
    {
        mins = m;
    }

    void Time::setSec(int s)
    {
        secs = s;
    }

    void Time::setTime(int h, int m, int s)
    {
        hour = h;
        mins = m;
        secs = s;
    }

    int Time::getHour()
    {
        return hour;
    }

    int Time::getMin()
    {
        return mins;
    }

    int Time::getSec()
    {
        return secs;
    }

    int Time::incrementHours()
    {
        if (hour > 23)
        {
            hour = 0;
        }
        hour++;
        return hour;
    }

    int Time::incrementMinutes()
    {
        mins++;
        if (mins > 59)
        {
            mins = 0;
            incrementHours();
        }

        return mins;
    }
    int Time::incrementSeconds()
    {
        secs++;
        if (secs > 59)
        {
            secs = 0;
            incrementMinutes();
        }

        return secs;
    }

    bool Time::equalTime(const Time &T2) const
    {

        if ((hour == T2.hour) && (mins == T2.mins) && (secs == T2.secs))
        {
            return true;
        }
        return false;
    }

    void Time::print() const
    {
        cout << "time is " << hour << ":" << (mins<=9?"0":"")<< mins << ":" << (secs<=9?"0":"") << secs << endl;
    }