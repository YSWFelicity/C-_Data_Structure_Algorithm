//
// Created by Yingshu Wang on 3/23/22.
//

#ifndef Q1_PERSON_H
#define Q1_PERSON_H

#include <string>

using namespace std;

class Person
{
private:
    string firstName;
    string middleName;
    string lastName;
    string street;
    string city;
    string country;


public:
    // Constructors #1
    Person();
    // Constructors #2
    Person(string firstName, string middleName, string lastName, string street, string city, string country);

    // Mutator functions
    void setfirstName(string firstName);
    void setmiddleName(string middleName);
    void setlastName(string lastName);
    void setStreet(string street);
    void setCity(string city);
    void setCountry(string country);


    // Accessing functions
    string getfirstName() const;
    string getmiddleName() const;
    string getlastName() const;
    string getStreet() const;
    string getCity() const;
    string getCountry() const;
};

#endif //Q1_PERSON_H
