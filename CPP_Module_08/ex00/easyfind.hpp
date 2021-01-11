#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <sstream>
#include <list>

template<typename T>
typename T::iterator	easyfind(T &container, int n) {
	typename T::iterator	idxIter;
	idxIter = std::find(container.begin(), container.end(), n);
	if (idxIter == container.end()) {
		std::stringstream ss;
		ss << "There is no element " << n << " in container" << std::endl;
		throw std::out_of_range(ss.str());
	}
	return idxIter;
}

#endif