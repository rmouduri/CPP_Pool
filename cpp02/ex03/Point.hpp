#ifndef __POINT_HPP__
# define __POINT_HPP__

# include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point();
	Point(const Fixed x, const Fixed y);
	Point(float x, float y);
	Point(Point& copy);
	~Point();

	Point& operator=(const Point& rhs);

	const Fixed getX() const;
	const Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const p);

#endif