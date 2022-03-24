//
// Created by Yingshu Wang on 3/23/22.
//

#ifndef TEST_CUSTOMERDATA_H
#define TEST_CUSTOMERDATA_H
#include "PersonData.h"


// CustomerData class declaration
class CustomerData : public PersonData
{
private:
    int block;
    int unit;
    int floor;
    int postalCode;


public:
    // Constructors #1
    CustomerData();
    // Constructors #2
    CustomerData(string firstName, string middleName, string lastName, string street, string city, string country, int block, int unit, int floor, int postalCode);

    // Mutator functions
    void setBlock(int block);
    void setUnit(int unit);
    void setFloor(int floor);
    void setPostalCode(int postalCode);

    // Accessors functions
    int getBlock() const;
    int getUnit() const;
    int getFloor() const;
    int getPostalCode() const;

};

#endif //TEST_CUSTOMERDATA_H
