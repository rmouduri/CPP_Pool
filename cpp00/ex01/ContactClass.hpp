#include <iostream>

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

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