#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define INTERFACE \
    "  ┌───────────────────────────┐\n" \
    "  │                           │\n" \
    "  │         PhoneBook         │\n" \
    "  │                           │\n" \
    "  ├───────────────────────────┤\n" \
    "  │  1. Add                   │\n" \
    "  ├───────────────────────────┤\n" \
    "  │  2. Search                │\n" \
    "  ├───────────────────────────┤\n" \
    "  │  3. Exit                  │\n" \
    "  └───────────────────────────┘\n"
    
	#include <string>

	class Contact
	{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string darkest_secret;
	};
#endif