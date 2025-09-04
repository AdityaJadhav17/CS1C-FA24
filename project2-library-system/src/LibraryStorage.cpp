#include "LibraryStorage.h"
#include <iostream>

LibraryStorage::LibraryStorage()
{
    for (int i = 0; i < MAX_SHELVES; i++)
    {
        for (int j = 0; j < MAX_COMPARTMENTS; j++)
        {
            storage[i][j] = nullptr;
        }
    }
}

LibraryStorage::~LibraryStorage()
{
    for (int i = 0; i < MAX_SHELVES; i++)
    {
        for (int j = 0; j < MAX_COMPARTMENTS; j++)
        {
            delete storage[i][j];
        }
    }
}

Item *&LibraryStorage::operator[](pair<int,int> location)
{
    int shelf = location.first;
    int compartment = location.second;

    if (shelf < 0 || shelf >= MAX_SHELVES || compartment < 0 || compartment >= MAX_COMPARTMENTS)
    {
        throw out_of_range("Invalid shelf or compartment.");
    }
    return storage[shelf][compartment];
}

void LibraryStorage::addItem(Item *item, int shelf, int compartment)
{
    if (storage[shelf][compartment] != nullptr)
    {
        throw runtime_error("Compartment is not empty.");
    }

    storage[shelf][compartment] = item;
}

void LibraryStorage::swapItems(int shelf1, int compartment1, int shelf2, int compartment2)
{
    if (storage[shelf1][compartment1] == nullptr || storage[shelf2][compartment2] == nullptr)
    {
        throw runtime_error("Cannot swap empty compartments.");
    }

    swap(storage[shelf1][compartment1],
    storage[shelf2][compartment2]);
}

void LibraryStorage::printStorage()
{
    for (int i = 0; i < MAX_SHELVES; i++)
    {
        for (int j = 0; j < MAX_COMPARTMENTS; j++)
        {
        if (storage[i][j] != nullptr)
            {
                cout << "Shelf " << i + 1
                << ", Compartment " << j + 1 << ": "
                << *storage[i][j] << endl;
            }
        }
    }
}
