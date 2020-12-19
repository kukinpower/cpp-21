#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {

}

Fixed::~Fixed() {

}

Fixed::Fixed(const Fixed &copy) {

	this->operator=(copy);
}

Fixed::Fixed(const int num) : _value(num << Fixed::_fractionalBitsNum) {

}

Fixed::Fixed(const float num) : _value(roundf(num * (1 << Fixed::_fractionalBitsNum))) {

}

//• Six comparison operators: >, <, >=, <=, == and !=.
//• Four arithmetic operators: +, -, *, and /.

Fixed	&Fixed::operator=(const Fixed &copy) {

	this->_value = copy.getRawBits();
	return *this;
}

Fixed	&Fixed::operator*(const Fixed &copy) {

	// Multiply into a larger sized variable, and then
	// right shift by the number of bits of fixed point precision.
	int64_t tmp = (this->_value * copy.getRawBits()) / (1 << Fixed::_fractionalBitsNum);
	this->_value = tmp;
	return *this;
}

Fixed	&Fixed::operator/(const Fixed &copy) {

	// Divide and left shift by the number of bits of fixed point precision.
	int32_t tmp = (this->_value / copy.getRawBits()) * (1 << Fixed::_fractionalBitsNum);
	this->_value = tmp;
	return *this;
}

Fixed	&Fixed::operator+(const Fixed &copy) {

	this->_value += copy.getRawBits();
	return *this;
}

Fixed	&Fixed::operator-(const Fixed &copy) {

	this->_value -= copy.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {

	return this->_value;
}

void	Fixed::setRawBits( int const raw ) {

	this->_value = raw;
}

float	Fixed::toFloat( void ) const {

	return float(this->_value) / (1 << Fixed::_fractionalBitsNum);
}

int		Fixed::toInt( void ) const {

	return this->_value >> this->_fractionalBitsNum;
}

std::ostream	&operator<<(std::ostream &out, const Fixed &value) {

	out << value.toFloat();
	return out;
}
