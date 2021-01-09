#include <iostream>
#include "Converter.hpp"

int		main(int ac, char *av[]) {

	if (ac != 2) {
		return 1;
	}
	try {
		Converter a;
		a.printAllRepresentations(av[1]);
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
