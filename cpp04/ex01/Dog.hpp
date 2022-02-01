#ifndef __DOG_HPP__
# define __DOG_HPP__

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *_brain;
public:
	Dog();
	Dog(const Dog &newDog);
	~Dog();

	Dog& operator=(const Dog& newDog);
	virtual Animal& operator=(const Animal &newAnimal);
	
	virtual void makeSound() const;
	virtual Brain* getBrain() const;
};

#endif