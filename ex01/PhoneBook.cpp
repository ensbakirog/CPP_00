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
        int index;
        std::string tmp;

        std::system("clear");
        std::cout << HEADER;
        for (int i = 0; i < countOfMember; i++) 
        {
            std::cout << "|"
                      << std::setw(10) << i + 1 << "|"
                      << std::setw(10) << textDot(contacts[i].getFirstName(), 10) << "|"
                      << std::setw(10) << textDot(contacts[i].getLastName(), 10) << "|"
                      << std::setw(10) << textDot(contacts[i].getNickname(), 10) << "|"
                      << std::endl;
            if (i == (countOfMember - 1))
                std::cout << LAST_LAYER;
            else
                std::cout << LAYER << std::endl;
        }
        std::cout << "Select an index -> ";
        std::cin >> index;

        std::system("clear");
        std::cout << "First Name : " << contacts[index - 1].getFirstName() << std::endl;
        std::cout << "Last Name : " << contacts[index - 1].getLastName() << std::endl;
        std::cout << "Nickname : " << contacts[index - 1].getNickname() << std::endl;
        std::cout << "Phone Number : " << contacts[index - 1].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret : " << contacts[index - 1].getDarkestSecret() << std::endl;

        std::cout << "Please press enter to go back to the main menu" << std::endl;
        std::cin.ignore();
        std::cin.get();
    }
}

std::string PhoneBook::textDot(std::string str, int size)
{
    if ((int)str.length() <= size)
        return str;
    else
        return str.substr(0, size - 1) + ".";
}