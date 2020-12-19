#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {

	std::cout << "Copy constructor called" << std::endl;
	this->operator=(copy);
}

Fixed::Fixed(const int num) : _value(num << Fixed::_fractionalBitsNum) {

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _value(roundf(num * (1 << Fixed::_fractionalBitsNum))) {

	std::cout << "Float constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &copy) {

	std::cout << "Assignation operator called" << std::endl;
	this->_value = copy.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
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
