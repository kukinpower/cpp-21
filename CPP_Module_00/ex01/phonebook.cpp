#include <iostream>
#include "Phonebook.class.hpp"

int		main(int ac, char **av)
{
	Phonebook	myBook;
	std::string	input;

	while (1)
	{
		std::cout << "Enter command: ADD or SEARCH or EXIT: ";
		std::cin >> input;
	}

	return (0);
}
