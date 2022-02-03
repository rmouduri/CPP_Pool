#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	std::string	_name;
	AMateria	*_inventory[4];
public:
	Character(std::string name);
	Character(const Character& newCharacter);
	~Character();

	Character& operator=(const Character& newCharacter);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

# endif //__CHARACTER_HPP__