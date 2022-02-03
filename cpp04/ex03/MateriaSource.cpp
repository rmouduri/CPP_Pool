#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _materias()
{
	std::cout << "Default Constructor for MateriaSource called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& newMateriaSource): _materias()
{
	std::cout << "Copy Constructor for MateriaSource called" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		delete this->_materias[i];
		if (newMateriaSource._materias[i])
			this->_materias[i] = newMateriaSource._materias[i]->clone();
	}
	return ;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Default Destructor for MateriaSource called" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		std::cout << "materia: " << i << std::endl;
		if (this->_materias[i])
			delete this->_materias[i];
	}
	return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& newMateriaSource)
{
	std::cout << "MateriaSource Assignement Operator called" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		delete this->_materias[i];
		if (newMateriaSource._materias[i])
			this->_materias[i] = newMateriaSource._materias[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *newAMateria)
{
	int i = 0;

	while (i < 4 && this->_materias[i])
	{
		if (this->_materias[i] == newAMateria)
			return ;
		++i;
	}
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