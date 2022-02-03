#ifndef __KAREN_HPP__
# define __KAREN_HPP__

# include <iostream>

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