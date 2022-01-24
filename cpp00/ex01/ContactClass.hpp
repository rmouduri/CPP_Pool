#include <iostream>

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickame;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact();
	~Contact();
	void printFirstName();
	void printLastName();
	void printNickname();
	void printPhoneNumber();
	void printDarkestSecret();
	void setFirstName(std::string s);
	void setLastName(std::string s);
	void setNickname(std::string s);
	void setPhoneNumber(std::string s);
	void setDarkestSecret(std::string s);
	const std::string getFirstName();
	const std::string getLastName();
	const std::string getNickname();
	const std::string getPhoneNumber();
	const std::string getDarkestSecret();
};

#endif //CONTACTCLASS_HPP