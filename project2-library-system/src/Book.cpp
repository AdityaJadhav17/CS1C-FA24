#include "Book.h"

Book::Book(string name, string description, string id, string title, string author,
string copyrightDate)
    : Item(name, description, id), title(title), author(author),
copyrightDate(copyrightDate) {}

void Book::displayDetails(ostream &os) const
{
    os << "Book: " << title << ", Author: " << author
    << ", Copyright Date: " << copyrightDate
    << ", Name: " << name << ", Description: " << description
    << ", ID: " << id;
}
