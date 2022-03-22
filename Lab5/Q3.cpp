#include <iostream>
using namespace std;

#define aaaMAX 100

int main()
{

 int aaaarr[aaaMAX];
 int aaan,aaai,aaaj;
 int aaatemp;
 
 cout<<"Total number ";
 cin>>aaan;

 
 for(aaai=0;aaai<aaan;aaai++)
 {
  cout<<"Enter element ["<<aaai+1<<"] ";
  cin>>aaaarr[aaai];
 }

 cout<<"Unsorted Array elements:"<<endl;
 for(aaai=0;aaai<aaan;aaai++)
  cout<<aaaarr[aaai]<<"\t";
 cout<<endl;

 for(aaai=0;aaai<aaan;aaai++)
 {  
  for(aaaj=aaai+1;aaaj<aaan;aaaj++)
  {
   if(aaaarr[aaai]>aaaarr[aaaj])
   {
    aaatemp  =aaaarr[aaai];
    aaaarr[aaai]=aaaarr[aaaj];
    aaaarr[aaaj]=aaatemp;
   }
  }
 }

 cout<<"Sorted Elements:"<<endl;
 for(aaai=0;aaai<aaan;aaai++)
  cout<<aaaarr[aaai]<<"\t";
 cout<<endl; 
 
 
 return 0;
 
}