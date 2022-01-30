#include "Fixed.hpp"
#include "Point.hpp"

float sign(Point const &a, Point const &b, Point const &c)
{
	return  (a.getX().toFloat() - c.getX().toFloat()) *
			(b.getY().toFloat() - c.getY().toFloat()) -
			(b.getX().toFloat() - c.getX().toFloat()) *
			(a.getY().toFloat() - c.getY().toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	float f1 = sign(p, a, b);
	float f2 = sign(p, b, c);
	float f3 = sign(p, c, a);
	bool has_neg = (f1 <= 0) || (f2 <= 0) || (f3 <= 0);
	bool has_pos = (f1 >= 0) || (f2 >= 0) || (f3 >= 0);

	std::cout << "f1: " << f1 << "; f2: " << f2 << "; f3: " << f3 << std::endl;
	std::cout << "Point a: " << a.getX() << " " << a.getY() << std::endl;
	std::cout << "Point b: " << b.getX() << " " << b.getY() << std::endl;
	std::cout << "Point c: " << c.getX() << " " << c.getY() << std::endl;
	std::cout << "Point p: " << p.getX() << " " << p.getY() << std::endl;

	return !(has_neg && has_pos);
}