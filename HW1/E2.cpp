#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
//define constant
const double PI=3.145;
int main()
{
//declare the required variables
double length;
double radius;
double gap_tree;
   int num;
double space_single,tot;

//get the required input form the user
cout << "Enter the length of the yard: " << endl;
cin >> length;
cout << "Enter the radius of full grown tree: " << endl;
cin >> radius;
cout << "Enter the gap between trees: " << endl;
cin >> gap_tree;

//calculate the required
space_single=2*radius+gap_tree;
   num = int(length)/space_single;
   tot= (PI*pow(radius,2.0))*num;

//display the trees
cout << "Total Number of trees: " << num << endl;
//display the total area covered
cout << "Area covered by trees: " <<fixed<<showpoint<<setprecision(2)<< tot << endl;

return 0;
}