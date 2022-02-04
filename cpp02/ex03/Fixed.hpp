#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
	static const int	_bits = 8;
	int					_fixed;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& copy);
	Fixed(const int n);
	Fixed(const float f);

	Fixed&	operator=(const Fixed& rhs);
	Fixed	operator+(const Fixed& rhs);
	Fixed	operator-(const Fixed& rhs);
	Fixed	operator*(const Fixed& rhs);
	Fixed	operator/(const Fixed& rhs);

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	bool	operator<(const Fixed& rhs) const;
	bool	operator>(const Fixed& rhs) const;
	bool	operator<=(const Fixed& rhs) const;
	bool	operator>=(const Fixed& rhs) const;
	bool	operator==(const Fixed& rhs) const;
	bool	operator!=(const Fixed& rhs) const;

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed&		max(Fixed& lhs, Fixed& rhs);
	static Fixed&		min(Fixed& lhs, Fixed& rhs);
	const static Fixed&	max(const Fixed& lhs, const Fixed& rhs);
	const static Fixed&	min(const Fixed& lhs, const Fixed& rhs);
};

std::ostream& operator<<(std::ostream& o, Fixed const& fixed);

#endif //__FIXED_HPP__