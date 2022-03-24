//
// Created by Yingshu Wang on 3/22/22.
//

// implementation file

#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

// default constructor
personType::personType() // header file name :: header file function
{
    firstName = "Me";
    middleName = "My";
    lastName = "Mine";
}

// specific constructor
personType::personType(string fn, string mn, string ln)
{
    firstName = fn;
    middleName = mn;
    lastName = ln;
}

// setters
void personType::setFirstName(string fn)
{
    firstName = fn;
}

void personType::setMiddleName(string mn)
{
    middleName = mn;
}

void personType::setLastName(string ln)
{
    lastName = ln;
}

void personType::setName(string fn, string mn, string ln)
{
    firstName = fn;
    middleName = mn;
    lastName = ln;
}

// getters
string personType::getFirstName() const
{
    return firstName;
}

string personType::getMiddleName() const
{
    return middleName;
}

string personType::getLastName() const
{
    return lastName;
}

//printf
void personType::print() const
{
    cout << firstName << " "
         << middleName << " "
         << lastName << " ";
}

// ostream operator
ostream& operator << (ostream& osObject, const personType& person1) //creating an instance of a date class, i.e. date1
{
    osObject << person1.firstName
             << " " << person1.middleName
             << " " << person1.lastName;

    return osObject;
}

istream& operator >> (istream& isObject, personType& person1)
{
    isObject >> person1.firstName >> person1.middleName >> person1.lastName;

    return isObject;
}

// Overloading "equal to" operator
bool personType::operator==(const personType& otherPerson) const
{
    if (firstName == otherPerson.firstName && middleName == otherPerson.middleName
        && lastName == otherPerson.lastName)
        return true;
    else
        return false;
}

// Overloading "not equal to" operator
bool personType::operator!=(const personType& otherPerson) const
{
    return !(*this == otherPerson);
}

// Overloading "less than or equal to" operator
bool personType::operator<=(const personType& otherPerson) const
{
    return (*this < otherPerson || *this == otherPerson);
}

// Overloading "less than" operator
bool personType::operator<(const personType& otherPerson) const
{
    if ((lastName < otherPerson.lastName) ||
        (lastName == otherPerson.lastName && middleName < otherPerson.middleName) ||
        (lastName == otherPerson.lastName && middleName == otherPerson.middleName && firstName < otherPerson.firstName))
        return true;
    else
        return false;
}

// Overloading "greater than or equal to" operator
bool personType::operator>=(const personType& otherPerson) const
{
    return !(*this < otherPerson);
}

// Overloading "greater than" operator
bool personType::operator>(const personType& otherPerson) const
{
    return !(*this <= otherPerson);
}