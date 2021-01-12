#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(17);
	mstack.push(17);
	mstack.push(17);
	mstack.push(1);

	std::cout << "top elem: " << mstack.top() << std::endl;
	std::cout << "stack size: " << mstack.size() << std::endl;
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	std::cout << "stack size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "it: " << *it << std::endl;
	++it;
	std::cout << "++it: " << *it << std::endl;
	--it;
	std::cout << "--it: " << *it << std::endl;
	std::cout << "stack content: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
