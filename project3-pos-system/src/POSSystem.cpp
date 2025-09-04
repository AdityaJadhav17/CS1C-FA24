#include "POSSystem.h"
#include <iostream>
#include <iomanip>
using namespace std;

void POSSystem::addMenuItem(const string& name, double cost, double sales_price)
{
    menu.emplace_back(name, cost, sales_price);
}

void POSSystem::addOrder(const string& item_name, int quantity)
{
    for (const auto& item : menu)
    {
        if (item.name == item_name)
        {
            orders.emplace_back(item, quantity);
            return;
        }
    }
    cerr << "Error: Menu item not found - " << item_name << endl;
}

void POSSystem::generateReports() const
{
    double total_cost = 0.0;
    double total_revenue = 0.0;
    double total_profit = 0.0;
    cout << fixed << setprecision(2);
    cout << "\nItem-wise Profit Report:\n";
    cout << "-----------------------------------------------\n";
    cout << left << setw(15) << "Item"
    << right << setw(10) << "Cost"
    << setw(10) << "Revenue"
    << setw(10) << "Profit" << "\n";
    cout << "-----------------------------------------------\n";

    for (const auto& order : orders)
    {
      double item_cost = order.item.cost * order.quantity;
      double item_revenue = order.item.sales_price * order.quantity;
      double item_profit = item_revenue - item_cost;

      total_cost += item_cost;
      total_revenue += item_revenue;
      total_profit += item_profit;

      cout << left << setw(15) << order.item.name
           << right << setw(10) << item_cost
           << setw(10) << item_revenue
           << setw(10) << item_profit << "\n";
    }

    cout << "\nTotal Report:\n";
    cout << "-----------------------------------------------\n";
    cout << left << setw(15) << "Total Cost:"
         << right << setw(10) << total_cost << "\n"
         << left << setw(15) << "Total Revenue:"
         << right << setw(10) << total_revenue << "\n"
         << left << setw(15) << "Total Profit:"
        << right << setw(10) << total_profit << "\n";
}

ostream& operator<<(ostream& os, const POSSystem& pos)
{
    os << "\nPOS System Menu:\n";
    os << "-----------------------------------------------\n";
    os << left << setw(15) << "Item"
       << right << setw(10) << "Cost"
       << setw(10) << "Price" << "\n";
    os << "-----------------------------------------------\n";

    for (const auto& item : pos.menu)
    {
        os << item << "\n";
    }

    os << "\nOrders:\n";
    os << "-----------------------------------------------\n";
    os << left << setw(15) << "Item"
       << right << setw(10) << "Cost"
       << setw(10) << "Price"
       << setw(10) << "Quantity" << "\n";
    os << "-----------------------------------------------\n";

    for (const auto& order : pos.orders)
    {
        os << order << "\n";
    }

    return os;
}
