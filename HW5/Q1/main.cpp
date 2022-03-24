// Main Test for creating an address book (map)

#include <iostream>
#include <string>
#include <map>

#include "personType.h"
#include "date.h"

using namespace std;

int main()
{
    // Declaring a map object
    map<personType, date> myMap;

    // Creating instances of personType
    personType p1("Htet", "Htet", "Win");
    personType p2("Ang", "Wan", "Xin");
    personType p3("A", "B", "C");
    personType p4("D", "E", "F");

    // Creating instances of date
    date d1(1, 2, 14);
    date d2(2, 12, 8);
    date d3(3, 10, 12);
    date d4(4, 1, 9);

    // Inserting values into map called myMap
    myMap.insert(pair<personType, date>(p1, d1));
    myMap.insert(pair<personType, date>(p2, d2));
    myMap.insert(pair<personType, date>(p3, d3));
    myMap.insert(pair<personType, date>(p4, d4));

    // Defining an iterator called "it"
    map<personType, date>::iterator it;

    // Displaying the map
    for (it = myMap.begin(); it != myMap.end(); ++it)
    {
        cout << it->first<< ": "
             << it->second << '\n';
    }


    return 0;
}