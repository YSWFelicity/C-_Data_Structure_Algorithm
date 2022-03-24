//
// Created by Yingshu Wang on 3/23/22.
//

#include "Person.h"

// Constructor #1
Person::Person()
{
    firstName = "";
    middleName = "";
    lastName = "";
    street = "";
    city = "";
    country = "";
}

// Constructor #2
Person::Person(string firstName, string middleName, string lastName, string street, string city, string country)
{
    this->firstName = firstName;
    this->middleName = middleName;
    this->lastName = lastName;
    this->street = street;
    this->city = city;
    this->country = country;
}


void Person::setfirstName(string firstName)
{
    this->firstName = firstName;
}

void Person::setmiddleName(string middleName)
{
    this->middleName = middleName;
}

void Person::setlastName(string lastName) {
    this->lastName = lastName;
}

void Person::setStreet(string street) {
    this->street = street;
}

void Person::setCity(string city) {
    this->city = city;
}

void Person::setCountry(string country) {
    this->country = country;
}

// Accessor functions
string Person::getfirstName() const {
    return firstName;
}

string Person::getmiddleName() const {
    return middleName;
}

string Person::getlastName() const {
    return lastName;
}

string Person::getStreet() const {
    return street;
}

string Person::getCity() const
{
    return city;
}

string Person::getCountry() const {
    return country;
}