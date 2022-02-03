#include "Character.hpp"

Character::Character(std::string name): _name(name), _inventory(new AMateria*[4])
{
	std::cout << "Default Constructor for Character called" << std::endl;
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = 0;
	return ;
}

Character::Character(const Character& newCharacter): _name(newCharacter._name), _inventory(new AMateria*[4])
{
	std::cout << "Copy Constructor for Character called" << std::endl;
	for (int i = 0; i < 4; ++i)
		*_inventory[i] = *newCharacter._inventory[i];
	return ;
}

Character::~Character(void)
{
	std::cout << "Default Destructor for Character called" << std::endl;
	return ;
}

Character& Character::operator=(__attribute((unused))const Character& newCharacter)
{
	std::cout << "Character Assignement Operator called" << std::endl;
	return *this;
}

std::string const & Character::getName(void) const
{
	return this->_name;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx]->use(target);
}

void Character::equip(AMateria *m)
{
	int i = 0;

	while (i < 4 && this->_inventory[i])
		++i;
	if (i == 4)
		return ;
	this->_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_inventory[idx] == 0)
		return ;
	//STOCK MATERIA AT this->_inventory[idx]
	this->_inventory[idx] = 0;
}