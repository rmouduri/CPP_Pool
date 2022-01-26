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
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*f[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int i = -1;

	while (++i < 4)
		if (tab[i].compare(level) == 0)
			return (this->*f[i])();
}