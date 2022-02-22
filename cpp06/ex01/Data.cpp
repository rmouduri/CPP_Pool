#include "Data.hpp"

Data::Data(void): a('A'), b(2), c(3.3), d(4.04), e("Hello")
{
	std::cout << "Default Constructor for Data called" << std::endl;
	return ;
}

Data::Data(const Data& newData): a(newData.a), b(newData.b), c(newData.c), d(newData.d), e(newData.e)
{
	std::cout << "Copy Constructor for Data called" << std::endl;
	return ;
}

Data::Data(char newa, int newb, float newc, double newd, std::string newe): a(newa), b(newb), c(newc), d(newd), e(newe)
{
	std::cout << "Arguments Constructor for Data called" << std::endl;
	return ;
}

Data::~Data(void)
{
	std::cout << "Default Destructor for Data called" << std::endl;
	return ;
}

Data& Data::operator=(const Data& newData)
{
	std::cout << "Data Assignement Operator called" << std::endl;
	this->a = newData.a;
	this->b = newData.b;
	this->c = newData.c;
	this->d = newData.d;
	this->e = newData.e;
	return *this;
}

std::ostream& operator<<(std::ostream& o, Data &outData)
{
	o   << "a: " << outData.a << std::endl
		<< "b: " << outData.b << std::endl
		<< "c: " << outData.c << std::endl
		<< "d: " << outData.d << std::endl
		<< "e: " << outData.e << std::endl;
	return o;
}