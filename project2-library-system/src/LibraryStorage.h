#ifndef LIBRARYSTORAGE_H
#define LIBRARYSTORAGE_H

#include "Item.h"
#include <stdexcept>

class LibraryStorage
{
    static const int MAX_SHELVES = 10;
    static const int MAX_COMPARTMENTS = 15;
    Item *storage[MAX_SHELVES][MAX_COMPARTMENTS]{};
public:
    LibraryStorage();
    ~LibraryStorage();

    Item *&operator[](pair<int, int> location);
    void addItem(Item *item, int shelf, int compartment);
    void swapItems(int shelf1, int compartment1, int shelf2, int compartment2);
    void printStorage();
};

#endif
