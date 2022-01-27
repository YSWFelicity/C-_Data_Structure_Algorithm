#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
const int a1 = 5000;
const int a2 = 20000;

const float b1 = 0.125;

const float c1 = 0.1;
const float c2 = 0.14;
const int c3 = 4000;

int price,number;
float a,b,c,d;

cout <<"Please, enter the price of the novel: ";
cin >> price;
cout <<"Enter estimated number of copies: ";
cin >> number;

a=a1+a2;
b=b1*price*number;
if (number<=4000) {c=c1*price*number;} else {c=c1*price*4000+c2*price*(number-4000);} 

cout <<"First option: " << a<< endl;;
cout <<"Second option: " << b<< endl;;
cout <<"Third  option: " << c<< endl;;
d=max(a,b);
cout <<"The best option: " << max(d,c);

return 0;
}