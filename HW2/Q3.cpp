#include<iostream>

using namespace std;

int main() {

    int x, n;
    cout<<"Enter string size: ";
    cin>>n;

    //Declare dynamic character array
    char *arr = new char[n];
    cout << "Enter a string: ";
    for (int i = 0; i < n; i++)
    {
        //Get the string and store the string in dynamic character array
        cin>>arr[i];
    }

    cout << "Entered string: ";
    //Display the entered string
    for (x = 0; x < n; x++) {
        cout << arr[x];
    }

    cout<<"\nString in uppercase: ";
    //Display the string in uppercase letters
    for (x = 0; x < n; x++) {
        putchar(toupper(arr[x]));
    }

    //Free the dynamically allocated array
    delete [] arr;
    return 0;

}