/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouduri <rmouduri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:07:15 by rmouduri          #+#    #+#             */
/*   Updated: 2022/02/04 11:53:25 by rmouduri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void): _fixed(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called" << std::endl;
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
	// std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float f): _fixed(roundf(f * myPow(2, this->_bits)))
{
	// std::cout << "Float constructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const
{
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

Fixed& Fixed::operator=(const Fixed& rhs)
{
	this->setRawBits(rhs.getRawBits());
	return *this;
}

Fixed Fixed::operator+(const Fixed& rhs)
{
	Fixed f;

	f.setRawBits(myPow(2, this->_bits) * (this->toFloat() + rhs.toFloat()));
	return f;
}

Fixed Fixed::operator-(const Fixed& rhs)
{
	Fixed f;

	// f.setRawBits(this->getRawBits() - rhs.getRawBits());
	f.setRawBits(myPow(2, this->_bits) * (this->toFloat() - rhs.toFloat()));
	return f;
}

Fixed Fixed::operator*(const Fixed& rhs)
{
	Fixed f;

	// f.setRawBits(this->getRawBits() * rhs.getRawBits());
	f.setRawBits(myPow(2, this->_bits) * (this->toFloat() * rhs.toFloat()));
	return f;
}

Fixed Fixed::operator/(const Fixed& rhs)
{
	Fixed f;

	// f.setRawBits(this->getRawBits() / rhs.getRawBits());
	f.setRawBits(myPow(2, this->_bits) * (this->toFloat() / rhs.toFloat()));
	return f;
}

bool Fixed::operator<(const Fixed& rhs) const
{
	return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>(const Fixed& rhs) const
{
	return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed& rhs) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs) const
{
	return this->getRawBits() != rhs.getRawBits();
}

Fixed& Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->operator++();
	return tmp;
}

Fixed&	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->operator--();
	return tmp;
}

Fixed&	Fixed::max(Fixed& lhs, Fixed& rhs)
{
	return lhs > rhs ? lhs : rhs;
}

Fixed&	Fixed::min(Fixed& lhs, Fixed& rhs)
{
	return lhs < rhs ? lhs : rhs;
}

const Fixed&	Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	return lhs > rhs ? lhs : rhs;
}

const Fixed&	Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
	return lhs < rhs ? lhs : rhs;
}