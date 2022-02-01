#ifndef __CAT_HPP__
# define __CAT_HPP__

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain *_brain;
public:
	Cat();
	Cat(const Cat &newCat);
	~Cat();

	Cat& operator=(const Cat& newCat);
	virtual Animal& operator=(const Animal &newAnimal);
	
	virtual void makeSound() const;
	virtual Brain* getBrain() const;
};

#endif