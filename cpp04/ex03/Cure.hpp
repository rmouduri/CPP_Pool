#ifndef __CURE_HPP__
# define __CURE_HPP__

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure: public AMateria
{
private:
	const std::string type;
public:
	Cure();
	Cure(const Cure& newCure);
	~Cure();

	Cure& operator=(const Cure& newCure);

	virtual void use(ICharacter& target);
	virtual AMateria* clone() const; 
};

# endif //__CURE_HPP__