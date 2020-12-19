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

Fixed	&Fixed::operator=(const Fixed &copy) {

	this->_value = copy.getRawBits();
	return *this;
}

// Arithmetic operators overload
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

// Comparison operators overload
bool Fixed::operator>(const Fixed &copy) {

	return this->_value > copy.getRawBits();
}

bool Fixed::operator<(const Fixed &copy) {

	return this->_value < copy.getRawBits();
}

bool Fixed::operator>=(const Fixed &copy) {

	return this->_value >= copy.getRawBits();
}

bool Fixed::operator<=(const Fixed &copy) {

	return this->_value <= copy.getRawBits();
}

bool Fixed::operator==(const Fixed &copy) {

	return this->_value == copy.getRawBits();
}

bool Fixed::operator!=(const Fixed &copy) {

	return this->_value != copy.getRawBits();
}

// Increment and decrement operators overload
Fixed &Fixed::operator++() {	// Prefix increment operator.

	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int) {	// Postfix increment operator.

	Fixed tmp = *this;	// create a copy of an object with same value
	++*this;			// increment value of current object
	return tmp;			// return copy of object with old value
}

Fixed &Fixed::operator--() {	// Prefix decrement operator.

	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int) {	// Postfix decrement operator.

	Fixed tmp = *this;	// create a copy of an object with same value
	--*this;			// decrement value of current object
	return tmp;			// return copy of object with old value
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

// Min Max functions
Fixed &Fixed::min(Fixed &a, Fixed &b) {

	if (a.getRawBits() < b.getRawBits()) {
		return a;
	}
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {

	if (a.getRawBits() < b.getRawBits()) {
		return a;
	}
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {

	if (a.getRawBits() > b.getRawBits()) {
		return a;
	}
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {

	if (a.getRawBits() > b.getRawBits()) {
		return a;
	}
	return b;
}
