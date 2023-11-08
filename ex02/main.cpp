#include "Fixed.hpp"
#include <math.h>
#include <iostream>

int main( void ) {
    Fixed a(1);
    Fixed b(1);

   a = b;
    // std::cout<< a <<std::endl;
    // std::cout<< b <<std::endl;
    // if (a > b)
    //     std::cout<<"a>b"<<std::endl;
    // ++a;
    // if (a > b)
    //     std::cout<<"a>b"<<std::endl;
    // std::cout<< a << std::endl;
    // std::cout<< b << std::endl;
	// Fixed a;
	// Fixed const b( Fixed( 5.05f )  *Fixed( 2 ) );
	// Fixed const c( Fixed( 5.05f )  /Fixed( 2 ) );
	// Fixed const d( Fixed( 5.05f )  +Fixed( 2 ) );
	// Fixed const e( Fixed( 5.05f )  -Fixed( 2 ) );

	std::cout << a << std::endl;      // 0
	std::cout << ++a << std::endl;    // 0.00390625 (前置インクリメント)
	std::cout << a << std::endl;      // 0.00390625
	std::cout << a++ << std::endl;    // 0.00390625 (後置インクリメント)
	std::cout << a << std::endl;      // 0.0078125
	// std::cout << a << std::endl;      // 10.1016
	std::cout << b << std::endl;      // 10.1016
	// std::cout << c << std::endl;      // 10.1016
	// std::cout << d << std::endl;      // 10.1016
	// std::cout << e << std::endl;      // 10.1016
	std::cout << Fixed::max( a, b ) << std::endl; // 10.1016

	return 0;
}
