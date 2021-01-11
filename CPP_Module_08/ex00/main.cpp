#include "easyfind.hpp"

template<typename T>
void 	runTests(T &container) {
	try {
		typename T::iterator it;
		it = easyfind(container, 5);
		std::cout << "element " << *it << " was located" << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what();
	}

	try {
		typename T::iterator it;
		it = easyfind(container, 10);
		std::cout << "element " << *it << " was located" << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what();
	}
}

int 	main() {
	std::list<int>	l(10);
	std::vector<int> n(10);

	for (int i = 0; i < 10; i++) {
		l.push_back(i);
		n.push_back(i);
	}

	std::cout << "------------- Testing list -------------" << std::endl;
	runTests(l);

	std::cout << std::endl << "------------- Testing vector -------------" << std::endl;
	runTests(n);
	return 0;
}
