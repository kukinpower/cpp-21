#ifndef MUTANTSTACK_CLASS_HPP
#define MUTANTSTACK_CLASS_HPP
#include <iostream>
#include <stack>

template<
		class T,
		class Container = std::deque<T>
>
class MutantStack : public std::stack<T, Container> {

public:
	MutantStack() : std::stack<T, Container>() {}
	MutantStack(const MutantStack &copy) : std::stack<T, Container>(copy) {}
	virtual ~MutantStack() {}
	MutantStack &operator=(const MutantStack &copy) {
		*this = copy;
		return *this;
	}

	typedef typename std::stack<T, Container>::container_type::iterator iterator;

	iterator begin() {
		return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}

private:

};

#endif
