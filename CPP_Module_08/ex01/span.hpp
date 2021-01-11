#ifndef SPAN_CLASS_HPP
#define SPAN_CLASS_HPP
#include <iostream>
#include <vector>

class Span {

public:
	Span();
	Span(const uint32_t &n = 0);
	Span(const Span &copy);
	virtual ~Span();
	Span &operator=(const Span &copy);

	class OutOfLimitException : public std::exception {
		virtual const char *what() const throw();
	};

	class NotEnoughElementsException : public std::exception {
		virtual const char *what() const throw();
	};

	void 	addNumber(int n);
	void 	addNumber(std::vector<int>::iterator itFirst, std::vector<int>::iterator itLast);
	int 	shortestSpan();
	int 	longestSpan();

private:
	void 	checkContainerState();

	uint32_t			_N;
	uint32_t			_size;
	std::vector<int>	_numsVector;
	bool 				_isSorted;

};

#endif
