
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
class Point {
 private:
	Fixed const x;
	Fixed const y;
 public:
	Point(void);
	Point(float const x, float const y);
	Point(const Point& obj);
	Point& operator=(const Point& obj);
	~Point(void);
	Fixed getX(void) const;
	Fixed getY(void) const;
};
bool	bsp(Point const a, Point const b, Point const c, Point const point);
Point	getVector(Point const a, Point const b);
Fixed	getArea(Point vec1, Point vec2);

#endif