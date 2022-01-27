#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
	static const int    _bits = 8;
	int                 _fixed;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& copy);
	Fixed(const int n);
	Fixed(const float f);

	Fixed&	operator=(const Fixed& copy);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const& fixed);

#endif //__FIXED_HPP__