#include "Fixed.hpp"
#include "Point.hpp"
#include <math.h>
#include <iostream>
// bool bsp(Point const a, Point const b, Point const c, Point const point);

	// Point B(1,1);
	// Point A(2,5);
	// Point C(4,1);
	// Point P(3,3);
	// bsp(A, B, C, P);


bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Point vec_ab;
	Point vec_ap;
	Point vec_ac;
	Point vec_bp;
	Point vec_bc;

	Fixed area_abc;
	Fixed area_abp;
	Fixed area_bcp;
	Fixed area_acp;

	vec_ab = getVector(a,b);
	vec_ap = getVector(a,p);
	vec_ac = getVector(a,c);
	vec_bp = getVector(b,p);
	vec_bc = getVector(b,c);

	area_abc = getArea(vec_ab,vec_ac);
	area_abp = getArea(vec_ab,vec_ap);
	area_bcp = getArea(vec_bp,vec_bc);
	area_acp = getArea(vec_ac,vec_ap);
	if ( area_abp.toFloat() && area_bcp.toFloat() && area_acp.toFloat() &&(area_abc == area_abp + area_bcp + area_acp))
		return(true);
	return(false);
}

Fixed	getArea(Point vec1, Point vec2)
{
	Fixed rec;

	rec = vec1.getX() * vec2.getY();
	rec = rec - vec2.getX() * vec1.getY();
	if (rec < 0)
		rec = rec * -1;
	rec = rec * 0.5f;
	return (rec);
}

Point	getVector(Point const a, Point const b)
{
	float x = (b.getX().toFloat() - a.getX().toFloat());
	float y = (b.getY().toFloat() - a.getY().toFloat());

	return(Point(x, y));
}







