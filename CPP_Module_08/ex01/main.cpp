#include "span.hpp"

#define COUNT 10005

void 	fillVectorWithRandomNumbers(std::vector<int> &v) {
	std::vector<int>::iterator it = v.begin();
	while (it != v.end()) {
		*it = rand();
		it++;
	}
}

int main()
{
	std::cout << "-------------- Main tests --------------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "-------------- My tests --------------" << std::endl;
	std::srand(std::time(0));
	Span s = Span(COUNT);
	std::vector<int> v(COUNT);
	fillVectorWithRandomNumbers(v);
	s.addNumber(v.begin(), v.end());
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;
	try {
		std::cout << std::endl << "Trying to add one more number to container." << std::endl;
		s.addNumber(10);
	} catch (std::exception &ex) {
		std::cout << "Can't add a number. Reason: " << ex.what() << std::endl;
	}
}
