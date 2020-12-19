#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>

class Fixed {

public:
	Fixed();								// default constructor
	Fixed(const Fixed &copy);				// copy constructor
	~Fixed();								// deconstructor
	Fixed &operator=(const Fixed &copy);	// assignation operator

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int 				_value;
	static const int	_fractionalBitsNum = 8;

};

#endif
