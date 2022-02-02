#ifndef __CAT_HPP__
# define __CAT_HPP__

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &newCat);
	virtual ~Cat();

	Cat& operator=(const Cat& newCat);
	virtual AAnimal& operator=(const AAnimal& newAAnimal);
	
	virtual void makeSound() const;
	void setIdea(int index, std::string newIdea);
	const std::string getIdea(int index) const;
};

#endif