#include "AddressBook.h"
#include <iostream>
using namespace std;

int main() {
// Print the entries
Entry e1("John Doe", "john@doe.com", "123-456-7890");
Entry e2("Jane Doe", "jane@doe.com", "451-231-2312");
Entry e3("Patrick Jones", "patrick@gmail.com", "234-231-2312");

// Create the AddressBook and add entries to it
AddressBook ab1;
ab1.add(e1);
ab1.add(e2);
ab1.add(e3);

cout << ab1; // Printing AddressBook using overload operator

// Create one more AddressBook and add some entries
AddressBook ab2;
ab2.add(e3);

// Combine ab1 and ab2 using the + operator
AddressBook combined = ab1 + ab2;
cout << combined;

// Repeat the AddressBook entries 2 times
AddressBook repeated = ab1 * 2;
cout << repeated;

return 0;
}
