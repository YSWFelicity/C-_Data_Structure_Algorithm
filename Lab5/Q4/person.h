//
// Created by Yingshu Wang on 3/21/22.
//

#ifndef Q4_PERSON_H
#define Q4_PERSON_H

#include <string>
using namespace std;

class Person {
public:
    Person(string n, Birthday b);
    void printInfo();

private:
    string name;
    Birthday bd;
};

#endif //Q4_PERSON_H
