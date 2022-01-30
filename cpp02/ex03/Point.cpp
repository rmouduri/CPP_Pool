#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{
	return ;
}

Point::Point(const Fixed x, const Fixed y): _x(x), _y(y)
{
	return ;
}

Point::Point(Point& copy): _x(copy._x), _y(copy._y)
{
	return ;
}

const Fixed Point::getX(void) const
{
	return this->_x;
}

const Fixed Point::getY(void) const
{
	return this->_y;
}

Point& Point::operator=(const Point& rhs)
{
	*this = rhs;
	return *this;
}

Point::~Point()
{
	return ;
}