#include "PhoneBook.hpp"
#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>

PhoneBook::PhoneBook() : currentIndex(0), countOfMember(0) {}

void PhoneBook::add()
{
    std::system("clear");
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
    
    std::cout << "Enter First Name: ";
    std::cin.ignore();
    std::getline(std::cin, firstName);
    std::system("clear");

    std::cout << "Enter Last Name: ";
    std::getline(std::cin, lastName);
    std::system("clear");
    
    std::cout << "Enter Nickname: ";
    std::getline(std::cin, nickname);
    std::system("clear");

    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, phoneNumber);
    std::system("clear");

    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin, darkestSecret);
    std::system("clear");

    contacts[currentIndex].setFirstName(firstName);
    contacts[currentIndex].setLastName(lastName);
    contacts[currentIndex].setNickname(nickname);
    contacts[currentIndex].setPhoneNumber(phoneNumber);
    contacts[currentIndex].setDarkestSecret(darkestSecret);

    currentIndex = (++currentIndex) % COUNT;
    countOfMember = (countOfMember < COUNT) ? ++countOfMember : COUNT;
    std::cout << GREEN << "Contact added SUCCESSFULLY! " << RESET << "[" << countOfMember << "/" << COUNT << "]" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
}
int PhoneBook::getCountOfMember() const
{
    return countOfMember;
}

void PhoneBook::search()
{
    std::system("clear");
    if (countOfMember == 0)
    {
        std::system("clear");
        std::cout << "PhoneBook is " << RED << "EMPTY!" << RESET << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    else
    {
        std::string enes;
        std::string tmp;

        std::system("clear");
        std::cout << HEADER;
        for (int i = 0; i < countOfMember; i++) 
        {
            std::cout << "|"
                      << std::setw(10) << i + 1 << "|"
                      << std::setw(10) << contacts[i].getFirstName() << "|"
                      << std::setw(10) << contacts[i].getLastName() << "|"
                      << std::setw(10) << contacts[i].getNickname() << "|"
                      << std::endl;
            if (i == (countOfMember - 1))
                std::cout << LAST_LAYER;
            else
                std::cout << LAYER;
        }
        std::cin >> enes;
    }
}