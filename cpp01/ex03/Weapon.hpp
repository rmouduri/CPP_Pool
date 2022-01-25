#include <iostream>

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string type);
	~Weapon();

	const std::string& getType() const;
	void setType(std::string type);
};

#endif