//
// Created by Yingshu Wang on 3/23/22.
//

#ifndef TEST_PERSONDATA_H
#define TEST_PERSONDATA_H

#include <string>

using namespace std;

class PersonData
{
private:
    string firstName;
    string middleName;
    string lastName;
    string street;
    string city;
    string country;
//    string phoneNumber;

public:
    // Constructors #1
    PersonData();
    // Constructors #2
    PersonData(string firstName, string middleName, string lastName, string street, string city, string country);

    // Mutator functions
    void setfirstName(string firstName);
    void setmiddleName(string middleName);
    void setlastName(string lastName);
    void setStreet(string street);
    void setCity(string city);
    void setCountry(string country);
//    void setPhoneNumber(string phoneNumber);

    // Accessors functions
    string getfirstName() const;
    string getmiddleName() const;
    string getlastName() const;
    string getStreet() const;
    string getCity() const;
    string getCountry() const;
//    string getPhoneNumber() const;
};

#endif //TEST_PERSONDATA_H
