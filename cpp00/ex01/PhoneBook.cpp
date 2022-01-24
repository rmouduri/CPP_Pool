#include <iostream>
#include <iomanip>
#include "ContactClass.hpp"

void printTenSearch(const std::string s)
{
	std::int8_t index = -1;

	if (s.length() >= 10)
	{
		while (++index < 9)
			std::cout << s[index];
		std::cout << '.';
	}
	else
		std::cout << std::setw(10) << s;
}

void searchContacts(Contact contacts[8])
{
	std::int8_t index = -1;

	std::cout << "   Index  |First Name| Last Name|  Nickname|" << std::endl;
	while (contacts[++index].firstName.compare(""))
	{
		std::cout << std::setw(10) << (int)index << "|";
		printTenSearch(contacts[index].firstName);
		std::cout << '|';
		printTenSearch(contacts[index].lastName);
		std::cout << '|';
		printTenSearch(contacts[index].nickname);
		std::cout << '|' << std::endl;
	}
}

void addContact(Contact contacts[8])
{
	std::int8_t index = 0;
	std::string	copy;

	while (index < 8 && contacts[index].firstName.compare("") != 0)
		++index;
	if (index == 8)
	{
		std::cout << "Phonebook is full" << std::endl;
		return ;
	}

	do {
		std::cout << "Enter First Name: ";
	}
	while (std::getline(std::cin, contacts[index].firstName) && contacts[index].firstName.compare("") == 0);
	
	do {
		std::cout << "Enter Last Name: ";
	}
	while (std::getline(std::cin, contacts[index].lastName) && contacts[index].lastName.compare("") == 0);

	do {
		std::cout << "Enter Nickname: ";
	}
	while (std::getline(std::cin, contacts[index].nickname) && contacts[index].nickname.compare("") == 0);

	do {
		std::cout << "Enter Phone Number: ";
	}
	while (std::getline(std::cin, contacts[index].phoneNumber) && contacts[index].phoneNumber.compare("") == 0);

	do {
		std::cout << "Enter Darkest Secret: ";
	}
	while (std::getline(std::cin, contacts[index].darkestSecret) && contacts[index].darkestSecret.compare("") == 0);
}

int	main(void)
{
	Contact contacts[8];
	std::string buf;

	while (1)
	{
		std::getline(std::cin, buf);
		if (buf.compare("ADD") == 0)
			addContact(contacts);
		else if (buf.compare("SEARCH") == 0)
			searchContacts(contacts);
		else if (buf.compare("EXIT") == 0)
			return 0;
	}
	return (0);
}