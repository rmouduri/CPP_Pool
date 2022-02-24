#include <iostream>
#include <cmath>
#include "iter.hpp"

class Test
{
	int _x;

	public:
		Test(int x): _x(x) {};

		int getX(void) { return _x; };
};

void printTestX(Test & t)
{
	std::cout << t.getX() << "\n";
}

void print(int & p)
{
	std::cout << p << "\n";
}

void pow2(int & p)
{
	p = pow(2, p);
}

int main(void)
{
	std::cout << "Test with array of ints:" << std::endl;

	int ia[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	::iter(ia, 10, &print);
	std::cout << std::endl;
	::iter(ia, 10, &pow2);
	::iter(ia, 10, &print);

	std::cout << std::endl << "Test with array of classes:" << std::endl;

	Test ta[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	::iter(ta, 10, &printTestX);

	return 0;
}