#pragma once

#include "Contact.hpp"

#define COUNT 8

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#define INTERFACE \
    "┌───────────────────────────┐\n" \
    "│                           │\n" \
    "│         " GREEN "PhoneBook" RESET "         │\n" \
    "│                           │\n" \
    "├───────────────────────────┤\n" \
    "│            " BLUE "ADD" RESET "            │\n" \
    "├───────────────────────────┤\n" \
    "│          " YELLOW "SEARCH" RESET "           │\n" \
    "├───────────────────────────┤\n" \
    "│           " RED "EXIT" RESET "            │\n" \
    "└───────────────────────────┘\n"
    
#define HEADER \
    "---------------------------------------------\n" \
    "|     index|      name|  lastname|  nickname|\n" \
    "|----------|----------|----------|----------|\n"

#define LAYER \
    "|----------|----------|----------|----------|"

#define LAST_LAYER \
    "---------------------------------------------"

class PhoneBook
{
private:
    Contact contacts[COUNT];
    int currentIndex;
    int countOfMember;
public:
    PhoneBook();
    ~PhoneBook();
    void add();
    void search();
    int getCountOfMember() const;
};