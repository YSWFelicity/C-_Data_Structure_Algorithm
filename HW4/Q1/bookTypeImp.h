//
// Created by Yingshu Wang on 2/24/22.
//

#ifndef Q1_BOOKTYPEIMP_H
#define Q1_BOOKTYPEIMP_H

#include<string>

using namespace std;

class bookType
{
public:
    bookType();
    void setTitle(string);
    string getTile();
    bool compareTitle(string);

    void setAuthor(string = "");
    void showAuthors();
    void updateAuthor(string = "");
    string *getAuthors();

    void setCopies(int);
    void showCopies();
    void updateCopies(int);
    int getCopies();


    void setPublisher(string);
    void showPublisher();
    void updatePublisher(string);
    string getPublisher();

    void setISBN(string);
    void showISBN();
    void updateISBN(string);
    string getISBN();
    bool compareISBN(string);

    void setPrice(double);
    void showPrice();
    void updatePrice(double);
    double getPrice();

private:
    string title;
    string authors[4];
    string publisher;
    string ISBN;
    double price;
    int copies;
    int authorsNo;
};


#endif //Q1_BOOKTYPEIMP_H
