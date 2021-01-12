#ifndef MUTANTSTACK_CLASS_HPP
#define MUTANTSTACK_CLASS_HPP
#include <iostream>
#include <stack>

//Make a MutantStack class, that will be implemented in terms of a std::stack, and
//offer all of its member functions, only it will also offer an iterator.
//Below is an example of code, the output of which should be the same as if we replaced
//the MutantStack with, for example, and std::list. You will of course provide tests for
//all of this in your main function.
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
