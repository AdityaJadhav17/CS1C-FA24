#include "Item.h"

Item::Item(string name, string description, string id)
    : name(name), description(description), id(id) {}

ostream &operator<<(ostream &os, const Item &item)
{
    item.displayDetails(os);
    return os;
}
