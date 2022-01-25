#include <iostream>

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact();
	~Contact();

	const std::string getFirstName() const;
	const std::string getLastName() const;
	const std::string getNickname() const;
	const std::string getPhoneNumber() const;
	const std::string getDarkestSecret() const;

	void setFirstName(std::string s);
	void setLastName(std::string s);
	void setNickname(std::string s);
	void setPhoneNumber(std::string s);
	void setDarkestSecret(std::string s);
};

#endif //CONTACTCLASS_HPP