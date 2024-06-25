#include "Contact.hpp"

// Constructor
Contact::Contact()
    : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("")
{
}

// Getter for first name
std::string Contact::getFirstName() const
{
    return first_name;
}

// Getter for last name
std::string Contact::getLastName() const
{
    return last_name;
}

// Getter for nickname
std::string Contact::getNickname() const
{
    return nickname;
}

// Getter for phone number
std::string Contact::getPhoneNumber() const
{
    return phone_number;
}

// Getter for darkest secret
std::string Contact::getDarkestSecret() const
{
    return darkest_secret;
}

// Setter for first name
void Contact::setFirstName(const std::string& first_name)
{
    this->first_name = first_name;
}

// Setter for last name
void Contact::setLastName(const std::string& last_name)
{
    this->last_name = last_name;
}

// Setter for nickname
void Contact::setNickname(const std::string& nickname)
{
    this->nickname = nickname;
}

// Setter for phone number
void Contact::setPhoneNumber(const std::string& phone_number)
{
    this->phone_number = phone_number;
}

// Setter for darkest secret
void Contact::setDarkestSecret(const std::string& darkest_secret)
{
    this->darkest_secret = darkest_secret;
}