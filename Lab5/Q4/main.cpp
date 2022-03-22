#include "birthday.h"
#include "person.h"
#include <string>

int main() {
    Birthday bd(1998, 1, 1);
    Person p("Apple", bd);
    p.printInfo();

    return 0;
}
