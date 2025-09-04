#ifndef POSSYSTEM_H
#define POSSYSTEM_H

#include <vector>
#include "MenuItem.h"
#include "Order.h"
using namespace std;

// POSSystem Class: Manages the restaurant system by maintaining the menu and handling orders.
class POSSystem
{
private:
    vector<MenuItem> menu; // Stores the list of menu items.
    vector<Order> orders; // Stores the list of orders.
public:
    // Adds a new menu item with its cost and sales price.
    void addMenuItem(const string& name, double cost, double sales_price);
    
    // Adds a customer order by matching the item name to the menu.
    void addOrder(const string& item_name, int quantity);
    
    // Generates detailed reports including item-wise and total profit.
    void generateReports() const;
    
    // Overloads the output operator for printing the state of the POS system.
    friend ostream& operator<<(ostream& os, const POSSystem& pos);
};

#endif