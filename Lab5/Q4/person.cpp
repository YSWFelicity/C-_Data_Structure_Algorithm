//
// Created by Yingshu Wang on 3/24/22.
//

#include <iostream>
#include <string>
#include "person.h"

using namespace std;

// default constructor
person::person() // header file name :: header file function
{
    firstName = "Me";
    middleName = "My";
    lastName = "Mine";
}

// specific constructor
person::person(string fn, string mn, string ln)
{
    firstName = fn;
    middleName = mn;
    lastName = ln;
}

// setters
void person::setFirstName(string fn)
{
    firstName = fn;
}

void person::setMiddleName(string mn)
{
    middleName = mn;
}

void person::setLastName(string ln)
{
    lastName = ln;
}

void person::setName(string fn, string mn, string ln)
{
    firstName = fn;
    middleName = mn;
    lastName = ln;
}

// getters
string person::getFirstName() const
{
    return firstName;
}

string person::getMiddleName() const
{
    return middleName;
}

string person::getLastName() const
{
    return lastName;
}

//printf
void person::print() const
{
    cout << firstName << " "
         << middleName << " "
         << lastName << " ";
}

// ostream operator
ostream& operator << (ostream& osObject, const person& person1) //creating an instance of a date class, i.e. date1
{
    osObject << person1.firstName
             << " " << person1.middleName
             << " " << person1.lastName;

    return osObject;
}

istream& operator >> (istream& isObject, person& person1)
{
    isObject >> person1.firstName >> person1.middleName >> person1.lastName;

    return isObject;
}

// Overloading "equal to" operator
bool person::operator==(const person& otherPerson) const
{
    if (firstName == otherPerson.firstName && middleName == otherPerson.middleName
        && lastName == otherPerson.lastName)
        return true;
    else
        return false;
}

// Overloading "not equal to" operator
bool person::operator!=(const person& otherPerson) const
{
    return !(*this == otherPerson);
}

// Overloading "less than or equal to" operator
bool person::operator<=(const person& otherPerson) const
{
    return (*this < otherPerson || *this == otherPerson);
}

// Overloading "less than" operator
bool person::operator<(const person& otherPerson) const
{
    if ((lastName < otherPerson.lastName) ||
        (lastName == otherPerson.lastName && middleName < otherPerson.middleName) ||
        (lastName == otherPerson.lastName && middleName == otherPerson.middleName && firstName < otherPerson.firstName))
        return true;
    else
        return false;
}

// Overloading "greater than or equal to" operator
bool person::operator>=(const person& otherPerson) const
{
    return !(*this < otherPerson);
}

// Overloading "greater than" operator
bool person::operator>(const person& otherPerson) const
{
    return !(*this <= otherPerson);
}