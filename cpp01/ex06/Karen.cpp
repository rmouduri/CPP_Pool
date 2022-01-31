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
	void (Karen::*f[4])(void) = {&Karen::error, &Karen::warning, &Karen::info, &Karen::debug};
	int i = 0;

	while (i < 4 && tab[i].compare(level))
		++i;
	switch (i)
	{
	case 4:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	case 3:
		while (i >= 0)
			(this->*f[i--])();
		break ;
	case 2:
		while (i >= 0)
			(this->*f[i--])();
		break ;
	case 1:
		while (i >= 0)
			(this->*f[i--])();
		break ;
	case 0:
		this->error();
	}
}