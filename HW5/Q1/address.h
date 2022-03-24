//
// Created by Yingshu Wang on 3/23/22.
//

#ifndef Q1_ADDRESS_H
#define Q1_ADDRESS_H

#include "Person.h"


// Address class declaration
class Address : public Person
{
private:
    int block;
    int unit;
    int floor;
    int postalCode;


public:
    // Constructors #1
    Address();
    // Constructors #2
    Address(string firstName, string middleName, string lastName, string street, string city, string country, int block, int unit, int floor, int postalCode);

    // Mutator functions
    void setBlock(int block);
    void setUnit(int unit);
    void setFloor(int floor);
    void setPostalCode(int postalCode);

    // Accessing functions
    int getBlock() const;
    int getUnit() const;
    int getFloor() const;
    int getPostalCode() const;

};


#endif //Q1_ADDRESS_H
