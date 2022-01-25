#include <iostream>
#include <iomanip>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

void printContactIndex(Contact &contact)
{
	std::cout <<
		std::setw(contact.getFirstName().length()) << "First Name" << '|' <<
		std::setw(contact.getLastName().length()) << "Last Name" << '|' <<
		std::setw(contact.getNickname().length()) << "Nickname" << '|' <<
		std::setw(contact.getPhoneNumber().length()) << "Phone Number" << '|' <<
		std::setw(contact.getDarkestSecret().length()) << "Darkest Secret" << '|' << std::endl;
	std::cout <<
		std::setw(10) << contact.getFirstName() << '|' <<
		std::setw(9) << contact.getLastName() << '|' <<
		std::setw(8) << contact.getNickname() << '|' <<
		std::setw(12) << contact.getPhoneNumber() << '|' <<
		std::setw(14) << contact.getDarkestSecret() << '|' << std::endl;
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

void searchContacts(PhonebookClass &phonebook)
{
	int index = -1;
	std::string	buf;

	std::cout << "   Index  |First Name| Last Name|  Nickname|" << std::endl;
	while (phonebook.contacts[++index].getFirstName().empty() == false)
	{
		std::cout << std::setw(10) << (int)index << "|";
		printTenSearch(phonebook.contacts[index].getFirstName());
		printTenSearch(phonebook.contacts[index].getLastName());
		printTenSearch(phonebook.contacts[index].getNickname());
		std::cout << std::endl;
	}
	if (index == 0)
		return ;
	std::cout << "Enter an Index (0-" << (int)index - 1 << "): ";
	while (std::getline(std::cin, buf))
	{
		if (buf.length() == 1 && buf[0] - 48 >= 0 && buf[0] - 48 < index)
		{
			printContactIndex(phonebook.contacts[buf[0] - 48]);
			break ;
		}
		else
			std::cout << "Enter an Index (0-" << (int)index - 1 << "): ";
	}
}

void addContact(Contact contacts[8])
{
	int index = 0;
	std::string	buf;

	while (index < 8 && contacts[index].getFirstName().empty() == false)
		++index;
	if (index == 8)
	{
		std::cout << "Phonebook is full" << std::endl;
		return ;
	}

	do {
		std::cout << "Enter First Name: ";
	}
	while (std::getline(std::cin, buf) && buf.empty() == true);
	contacts[index].setFirstName(buf.substr(0, buf.length()));
	
	do {
		std::cout << "Enter Last Name: ";
	}
	while (std::getline(std::cin, buf) && buf.empty() == true);
	contacts[index].setLastName(buf.substr(0, buf.length()));

	do {
		std::cout << "Enter Nickname: ";
	}
	while (std::getline(std::cin, buf) && buf.empty() == true);
	contacts[index].setNickname(buf.substr(0, buf.length()));

	do {
		std::cout << "Enter Phone Number: ";
	}
	while (std::getline(std::cin, buf) && buf.empty() == true);
	contacts[index].setPhoneNumber(buf.substr(0, buf.length()));

	do {
		std::cout << "Enter Darkest Secret: ";
	}
	while (std::getline(std::cin, buf) && buf.empty() == true);
	contacts[index].setDarkestSecret(buf.substr(0, buf.length()));
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
			searchContacts(phonebook);
		else if (buf.compare("EXIT") == 0)
			break ;
	}
	return (0);
}