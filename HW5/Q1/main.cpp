#include <iostream>
#include "Address.h"

// Function to display the information of person
void DisplayPerson(Address c)
{
    string result;

    // Display all information of the person
    cout << "-----------" << endl
         << "First Name: " << c.getfirstName() << endl
         << "Middle Name: " << c.getmiddleName() << endl
         << "Last Name: " << c.getlastName() << endl
         << "Street: " << c.getStreet() << endl
         << "City: " << c.getCity() << endl
         << "Country: " << c.getCountry() << endl
         << "Block: " << c.getBlock() << endl
         << "Unit: " << c.getUnit() << endl
         << "Floor: " << c.getFloor() << endl
         << "postalCode: " << c.getPostalCode() << endl;
}

int main()
{
    // Create the first instance of person
    Address person1;

    // Add information to person1
    person1.setfirstName("Joan");
    person1.setmiddleName("Smith");
    person1.setlastName("Hank");
    person1.setStreet("123 Main Street");
    person1.setCity("Seattle");
    person1.setCountry("the US");
    person1.setBlock(45);
    person1.setUnit(110);
    person1.setFloor(2);
    person1.setPostalCode(12345);

    // Display the information of person 1
    cout << "Person #1" << endl;
    DisplayPerson(person1); // Call function DisplayPerson

    // Create the second instance of Person and add information to it
    Address person2("Jones", "Jenny", "Wang", "555 East Street", "Portland", "the US", 88, 36, 5, 654321);

    // Display the information of person 2
    cout << "Person #2" << endl;
    DisplayPerson(person2); // Call function DisplayPerson

    return 0;
}