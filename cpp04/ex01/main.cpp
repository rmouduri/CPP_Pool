#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal	*animals[4];
	Brain	*brain;

	for (int i = 0; i < 4; ++i)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}
	std::cout << std::endl;

	brain = animals[0]->getBrain();
	brain->ideas[0] = "I want to eat";
	*animals[2] = *animals[0];
	brain->ideas[0] = "I want to sleep";
	std::cout << "Animal 0 Brain: " << animals[0]->getBrain()->ideas[0] << std::endl;
	std::cout << "Animal 2 Brain: " << animals[2]->getBrain()->ideas[0] << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];
	return 0;
}