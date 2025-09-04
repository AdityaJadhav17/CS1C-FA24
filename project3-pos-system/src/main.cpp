#include "POSSystem.h"
#include <iostream>
using namespace std;

int main()
{
    POSSystem pos;

    // Initializing the system with menu items
    pos.addMenuItem("Hamburger", 2.00, 5.00);
    pos.addMenuItem("Cheeseburger", 2.50, 6.00);
    pos.addMenuItem("Fries", 1.00, 3.00);
    pos.addMenuItem("Soda", 0.50, 2.00);
    pos.addMenuItem("Milkshake", 1.50, 4.00);

    // Adding orders
    pos.addOrder("Hamburger", 3);
    pos.addOrder("Fries", 2);
    pos.addOrder("Milkshake", 1);
    pos.addOrder("Cheeseburger", 4);
    pos.addOrder("Soda", 5);

    // Generating reports
    pos.generateReports();
    cout << pos;

    return 0;
}
