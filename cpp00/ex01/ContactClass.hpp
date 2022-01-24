#include <iostream>

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

class Contact
{
public:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	Contact();
	~Contact();
};

#endif //CONTACTCLASS_HPP