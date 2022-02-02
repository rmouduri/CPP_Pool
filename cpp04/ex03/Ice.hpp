#ifndef __ICE_HPP__
# define __ICE_HPP__

# include <iostream>
# include "ICharacter.hpp"

class Ice
{
private:
	const std::string type;
public:
	Ice();
	Ice(const Ice& newIce);
	~Ice();

	Ice& operator=(const Ice& newIce);

	virtual void use(ICharacter& target);
};

# endif //__ICE_HPP__