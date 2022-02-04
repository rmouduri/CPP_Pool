#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *_materias[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& newMateriaSource);
	~MateriaSource();

	MateriaSource& operator=(const MateriaSource& newMateriaSource);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

# endif //__MATERIASOURCE_HPP__