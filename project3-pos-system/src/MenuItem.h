#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>
#include <ostream>
using namespace std;

// MenuItem Structure
struct MenuItem
{
    string name; // Name of the menu item.
    double cost; // Cost of the item.
    double sales_price; // Sales price of the item.
    
    MenuItem(const string& n, double c, double sp);

    // Overload output operator for easy printing of menu items.
    friend ostream& operator<<(ostream& os, const MenuItem& item);
};

#endif
