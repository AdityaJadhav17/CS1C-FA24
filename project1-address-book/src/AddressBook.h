#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include "Entry.h"
#include <iostream>
using namespace std;

class AddressBook
{
private:
    Entry* entries;
    int size;
    int capacity;
    void resize();

public:
    AddressBook();
    ~AddressBook();
    void add(const Entry& entry);
    const Entry* operator[](int index) const;
    friend ostream& operator<<(ostream& os, const AddressBook& ab);
    AddressBook operator+(const AddressBook& other) const;
    AddressBook operator*(int times) const;
};

#endif
