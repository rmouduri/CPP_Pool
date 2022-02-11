#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "\n\n";


	Ice *newIce = new Ice();
	Cure *newCure = new Cure();

	src->learnMateria(newIce); // newIce added
	src->learnMateria(newIce); // newIce not added because same pointer already added
	src->learnMateria(new Cure()); // Cure added, src now has 4 materias
	src->learnMateria(newCure); // Nothing happens, already 4 materias

	me->use(0, *bob);
	me->use(1, *bob);

	// me already has 2 materias
	me->equip(src->createMateria("ice")); // me now has 3 materias
	me->equip(src->createMateria("ice")); // me now has 4 materias
	me->equip(newCure);					  // Nothing happens, already 4 materias

	me->unequip(1); // unequip materia tmp

	delete bob;
	std::cout << std::endl;
	delete me;
	delete tmp; // need to free tmp because unequipped
	std::cout << std::endl;
	delete src;
	delete newCure;
	return 0;
}