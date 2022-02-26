//
// Created by Yingshu Wang on 2/24/22.
//

#include "bookTypeImp.h"
#include<iostream>

using namespace std;

bookType::bookType()
{
    title = "";
    for (int i = 0; i < 4; i++)
        authors[i] = "";
    publisher = "";
    ISBN = "";
    price = 0;
    copies = 0;
    authorsNo = 0;
}
//setter and getter methods
//Method definition of setTitle
void bookType::setTitle(string myTitle)
{
    title = myTitle;
}
//Method definition of getTitle
string bookType::getTile()
{
    return title;
}
//Method definition of compareTitle
bool bookType::compareTitle(string otherTitle)
{
    return (title.compare(otherTitle) == 0);
}
//Method definition of setAuthor
void bookType::setAuthor(string myAuthor)
{
    authorsNo = authorsNo % 4;
    if (myAuthor.compare("") == 0)
        return;
    else
    {
        authors[authorsNo] = myAuthor;

        authorsNo++;
    }
}
//Method definition of showAuthors
void bookType::showAuthors()
{
    for (int i = 0; i < authorsNo; i++)
        cout << authors[i] << ", ";
    cout << "\r\r";
}
//Method definition of updateAuthor
void bookType::updateAuthor(string myAuthor)
{
    setAuthor(myAuthor);
}
//Method definition of getAuthors
string *bookType::getAuthors()
{
    return authors;
}
//Method definition of setCopies
void bookType::setCopies(int myCopies)
{
    copies = myCopies;
}
//Method definition of showCopies
void bookType::showCopies()
{
    cout << "\n\tThe number of copies " << copies;
}
//Method definition of updateCopies
void bookType::updateCopies(int myCopies)
{
    copies = myCopies;
}
//Method definition of getCopies
int bookType::getCopies()
{
    return copies;
}
//Method definition of setPublisher
void bookType::setPublisher(string myPublisher)
{
    publisher = myPublisher;
}
//Method definition of showPublisher
void bookType::showPublisher()
{
    cout << publisher;
}
//Method definition of updatePublisher
void bookType::updatePublisher(string myPublisher)
{
    publisher = myPublisher;
}
//Method definition of getPublisher
string bookType::getPublisher()
{
    return publisher;
} // end function getPublisher

void bookType::setISBN(string myISBN)
{
    ISBN = myISBN;
}
//Method definition of showISBN
void bookType::showISBN()
{
    cout << ISBN;
}
//Method definition of updateISBN
void bookType::updateISBN(string myISBN)
{
    ISBN = myISBN;
}
//Method definition of getISBN
string bookType::getISBN()
{
    return ISBN;
}
//Method definition of compareISBN
bool bookType::compareISBN(string myISBN)
{
    return (myISBN.compare(ISBN) == 0);
}
//Method definition of setPrice
void bookType::setPrice(double myPrice)
{
    price = myPrice;
}
//Method definition of showPrice
void bookType::showPrice()
{
    cout << "\n\tThe book price is " << price;
}
//Method definition of updatePrice
void bookType::updatePrice(double myPrice)
{
    price = myPrice;
}//Method definition of getPrice
double bookType::getPrice()
{
    return price;
}