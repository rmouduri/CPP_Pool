#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	AAnimal	*animals[4];
	// AAnimal	*tmp = new AAnimal;

	// if (tmp)
		// std::cout << "AAnimal Instance created" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << "Type is: " << animals[i]->getType() << std::endl;
	}
	std::cout << std::endl;

	{
		Dog		*dogA;
		Dog		dogB;

		std::cout << std::endl;
		dogA = dynamic_cast<Dog *>(animals[0]);
		dogA->setIdea(0, "I want to eat");
		dogB = *dogA;
		dogA->setIdea(0, "I want to sleep");
		std::cout << "DogA thinks: " << dogA->getIdea(0) << std::endl;
		std::cout << "DogB thinks: " << dogB.getIdea(0) << std::endl;
	}

	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];
	// delete tmp;
	return 0;
}