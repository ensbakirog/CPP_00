#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include<unistd.h>

PhoneBook::PhoneBook() : currentIndex(0), countOfMember(0) {}

PhoneBook::~PhoneBook() {}

std::string textDot(std::string str, int size);
bool checkSpace(std::string text);
bool checkDigit(std::string index);

void PhoneBook::add()
{
    std::system("clear");
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    do {
        std::cout << "Enter First Name: ";
        std::getline(std::cin, firstName);
        std::system("clear");
        if (firstName.empty() || checkSpace(firstName)) {
            std::cout << "First Name Can't be " << RED << "EMPTY!" << RESET << std::endl;
            sleep(1);
            std::system("clear");
        }
    } while (firstName.empty() || checkSpace(firstName));

    do {
        std::cout << "Enter Last Name: ";
        std::getline(std::cin, lastName);
        std::system("clear");
        if (lastName.empty() || checkSpace(lastName)) {
            std::cout << "Last Name Can't be " << RED << "EMPTY!" << RESET << std::endl;
            sleep(1);
            std::system("clear");
        }
    } while (lastName.empty() || checkSpace(lastName));

    do {
        std::cout << "Enter Nickname: ";
        std::getline(std::cin, nickname);
        std::system("clear");
        if (nickname.empty() || checkSpace(nickname)) {
            std::cout << "Nickname Can't be " << RED << "EMPTY!" << RESET << std::endl;
            sleep(1);
            std::system("clear");
        }
    } while (nickname.empty() || checkSpace(nickname));

    do {
        std::cout << "Enter Phone Number: ";
        std::getline(std::cin, phoneNumber);
        std::system("clear");
        if (phoneNumber.empty() || checkSpace(phoneNumber)) 
        {
            std::cout << "Phone Number Can't be " << RED << "EMPTY!" << RESET << std::endl; 
            sleep(1);
            std::system("clear");
        }
        else if (checkDigit(phoneNumber))
        {
            std::cout << "Phone Number must be " << YELLOW << "NUMBER!" << RESET << std::endl;
            sleep(1);
            std::system("clear");
        }
    } while (phoneNumber.empty() || checkSpace(phoneNumber) || checkDigit(phoneNumber));

    do {
        std::cout << "Enter Darkest Secret: ";
        std::getline(std::cin, darkestSecret);
        std::system("clear");
        if (darkestSecret.empty() || checkSpace(darkestSecret)) {
            std::cout << "Darkest Secret Can't be " << RED << "EMPTY!" << RESET << std::endl;
            sleep(1);
            std::system("clear");
        }
    } while (darkestSecret.empty() || checkSpace(darkestSecret));

    contacts[currentIndex].setFirstName(firstName);
    contacts[currentIndex].setLastName(lastName);
    contacts[currentIndex].setNickname(nickname);
    contacts[currentIndex].setPhoneNumber(phoneNumber);
    contacts[currentIndex].setDarkestSecret(darkestSecret);

    currentIndex = (++currentIndex) % COUNT;
    countOfMember = (countOfMember < COUNT) ? ++countOfMember : COUNT;
    std::cout << GREEN << "Contact added SUCCESSFULLY! " << RESET << "[" << countOfMember << "/" << COUNT << "]" << std::endl;
    sleep(1);
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
        sleep(1);
    }
    else
    {
        std::string index;
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
                std::cout << LAST_LAYER << std::endl;
            else
                std::cout << LAYER << std::endl;
        }

        do
        {
            std::cout << "Select an index -> ";
            std::cin >> index;
        } while (checkDigit(index) || !("1" <= index && std::atoi(index.c_str()) <= countOfMember));
        
        

        std::system("clear");
        std::cout << "First Name : " << contacts[std::atoi(index.c_str()) - 1].getFirstName() << std::endl;
        std::cout << "Last Name : " << contacts[std::atoi(index.c_str()) - 1].getLastName() << std::endl;
        std::cout << "Nickname : "<< contacts[std::atoi(index.c_str()) - 1].getNickname() << std::endl;
        std::cout << "Phone Number : " << contacts[std::atoi(index.c_str()) - 1].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret : " << contacts[std::atoi(index.c_str()) - 1].getDarkestSecret() << std::endl;

        std::cout << std::endl;
        std::cout << "Please press enter to go back to the main menu" << std::endl;
        std::cin.ignore();
        std::cin.get();
    }
}

std::string textDot(std::string str, int size)
{
    if ((int)str.length() <= size)
        return str;
    else
        return str.substr(0, size - 1) + ".";
}

bool checkSpace(std::string text)
{
    for (int i = 0; text[i]; i++)
    {
        if (!std::isspace(text[i]))
            return false;
    }
    return true;
}
bool checkDigit(std::string index)
{
    for (int i = 0; index[i]; i++)
        if (!isdigit(index[i]))
            return true;
    return false;
}