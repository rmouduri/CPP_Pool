#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(const std::string type);
	Animal(const Animal &newAnimal);
	virtual ~Animal();

	virtual Animal& operator=(const Animal& newAnimal);
	const std::string getType() const;
	virtual void makeSound() const;
	virtual Brain *getBrain() const = 0;
};

#endif