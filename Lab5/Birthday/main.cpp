#include <iostream>
#include <string>
#include <map>

#include "person.h"
#include "birthday.h"

using namespace std;

int main()
{
    // Declaring a map object
    map<person, birthday> myMap;

    // Creating instances of personType
    person p1("Yan", "Ted", "Willy");
    person p2("Ang", "Wan", "Xin");
    person p3("Sally", "Billy", "Chad");
    person p4("Donna", "Emily", "Francis");

    // Creating instances of date
    birthday d1(3, 8, 2014);
    birthday d2(12, 12, 2018);
    birthday d3(5, 19, 2012);
    birthday d4(8, 6, 2019);

    // Inserting values into map called myMap
    myMap.insert(pair<person, birthday>(p1, d1));
    myMap.insert(pair<person, birthday>(p2, d2));
    myMap.insert(pair<person, birthday>(p3, d3));
    myMap.insert(pair<person, birthday>(p4, d4));

    // Defining an iterator called "it"
    map<person, birthday>::iterator it;

    // Displaying the map
    for (it = myMap.begin(); it != myMap.end(); ++it)
    {
        cout << it->first<< ": "
             << it->second << '\n';
    }


    return 0;
}