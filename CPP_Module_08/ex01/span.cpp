#include "span.hpp"

Span::Span() : _N(0), _size(0), _isSorted(false) {

}

Span::Span(const uint32_t &n) : _N(n), _size(0), _isSorted(false) {

	_numsVector.resize(_N);
}

Span::~Span() {

}

Span::Span(const Span &copy) {

	*this = copy;
}

Span	&Span::operator=(const Span &copy) {

	_N = copy._N;
	_size = copy._size;
	_numsVector = copy._numsVector;
	_isSorted = copy._isSorted;
	return *this;
}

void 	Span::addNumber(int n) {
	if (_size + 1 > _N) {
		throw Span::OutOfLimitException();
	}
	_numsVector[_size] = n;
	_size++;
	_isSorted = false;
}

void 	Span::addNumber(std::vector<int>::iterator itFirst, std::vector<int>::iterator itLast) {
	while (itFirst < itLast) {
		if (_size + 1 > _N) {
			throw Span::OutOfLimitException();
		}
		_numsVector[_size] = *itFirst;
		_size++;
		itFirst++;
	}
	_isSorted = false;
}

void 	Span::checkContainerState() {
	if (_size < 2) {
		throw Span::NotEnoughElementsException();
	}
	if (!_isSorted) {
		sort(_numsVector.begin(), _numsVector.end());
		_isSorted = true;
	}
}

//using CI = std::vector<int>::iterator; C++11

int 	Span::shortestSpan() {

	checkContainerState();
	std::vector<int>::iterator it;
	it = _numsVector.begin();
	int min = std::abs(*it - *(it + 1));
	while (++it != _numsVector.end())  {
		if (std::abs(*it - *(it - 1)) < min)
			min = std::abs(*it - *(it - 1));
	}
	return min;
}

int 	Span::longestSpan() {

	checkContainerState();
	std::vector<int>::iterator itFirst;
	std::vector<int>::iterator itLast;
	itFirst = _numsVector.begin();
	itLast = _numsVector.end();
	itLast--;

	return *itLast - *itFirst;
}

const char	*Span::OutOfLimitException::what() const throw() {
	return "container is full";
}

const char	*Span::NotEnoughElementsException::what() const throw() {
	return "not enough elements to get span";
}
