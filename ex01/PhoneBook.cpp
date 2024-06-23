#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

void runPhoneBook()
{
    int choice;

    do {
        std::system("clear");
        std::cout << INTERFACE << std::endl;
		std::cout << "Select a option: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Add selected." << std::endl;
            break;
        case 2:
            std::cout << "Search selected." << std::endl;
            break;
        case 3:
            std::cout << "Exiting program..." << std::endl;
            break;        
        default:
            std::cout << "Invalid selection! Please try again." << std::endl;
            break;
        }

    } while (choice != 3);
}

int main()
{
    runPhoneBook();
    return EXIT_SUCCESS;
}