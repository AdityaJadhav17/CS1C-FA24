# Project 2: Library Inventory Management System

## 📋 Project Overview

A sophisticated library inventory management system implementing object-oriented design principles, inheritance hierarchies, and polymorphic behavior. The system manages physical storage of library items with complete checkout/checkin functionality and comprehensive reporting capabilities.

## 🎯 Learning Objectives

- **Inheritance & Polymorphism**: Multi-level class hierarchies with virtual functions
- **Operator Overloading**: Custom operators for intuitive system interaction
- **Encapsulation**: Proper data hiding and controlled access methods
- **System Design**: Complex multi-component system architecture

## 📊 Technical Requirements

### Storage Architecture

1. **Physical Structure**
   - Library organized into shelves
   - Each shelf contains exactly 15 compartments
   - Each compartment holds a single item
   - Support for `libraryInventory[shelf][compartment]` access pattern

2. **Item Hierarchy**
   ```cpp
   Item (Base Class)
   ├── Book
   ├── Movie
   └── Magazine
   ```

### Item Properties

**Base Item Class:**
- `name`: Item identifier
- `description`: Item description
- `id`: Unique identifier

**Specialized Items:**
- **Book**: `title`, `author`, `copyrightDate`
- **Movie**: `title`, `director`, `mainActors` (collection)
- **Magazine**: `edition`, main article `title`

## 🏗️ Core Functionality

### 1. Item Management
- **Add Item**: Place items in empty compartments
- **Validation**: Ensure compartment is empty before adding

### 2. Checkout System
- **Checkout Process**: 
  - Record patron name
  - Set due date
  - Mark compartment as checked out (not empty)
- **Return Process**: Restore item to original compartment

### 3. Inventory Operations
- **Print Storage**: Display all checked-in items with locations
- **Print Checked-Out**: Show borrowed items with patron info and due dates
- **Swap Items**: Exchange contents between two compartments

### 4. Operator Overloading
- **`<<` Operator**: Display detailed item information
- **`[]` Operator**: Access compartments via `storage[shelf][compartment]`
- **Additional operators** as appropriate for system operations

## 🚀 Building and Running

### Prerequisites
- C++ compiler supporting C++11 or later
- Understanding of object-oriented programming concepts

### Compilation
```bash
# Navigate to project directory
cd exam2-library-system/src

# Compile all source files
g++ -std=c++11 -Wall -o library_system *.cpp

# Run the system
./library_system
```

### Project Structure
```
exam2-library-system/
├── src/
│   ├── Book.cpp               # Book implementation
│   ├── Book.h                 # Book specialization
│   ├── Item.cpp               # Base implementation
│   ├── Item.h                 # Base item class
│   ├── LibraryStorage.h       # Main storage system
│   ├── LibraryStorage.cpp     # Storage implementation
│   ├── Magazine.cpp           # Magazine implementation
│   ├── Magazine.h             # Magazine specialization
│   ├── Movie.cpp              # Movie implementation
│   ├── Movie.h                # Movie specialization
│   └── main.cpp               # System demonstration
├── docs/
│   └── Project2-Library-Inventory-System.pdf
└── output/
    └── output.txt             # Sample system output
```

## 🧪 Testing Requirements

The `main()` function must demonstrate:

1. **Item Creation**
   - Create instances of Books, Movies, and Magazines
   - Display item details using overloaded `<<` operator

2. **Storage Operations**
   - Add items to various compartments
   - Attempt to add items to occupied compartments (error handling)
   - Access items using `[shelf][compartment]` notation

3. **Checkout/Checkin Workflow**
   - Check out items with patron information
   - Display checked-out items report
   - Check in returned items
   - Show updated storage status

4. **Advanced Operations**
   - Swap items between compartments
   - Handle invalid swap attempts (empty compartments)
   - Comprehensive error handling demonstration

## 📈 Grading Criteria

1. **Correctness (Primary)**
   - All specified functionality works as designed
   - Proper inheritance and polymorphism implementation
   - Accurate checkout/checkin state management

2. **Code Quality (Major)**
   - Clean, modular, object-oriented design
   - Proper encapsulation and data hiding
   - Adherence to OOP principles

3. **Testing Coverage**
   - Comprehensive edge case testing
   - Error handling for invalid operations
   - Complete functionality demonstration

## 🔍 Key OOP Concepts Demonstrated

### Encapsulation
- Private data members with controlled public interface
- Validation logic hidden within class methods

### Inheritance
- Proper base/derived class relationships
- Virtual destructor for safe polymorphic deletion
- Protected member access in derived classes

### Polymorphism
- Virtual functions for specialized item display
- Runtime type resolution through base class pointers
- Uniform interface for different item types

## ⚠️ Error Handling Requirements

- **Bounds Checking**: Validate shelf and compartment indices
- **State Validation**: Prevent operations on empty compartments
- **Swap Validation**: Ensure both compartments contain items
- **Informative Messages**: Clear error reporting for invalid operations

## 🎯 Advanced Features

- **2D Array Access**: Natural `[shelf][compartment]` syntax
- **State Management**: Distinguish between empty, occupied, and checked-out states
- **Polymorphic Collections**: Store different item types in uniform containers
- **Comprehensive Reporting**: Multiple view perspectives on library status

---

*This project demonstrates mastery of object-oriented programming principles through a complex, real-world system design challenge.*
