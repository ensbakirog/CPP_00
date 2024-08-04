# C++ Module 00 📚

Welcome to C++ Module 00! This repository contains exercises designed to teach the basics of C++ and Object-Oriented Programming (OOP). Solutions should adhere to the C++98 standard.

## Table of Contents 📖

1. [Introduction](#introduction)
2. [General Rules](#general-rules)
3. [Exercise 00: Megaphone](#exercise-00-megaphone)
4. [Exercise 01: My Awesome PhoneBook](#exercise-01-my-awesome-phonebook)

## Introduction 🚀

C++, developed by Bjarne Stroustrup as an extension of the C language, is a powerful general-purpose programming language. This module introduces the fundamentals of C++ and Object-Oriented Programming (OOP). Solutions must comply with the C++98 standard.

## General Rules 📜

- **Compiler:** `c++`
- **Compilation Flags:** Use `-Wall -Wextra -Werror` flags for compilation. These flags enable all warnings and treat them as errors.
- **Forbidden Functions:** You may not use C functions such as `malloc`, `printf`, `free`. STL (Standard Template Library) functions are also prohibited.
- **File Naming:** Adhere to the specified file naming conventions for each exercise. For example, use `ClassName.hpp` and `ClassName.cpp` for class definitions and implementations.
- **Header Files:** Header files should contain only declarations; implementation code is not allowed in header files.
- **Namespace and Friend Keywords:** The use of `using namespace` and `friend` keywords is prohibited unless otherwise stated.

## Exercise 00: Megaphone 🎤

I completed this exercise and here are the requirements for this project:

**Objective:** Develop a program that converts command-line arguments to uppercase.

### Requirements:
- **Input Processing:** The program should accept multiple command-line arguments and convert each argument to uppercase, then concatenate them.
- **Output:** The result should be printed in uppercase.
- **Edge Cases:** If no arguments are provided, the program should output a loud and unbearable feedback noise.

### Example Usage:
```sh
$> ./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

$> ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

$> ./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

## Exercise 01: My Awesome PhoneBook 📖📞

![video](https://github.com/user-attachments/assets/ff35442c-871c-48d5-80c6-0969ebbfe888)

I completed this project and here are the requirements for this project:

**Objective:** Create a phone book application that allows users to manage contact information.

### Requirements:
- **Storing Contact Information:**
  - The `PhoneBook` class should be designed to hold up to 8 contacts. When adding a 9th contact, the oldest one should be removed.
  - Use the `Contact` class to store information about each person.

- **Commands:**

![ADD](https://github.com/user-attachments/assets/18f03df5-4d9e-4437-91e9-9c23300387ad)

  - **ADD:** Adds a new contact. Prompts the user for first name, last name, nickname, phone number, and darkest secret.
  - **SEARCH:** Displays the stored contacts in a table format. The table includes columns for index, first name, last name, and nickname, with each column being 10 characters wide. Text should be right-aligned, and overly long text should be truncated with a period (’.').
  - **EXIT:** Closes the program and deletes all stored contacts.

### Example Commands:
- **ADD:** The user enters new contact information, which is added to the phone book.
- **SEARCH:** Displays a formatted list of contacts, allowing the user to select a specific index to view detailed information.
- **EXIT:** Closes the program.

### Notes:
- Dynamic memory allocation is prohibited; use fixed-size arrays.
- The contact list must be properly formatted and aligned.
- Handle user inputs and edge cases robustly.
