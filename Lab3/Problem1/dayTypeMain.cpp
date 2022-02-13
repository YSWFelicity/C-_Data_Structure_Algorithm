#include <iostream>
#include "dayType.h"

using namespace std;

int main(){
  
   dayType today = dayType();
   cout<<"Today is :"<<today.getDay();
   cout<<"\nTomorrow will be: "<<today.nextDay();
   cout<<"\nYesterday was: "<<today.prevDay();
  
}