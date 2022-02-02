#include <iostream>  

using namespace std;  

int main()  // main function
{  

int number, reverseNumber = 0, reminder;  //varible declaration  
cout << "Enter a number: ";  //prompt user to enter the number  
cin >> number;   //save the entered number into number variable  

while(number!=0)    //while number does not become zero.... remain in loop

{    

    reminder = number % 10;    // taken reminder of number    
    reverseNumber = reverseNumber*10+reminder;   //store the number digit into reverse order  
    number /=10; //decrease the number or shift the division to next digit 

}    

cout << "Reversed Number: " << reverseNumber << endl;    //print reversed number.  
return 0;  
}  