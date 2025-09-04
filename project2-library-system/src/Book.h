#ifndef BOOK_H
#define BOOK_H

#include "Item.h"

class Book : public Item
{
    string title, author, copyrightDate;
public:
    Book(string name, string description, string id, string title, string author,
string copyrightDate);
    void displayDetails(ostream &os) const override;
};

#endif
