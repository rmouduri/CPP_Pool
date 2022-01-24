#include <iostream>
#include "ContactClass.hpp"

Contact::Contact(void)
{
	static int	index = 0;

	std::cout << "Contact " << index++ << " created" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	static int	index = 0;

	std::cout << "Contact " << index++ << " deleted" << std::endl;
	return ;
}

void Contact::printFirstName(void)
{
	std::cout << this->firstName << std::endl;
}

void Contact::printLastName(void)
{
	std::cout << this->lastName << std::endl;
}

void Contact::printNickname(void)
{
	std::cout << this->nickame << std::endl;
}

void Contact::printPhoneNumber(void)
{
	std::cout << this->phoneNumber << std::endl;
}

void Contact::printDarkestSecret(void)
{
	std::cout << this->darkestSecret << std::endl;
}

void Contact::setFirstName(std::string s)
{
	firstName = s;
}

void Contact::setLastName(std::string s)
{
	lastName = s;
}

void Contact::setNickname(std::string s)
{
	nickame = s;
}

void Contact::setPhoneNumber(std::string s)
{
	phoneNumber = s;
}

void Contact::setDarkestSecret(std::string s)
{
	darkestSecret = s;
}

const std::string Contact::getFirstName(void)
{
	return this->firstName;
}

const std::string Contact::getLastName(void)
{
	return this->lastName;
}

const std::string Contact::getNickname(void)
{
	return this->nickame;
}

const std::string Contact::getPhoneNumber(void)
{
	return this->phoneNumber;
}

const std::string Contact::getDarkestSecret(void)
{
	return this->darkestSecret;
}
