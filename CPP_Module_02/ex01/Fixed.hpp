#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed &operator=(const Fixed &copy);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int 				_value;
	static const int	_fractionalBitsNum = 8;

};

#endif
