#include "File.hpp"

int		main(int ac, char const *av[]) {
	if (ac != 4) {
		std::cout << "Bad args" << std::endl;
		return 1;
	}
	File	file(av[1]);


	return 0;
}
