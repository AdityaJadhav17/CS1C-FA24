#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class Item
{
protected:
    string name, description, id;

public:
    Item(string name, string description, string id);
    virtual void displayDetails(ostream &os) const = 0;

    friend ostream &operator<<(ostream &os, const Item &item);

    virtual ~Item() {}
};

#endif
