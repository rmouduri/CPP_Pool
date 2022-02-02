#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
protected:
	std::string	type;

public:
	AAnimal();
	AAnimal(const std::string type);
	AAnimal(const AAnimal &newAAnimal);
	virtual ~AAnimal();

	virtual AAnimal& operator=(const AAnimal& newAAnimal);
	const std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif