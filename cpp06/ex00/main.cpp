#include <iostream>
#include <cmath>

enum e_types {
	UNDEFINED = 0, 
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO
};

char getType(std::string type)
{
	bool floating = false;

	if (type == "-inff" || type == "+inff" || type == "nanf"
		|| type == "-inf" || type == "+inf" || type == "nan")
		return PSEUDO;
	if (type.length() == 1 && (type[0] < '0' || type[0] > '9'))
		return CHAR;
	for (int i = 0; type[i]; ++i)
	{
		if (type[i] < '0' || type[i] > '9')
		{
			if (type[i] == '-' || type[i] == '+')
				continue ;
			else if (i && type[i] == 'f' && i == type.length() - 1)
				return FLOAT;
			else if (type[i] == '.')
				floating = true;
			else return UNDEFINED;		
		}
	}
	return floating ? DOUBLE : INT;
}

void printSpecial(std::string c, std::string i, std::string f, std::string d)
{
	std::cout	<< "char: " << c << std::endl
				<< "int: " << i << std::endl;
	if (f[f.length() - 1] != 'f' && f != "impossible" || (f == "+inf" || f == "-inf"))
		f = f + 'f';
	std::cout << "float: " << f << std::endl;
	if (d[d.length() - 1] == 'f' && d != "+inf" && d != "-inf")
		d[d.length() - 1] = 0;
	std::cout << "double: " << d << std::endl;
}

void printAll(char c, int i, float f, double d)
{
	std::cout << "char: ";
	if (isprint(c))
		std::cout << '\'' << c << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl
			<< "float: " << f << (f == (int)f ? ".0" : "") << 'f' << std::endl
			<< "double: " << d << (d == (int)d ? ".0" : "") << std::endl;

}

int main(int ac, char **av)
{
	char c;
	int i;
	float f;
	double d;

	if (ac != 2)
	{
		std::cout << "Need 1 argument" << std::endl;
		return 1;
	}

	char type = getType(av[1]);

	switch (type)
	{
		case (CHAR):
			c = av[1][0];
			printAll(c, (int)c, (float)c, (double)c);
			break ;
		case (INT):
			i = atoi(av[1]);
			printAll((char)i, i, (float)i, (double)i);
			break ;
		case (FLOAT):
			f = atof(av[1]);
			printAll((char)f, (int)f, f, (double)f);
			break ;
		case (DOUBLE):
			d = atof(av[1]);
			printAll((char)d, (int)d, (float)d, d);
			break ;
		case (PSEUDO):
			printSpecial("impossible", "impossible", av[1], av[1]);
			break ;
		case (UNDEFINED):
			printSpecial("impossible", "impossible", "impossible", "impossible");
			break ;
		default:
			break ;
	}
	return 0;
}