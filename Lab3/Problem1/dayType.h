#ifndef DAYTYPE_H
#define DAYTYPE_H
#include<string>
using std::string;


class dayType
{
   public:
       dayType();
       dayType(string d);
       void setDay(string d);
       void print() const;
       string getDay() const;
       string nextDay();
       string prevDay();
      
   private:
       string weekDay;
};

#endif