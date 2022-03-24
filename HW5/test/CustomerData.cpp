//
// Created by Yingshu Wang on 3/23/22.
//

#include "CustomerData.h"

// Constructor #1
CustomerData::CustomerData()
{
    block = 0;
    unit = 0;
    floor = 0;
    postalCode = 0;
}

// Constructor #2
CustomerData::CustomerData(string firstName, string middleName, string lastName, string street, string city, string country, int block, int unit, int floor, int postalCode)
{
    // Set attributes derived from PersonData
    setfirstName(firstName);
    setmiddleName(middleName);
    setlastName(lastName);
    setStreet(street);
    setCity(city);
    setCountry(country);
//    setPhoneNumber(phoneNumber);

    // Set CustomerData attributes
    this->block = block;
    this->unit = unit;
    this->floor = floor;
    this->postalCode = postalCode;
}

// Mutator functions
// setCustomerNumber assigns a value to the customerNumber member
void CustomerData::setBlock(int block) {
    this->block = block;
}

// setMaillingList assigns a value to the mailingList member
void CustomerData::setUnit(int unit) {
    this->unit = unit;
}

void CustomerData::setFloor(int floor) {
    this->floor = floor;
}

void CustomerData::setPostalCode(int postalCode) {
    this->postalCode = postalCode;
}

// Accessor functions
// Funtion to return customerNumber
int CustomerData::getBlock() const {
    return block;
}

// Funtion to return mailingList
int CustomerData::getUnit() const {
    return unit;
}

int CustomerData::getFloor() const {
    return floor;
}

int CustomerData::getPostalCode() const {
    return postalCode;
}