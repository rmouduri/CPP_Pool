# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	AMateria	**_inventory;
	std::string	_name;
public:
	Character();
	Character(std::string name);
	Character(const Character& newCharacter);
	~Character();

	Character& operator=(const Character& newCharacter);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

Character::Character(void)
{
	std::cout << "Default Constructor for Character called" << std::endl;
	return ;
}

Character::Character(std::string name): _name(name)
{
	std::cout << "String Constructor for Character called" << std::endl;
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

Character& Character::operator=(const Character& newCharacter)
{
	std::cout << "Character Assignement Operator called" << std::endl;
	return *this;
}