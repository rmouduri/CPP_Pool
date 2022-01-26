#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void Karen::debug(void)
{
	std::cout << "Karen's DEBUG" << std::endl;
}

void Karen::info(void)
{
	std::cout << "Karen's INFO" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "Karen's WARNING" << std::endl;
}

void Karen::error(void)
{
	std::cout << "Karen's ERROR" << std::endl;
}

void Karen::complain(std::string level)
{
	std::string tab[4] = {"ERROR", "WARNING", "INFO", "DEBUG"};
	int i = 0;

	while (i < 4 && tab[i].compare(level))
		++i;
	switch (i)
	{
	case 4:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	case 3:
		this->debug();
	case 2:
		this->info();
	case 1:
		this->warning();
	case 0:
		this->error();
	}
}