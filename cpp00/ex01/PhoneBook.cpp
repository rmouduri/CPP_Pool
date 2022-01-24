#include <iostream>
#include "ContactClass.hpp"

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

	contacts[index].printFirstName();
	contacts[index].printLastName();
	contacts[index].printNickname();
	contacts[index].printPhoneNumber();
	contacts[index].printDarkestSecret();
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
			;
		else if (buf.compare("EXIT") == 0)
			return 0;
		contacts[0].setFirstName(buf);
		contacts[0].printFirstName();
	}
	return (0);
}