#include <iostream>
#include <exception>
#include <time.h>
#include <stdlib.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int r = rand() % 3;

	if (r == 0) {
		std::cout << "Creating A:" << std::endl;
		return new A;
	}
	else if (r == 1) {
		std::cout << "Creating B:" << std::endl;
		return new B;
	}
	else {
		std::cout << "Creating C:" << std::endl;
		return new C;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base & p)
{
	try {
		dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	} catch (std::exception & e) {;}
	
	try {
		dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	} catch (std::exception & e) {;}
	
	try {
		dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	} catch (std::exception & e) {;}
}

int main(void)
{
	Base *b;

	srand(time(0));
	for (int i = 0; i < 10; ++i)
	{
		b = generate();
		identify(b);
		identify(*b);
		if (i < 9)
			std::cout << std::endl;
		delete b;
	}
	return 0;
}