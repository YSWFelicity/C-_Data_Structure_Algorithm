//
// Created by Yingshu Wang on 3/23/22.
//

#include "PersonData.h"

// Constructor #1
PersonData::PersonData()
{
    firstName = "";
    middleName = "";
    lastName = "";
    street = "";
    city = "";
    country = "";
//    phoneNumber = "";
}

// Constructor #2
PersonData::PersonData(string firstName, string middleName, string lastName, string street, string city, string country)
{
    this->firstName = firstName;
    this->middleName = middleName;
    this->lastName = lastName;
    this->street = street;
    this->city = city;
    this->country = country;
//    this->phoneNumber = phoneNumber;
}


void PersonData::setfirstName(string firstName)
{
    this->firstName = firstName;
}

// setFirstName assigns a value to the firstName member
void PersonData::setmiddleName(string middleName)
{
    this->middleName = middleName;
}

// setAddress assigns a value to the address member
void PersonData::setlastName(string lastName) {
    this->lastName = lastName;
}

// setCity assigns a value to the city member
void PersonData::setStreet(string street) {
    this->street = street;
}

// setState assigns a value to the state member
void PersonData::setCity(string city) {
    this->city = city;
}

// setZipCode assigns a value to the zipCode member
void PersonData::setCountry(string country) {
    this->country = country;
}



// Accessor functions
// Funtion to return lastName
string PersonData::getfirstName() const {
    return firstName;
}

// Funtion to return firstName
string PersonData::getmiddleName() const {
    return middleName;
}

// Funtion to return address
string PersonData::getlastName() const {
    return lastName;
}

// Funtion to return state
string PersonData::getStreet() const {
    return street;
}

// Funtion to return city
string PersonData::getCity() const
{
    return city;
}


// Funtion to return zipCode
string PersonData::getCountry() const {
    return country;
}


//string PersonData::getPhoneNumber() const
//{
//    return phoneNumber;
//}