#include "PhoneBook.hpp"
#include <iostream>

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
}
int PhoneBook::getCountOfMember() const
{
    return countOfMember;
}

void PhoneBook::search()
{
    std::system("clear");
    
}