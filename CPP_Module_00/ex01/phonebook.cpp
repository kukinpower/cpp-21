#include <iostream>
#include "Phonebook.class.hpp"

int		main()
{
	Phonebook	myBook;
	std::string	input;

	std::cout << "Welcome to Phonebook App." << std::endl;
	while (true)
	{
		std::cout << "Enter command. ADD or SEARCH or EXIT: ";
		getline(std::cin, input);
		if (input == "ADD") {
			myBook.add();
		} else if (input == "SEARCH") {
			myBook.search();
		} else if (input == "EXIT") {
			std::cout << "Bye-bye!" << std::endl;
			break ;
		} else {
			continue ;
		}
	}
	return (0);
}
