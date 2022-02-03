#ifndef __ICE_HPP__
# define __ICE_HPP__

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice: public AMateria
{
private:
	const std::string _type;
public:
	Ice();
	Ice(const Ice& newIce);
	virtual ~Ice();

	Ice& operator=(const Ice& newIce);

	virtual void use(ICharacter& target);
	virtual AMateria* clone() const; 
};

# endif //__ICE_HPP__