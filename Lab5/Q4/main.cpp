#include <iostream>
#include "birthday.h"

using namespace std;

// default constructor
birthday::birthday()
{
    day = 1;
    month = 1;
    year = 2000;
}

// specific constructor
birthday::birthday(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

// setters
void birthday::setDay(int d)
{
    day = d;
}

void birthday::setMonth(int m)
{
    month = m;
}

void birthday::setYear(int y)
{
    year = y;
}

void birthday::setDmy(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

// getters
int birthday::getDay() const
{
    return day;
}

int birthday::getMonth() const
{
    return month;
}

int birthday::getYear() const
{
    return year;
}

// printf
void birthday::print() const
{
    cout << day << "/"
         << month << "/"
         << year;
}

// ostream operator
ostream& operator << (ostream& osObject, const birthday& date1) //creating an instance of a date class, i.e. date1
{
    osObject << date1.day
             << "/" << date1.month
             << "/" << date1.year;
    return osObject;
}

// istream operator
istream& operator >> (istream& isObject, birthday& date1)
{
    isObject >> date1.day >> date1.month >> date1.year;
    return isObject;
}

// Overloading "equal to" operator
bool birthday::operator==(const birthday& otherDate) const
{
    if (day == otherDate.day && month == otherDate.month
        && year == otherDate.year)
        return true;
    else
        return false;
}

// Overloading "not equal to" operator
bool birthday::operator!=(const birthday& otherDate) const
{
    return !(*this == otherDate);
}

// Overloading "less than or equal to" operator
bool birthday::operator<=(const birthday& otherDate) const
{
    return (*this < otherDate || *this == otherDate);
}

// Overloading "less than" operator
bool birthday::operator<(const birthday& otherDate) const
{
    if ((year < otherDate.year) ||
        (year == otherDate.year && month < otherDate.month) ||
        (year == otherDate.year && month == otherDate.month && day < otherDate.day))
        return true;
    else
        return false;
}

// Overloading "greater than or equal to" operator
bool birthday::operator>=(const birthday& otherDate) const
{
    return !(*this < otherDate);
}

// Overloading "greater than" operator
bool birthday::operator>(const birthday& otherDate) const
{
    return !(*this <= otherDate);
}