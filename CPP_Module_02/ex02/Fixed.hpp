#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();

	Fixed &operator=(const Fixed &copy);

	// Arithmetic operators overload
	Fixed &operator*(const Fixed &copy);
	Fixed &operator/(const Fixed &copy);
	Fixed &operator+(const Fixed &copy);
	Fixed &operator-(const Fixed &copy);

	// Comparison operators overload
	bool operator>(const Fixed &copy);
	bool operator<(const Fixed &copy);
	bool operator>=(const Fixed &copy);
	bool operator<=(const Fixed &copy);
	bool operator==(const Fixed &copy);
	bool operator!=(const Fixed &copy);

	// Increment and decrement operators overload
	Fixed &operator++();       // Prefix increment operator.
	Fixed operator++(int);    // Postfix increment operator.
	Fixed &operator--();       // Prefix decrement operator.
	Fixed operator--(int);     // Postfix decrement operator.

	// Min Max functions
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int 				_value;
	static const int	_fractionalBitsNum = 8;

};

std::ostream &operator<<(std::ostream &out, const Fixed &copy);

#endif
