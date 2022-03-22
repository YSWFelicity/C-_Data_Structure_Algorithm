//
// Created by Yingshu Wang on 3/21/22.
//

#include "birthday.h"
#include <iostream>
using namespace std;

Birthday::Birthday(int y, int m, int d) : year(y), month(m), day(d) {}

void Birthday::printDate() {
    cout << year << "/" << month << "/" << day << endl;
}