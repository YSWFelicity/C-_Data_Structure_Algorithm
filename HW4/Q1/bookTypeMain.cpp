#include <iostream>
#include "bookTypeImp.h"

using namespace std;

int main()
{
//Prompt the message on a screen
    cout << "\n***********Books as an ADT bookType*************";

//Declare an array of 100
//components of type bookType
    bookType numBooks[100];

//Declare variables
    string str;
    double price;
    int copies;
    char userChoice;
    int count = 0;

    do
    {
        //Prompt and read the input from the user
        cout << "\n\n\tEnter the book Title: ";
        cin >> str;
        numBooks[count].setTitle(str);
        int j = 0;
        do
        {
            cout << "\tEnter the author Name : ";
            cin >> str;
            numBooks[count].setAuthor(str);
            j++;
            cout << "\n\tMore authors ( Y/N ) ? ";
            cin >> userChoice;
        } while (j < 4 && tolower(userChoice) != 'n');
        cout << "\tEnter publisher name: ";
        cin >> str;
        numBooks[count].setPublisher(str);
        cout << "\tEnter the ISBN Number: ";
        cin >> str;
        numBooks[count].setISBN(str);
        cout << "\n\tEnter the price: ";
        cin >> price;
        numBooks[count].setPrice(price);

        // Prompt and read number of copies
        cout << "\tEnter copies : ";
        cin >> copies;
        numBooks[count].setCopies(copies);
        count++;
        cout << "\n\tEnter more books (Y/N) ? ";
        cin >> userChoice;
        //    Convert to lower case
        if (userChoice < 92)
            userChoice += 32;

    } while (userChoice != 'n');    //    end do-while

    do
    {
        //    search for a book using title and ISBN
        cout << "\n\tSearch for a book by its title: T";
        cout << "\n\tSearch for a book by its ISBN : I";
        cout << "\n\tUpdate the number of copies   : U";
        cout << "\n\tExit                          : E";
        cout << "\n\n\tEnter your choice           : ";
        cin >> userChoice;
        int i;
        char T, I, U, E;
        switch (toupper(userChoice))
        {
            //    Search for a book by its title
            case 'T': cout << "\n\tEnter book title to search : ";
                cin >> str;

                for (i = 0; i < count; i++)
                    if (numBooks[i].compareTitle(str))
                        break;

                if (i == count)
                    cout << "\n\tBook not found.";
                else
                    cout << "\n\tBook found.";
                break;

                //    search for a book by its ISBN number
            case 'I':cout << "\n\tEnter ISBN number to search : ";
                cin >> str;

                for (i = 0; i < count; i++)
                    if (numBooks[i].compareISBN(str))
                        break;

                if (i == count)
                    cout << "\n\tBook not found.";
                else
                    cout << "\n\tBook found.";

                break;

                // Update the copies of the book
            case 'U':    cout << "\n\tEnter book title to search : ";
                cin >> str;

                for (i = 0; i < count; i++)
                    if (numBooks[i].compareTitle(str))
                        break;

                if (i == count)
                    cout << "\n\tBook not found.";
                else
                {
                    cout << "\n\tEnter the number of copies ";
                    cin >> copies;
                    numBooks[i].updateCopies(copies);
                } break;
                //For exit the choice
            case 'E':
                return 0;
        }
    } while (true);
    return 0;
}
