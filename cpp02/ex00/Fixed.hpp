#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
	int					_fixed;
	static const int	_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& copy);

	Fixed&	operator=(const Fixed& copy);
	int		getRawBits(void) const;
	void	setRawBits(const int raw);
};

#endif //__FIXED_HPP__