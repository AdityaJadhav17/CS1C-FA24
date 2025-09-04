#include "MenuItem.h"
#include <iostream>
#include <iomanip>
using namespace std;

MenuItem::MenuItem(const string& n, double c, double sp)
    : name(n), cost(c), sales_price(sp) {}

ostream& operator<<(ostream& os, const MenuItem& item)
{
        os << left << setw(15) << item.name
        << right << setw(10) << item.cost
        << setw(10) << item.sales_price;
    return os;
}
