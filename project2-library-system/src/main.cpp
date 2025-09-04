#include "LibraryStorage.h"
#include "Book.h"
#include "Movie.h"
#include "Magazine.h"

int main()
{
    LibraryStorage library;
    try
    {
      // --- Adding Items ---
    cout << "\n--- Adding Items to Storage ---" << endl;
    Book *book1 = new Book("B101", "A self-help book on building habits", "BK001", "Atomic Habits", "James Clear", "2018");
    Movie *movie1 = new Movie("M101", "A superhero blockbuster movie", "MV001", "Avengers: Endgame", "Anthony and Joe Russo", {"Robert Downey Jr.", "Chris Evans"});
    Magazine *magazine1 = new Magazine("MG101", "Exploring the future of AI", "MGZ001", "December 2024", "AI in Everyday Life");

    library.addItem(book1, 0, 0);
    library.addItem(movie1, 1, 5);
    library.addItem(magazine1, 2, 10);
    library.printStorage();

    // --- Checking Out Items ---
    cout << "\n--- Checking Out an Item ---" << endl;
    cout << "Checking out 'Atomic Habits' from Shelf 1, Compartment 1." << endl;
    string person = "Ben Affleck";
    string dueDate = "11/15/2024";
    Item *checkedOutItem = library[make_pair(0, 0)];
    cout << "Checked-out item: " << *checkedOutItem << endl;
    cout << "Checked out by: " << person << ", Due Date: " << dueDate << endl;
    library[make_pair(0, 0)] = nullptr;

    // --- Checking In Items ---
    cout << "\n--- Checking In an Item ---" << endl;
    cout << "Checking in 'Atomic Habits' back to Shelf 1, Compartment 1." << endl;
    library[make_pair(0, 0)] = checkedOutItem;
    library.printStorage();

    // --- Swapping Items ---
    cout << "\n--- Swapping Items ---" << endl;
    cout << "Swapping items between Shelf 1, Compartment 1 and Shelf 2, Compartment 6." << endl;
    library.swapItems(0, 0, 1, 5);
    library.printStorage();

    // --- Error Handling ---
    cout << "\n--- Error Handling for Swapping ---" << endl;
    cout << "Attempting to swap an item with an empty compartment (Shelf 3, Compartment 15)." << endl;
        try
        {
            library.swapItems(0, 0, 2, 14);
        }
        catch (const runtime_error &e)
        {
            cout << "Expected Error: " << e.what() << endl;
        }

    library.printStorage();
    }
    catch (const exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }
    
    return 0;
}