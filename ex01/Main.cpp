#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    PhoneBook phone;
    std::string option;

    do
    {
        std::system("clear");
        std::cout << INTERFACE << std::endl;
        std::cout << "Select a option -> ";
        std::cin >> option;

        if (option == "ADD")
            phone.add();
        else if (option == "SEARCH")
            std::cout << "SEARCHİNG..." << std::endl;
        else if (option == "EXIT")
            std::cout << "Exiting program..." << std::endl;
        else
            std::cout << "Invalid selection! Please try again." << std::endl;
    } while (option != "EXIT");

    return EXIT_SUCCESS;
}
