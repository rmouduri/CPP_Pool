#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(const std::string type);
	Animal(const Animal &newAnimal);
	~Animal();

	Animal& operator=(const Animal& newAnimal);
	const std::string getType() const;
	virtual void makeSound() const;
};

#endif