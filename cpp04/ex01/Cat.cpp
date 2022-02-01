#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->_brain = new Brain;
	return ;
}

Cat::Cat(const Cat &newCat)
{
	this->type = newCat.type;
	this->_brain = new Brain;
	return ;
}

Cat::~Cat(void)
{
	if (this->_brain)
		delete this->_brain;
	std::cout << "Cat destroyed." << std::endl;
	return ;
}

Cat& Cat::operator=(const Cat& newCat)
{
	std::cout << "Cat cpy" << std::endl;
	this->type = newCat.type;
	*this->_brain = *newCat._brain;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain* Cat::getBrain(void) const
{
	return this->_brain;
}

Animal&	Cat::operator=( const Animal &newAnimal )
{
	std::cout << "Animal assignement operator from Cat" << std::endl;
	this->type = newAnimal.getType();
	*this->_brain = *newAnimal.getBrain();
	return *this;
}