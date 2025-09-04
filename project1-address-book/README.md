# Porject 1: Dynamic Address Book System

## 📋 Project Overview

A comprehensive address book implementation demonstrating advanced C++ concepts including dynamic memory management, operator overloading, and custom data structures. This project focuses on creating a flexible, resizable contact management system without using standard library vectors.

## 🎯 Learning Objectives

- **Dynamic Arrays**: Implementation of custom dynamic arrays with automatic resizing
- **Pointers & Memory Management**: Safe memory allocation and deallocation
- **Operator Overloading**: Custom operators for intuitive data manipulation
- **Object-Oriented Design**: Proper class structure and encapsulation

## 📊 Technical Requirements

### Core Functionality

1. **Contact Storage**
   - Full name, email, and telephone number for each entry
   - Initial capacity of 1 entry
   - Automatic capacity doubling when full
   - **No vectors allowed** - must use dynamic arrays

2. **Operator Overloading**
   - `[]` operator: Access entries by index with bounds checking
   - `<<` operator: Print formatted address book contents
   - `+` operator: Merge two address books (creates copies)
   - `*` operator: Multiply address book contents by specified factor

### Key Features

- **Dynamic Resizing**: Capacity doubles automatically when adding to full address book
- **Bounds Checking**: Safe array access with null return for invalid indices
- **Memory Safety**: Proper copy semantics to prevent data corruption
- **Formatted Output**: Professional display format with separators

## 🏗️ Implementation Details

### Data Structure
```cpp
class AddressBook {
private:
    Contact* contacts;    // Dynamic array of contacts
    int capacity;         // Current allocated capacity
    int size;            // Number of actual entries
    
public:
    // Constructors, destructor, operators
    Contact& operator[](int index);
    AddressBook operator+(const AddressBook& other);
    AddressBook operator*(int multiplier);
    friend ostream& operator<<(ostream& os, const AddressBook& book);
};
```

### Sample Output Format
```
-------Address Book-------
Size: 3

John Doe
123-456-7890
john@doe.com

Jane Doe
321-231-2312
jane@doe.com

Patrick Jones
234-231-2312
patrick@email.com
-------------------------
```

## 🚀 Building and Running

### Prerequisites
- C++ compiler (g++, clang++, or MSVC)
- C++11 or later standard

### Compilation
```bash
# Navigate to project directory
cd project1-address-book/src

# Compile all source files
g++ -std=c++11 -Wall -o address_book *.cpp

# Run the program
./address_book
```

### Project Structure
```
exam1-address-book/
├── src/
│   ├── AddressBook.cpp    # Class implementation
│   ├── AddressBook.h      # Class declaration
│   ├── Entry.cpp        # Contact implementation
│   ├── Entry.h          # Contact structure
│   └── main.cpp           # Testing and demonstration
├── docs/
│   └── Project1-Address-Book.pdf    # Detailed specifications
└── output/
    └── output.txt  # Expected program output
```

## 🧪 Testing Requirements

The `main()` function demonstrates:

1. **Basic Operations**
   - Adding contacts to address book
   - Accessing contacts by index
   - Printing address book contents

2. **Dynamic Resizing**
   - Adding entries beyond initial capacity
   - Verification of automatic capacity expansion

3. **Operator Functionality**
   - Merging address books with `+` operator
   - Multiplying entries with `*` operator
   - Safe access with `[]` operator

4. **Edge Cases**
   - Out-of-bounds access handling
   - Empty address book operations
   - Memory management validation

## 📈 Grading Criteria

1. **Design (Major Focus)**
   - Proper class design and const correctness
   - Efficient pass-by-value vs pass-by-reference decisions
   - Clean separation of interface and implementation

2. **Functionality**
   - All operators work correctly
   - Dynamic resizing functions properly
   - Bounds checking prevents crashes

3. **Code Quality**
   - Object-oriented programming approach
   - Proper memory management (no leaks)
   - Addition of required constructors/destructors

4. **Deliverables**
   - Separate header (.h) and implementation (.cpp) files
   - Working main.cpp with comprehensive testing
   - Output text file demonstrating functionality

## 🔍 Key Concepts Demonstrated

- **Custom Dynamic Arrays**: Manual memory management without STL containers
- **Operator Overloading**: Making custom classes behave like built-in types
- **Copy Semantics**: Deep copying to prevent data corruption
- **Memory Management**: Proper allocation, reallocation, and cleanup
- **Bounds Safety**: Defensive programming practices

## ⚠️ Important Notes

- **No STL Vectors**: Must implement dynamic resizing manually
- **Memory Safety**: Ensure no memory leaks or dangling pointers
- **Copy Behavior**: `+` and `*` operators create independent copies
- **Testing Required**: Demonstrate all functionality in main.cpp

---

*This project emphasizes fundamental C++ memory management and operator overloading concepts essential for systems programming.*
