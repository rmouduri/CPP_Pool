#include <iostream>

#ifndef __KAREN_HPP__
# define __KAREN_HPP__

class Karen
{
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	Karen();
	~Karen();

	void complain(std::string level);
};

#endif //__KAREN_HPP__