//
// Created by Yingshu Wang on 3/24/22.
//

#ifndef BIRTHDAY_PERSON_H
#define BIRTHDAY_PERSON_H

#include <iostream>
#include <string>

using namespace std;

class person
{
    friend ostream& operator << (ostream&, const person&);
    friend istream& operator >> (istream&, person&);

public:
    // default constructor: must have the same name as the file
    person();

    // specific constructor
    person(string fn, string mn, string ln);

    // setters
    void setFirstName(string fn);
    void setMiddleName(string mn);
    void setLastName(string ln);
    void setName(string fn, string mn, string ln);

    //getters
    string getFirstName() const;
    string getMiddleName() const;
    string getLastName() const;

    // printf
    void print() const;

    // Overloading operators
    bool operator<(const person& otherPerson) const;
    bool operator>(const person& otherPerson) const;
    bool operator==(const person& otherPerson) const;
    bool operator<=(const person& otherPerson) const;
    bool operator>=(const person& otherPerson) const;
    bool operator!=(const person& otherPerson) const;

protected: // change from private to protected so that studentType can access these

    string firstName; // data members
    string middleName;
    string lastName;
};

#endif //BIRTHDAY_PERSON_H
