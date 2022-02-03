#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _materias(new AMateria*[4])
{
	std::cout << "Default Constructor for MateriaSource called" << std::endl;
	for (int i = 0; i < 4; ++i)
		this->_materias[i] = 0;
	return ;
}

MateriaSource::MateriaSource(__attribute((unused))const MateriaSource& newMateriaSource): _materias(new AMateria*[4])
{
	std::cout << "Copy Constructor for MateriaSource called" << std::endl;
	for (int i = 0; i < 4; ++i)
		this->_materias[i] = 0;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Default Destructor for MateriaSource called" << std::endl;
	return ;
}

MateriaSource& MateriaSource::operator=(__attribute((unused))const MateriaSource& newMateriaSource)
{
	std::cout << "MateriaSource Assignement Operator called" << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria *newAMateria)
{
	int i = 0;

	while (i < 4 && this->_materias[i])
		++i;
	if (i == 4)
		return ;
	this->_materias[i] = newAMateria;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < 4 && this->_materias[i]->getType().compare(type))
		++i;
	if (i == 4)
		return 0;
	return this->_materias[i]->clone();
}