/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouduri <rmouduri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:07:15 by rmouduri          #+#    #+#             */
/*   Updated: 2022/01/27 13:47:36 by rmouduri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void): _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

int	myPow(int n, int pow)
{
	int ret = n;

	while (--pow > 0)
		ret = ret * n;
	return ret;
}

Fixed::Fixed(const int n):_fixed(n * myPow(2, this->_bits))
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float f): _fixed(roundf(f * myPow(2, this->_bits)))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(copy.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed;
}

void Fixed::setRawBits(const int raw)
{
	this->_fixed = raw;
}

int Fixed::toInt(void) const
{
	return this->_fixed / myPow(2, this->_bits);
}

float Fixed::toFloat(void) const
{
	return (float)this->_fixed / myPow(2, this->_bits);
}

std::ostream& operator<<(std::ostream& o, Fixed const& fixed)
{
	o << fixed.toFloat();
	return o;
}