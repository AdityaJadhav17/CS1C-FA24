#include "AddressBook.h"
using namespace std;

void AddressBook::resize ()
{
    capacity *= 2;
    Entry* new_entries = new Entry[capacity];
    for (int i = 0; i < size; i++)
    {
    new_entries[i] = entries[i];
    }
    delete[] entries;
    entries = new_entries;
}

AddressBook::AddressBook() : size(0), capacity(1)
{
    entries = new Entry[capacity];
}

AddressBook::~AddressBook()
{
    delete[] entries;
}

void AddressBook::add(const Entry& entry)
{
    if (size == capacity)
    {
        resize();
    }
    entries[size++] = entry;
}

const Entry* AddressBook::operator[](int index) const
{
    if (index < 0 || index >= size)
    {
        return nullptr;
    }
    return &entries[index];
}

ostream& operator<<(ostream& os, const AddressBook& ab)
{
    os << "------Address Book------\n";
    os << "Size: " << ab.size << "\n\n";
    for (int i = 0; i < ab.size; i++) {
    os << ab.entries[i].name << "\n";
    os << ab.entries[i].telephone << "\n";
    os << ab.entries[i].email << "\n\n";
    }
    os << "------------------------\n";
    return os;
}

AddressBook AddressBook::operator+(const AddressBook& other) const
{
    AddressBook result;
    for (int i = 0; i < size; i++)
    {
        result.add(entries[i]);
    }
    for (int i = 0; i < other.size; i++)
    {
        result.add(other.entries[i]);
    }
    return result;
}

AddressBook AddressBook::operator*(int times) const
{
    AddressBook result;
    for (int i = 0; i < times; i++)
    {
        for (int j = 0; j < size; j++)
      {
        result.add(entries[j]);
      }
    }
    return result;
}
