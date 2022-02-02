#ifndef __DOG_HPP__
# define __DOG_HPP__

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &newDog);
	virtual ~Dog();

	Dog& operator=(const Dog& newDog);
	virtual Animal& operator=(const Animal& newAnimal);
	
	virtual void makeSound() const;
	void setIdea(int index, std::string newIdea);
	const std::string getIdea(int index) const;
};

#endif