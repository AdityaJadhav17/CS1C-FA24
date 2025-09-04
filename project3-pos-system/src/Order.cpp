#include "Order.h"
#include <iostream>
#include <iomanip>
using namespace std;

Order::Order(const MenuItem& i, int q)
    : item(i), quantity(q) {}

ostream& operator<<(ostream& os, const Order& order)
    {
        os << left << setw(15) << order.item.name
           << right << setw(10) << order.item.cost
           << setw(10) << order.item.sales_price
           << setw(10) << order.quantity;
  return os;
}
