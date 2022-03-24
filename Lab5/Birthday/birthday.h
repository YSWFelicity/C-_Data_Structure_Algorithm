//
// Created by Yingshu Wang on 3/24/22.
//

#ifndef BIRTHDAY_BIRTHDAY_H
#define BIRTHDAY_BIRTHDAY_H

#include <iostream>

using namespace std;

class birthday
{
    friend ostream& operator << (ostream&, const birthday&); // method overloading
    friend istream& operator >> (istream&, birthday&);

public:

    // default constructor
    birthday();

    // specific constructor
    birthday(int d, int m, int y);

    // setters
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    void setDmy(int d, int m, int y);

    // getters
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    // printf
    void print() const;

    // Overloading operators
    bool operator<(const birthday& otherDate) const;
    bool operator>(const birthday& otherDate) const;
    bool operator==(const birthday& otherDate) const;
    bool operator<=(const birthday& otherDate) const;
    bool operator>=(const birthday& otherDate) const;
    bool operator!=(const birthday& otherDate) const;

    // Overloading math operations
    birthday operator++();
    birthday operator++(int);
    birthday operator--();
    birthday operator--(int);

private:

    // data members
    int day;
    int month;
    int year;
};

#endif //BIRTHDAY_BIRTHDAY_H
