#include <iostream>
#include "CustomerData.h"

// Function to display the information of customerData
void DisplayCustomer(CustomerData c)
{
    string result;

//    // If getMailingList() == 1, set result = Yes
//    if (c.getMailingList() == 1)
//        result = "Yes";
//    else // Else getMailingList() == 0, set result = No
//        result = "No";

    // Display all information of customer
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
    // Create the first instance of CustomerData
    CustomerData person1;

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

    // Display the information of customer 1
    cout << "Customer #1" << endl;
    DisplayCustomer(person1); // Call function DisplayCustomer

    // Create the second instance of CustomerData and add information to it
    CustomerData person2("Jones", "Jenny", "Wang", "555 East Street", "Portland", "the US", 88, 36, 5, 654321);

    // Display the information of customer 2
    cout << "Customer #2" << endl;
    DisplayCustomer(person2); // Call function DisplayCustomer

    return 0;
}