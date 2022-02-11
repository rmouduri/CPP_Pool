#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		
		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		cat->makeSound(); //will output the cat sound!
		dog->makeSound();
		animal->makeSound();
		delete animal;
		delete dog;
		delete cat;
	}
	std::cout << std::endl;
	{
		const WrongAnimal* wrongAnimal = new WrongAnimal();
		const WrongAnimal* wrongCat = new WrongCat();
		
		std::cout << wrongCat->getType() << " " << std::endl;
		wrongCat->makeSound(); //will output the WrongAnimal sound!
		wrongAnimal->makeSound();
		delete wrongAnimal;
		delete wrongCat;
	}
	return 0;
}