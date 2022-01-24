#include <iostream>
#include <iomanip>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

void printContactIndex(Contact &contact)
{
	std::cout <<
		std::setw(contact.firstName.length()) << "First Name" << '|' <<
		std::setw(contact.lastName.length()) << "Last Name" << '|' <<
		std::setw(contact.nickname.length()) << "Nickname" << '|' <<
		std::setw(contact.phoneNumber.length()) << "Phone Number" << '|' <<
		std::setw(contact.darkestSecret.length()) << "Darkest Secret" << '|' << std::endl;
	std::cout <<
		std::setw(10) << contact.firstName << '|' <<
		std::setw(9) << contact.lastName << '|' <<
		std::setw(8) << contact.nickname << '|' <<
		std::setw(12) << contact.phoneNumber << '|' <<
		std::setw(14) << contact.darkestSecret << '|' << std::endl;
}

void printTenSearch(std::string s)
{
	int index = -1;

	if (s.length() >= 10)
	{
		while (++index < 9)
			std::cout << s[index];
		std::cout << ".|";
	}
	else
		std::cout << std::setw(10) << s << '|';
}

void searchContacts(Contact contacts[8])
{
	int index = -1;
	std::string	buf;

	std::cout << "   Index  |First Name| Last Name|  Nickname|" << std::endl;
	while (contacts[++index].firstName.compare(""))
	{
		std::cout << std::setw(10) << (int)index << "|";
		printTenSearch(contacts[index].firstName);
		printTenSearch(contacts[index].lastName);
		printTenSearch(contacts[index].nickname);
		std::cout << std::endl;
	}
	if (index == 0)
		return ;
	std::cout << "Enter an Index (0-" << (int)index - 1 << "): ";
	while (std::getline(std::cin, buf))
	{
		if (buf.length() == 1 && buf[0] - 48 >= 0 && buf[0] - 48 < index)
		{
			printContactIndex(contacts[buf[0] - 48]);
			break ;
		}
		else
			std::cout << "Enter an Index (0-" << (int)index - 1 << "): ";
	}
}

void addContact(Contact contacts[8])
{
	int index = 0;
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
	PhonebookClass phonebook;
	std::string buf;

	while (1)
	{
		std::getline(std::cin, buf);
		if (buf.compare("ADD") == 0)
			addContact(phonebook.contacts);
		else if (buf.compare("SEARCH") == 0)
			searchContacts(phonebook.contacts);
		else if (buf.compare("EXIT") == 0)
			return 0;
	}
	return (0);
}