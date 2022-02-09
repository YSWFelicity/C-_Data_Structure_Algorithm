#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//function declaration
double windchill(double wind, double temp);
//global variable declaration
double w;
double wind, temp;
//function declaration
void getInput(double& wind,double& temp);

//define main function
int main()
{
    //variable declaration
    double wind, temp;
    //call getInput to get the inputs from user
    getInput(wind,temp);
    //print the current temperature
    cout << "Current temperature: " << temp << "F" << endl;
    //print the windchill factor
    cout << "Windchill factor " << setprecision(4) << fixed << windchill(wind, temp) << endl;
}

//define a function to egt input from user
void getInput(double& wind,double& temp)
{
    //prompt the user to enter wind speed in miles per hour
    cout << "Enter the wind speed in miles per hour: ";
    //get wind speed
    cin >> wind;
    //prompt the user to enter the temperature
    cout << "Enter the temperature in fahrenheit: ";
    //get the temperature
    cin >> temp;
}

//define a method to calculate windchill()
double windchill(double V, double T)
{
    double w;
    //calculate windchill factor
    w = 35.74 + 0.6215*T -35.75*pow(V,0.16) + 0.4275 * T * pow(V,0.16);
    //return the value of w
    return w;
}