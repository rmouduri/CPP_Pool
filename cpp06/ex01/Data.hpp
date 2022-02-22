#ifndef __DATA_HPP__
# define __DATA_HPP__

# include <iostream>

class Data
{
public:
	Data();
	Data(const Data& newData);
	Data(char c, int i, float f, double d, std::string s);
	~Data();

	Data& operator=(const Data& newData);
	char a;
	int b;
	float c;
	double d;
	std::string e;
};

std::ostream& operator<<(std::ostream& o, Data &outData);

# endif // __DATA_HPP__