#include <iostream>
#include <string>
#include<cmath>
#include<iomanip>
using namespace std;
const double PI=3.142;
int main()
{
  //variable declaration
double radius,height;
double volume,cubesidelen;


//prompt the user to enter the required input
cout<<"Enter the radius of the cylinder: ";
cin>>radius;
cout<<"Enter the height of the cylinder: ";
cin>>height;
cout<<fixed<<showpoint<<setprecision(2);


//calculate
volume=PI*pow(radius,2)*height;
cubesidelen=pow(volume,1/3.0);


//display the resultant
cout<<"The side of the cube: "<<cubesidelen<<endl;
return 0;
}