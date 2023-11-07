#include "Point.hpp"
#include "Point.hpp"

Point::Point(void) 
{
	const_cast<Fixed&>(x) = 0;
	const_cast<Fixed&>(y) = 0;
}

Point::Point(float const x, float const y) : x(Fixed(x)), y(Fixed(y))
{
	// コンストラクタの初期化リストでメンバ変数 x と y を初期化する
}

Point::Point(const Point& obj)
{
	const_cast<Fixed&>(x) = obj.getX();
	const_cast<Fixed&>(y) = obj.getY();
}

Point& Point::operator=(const Point& obj) 
{
	if (this != &obj) 
	{
		const_cast<Fixed&>(x) = obj.getX();
		const_cast<Fixed&>(y) = obj.getY();
	}
	return *this;
}

Point::~Point(void) 
{
}

Fixed Point::getX(void) const
{
	return (x);
}

Fixed Point::getY(void) const
{
	return (y);
}