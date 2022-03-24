//
// Created by Yingshu Wang on 3/23/22.
//

#include "address.h"

// Constructor #1
Address::Address()
{
    block = 0;
    unit = 0;
    floor = 0;
    postalCode = 0;
}

// Constructor #2
Address::Address(string firstName, string middleName, string lastName, string street, string city, string country, int block, int unit, int floor, int postalCode)
{
    // Set attributes derived from Person
    setfirstName(firstName);
    setmiddleName(middleName);
    setlastName(lastName);
    setStreet(street);
    setCity(city);
    setCountry(country);


    // Set Address attributes
    this->block = block;
    this->unit = unit;
    this->floor = floor;
    this->postalCode = postalCode;
}

// Mutator functions
void Address::setBlock(int block) {
    this->block = block;
}


void Address::setUnit(int unit) {
    this->unit = unit;
}

void Address::setFloor(int floor) {
    this->floor = floor;
}

void Address::setPostalCode(int postalCode) {
    this->postalCode = postalCode;
}

// Accessor functions
int Address::getBlock() const {
    return block;
}

int Address::getUnit() const {
    return unit;
}

int Address::getFloor() const {
    return floor;
}

int Address::getPostalCode() const {
    return postalCode;
}