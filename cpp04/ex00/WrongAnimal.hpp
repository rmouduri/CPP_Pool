#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(const std::string type);
	WrongAnimal(const WrongAnimal &newWrongAnimal);
	~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& newWrongAnimal);
	const std::string getType() const;
	void makeSound() const;
};

#endif