#include <iostream>
#include "dayType.h"
using namespace std;

int main()
{

    dayType myDay;

    //declare variables
    string weekday;
    int daysAhead;

    //get current day from user , call setDay function and pass weekday
    cout << "Current day - ";
    cin >> weekday;
    myDay.setDay(weekday);

    //call prevDay Function to display next day
    cout << "Previous day - ";
    cout << myDay.prevDay();
    cout << endl;

    //call nextDay function to display next day
    cout << "Next day - ";
    cout << myDay.nextDay();
    cout << endl << endl;

    //collect days ahead from user, call addDay function and pass days ahead to add the days
    cout << "Enter days ahead: ";
    cin >> daysAhead;
    myDay.addDay(daysAhead);

    // prompts user of days and displays the day for the week for those number of days
    cout << daysAhead << " days away - ";
    cout << myDay.getDay();
    cout << endl << endl << "End of Program";

    return 0;
}