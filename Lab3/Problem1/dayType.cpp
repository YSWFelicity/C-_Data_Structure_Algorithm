#include "dayType.h"
#include<string>
#include<iostream>

using std::string;
using std::cout;

dayType::dayType(){
   weekDay="Sun";
}
dayType::dayType(string d){
   weekDay=d;
}
void dayType::setDay(string d){
   weekDay=d;
}
void dayType::print() const{
   cout<<weekDay<<"\n";
}
string dayType::getDay() const{
   return weekDay;
}
string dayType::nextDay(){
       if(weekDay.compare("Sun")==0) return "Mon";
   else if(weekDay.compare("Mon")==0) return "Tue";
   else if(weekDay.compare("Tue")==0) return "Wed";
   else if(weekDay.compare("Wed")==0) return "Thu";
   else if(weekDay.compare("Thu")==0) return "Fri";
   else if(weekDay.compare("Fri")==0) return "Sat";
   else if(weekDay.compare("Sat")==0) return "Sun";
}
string dayType::prevDay(){
       if(weekDay.compare("Sun")==0) return "Sat";
   else if(weekDay.compare("Mon")==0) return "Sun";
   else if(weekDay.compare("Tue")==0) return "Mon";
   else if(weekDay.compare("Wed")==0) return "Tue";
   else if(weekDay.compare("Thu")==0) return "Thu";
   else if(weekDay.compare("Fri")==0) return "Fri";
   else if(weekDay.compare("Sat")==0) return "Sat";
}