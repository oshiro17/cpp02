#include "Fixed.hpp"
#include "Point.hpp"
#include <math.h>
#include <iostream>

// void	test_bsp( \
// 	float ax, float ay, \
// 	float bx, float by, \
// 	float cx, float cy, \
// 	float px, float py ) {	
// 	Point a(ax, ay);
// 	Point b(bx, by);
// 	Point c(cx, cy);
// 	Point point(px, py);

// 	std::cout << "The point " << point.getX()<<","<<point.getY() << " is " << std::endl \
// 		<< (bsp(a, b, c, point) ? "truely" : "NOT") \
// 		<< " inside of the triangle {" \
// 		<< "a" << a.getX() <<","<<point.getY() << ", " << "b" << b.getX() <<","<<point.getY() << ", " << "c" << c.getX() \
// 		<<","<<point.getY() << "}" << std::endl;
// }

// int main( void ) {
// 	std::cout << "\033[35;43mTest cases: Inside\033[m" << std::endl;
// 	test_bsp(4, 1, 3, 5, 9, 9, 7, 6);
// 	std::cout << "\033[35;43mTest cases: Outside\033[m" << std::endl;
// 	test_bsp(4, 1, 3, 5, 9, 9, 2, 2);
// 	std::cout << "\033[35;43mTest cases: On the edge\033[m" << std::endl;
// 	test_bsp(5, 1, 1, 1, 1, 9, 3, 5);
// 	std::cout << "\033[35;43mTest cases: Overlap the vertex\033[m" << std::endl;
// 	test_bsp(5, 1, 1, 1, 1, 9, 1, 9);

// 	return 0;
// }

int main( void )
{
	Point B(1,1);
	Point A(2,5);
	Point C(4,1);
	Point P(1,1);
	if(bsp(A, B, C, P))
		std::cout<<"(>o<)"<<std::endl;
	else
		std::cout<<"pは abcのsoto"<<std::endl;
	return 0;
}
