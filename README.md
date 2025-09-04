# CS1C - Advanced C++ Programming Concepts

[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=flat&logo=visual-studio-code&logoColor=white)](https://code.visualstudio.com/)

## 📋 Course Overview

This repository contains coursework for CS1C - Advanced C++ Programming Concepts. The course focuses on advanced C++ programming concepts, object-oriented design principles, and practical implementation of complex systems using modern C++ techniques.

## 🎯 Learning Objectives

- **Object-Oriented Programming**: Mastery of encapsulation, inheritance, and polymorphism
- **Advanced C++ Features**: Dynamic memory management, operator overloading, and STL containers
- **System Design**: Modular architecture and separation of concerns
- **Data Structures**: Implementation of complex data storage and retrieval systems
- **Modern C++ Practices**: Utilization of STL vectors and contemporary C++ techniques

## 🛠️ Development Environment

- **IDE**: Visual Studio Code
- **Language**: C++ (C++11 or later)
- **Compiler**: GCC/G++ or MSVC
- **Build System**: Makefile or integrated compiler

## 📁 Repository Structure

```
CS1C/
├── README.md
├── LICENSE
├── .gitignore
├── project1-address-book/
│   ├── src/
│   │   ├── AddressBook.h
│   │   ├── AddressBook.cpp
│   │   ├── Entry.h
│   │   ├── Entry.cpp
│   │   └── main.cpp
│   ├── docs/
│   │   └── Project1-AddressBook.pdf
│   └── output/
│       └── output.txt
├── project2-library-system/
│   ├── src/
│   │   ├── LibraryStorage.h
│   │   ├── LibraryStorage.cpp
│   │   ├── Item.h
│   │   ├── Item.cpp
│   │   ├── Book.h
│   │   ├── Book.cpp
│   │   ├── Movie.h
│   │   ├── Movie.cpp
│   │   ├── Magazine.h
│   │   ├── Magazine.cpp
│   │   └── main.cpp
│   ├── docs/
│   │   └── Project2-LibrarySystem.pdf
│   └── output/
│       └── output.txt
└── project3-pos-system/
    ├── src/
    │   ├── MenuItem.h
    │   ├── MenuItem.cpp
    │   ├── Order.h
    │   ├── Order.cpp
    │   ├── POSSystem.h
    │   ├── POSSystem.cpp
    │   └── main.cpp
    ├── docs/
    │   ├── Project3-PosSystem.pdf
    └── output/
        └── output.txt
```

## 🔬 Project Descriptions

### Exam 1: Dynamic Address Book System
**Focus**: Dynamic Arrays, Pointers, and Operator Overloading

A comprehensive address book implementation featuring:
- **Dynamic Memory Management**: Custom dynamic array implementation with automatic resizing
- **Operator Overloading**: `[]`, `<<`, `+`, and `*` operators for intuitive data manipulation
- **Data Management**: Full name, email, and telephone number storage and retrieval

**Key Features**:
- Dynamic capacity expansion (doubles when full)
- Safe array access with bounds checking
- Address book merging and multiplication operations
- Custom print formatting

### Exam 2: Library Inventory Management System
**Focus**: Object-Oriented Design, Inheritance, and Polymorphism

A sophisticated library management system with:
- **Storage Architecture**: 2D array-like structure with shelf/compartment organization
- **Item Hierarchy**: Base `Item` class with specialized `Book`, `Movie`, and `Magazine` derivatives
- **Checkout System**: Complete item tracking with due dates and patron information
- **Advanced Operations**: Item swapping, status reporting, and inventory management

**Key Features**:
- 15-compartment shelves with `[][]` operator access
- Polymorphic item handling with virtual functions
- Comprehensive checkout/checkin workflow
- Error handling for invalid operations

### Final Project: Restaurant Point of Sale System
**Focus**: Modern C++ Techniques and System Integration

A complete POS system for restaurant operations featuring:
- **Menu Management**: Hamburger, Cheeseburger, Fries, Soda, and Milkshake items
- **Order Processing**: Multi-item orders with quantity tracking
- **Financial Analysis**: Cost, revenue, and profit calculations
- **Reporting System**: Comprehensive business intelligence reports

**Key Features**:
- STL vector-based data storage
- Automated profit/loss analysis
- Modular design with multiple source files
- Operator overloading for streamlined operations

## 🚀 Getting Started

### Prerequisites
```bash
# Ensure you have a C++ compiler installed
g++ --version

# For Windows users with MSVC
cl
```

### Building and Running Projects

Each project can be compiled independently:

```bash
# Navigate to project directory
cd exam1-address-book/src

# Compile
g++ -std=c++11 -o address_book *.cpp

# Run
./address_book
```

### Project-Specific Instructions

Detailed build and execution instructions are available in each project's `docs/` directory.

## 📊 Core C++ Concepts Demonstrated

- **Class Design**: Implementation of robust class structures with proper encapsulation
- **Constructor/Destructor Patterns**: Resource management and object initialization
- **Operator Overloading**: Intuitive interfaces through custom operator implementations
- **Inheritance & Polymorphism**: Base/derived class relationships with virtual functions
- **Dynamic Memory Management**: Custom dynamic arrays and proper resource cleanup
- **Exception Safety**: Robust error handling and program stability
- **File I/O Operations**: Stream-based input/output programming
- **Type Conversions**: Safe and efficient data type transformations
- **STL Integration**: Modern C++ standard library utilization

## 📝 Academic Integrity

This repository contains academic coursework completed individually. All implementations follow course guidelines and demonstrate original problem-solving approaches within the specified constraints.

## 📄 License

This repository is for educational purposes. Please respect academic integrity policies when referencing this work.

---

*Completed as part of CS1C coursework focusing on advanced C++ programming and system design principles.*
