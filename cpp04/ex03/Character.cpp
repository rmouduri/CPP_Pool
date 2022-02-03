#include "Character.hpp"

Character::Character(std::string name): _name(name), _inventory()
{
	std::cout << "Default Constructor for Character " << _name << " called" << std::endl;
	return ;
}

Character::Character(const Character& newCharacter): _name(newCharacter._name), _inventory()
{
	std::cout << "Copy Constructor for Character " << _name << " called" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		delete this->_inventory[i];
		if (newCharacter._inventory[i])
			this->_inventory[i] = newCharacter._inventory[i]->clone();
	}
	return ;
}

Character::~Character(void)
{
	std::cout << "Default Destructor for Character " << _name << " called" << std::endl;
	for (int i = 0; i < 4; ++i)
		if (this->_inventory[i])
			delete this->_inventory[i];
	return ;
}

Character& Character::operator=(const Character& newCharacter)
{
	std::cout << "Character Assignement Operator called" << std::endl;
	this->_name = newCharacter._name;
	for (int i = 0; i < 4; ++i)
	{
		delete this->_inventory[i];
		if (newCharacter._inventory[i])
			this->_inventory[i] = newCharacter._inventory[i]->clone();
	}
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
	{
		if (this->_inventory[i] == m)
			return ;
		++i;
	}
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