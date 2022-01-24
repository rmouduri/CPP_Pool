#include <iostream>
#include "ContactClass.hpp"

void addContact(Contact contacts[8])
{
	std::int8_t index = 0;
	std::string buf = "";

	while (index < 8 && contacts[index].getFirstName().compare("") != 0)
		++index;
	if (index == 8)
	{
		std::cout << "Phonebook is full" << std::endl;
		return ;
	}
	while (buf.compare("") == 0)
	{
		std::cout << "Enter First Name: ";
		std::getline(std::cin, buf);
		contacts[index].setFirstName(buf);
	}
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
		else if (buf.compare("") == 0 || buf.compare("EXIT") == 0)
			return 0;
		contacts[0].setFirstName(buf);//td::getline(std::cin, buf));
		contacts[0].printFirstName();
	}
	return (0);
}