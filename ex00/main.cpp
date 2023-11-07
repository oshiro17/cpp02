#include "Fixed.hpp"
#include <iostream>
int main( void ) {
  Fixed a;
  Fixed b( a );
  Fixed c;
  c = b;
if (c < b)
  std::cout<<"aa";

return 0; } 