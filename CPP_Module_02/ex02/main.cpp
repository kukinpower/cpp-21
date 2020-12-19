#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed x(500), y(0.5f);
	std::cout << x / y << std::endl;
	std::cout << x + y << std::endl;
	std::cout << x - y << std::endl;
	std::cout << x * y << std::endl;
	std::cout << (x > y) << std::endl;
	std::cout << (x < y) << std::endl;
	std::cout << (x >= y) << std::endl;
	std::cout << (x <= y) << std::endl;
	std::cout << (x == y) << std::endl;
	std::cout << (x != y) << std::endl;
	return 0;
}
