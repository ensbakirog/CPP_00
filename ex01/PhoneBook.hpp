#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

    #include "Contact.hpp"

    #define COUNT 8

    #define INTERFACE \
        "┌───────────────────────────┐\n" \
        "│                           │\n" \
        "│         PhoneBook         │\n" \
        "│                           │\n" \
        "├───────────────────────────┤\n" \
        "│            ADD            │\n" \
        "├───────────────────────────┤\n" \
        "│          SEARCH           │\n" \
        "├───────────────────────────┤\n" \
        "│           EXIT            │\n" \
        "└───────────────────────────┘\n"

    class PhoneBook
    {
    private:
        Contact contacts[COUNT];
    public:
        void add();
    };
#endif