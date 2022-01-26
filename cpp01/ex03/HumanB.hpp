#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

# include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void attack() const;
	void setWeapon(Weapon& weapon);
};

#endif //__HUMANB_HPP__