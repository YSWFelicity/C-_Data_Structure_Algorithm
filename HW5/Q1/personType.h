//
// Created by Yingshu Wang on 3/22/22.
//

#ifndef Q1_PERSONTYPE_H
#define Q1_PERSONTYPE_H

#include <iostream>
#include <string>

using namespace std;

class personType
{
    friend ostream& operator << (ostream&, const personType&);
    friend istream& operator >> (istream&, personType&);

public:
    // default constructor: must have the same name as the file
    personType();

    // specific constructor
    personType(string fn, string mn, string ln);

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
    bool operator<(const personType& otherPerson) const;
    bool operator>(const personType& otherPerson) const;
    bool operator==(const personType& otherPerson) const;
    bool operator<=(const personType& otherPerson) const;
    bool operator>=(const personType& otherPerson) const;
    bool operator!=(const personType& otherPerson) const;

protected: // change from private to protected so that studentType can access these

    string firstName; // data members
    string middleName;
    string lastName;
};

#endif //Q1_PERSONTYPE_H
