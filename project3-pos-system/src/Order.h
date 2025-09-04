#ifndef ORDER_H
#define ORDER_H

#include "MenuItem.h"

// Order Structure
struct Order
{
    MenuItem item; // The menu item being ordered.
    int quantity; // Quantity of the menu item ordered.

    Order(const MenuItem& i, int q);

    // Overload output operator for structured display of orders.
    friend ostream& operator<<(ostream& os, const Order& order);
};

#endif
