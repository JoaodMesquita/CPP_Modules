
*This project has been created as part of the 42 curriculum by joapedro.*

# CPP Module 00 – 42 Project

📖 **Description**

CPP Module 00 is the first C++ project of the 42 curriculum. Its purpose is to introduce the fundamentals of C++ and object-oriented programming while transitioning from procedural programming in C.

Throughout this module, you will learn the basic syntax and concepts that distinguish C++ from C, including:

* Namespaces
* Classes and objects
* Member functions
* Constructors and destructors
* Attributes
* Static members
* Constant members
* Standard input/output streams (`std::cin` / `std::cout`)
* Code organization using header (`.hpp`) and source (`.cpp`) files

The module is divided into three exercises, each focusing on different core C++ concepts.

---

## ⚙️ Instructions

### 🛠️ Compilation

Enter the desired exercise directory and compile the project:

```bash
cd ex00
make
```

Replace `ex00` with the corresponding exercise (`ex01` or `ex02`).

The Makefile compiles the project using:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

---

## 📂 Exercises

### 📢 ex00 — Megaphone

A simple introduction to C++.

**Concepts covered:**

* Command-line arguments
* `std::string`
* `std::cout`
* Basic program structure

Run with:

```bash
./megaphone "Hello World!"
```

---

### 📞 ex01 — My Awesome PhoneBook

Implement a simple phonebook application using classes.

**Concepts covered:**

* Classes
* Objects
* Encapsulation
* User input
* Data formatting
* Arrays of objects

Run with:

```bash
./phonebook
```

---

### 💼 ex02 — The Job Of Your Dreams

Implement an account management system using static members.

**Concepts covered:**

* Constructors
* Destructors
* Static attributes
* Static member functions
* Object lifetime

Run with:

```bash
./account
```

---

## 📁 Project Structure

```text
CPP00/
├── ex00/
├── ex01/
├── ex02/
└── README.md
```

Each exercise contains its own source files and Makefile.

---

## 📚 Learning Objectives

By completing this module, you should understand:

* The differences between C and C++
* Basic object-oriented programming
* Class creation and usage
* Constructors and destructors
* Static class members
* Member functions
* Input/output streams
* Project organization in C++

---

## ⚠️ Notes

* All exercises must compile with:

  * `-Wall`
  * `-Wextra`
  * `-Werror`
  * `-std=c++98`
* Follow the file names and requirements specified in the subject.
* Respect the Orthodox Canonical Form whenever required in later modules.
* Read each exercise carefully—examples often contain additional requirements not explicitly stated in the subject.

---

## 📚 Resources

### C++ Reference

* https://en.cppreference.com/w/cpp
* https://cplusplus.com/doc/tutorial/

### C++98

* ISO C++98 Standard
* https://isocpp.org/

### Documentation

* `man c++`
* `man make`

