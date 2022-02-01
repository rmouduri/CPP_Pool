#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal	*animals[6];
	Brain	*brain;

	for (int i = 0; i < 6; i++)
	{
		if (i < 6 / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}
	std::cout << std::endl;

	brain = animals[3]->getBrain();
	brain->ideas[0] = "I'm hungry";
	brain->ideas[1] = "That's a strange idea I'm having";
	brain->ideas[2] = "Ball!!!!!";
	brain->ideas[3] = "Squirrel!!!!!";
	std::cout << animals[3]->getBrain()->ideas[0] << std::endl;

	*animals[1] = *animals[3];
	std::cout << animals[1]->getBrain()->ideas[2] << std::endl;
	brain->ideas[2] = "OK";
	std::cout << animals[1]->getBrain()->ideas[2] << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
		delete animals[i];
	return 0;
}